.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_161

track_161_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 50
	.byte VOL, 35
	.byte PAN, c_v
	.byte N06
	.byte An3, En7
	.byte W08

	.byte FINE

.align 2

track_161:
	.byte 1
	.byte 0
	.byte 162
	.byte 0
	.word voice_group1
	.word track_161_0

.align 2
