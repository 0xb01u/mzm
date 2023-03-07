// Offsets in the RAM OAM array for the file select screen

#define FILE_SELECT_OAM_MEDIUM_PANEL 4

#define FILE_SELECT_OAM_COPY_ARROW 5
#define FILE_SELECT_OAM_SUB_CURSOR 6
#define FILE_SELECT_OAM_CURSOR 7

#define FILE_SELECT_OAM_FILE_A_MARKER 8
#define FILE_SELECT_OAM_FILE_B_MARKER 9
#define FILE_SELECT_OAM_FILE_C_MARKER 10

#define FILE_SELECT_OAM_SMALL_PANEL 11

#define FILE_SELECT_OAM_FILE_A_LOGO 12
#define FILE_SELECT_OAM_FILE_B_LOGO 13
#define FILE_SELECT_OAM_FILE_C_LOGO 14

// ----
// Offsets in the RAM OAM array for the options screen

#define OPTIONS_OAM_FUSION_LINK_GBAS 0
#define OPTIONS_OAM_TIME_ATTACK_LEFT_ARROW 1
#define OPTIONS_OAM_TIME_ATTACK_RIGHT_ARROW 2
#define OPTIONS_OAM_LARGE_PANEL 3
#define OPTIONS_OAM_HUGE_PANEL 4

#define OPTIONS_OAM_CURSOR 5
#define OPTIONS_OAM_SPEAKER 6
#define OPTIONS_OAM_SOUND_TEST_ID 7
#define OPTIONS_OAM_SOUND_TEST_LEFT_ARROW 8
#define OPTIONS_OAM_SOUND_TEST_RIGHT_ARROW 9
#define OPTIONS_OAM_SOUND_TEST_PANEL 10

// ----
// OAM IDs for the file select menu

#define FILE_SELECT_OAM_ID_SAMUS_HEAD_TURNING_ON 1
#define FILE_SELECT_OAM_ID_SAMUS_HEAD_IDLE 2
#define FILE_SELECT_OAM_ID_SAMUS_HEAD_TURNING_OFF 3
#define FILE_SELECT_OAM_ID_SAMUS_HEAD_OFF 4
// #define FILE_SELECT_OAM_ID_SAMUS_HEAD_ 5
#define FILE_SELECT_OAM_ID_SAMUS_HEAD_TURNING 6

#define FILE_SELECT_OAM_ID_SAMUS_SUITLESS_HEAD_TURNING_ON 7
#define FILE_SELECT_OAM_ID_SAMUS_SUITLESS_HEAD_IDLE 8
#define FILE_SELECT_OAM_ID_SAMUS_SUITLESS_HEAD_TURNING_OFF 9
#define FILE_SELECT_OAM_ID_SAMUS_SUITLESS_HEAD_OFF 10
// #define FILE_SELECT_OAM_ID_SAMUS_SUITLESS_HEAD_ 11
#define FILE_SELECT_OAM_ID_SAMUS_SUITLESS_HEAD_TURNING 12

#define FILE_SELECT_OAM_ID_FILE_A_MARKER_IDLE 13
#define FILE_SELECT_OAM_ID_FILE_B_MARKER_IDLE 14
#define FILE_SELECT_OAM_ID_FILE_C_MARKER_IDLE 15
#define FILE_SELECT_OAM_ID_FILE_A_MARKER_SELECTED_RED 16
#define FILE_SELECT_OAM_ID_FILE_B_MARKER_SELECTED_RED 17
#define FILE_SELECT_OAM_ID_FILE_C_MARKER_SELECTED_RED 18
#define FILE_SELECT_OAM_ID_FILE_A_MARKER_SELECTED_GREEN 19
#define FILE_SELECT_OAM_ID_FILE_B_MARKER_SELECTED_GREEN 20
#define FILE_SELECT_OAM_ID_FILE_C_MARKER_SELECTED_GREEN 21

#define FILE_SELECT_OAM_ID_CURSOR 22
#define FILE_SELECT_OAM_ID_CURSOR_IDLE 23
#define FILE_SELECT_OAM_ID_CURSOR_SELECTED 24

#define FILE_SELECT_OAM_ID_COPY_ARROW_ONE_DOWN_ACTIVE 25
#define FILE_SELECT_OAM_ID_COPY_ARROW_ONE_DOWN_INACTIVE 26
#define FILE_SELECT_OAM_ID_COPY_ARROW_TWO_DOWN_ACTIVE 27
#define FILE_SELECT_OAM_ID_COPY_ARROW_TWO_DOWN_INACTIVE 28
#define FILE_SELECT_OAM_ID_COPY_ARROW_ONE_UP_ACTIVE 29
#define FILE_SELECT_OAM_ID_COPY_ARROW_ONE_UP_INACTIVE 30
#define FILE_SELECT_OAM_ID_COPY_ARROW_TWO_UP_ACTIVE 31
#define FILE_SELECT_OAM_ID_COPY_ARROW_TWO_UP_INACTIVE 32

#define FILE_SELECT_OAM_ID_METROID_LOGO 33

#define FILE_SELECT_OAM_ID_SMALL_PANEL 34
// #define FILE_SELECT_OAM_ID_ 35
#define FILE_SELECT_OAM_ID_LARGE_PANEL 36
// #define FILE_SELECT_OAM_ID_ 37
#define FILE_SELECT_OAM_ID_MEDIUM_PANEL 38
// #define FILE_SELECT_OAM_ID_ 39

// ----
// OAM IDs for the options menu

#define OPTIONS_OAM_ID_CURSOR 1
#define OPTIONS_OAM_ID_CURSOR_SELECTED 2
#define OPTIONS_OAM_ID_GBA_IDLE 3
#define OPTIONS_OAM_ID_SPEAKERS_IDLE 4
#define OPTIONS_OAM_ID_GBA_ACTIVE 5
#define OPTIONS_OAM_ID_SPEAKERS_ACTIVE 6
#define OPTIONS_OAM_ID_SOUND_TEST_ID 7
#define OPTIONS_OAM_ID_LEFT_ARROW_MOVING 8
#define OPTIONS_OAM_ID_LEFT_ARROW_IDLE 9
#define OPTIONS_OAM_ID_RIGHT_ARROW_MOVING 10
#define OPTIONS_OAM_ID_RIGHT_ARROW_IDLE 11
#define OPTIONS_OAM_ID_GBA_LINKING 12
#define OPTIONS_OAM_ID_GBA_STOPPED 13
#define OPTIONS_OAM_ID_SMALL_PANEL 14
// #define OPTIONS_OAM_ID_ 15
#define OPTIONS_OAM_ID_LARGE_PANEL 16
// #define OPTIONS_OAM_ID_ 17
#define OPTIONS_OAM_ID_MEDIUM_PANEL 18
// #define OPTIONS_OAM_ID_ 19
#define OPTIONS_OAM_ID_HUGE_PANEL 20
// #define OPTIONS_OAM_ID_ 21

// ----

// Tilemap update requests

#define TILEMAP_REQUEST_START_GAME_INIT 0
#define TILEMAP_REQUEST_START_GAME 1

#define TILEMAP_REQUEST_DIFFICULTY_SPAWN_INIT 6
#define TILEMAP_REQUEST_DIFFICULTY_SPAWN 7
#define TILEMAP_REQUEST_DIFFICULTY_DESPAWN_INIT 8
#define TILEMAP_REQUEST_DIFFICULTY_DESPAWN 9

#define TILEMAP_REQUEST_ERASE_SPAWN_INIT 10
#define TILEMAP_REQUEST_ERASE_SPAWN 11
#define TILEMAP_REQUEST_ERASE_DESPAWN_INIT 12
#define TILEMAP_REQUEST_ERASE_DESPAWN 13
#define TILEMAP_REQUEST_ERASE_YES_NO_SPAWN_INIT 14
#define TILEMAP_REQUEST_ERASE_YES_NO_SPAWN 15
#define TILEMAP_REQUEST_ERASE_YES_NO_DESPAWN_INIT 16
#define TILEMAP_REQUEST_ERASE_YES_NO_DESPAWN 17

#define TILEMAP_REQUEST_COPY_SPAWN_INIT 18
#define TILEMAP_REQUEST_COPY_SPAWN 19
#define TILEMAP_REQUEST_COPY_DESPAWN_INIT 20
#define TILEMAP_REQUEST_COPY_DESPAWN 21
#define TILEMAP_REQUEST_COPY_OVERRIDE_SPAWN_INIT 22
#define TILEMAP_REQUEST_COPY_OVERRIDE_SPAWN 23
#define TILEMAP_REQUEST_COPY_OVERRIDE_DESPAWN_INIT 24
#define TILEMAP_REQUEST_COPY_OVERRIDE_DESPAWN 25
#define TILEMAP_REQUEST_COPY_DESTINATION_DESPAWN 26
#define TILEMAP_REQUEST_COPY_DESTINATION_SPAWN 27

// Cursor poses

#define CURSOR_POSE_DEFAULT 0
#define CURSOR_POSE_MOVING 1
#define CURSOR_POSE_OPENING_OPTIONS 2
#define CURSOR_POSE_SELECTING_FILE 5
#define CURSOR_POSE_DESELECTING_FILE 6
#define CURSOR_POSE_STARTING_GAME 7

#define CURSOR_COPY_POSE_DEFAULT 0
#define CURSOR_COPY_POSE_MOVING 1
#define CURSOR_COPY_POSE_SELECTING_FILE 2
#define CURSOR_COPY_POSE_COPIED 3

#define ARROW_COPY_POSE_DEFAULT 0
#define ARROW_COPY_POSE_MOVING 1
#define ARROW_COPY_POSE_COPYING 2
#define ARROW_COPY_POSE_KILL 3

#define CURSOR_ERASE_POSE_DEFAULT 0
#define CURSOR_ERASE_POSE_MOVING 1
#define CURSOR_ERASE_POSE_SELECTING_FILE 2
#define CURSOR_ERASE_POSE_ERASED 3

#define CURSOR_OPTIONS_POSE_MOVING 0
#define CURSOR_OPTIONS_POSE_ENTERING 1
#define CURSOR_OPTIONS_POSE_SELECTING 2
#define CURSOR_OPTIONS_POSE_DESELECTING 3

#define STEREO_UPDATE_FLAGS_1 1
#define STEREO_UPDATE_FLAGS_SPEAKER_EFFECT 2
#define STEREO_UPDATE_FLAGS_4 4

// ----

#define FILE_SELECT_CURSOR_POSITION_FILE_A 0
#define FILE_SELECT_CURSOR_POSITION_FILE_B 1
#define FILE_SELECT_CURSOR_POSITION_FILE_C 2
#define FILE_SELECT_CURSOR_POSITION_COPY 3
#define FILE_SELECT_CURSOR_POSITION_ERASE 4
#define FILE_SELECT_CURSOR_POSITION_OPTIONS 5

// ----

#define OPTION_NONE 0
#define OPTION_STEREO_SELECT 1
#define OPTION_SOUND_TEST 2
#define OPTION_TIME_ATTACK 3
#define OPTION_GALLERY 4
#define OPTION_FUSION_GALLERY 5
#define OPTION_FUSION_LINK 6
#define OPTION_NES_METROID 7

// Sound request ids for FileSelectPlayMenuSound

#define MENU_SOUND_REQUEST_SUB_MENU_CURSOR 0
#define MENU_SOUND_REQUEST_ACCEPT_CONFIRM_MENU 1
#define MENU_SOUND_REQUEST_CURSOR 2
#define MENU_SOUND_REQUEST_FILE_SELECT 3
#define MENU_SOUND_REQUEST_START_GAME 4
#define MENU_SOUND_REQUEST_OPEN_SUB_MENU 5
#define MENU_SOUND_REQUEST_CLOSE_SUB_MENU 6
#define MENU_SOUND_REQUEST_CLOSE_SUB_MENU2 7
#define MENU_SOUND_REQUEST_COPY_DELETE 8
#define MENU_SOUND_REQUEST_COPY_DELETE_MOVING 9
#define MENU_SOUND_REQUEST_COPY_CONFIRM 10
#define MENU_SOUND_REQUEST_GAME_OVER_MENU_CURSOR 11
#define MENU_SOUND_REQUEST_GAME_OVER_START_GAME 12

// Enabled menus flags

#define MENU_FLAG_FILE_A 0x1
#define MENU_FLAG_FILE_B 0x2
#define MENU_FLAG_FILE_C 0x4
#define MENU_FLAG_COPY 0x8
#define MENU_FLAG_ERASE 0x10
#define MENU_FLAG_OPTIONS 0x20
