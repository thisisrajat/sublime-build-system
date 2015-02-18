# Sublime Build System for competitive programming

### Why it matters

You probably know that you don't have access to stdin in sublime. Though you get stdout. First, it enables 
to take input from a file name input.txt or you can configure that in the source, secondly, it saves you a heck
of time if your program doesn't stop and keeps on dumping data on stdout. Sublime can't handle that and stops 
working and you'd then have to manually stop the process via task manager. It's cumbersome. What this does is 
it creates a new cmd.exe window and executes the program there, taking control from sublime. Now if the program TLs
you can just give an interrupt and it stops. No more sublime going nuts randomly.

### How to use it 

Using this is simple. You can compile `sublime.cpp` from source with `g++ -o run sublime.cpp`

This will create a run.exe or run.out depending on your system. Place that run.* file in the 
working directory where you'd be writing your source code. 

Now you gotta add your own build system. I have included `g++.sublime-build` which is a tweaked version. 
You can write your own or just use mine. 

=> If you use mine, just replace the "path" value to the path of your compiler.
=> If you use your own, make sure the compiled version of your source has a name a.exe / a.out.
It is necessary for this tool to work.

