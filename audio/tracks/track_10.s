.align 2

.section .rodata
.global track_10

track_10_0:
	.byte 188, 0, 187, 49, 190, 80, 191, 64
	.byte 186, 28, 176, 176, 176, 176, 176, 189
	.byte 97, 191, 79, 207, 52, 40, 176, 160
	.byte 206, 160, 176, 176, 176, 176, 176, 191
	.byte 64, 207, 48, 176, 160, 206, 160, 178
	.byte 158, 233, 34, 8, 177

track_10_1:
	.byte 188, 0, 189, 96, 190, 62, 191, 47
	.byte 186, 27, 255, 48, 127, 176, 176, 255
	.byte 176, 176, 255, 176, 176, 255, 176, 176
	.byte 255, 176, 176, 255, 176, 176, 255, 176
	.byte 176, 178, 203, 233, 34, 8, 177

track_10_2:
	.byte 188, 0, 189, 96, 190, 62, 191, 79
	.byte 186, 29, 176, 255, 48, 127, 176, 176
	.byte 255, 176, 176, 255, 176, 176, 255, 176
	.byte 176, 255, 176, 176, 255, 176, 176, 255
	.byte 176, 178, 242, 233, 34, 8, 177

track_10_3:
	.byte 188, 0, 189, 27, 190, 75, 191, 64
	.byte 186, 120, 176, 255, 45, 112, 176, 48
	.byte 176, 47, 176, 207, 40, 100, 176, 160
	.byte 206, 160, 176, 255, 45, 112, 176, 48
	.byte 176, 47, 176, 253, 52, 72, 176, 176
	.byte 176, 176, 178, 25, 234, 34, 8, 177
	.byte 

track_10_4:
	.byte 188, 0, 189, 26, 190, 62, 191, 64
	.byte 186, 30, 219, 56, 116, 176, 56, 127
	.byte 176, 219, 176, 219, 176, 219, 176, 219
	.byte 176, 219, 176, 219, 176, 219, 176, 219
	.byte 176, 219, 176, 219, 176, 219, 176, 219
	.byte 176, 178, 73, 234, 34, 8, 177

track_10_5:
	.byte 188, 0, 160, 189, 58, 190, 44, 191
	.byte 79, 186, 118, 255, 47, 80, 160, 160
	.byte 47, 72, 160, 160, 47, 92, 160, 160
	.byte 47, 80, 160, 160, 47, 72, 160, 160
	.byte 47, 92, 160, 160, 47, 72, 160, 160
	.byte 47, 80, 160, 160, 47, 72, 160, 160
	.byte 47, 60, 160, 160, 47, 80, 160, 160
	.byte 47, 92, 160, 160, 47, 80, 160, 160
	.byte 47, 92, 160, 178, 120, 234, 34, 8
	.byte 160, 177

.align 2

track_10:
	.byte 6
	.byte 0
	.byte 130
	.byte 0
	.word voice_group0
	.word track_10_0
	.word track_10_1
	.word track_10_2
	.word track_10_3
	.word track_10_4
	.word track_10_5

.align 2