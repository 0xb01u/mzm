.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_71

track_71_0:
	.byte KEYSH, 0
track_71_lbl_227566:
	.byte TEMPO, 60
	.byte VOICE, 2
	.byte VOL, 6
	.byte N24
	.byte Cn3, CnM1
	.byte W96
	.byte GOTO
		.word track_71_lbl_227566

	.byte FINE

.align 2

track_71:
	.byte 1
	.byte 0
	.byte 130
	.byte 0
	.word voice_group20
	.word track_71_0

.align 2
