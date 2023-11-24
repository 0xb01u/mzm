.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_105

track_105_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 24
	.byte VOL, 27
	.byte PAN, c_v
	.byte N06
	.byte Cn3, Cn7
	.byte W08

	.byte FINE

.align 2

track_105:
	.byte 1
	.byte 0
	.byte 162
	.byte 0
	.word voice_group1
	.word track_105_0

.align 2
