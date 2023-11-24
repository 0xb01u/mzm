.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_126

track_126_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 29
	.byte VOL, 50
	.byte PAN, c_v
	.byte N32
	.byte Cn3, Gs4
	.byte W32

	.byte FINE

.align 2

track_126:
	.byte 1
	.byte 0
	.byte 220
	.byte 0
	.word voice_group1
	.word track_126_0

.align 2
