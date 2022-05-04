	.file	1 "max_fcts.c"
	.globl	tab
	.data	
	.align	2
tab:
	.word	23
	.word	45
	.word	-6
	.word	120
	.word	2
	.word	11
	.word	23
	.globl	espace
espace:
	.byte	32
	.globl	rt
rt:
	.byte	10
	.text	
	.globl	max2
	.ent	max2
max2:
	sw $4,0($29)
	sw $5,4($29)
	lw $3,0($29)
	lw $2,4($29)
	slt $2,$3,$2
	beq $2,$0,$l2
	add $0,$0,$0
	lw $2,4($29)
	j $l3
	add $0,$0,$0
$l2:
	lw $2,0($29)
$l3:
	jr $31
	add $0,$0,$0
	.end	max2
	.globl	max
	.ent	max
max:
	sw $4,0($29)
	sw $5,4($29)
	sw $6,8($29)
	lw $3,0($29)
	lw $2,4($29)
	slt $2,$3,$2
	beq $2,$0,$l5
	add $0,$0,$0
	lw $3,4($29)
	lw $2,8($29)
	slt $2,$3,$2
	beq $2,$0,$l6
	add $0,$0,$0
	lw $2,8($29)
	j $l7
	add $0,$0,$0
$l6:
	lw $2,4($29)
	j $l7
	add $0,$0,$0
$l5:
	lw $3,0($29)
	lw $2,8($29)
	slt $2,$3,$2
	beq $2,$0,$l8
	add $0,$0,$0
	lw $2,8($29)
	j $l7
	add $0,$0,$0
$l8:
	lw $2,0($29)
$l7:
	jr $31
	add $0,$0,$0
	.end	max
	.globl	max_tab
	.ent	max_tab
max_tab:
	addiu $29,$29,-8
	sw $4,8($29)
	sw $5,12($29)
	addiu $2,$0,-1
	sw $2,4($29)
	sw $0,0($29)
	j $l10
	add $0,$0,$0
$l12:
	lw $2,0($29)
	sll $2,$2,2
	lw $3,8($29)
	addu $2,$3,$2
	lw $2,0($2)
	lw $3,4($29)
	slt $2,$3,$2
	beq $2,$0,$l11
	add $0,$0,$0
	lw $2,0($29)
	sll $2,$2,2
	lw $3,8($29)
	addu $2,$3,$2
	lw $2,0($2)
	sw $2,4($29)
$l11:
	lw $2,0($29)
	addiu $2,$2,1
	sw $2,0($29)
$l10:
	lw $3,0($29)
	lw $2,12($29)
	slt $2,$3,$2
	bne $2,$0,$l12
	add $0,$0,$0
	lw $2,4($29)
	addiu $29,$29,8
	jr $31
	add $0,$0,$0
	.end	max_tab
	.globl	main
	.ent	main
main:
	addiu $29,$29,-24
	sw $31,20($29)
	sw $4,24($29)
	sw $5,28($29)
	ori $5,$0,5
	ori $4,$0,23
	jal max2
	add $0,$0,$0
	or $4,$2,$0
	ori $2,$0,1
	syscall 
	add $0,$0,$0
	lui $2,4097
	ori $2,$2,29
	lb $2,($2)
	or $4,$2,$0
	ori $2,$0,11
	syscall 
	add $0,$0,$0
	ori $6,$0,8
	ori $5,$0,16
	ori $4,$0,3
	jal max
	add $0,$0,$0
	or $4,$2,$0
	ori $2,$0,1
	syscall 
	add $0,$0,$0
	lui $2,4097
	ori $2,$2,29
	lb $2,($2)
	or $4,$2,$0
	ori $2,$0,11
	syscall 
	add $0,$0,$0
	ori $5,$0,7
	lui $4,4097
	jal max_tab
	add $0,$0,$0
	or $4,$2,$0
	ori $2,$0,1
	syscall 
	add $0,$0,$0
	lui $2,4097
	ori $2,$2,29
	lb $2,($2)
	or $4,$2,$0
	ori $2,$0,11
	syscall 
	add $0,$0,$0
	ori $2,$0,10
	syscall 
	add $0,$0,$0
	or $2,$0,$0
	lw $31,20($29)
	addiu $29,$29,24
	jr $31
	add $0,$0,$0
	.set	macro
	.set	reorder
	.end	main
	.size	main,.-main
	.ident	 "gcc: (gnu) 7.1.0"