.align 2

.section .rodata
.global track_301

track_301_0:
	.byte 188, 0, 187, 75, 189, 11, 190, 67
	.byte 191, 64, 210, 60, 92, 131, 189, 19
	.byte 228, 159, 129, 177

track_301_1:
	.byte 188, 0, 189, 0, 190, 70, 191, 64
	.byte 186, 55, 130, 211, 53, 112, 159, 130
	.byte 177

.align 2

track_301:
	.byte 2
	.byte 0
	.byte 196
	.byte 0
	.word voice_group5
	.word track_301_0
	.word track_301_1

.align 2