#include "Settings.h"

namespace g_Settings
{
	// Login
	bool start_cheat = false;

	// Menu
	bool menu_opened = true;
	bool update_settings = true;

	// Esp
	bool should_draw = false;

	// Visual
	bool esp = false;
	bool outline = false;
	bool team = false;
	bool chams = false;
	bool cav_esp = false;

	// Weapon
	int  aim_selection = 0;
	int  aim_bone = 0;
	int  aim_key_2 = 0;
	int  aim_key = 0;
	int  silent_key = 0;
	bool aimbot = false;
	bool run_shoot = false;
	bool damage = false;
	bool no_recoil = false;
	bool no_spread = false;

	// Misc
	bool unlock_all = false;
	int  no_clip_key = 0;
	bool no_clip = false;
	bool web_fov = false;
	bool player_fov = false;
	bool speed = false;
	bool no_flash = false;
	bool no_animations = false;

	// Settings
	int  rage_key = 0;
	int  legit_key = 0;

	bool bUpdate = false;
	bool bReset = false;
	bool end = false;
	bool endUM = false;
	bool cheat_thread = false;

	/* VALUES */

	// Misc
	float spread_value = 1.f;
	float wep_fov_value = 1.4;
	float player_fov_value = 1.4;
	int   speed_value = 100;
	float speed_value_f = 1;
	int  bullet_value = 1;
	float bullet_value_f = 1;

	// Chams
	bool color = false;
	float chams_r = 255;
	float chams_g = 5;
	float chams_b = 5;
	float chams_oppacity = -3;
	float chams_oppacity_f = 3;

	// Aimbot
	bool	 smoothing = false;
	bool	 rapid_fire = false;
	bool	 silent = false;
	int      aim_fov = 150;
	float    smoothing = 0;
}

namespace g_Cheat
{
	// Round
	bool bDidRoundChange = false;
	int  cur_round = -1;
	int  CameraState = -1;
	int  old_round = -1;

	// Helpers
	int MaxEnemys = 1;

	// Visuals
	bool bCanDraw = false;
	bool bCanDoCav = true;
	bool bCanDoNoFlash = true;
	bool bCanDoOutline = true;
	bool bCanDoChams = true;
	bool bCanDoColor = true;
	bool bCanDoPlayerFov = false;

	// Weapon
	bool bCanDoRunShoot = true;
	bool bCanDoNR = true;
	bool bCanDoNS = true;
	bool bCanDoDmg = true;

	// Misc
	bool bCanDoUnlockAll = true;
	bool bCanDoNoClip = true;
	bool bCanDoSpeed = true;
	bool bCanDoWepFov = true;
	bool bCanDoRapidFire = true;
	bool bCanDoinstant_animetiopns = true;

	// Settings
}