While trying to make the ray tracer code support multi-threading
I ran into the problem of trying to figure out how to store the 
colors of the pixels from each thread because I could not just 
print out the colors in the function call to each thread or else 
the printed out rgb pixel colors may be out of order depending on the
execution rate of each thread. I was able to address this issue by creating
a 2d array of structs that held the rgb value of each pixel.

Another problem I encounted was determining some way to pass in 
the values of which pixels to start/stop at and I realized that there
was the option of passing in a parameter to the function called by 
pthread_create. I first tried to just pass in a pointer to a temporary int
that I set equal to the current thread I was creating. However that did not
work most likely because it was a local variable so the value was blown 
away when I moved on to the next iteration of creating the next thread, 
thus the function that my pthread_create called lost the value of the
current thread it was operating on. Instead I had to dynamically create
and array of integers to pass in the number of each index into the 
function pthread_create called. 

One other problem I enconunted was determining how to divide the pixels 
amongst each thread. I had tried to start each thread at the current
thread it was on times the total number of pixels divided by the number
of threads and end at the current thread+1 times the total number of pixels
divided by the current number of threads, however, the results were incorrect. 
I realized this was due to the remainder if the total number of pixels was 
not evenly divisible by the number of threads. To combat this, I checked if 
the current thread I was on was the last one, then I would determine the 
color of all the remaining pixels from the current pixel times the total number
of pixels divided by the number of threads all the way to the width of the 
image.

My implementation of SRT improved the performace substantially. Which each 
sucessive increase in number of threads (1-->2-->4-->8) My implementation was
able to almost half the real execution time of the previous (from 47 sec --> 
24 sec --> 16 sec --> 10 sec). The reason it did not directly half the time
was probably due to the way I had split up the pixels. In my implementation
the last thread would most likely execute for a longer time than the other
threads because it has to process more data. This difference is not as apparent
when there are less divisions of the data because in the case of two threads
one would iterate from 0 to 131/2 (floored)-1 and the other would iterate from
131/2 (floored) to 131. In the case of four threads the first would iterate
from 0 to 131/4 (floored) -1 then the second would iterate from 131/4(floored)
to 131/2(floored) -1 ...Computing these would show that the first, second and 
third thread iterate 32 times in the outermost loop, while the last iterates
35 times. In the case of 8 threads the first 7 iterate 16 times and the last
iterates 19 times. Afterwards I also tested with 16 threads, 32 threads, 64
threads, and 128 threads. However there was an error creating 128 threads so
the highest number of threads where I got a result was 64 threads (the following
results were 7, 6, and 5 seconds respectively) As we can see the more threads
there are the less difference is shown in performance time. This is probably
due to the fact that the overhead of creating threads outweighs a lot of the 
benefits achieved through parallelism and multithreading.
