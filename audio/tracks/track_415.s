.align 2

.section .rodata
.global track_415

track_415_0:
	.byte 188, 0, 187, 75, 189, 4, 190, 78
	.byte 191, 64, 219, 57, 100, 140, 60, 60
	.byte 134, 190, 78, 129, 68, 129, 59, 129
	.byte 51, 129, 43, 129, 37, 129, 31, 219
	.byte 64, 20, 129, 190, 27, 129, 22, 129
	.byte 19, 129, 15, 129, 13, 129, 10, 129
	.byte 7, 129, 5, 129, 3, 129, 2, 129
	.byte 0, 129, 177

track_415_1:
	.byte 188, 0, 189, 5, 190, 62, 191, 64
	.byte 193, 12, 192, 64, 231, 53, 80, 130
	.byte 192, 66, 130, 69, 130, 73, 130, 190
	.byte 62, 192, 79, 129, 190, 55, 129, 48
	.byte 192, 87, 129, 190, 41, 129, 35, 192
	.byte 96, 129, 190, 30, 129, 25, 192, 94
	.byte 129, 190, 21, 129, 18, 192, 91, 129
	.byte 190, 14, 129, 11, 192, 87, 129, 190
	.byte 8, 129, 6, 192, 80, 129, 190, 3
	.byte 129, 2, 192, 70, 129, 190, 0, 129
	.byte 177

.align 2

track_415:
	.byte 2
	.byte 0
	.byte 161
	.byte 0
	.word voice_group8
	.word track_415_0
	.word track_415_1

.align 2