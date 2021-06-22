#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

const char* menu[]    = {"rofi", "-modi", "drun,run", "-show", "drun", 0};
const char* term[]    = {"x-terminal-emulator", 0};
const char* scrot[]   = {"scrot", 0};
const char* briup[]   = {"bri", "10", "+", 0};
const char* bridown[] = {"bri", "10", "-", 0};
const char* voldown[] = {"pamixer", "-d", "5", "-u", 0};
const char* volup[]   = {"pamixer", "-i", "5", "-u", 0};
const char* volmute[] = {"pamixer", "-t", 0};
const char* lock[]    = {"xscreensaver-command", "-lock", 0};

const char* mpc_toggle[] = {"mpc", "toggle", 0};
const char* mpc_next[] = {"mpc", "next", 0};
const char* mpc_prev[] = {"mpc", "prev", 0};

static struct key keys[] = {
    {MOD,      XK_q,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_d,      run, {.com = menu}},
    {MOD, XK_l,      run, {.com = lock}},
    {MOD, XK_p,      run, {.com = scrot}},
    {MOD, XK_Return, run, {.com = term}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {0,   XF86XK_AudioPlay,         run, {.com = mpc_toggle}},
    {0,   XF86XK_AudioNext,         run, {.com = mpc_next}},
    {0,   XF86XK_AudioPrev,         run, {.com = mpc_prev}},
    {0,   XF86XK_MonBrightnessUp,   run, {.com = briup}},
    {0,   XF86XK_MonBrightnessDown, run, {.com = bridown}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif
