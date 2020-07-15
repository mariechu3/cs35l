#!/usr/bin/python

"""
Permute lines selected from a file

"""

import random, sys
from optparse import OptionParser

class shuf:
    def __init__(self, filename, repeat, numlines="", low="", hi=""):
        if(filename == ""):
            self.shufNums(repeat, numlines, low, hi)
        elif(filename != "-"):
            f = open(filename, 'r')
            self.lines = f.readlines()
            f.close()
            self.choice(numlines, repeat)
        else:
            self.lines = sys.stdin.readlines()
            self.choice(numlines, repeat)
    def choice(self, numlines, repeat):
        if(repeat):              #if there is flag -r
           self.repeatOk(numlines, self.lines)
        elif(numlines == 0): #if there is no flags
           self.permute(self.lines) #
        else:
           self.numberlines(numlines, self.lines) 
    def shufNums(self, repeat, numlines, low, hi):
        arr = [0 for x in range(low, hi+1)]
        num = low
        for i in range(0, len(arr)):
            arr[i] = str(num)+'\n'
            num+=1
        if(repeat):
            self.repeatOk(numlines, arr)
        elif(numlines == 0):
            self.permute(arr)
        else:
            self.numberlines(numlines, arr)
    def permute(self, arr):
        for i  in range(0,len(arr)-1):
            j = random.randint(i,len(arr)-1)
            arr[i], arr[j] = arr[j], arr[i]
        for i in range(0, len(arr)):
            sys.stdout.write(arr[i])
    def repeatOk(self, numlines, arr):
        if numlines == 0:
            while(True):
                sys.stdout.write(random.choice(arr))
        else:
            while(numlines):
                sys.stdout.write(random.choice(arr))
                numlines-=1
    def numberlines(self, numlines, arr):
        for i in range(0,len(arr)-1):
            j = random.randint(i,len(arr)-1)
            arr[i], arr[j] = arr[j], arr[i]
        if (numlines <= len(arr)):
            for i in range(0, numlines):
                sys.stdout.write(arr[i]) 
        else:
            for i in range(0, len(arr)):
                sys.stdout.write(arr[i])
def main():
    version_msg = "%prog 2.0"
    usage_msg = """%prog [OPTION]... FILE

Permute lines from FILE. If no FILE is specified, read from standard input."""

    parser = OptionParser(version=version_msg,
                          usage=usage_msg)
    parser.add_option("-n", "--head-count",
                      action="store", dest="numlines",
                      default=False, 
                      help="output NUMLINES lines")
    parser.add_option("-r", "--repeat",dest="repeat",
                      action="store_true", default=False, 
                      help="allows repeated lines")
    parser.add_option("-i", "--input-range",dest ="inputr",
                      default=False,
                      help="treat each number LO-HI as an input line")

    options, args = parser.parse_args(sys.argv[1:])
   # hi=""
   # low ="" 
    
    try:
        numlines = int(options.numlines)
    except:
        parser.error("invalid line count: '{0}'".format(options.numlines))
    if numlines < 0:
        parser.error("invalid line count: '{0}'".format(numlines))
        #this deals with the inputted file
    repeat=options.repeat
    if (options.inputr):
        if (len(args) > 0):
            parser.error("extra operand: '"+args[0]+"'")
        original = options.inputr
        inputr = (options.inputr).split("-")
        if (len(inputr)) == 2:
            try:
                hi = int(inputr[1])
                low = int(inputr[0])
            except:
                parser.error("invalid input range: '" + inputr[0]+ "-" + inputr[1]+ "'")
            if (low-1 == hi):
                exit()
            if (low > hi):
                parser.error("invalid input range: '" + inputr[0]+ "-" + inputr[1]+ "'")
        else:
            parser.error("invalid input range: '" + inputr[len(inputr)-2]+"-"+inputr[len(inputr)-1]+"'")
        try:
            shuf("",repeat,numlines,low, hi)
        except IOError as e:
            parser.error("I/O error({0}): {1}".
                     format(e.errno, e.strerror))
    else:
       if len(args) == 1:
           if args[0] == "-":
               input_file = "-"
           else:
               input_file = args[0]
       elif len(args) == 0:
            input_file = "-"
       else: 
            parser.error("Extra operand: " + args[1])
       try:
           shuf(input_file, repeat ,numlines) 
       except IOError as e:
           parser.error("I/O error({0}): {1}".
                     format(e.errno, e.strerror))

if __name__ == "__main__":
    main()
