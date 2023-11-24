.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_124

track_124_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 10
	.byte VOL, 59
	.byte PAN, c_v
	.byte N04
	.byte Cn3, Gn8
	.byte W04
	.byte Cn3, En1
	.byte W04
	.byte Cn3, CnM1
	.byte W04

	.byte FINE

.align 2

track_124:
	.byte 1
	.byte 0
	.byte 181
	.byte 0
	.word voice_group1
	.word track_124_0

.align 2
