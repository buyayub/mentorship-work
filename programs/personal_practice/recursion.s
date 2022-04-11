	.file	"recursion.c"
	.text
	.section	.rodata
.LC0:
	.string	"%d "
	.text
	.globl	problem1
	.type	problem1, @function
problem1:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	cmpl	$49, -4(%rbp)
	jg	.L3
	addl	$1, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	problem1
.L3:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	problem1, .-problem1
	.globl	problem2
	.type	problem2, @function
problem2:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -20(%rbp)
	jle	.L5
	subl	$1, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	problem2
	addl	%eax, -4(%rbp)
.L5:
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	problem2, .-problem2
	.section	.rodata
.LC1:
	.string	"Problem 1: "
.LC2:
	.string	"Problem 2: "
.LC3:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	movl	$0, %edi
	call	problem1
	movl	$10, %edi
	call	putchar@PLT
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	movl	$5, %edi
	call	problem2
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
