	.file	1 "dep_test.c"
	.text

	.globl	main
	.ent	main
main:
    lw $4, 0($2)
    addi $5, $4, 10
    addi $4, $11, 8
    xor $8, $5, $4
    sw $8, 0($3)
    sw $8, 4($3)
    addi $2, $2, 10
    j suite
    nop
suite:
    addi $2, $2, 10
	jr	$31
	nop

	.end	main
	.size	main, .-main