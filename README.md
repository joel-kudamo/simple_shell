0x16. C - Simple Shell group project by Joel Kudamo and Hamdiya Gariba

This is the simple shell project that mimic some features of the bash shell.

This project involves creating a basic command line interpreter, or "shell," similar to those found in Unix-like operating systems. The shell can execute various commands and includes features commonly found in typical shells.
Project Overview
Project Structure

The project consists of several tasks, each building on the previous one. Here's a brief summary of each task:

    Betty would be proud
        Follow the Betty style guidelines for clean and readable code.
        Use specified editors and compilation options.
        Include README.md and AUTHORS files.

    Simple shell 0.1
        Develop a basic shell that displays a prompt and waits for user input.
        Execute simple commands without arguments.
        Handle errors, such as command not found and end-of-file conditions.

    Simple shell 0.2
        Expand the shell to handle commands with arguments.

    Simple shell 0.3
        Improve the shell to manage the system's PATH.
        Avoid unnecessary fork calls if the command doesn't exist.

    Simple shell 0.4
        Implement the exit command to gracefully exit the shell.

    Simple shell 1.0
        Add the env command to display the current environment.

    Simple shell 0.1.1
        Create a custom getline function without using getline.

    Simple shell 0.2.1
        Eliminate the use of strtok in the code.

    Simple shell 0.4.1
        Enhance the exit command to handle exit status.

    setenv, unsetenv
        Introduce setenv and unsetenv commands for environment variable management.

    cd
        Implement the cd command to change the current directory.

    ;
        Manage commands separated by semicolons.

    && and ||
        Handle logical operators (&& and ||) in command execution.

    alias
        Introduce the alias command for managing aliases.

    Variables
        Handle variable replacement, including $? and $$.

    Comments
        Support comments in shell scripts using #.

    File as input
        Allow the shell to execute commands from a file provided as a command line argument.

Compilation and Testing

    Compile the code on Ubuntu 20.04 LTS using specific options.
    Test the shell in interactive and non-interactive modes to ensure it behaves similarly to /bin/sh.

Contributors

Check the AUTHORS file for a list of individuals contributing to the repository.

Acknowledgments

    Thanks to the Betty style guidelines for promoting clean and readable code.
    Inspiration drawn from Unix-like operating systems shell implementations.
