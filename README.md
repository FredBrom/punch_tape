# Terminal Punch Tape Emulator 1.0

## Author: Frederico Brom

## Date: 25/08/23

This simple program emulates the behavior of a puch tape machine. It receives
data from standard input and output a char stream on standard output
of a corresponding data on 8-bit paper tape puched.
It make uses of the pipe unix mechanism to send receives and send a char stream.
The holes represents the 1 and the absent of it represent a zero.

## Example of use

To print a paper tape with the string "Hello World" use the command:
`$ echo -n "Hello World"`

To send a raw hexadecimal value, for example 0xEA use:
`$ echo -n -e "\xEA"`
