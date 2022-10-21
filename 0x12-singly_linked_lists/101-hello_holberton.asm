extern printf

section .text
   global main

main:
   push rb

   mov rdl,fmt
   mov rsl,msg
   mov rax,0
   call printf

   pop rb

   mov rax,0
   ret

section .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0





