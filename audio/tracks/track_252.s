.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_252

track_252_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 6
	.byte VOL, 56
	.byte PAN, c_v
	.byte W06
	.byte N28
	.byte Cn3, Gs4
	.byte W28

	.byte FINE

.align 2

track_252:
	.byte 1
	.byte 0
	.byte 171
	.byte 0
	.word voice_group2
	.word track_252_0

.align 2
