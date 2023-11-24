.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_141

track_141_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 20
	.byte VOL, 56
	.byte PAN, c_v
	.byte N16
	.byte Cn3, Gs4
	.byte W16

	.byte FINE

.align 2

track_141:
	.byte 1
	.byte 0
	.byte 227
	.byte 0
	.word voice_group1
	.word track_141_0

.align 2
