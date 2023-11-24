.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_100

track_100_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 1
	.byte VOL, 51
	.byte PAN, c_v
	.byte N02
	.byte Cn3, En7
	.byte W02

	.byte FINE

.align 2

track_100:
	.byte 1
	.byte 0
	.byte 161
	.byte 0
	.word voice_group1
	.word track_100_0

.align 2
