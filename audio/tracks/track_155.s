.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_155

track_155_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 47
	.byte VOL, 37
	.byte PAN, c_v
	.byte N02
	.byte Gn3, En6
	.byte W02

	.byte FINE

.align 2

track_155:
	.byte 1
	.byte 0
	.byte 163
	.byte 0
	.word voice_group1
	.word track_155_0

.align 2
