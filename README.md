# Simple Shell
**Project by Timi and Joshua**

## Synopsis
 In this project, we coded from scratch a simple Unix shell. This repository holds all the code necessary for our custom simple shell to run. Our shell currently handles the executions of executables found in the environmental variable PATH, with or without their full paths. Sample commands that our shell supports includes `ls`, `/bin/ls`, `pwd`, `echo`, `which`, `whereis`, e.t.c. alongside some builtin commands.

## What is a shell?
A shell is an interactive command-line interpreter(CLI). It allows users to type in a defined set of commands (e.g. "rm" to remove files, "cat" to concatenate text files, etc) and have the operating system run the appropriate function. In other words, a shell is a program which reads a command that you typed, checks if it is a valid command, and executes it if valid. There are a few > versions of Unix shells, from the very first (Ken Thompson's) shell that can > be activated by typing `sh` in the terminal to today's most popular Bash > (Bourne Again Shell). Later versions of the shell handle memory leaks better and > have more functionality. Our shell is a simple version that handles memory leaks > very well and has basic functionality. You can create/write/read/open/remove > folders, print things to the terminal, change directories, print where you are > in the system, etc.

A *terminal* is a program that gives you access to the shell -
think of the terminal as the window enclosing the shell, and the shell
as that little prompt at the bottom:

    `you@somecomputer:~$`

> Note:  Graphical User Interface (GUI) and Command Line Interpreter (CLI) both have the same purpose of interacting with the operating system but their input methods are different. With GUI, you can click a mouse to open a folder and delete files and drag the mouse around in addition to the keyboard to navigate your operating system. Some developers prefer the CLI because clicking and dragging just feels like stress.

## What the shell does: It calls built-in commands and programs

Usually, when you type a command at the shell, all you want the shell
to do is to find, and execute a program.

For example, `ps` is a standalone program which gives you some
information about the processes running on the computer:

    ps

When you type this, the shell first checks if `ps` is one of its own,
special built-in keywords. It then looks in its list of "places where
there might be programs" and runs the first one it finds. (That list
is called the PATH; more on that later).

You can see the ps program that you just ran by listing it:

    ls /bin/ps

Some commands you'll use are *bash builtins*. A couple of examples are
`alias` and `source`. When you type these, you activate code which is
part of the shell itself. This is also true of programming constructs
such as conditionals (if/else), loops, variable assignments and so on.

For historical reasons, most important Linux commands are only two letters long. 
This brevity can sometimes make them difficult to remember, and it is 
not always easy to tell from a sequence of commands exactly what is happening. 
Also Linux distinguishes upper case letters from lower case, and insists that many 
commands are written in lower case. Typing a command in upper case will probably 
generate the response

	Command not found

A typical Linux command consists of a general command word, which may be followed 
by optional parameters that specify more precisely what you want the command to do. 
Many of these options consist of a single letter, making the command brief but not
 altogether easy to remember. If a command operates on files then the filenames 
 must come after the options.
 
	command [option …] [filename …]


### Builtins
* `exit` exits shell (`Usage: exit [status]`)
* `env` prints environmental variables (Usage: `env`)
* `setenv` creates or modifies an environmental variable (Usage: `setenv name value`)
* `unsetenv` removes an envrionmental variable (Usage: `unsetenv name value`)
* `cd` changes directories (Usage: `cd [-][~][path]`)

### Functions and system calls used
`read`, `signal`, `malloc`, `free`, `getcwd`, `chdir`, `access`, `execve`, `wait`, `write`,  `exit`.
### Description of what each file shows:
```
man_3_shell ------------------------ custom manpage for our simple shell
main.c ----------------------------- holds entrance into program
shell.h ---------------------------- holds prototypes of functions spread across all files
```
Helper files
```

```

### Environment
* Language: C
* OS: Ubuntu 20.04.4 LTS
* Compiler: gcc 9.4.0
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## How To Install, Compile, and Use
Install and Compile
```
(your_terminal)$ git clone https://github.com/joshthefullstack/simple_shell.git
(your_terminal)$ cd simple_shell
(your_terminal)$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o simple_shell
```

**Non-Interactive Mode**
```
echo "ls -l" | ./simple_shell
```

**Interactive Mode**
(Activate the shell)
```
(your_terminal)$ ./simple_shell
$
```
Sample Usage
```
$ ls -al
total 4
-rw-rw-r-- 1 vagrant vagrant   234 Mar 28 19:32 file1.c
-rw-rw-r-- 1 vagrant vagrant    69 Mar 28 19:32 file2.c
$ echo "This is a pretty cool!"
This is pretty cool!
$ man ./man_1_simple_shell (opens our manpage for more information)
```
Stop and return to your original shell
```
$ exit
(your_terminal)$
```

### Authors
> Timi Adenuga [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/Timi_Nihel)

> Joshua Ibiam [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/AstroJoe20)