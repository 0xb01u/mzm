.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_130

track_130_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 26
	.byte VOL, 50
	.byte PAN, c_v
	.byte N15
	.byte Cn3, Gs4
	.byte W15

	.byte FINE

.align 2

track_130:
	.byte 1
	.byte 0
	.byte 251
	.byte 0
	.word voice_group1
	.word track_130_0

.align 2
