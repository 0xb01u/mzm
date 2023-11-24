.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_262

track_262_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 37
	.byte VOL, 62
	.byte PAN, c_v
	.byte N05
	.byte Dn3, Gs4
	.byte W05
	.byte Dn3, Gs0
	.byte W05
	.byte Dn3, CnM1
	.byte W05

	.byte FINE

.align 2

track_262:
	.byte 1
	.byte 0
	.byte 165
	.byte 0
	.word voice_group2
	.word track_262_0

.align 2
