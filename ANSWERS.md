**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

Created - When the process is first created.
Ready - AKA waiting. The process is ready and waiting to be executed. It exists in the memory.
Running - The process has been executed and runs.
Blocked - The process cannot continue execution.
Terminated - The process can be destroyed after it has run or killed with a command.

**2. What is a zombie process?**

A zombie process is one that has completed execution but still exists (or has an entry) in the process table.

**3. How does a zombie process get created? How does one get destroyed?**

Zombie processes are leftover bits of dead processes that haven't been cleaned up. The parent process is supposed to execute a wait() system call, and then the zombie process is normally removed from the memory. If wait() is never called, then the zombie children start to stick around until they're cleaned up.

Ideally, the zombies are destroyed with proper use of the wait() call. Otherwise, the parent process must be killed or closed. When the process that created the zombie ends, init inherits the zombie and becomes the new parent. init periodically executes the wait() system call to clean up the zombies.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

When you compile your code, you can get faster performance by directly using the native code of the target machine. You can apply optimisations during the compile stage.

Interpreted languages are easier to implement, can be executed on the fly, and are more convenient for dynamic languages.
