.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_204

track_204_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 12
	.byte VOL, 47
	.byte PAN, c_v
	.byte N18
	.byte Cn3, Gs4
	.byte W18

	.byte FINE

.align 2

track_204:
	.byte 1
	.byte 0
	.byte 195
	.byte 0
	.word voice_group2
	.word track_204_0

.align 2
