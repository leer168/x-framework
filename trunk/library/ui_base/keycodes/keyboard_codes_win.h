
#ifndef __ui_base_keyboard_codes_win_h__
#define __ui_base_keyboard_codes_win_h__

#pragma once

#include <windows.h>

namespace ui
{

    typedef enum
    {
        VKEY_BACK = VK_BACK,
        VKEY_TAB = VK_TAB,
        VKEY_CLEAR = VK_CLEAR,
        VKEY_RETURN = VK_RETURN,
        VKEY_SHIFT = VK_SHIFT,
        VKEY_CONTROL = VK_CONTROL,
        VKEY_MENU = VK_MENU, // ����ALT
        VKEY_PAUSE = VK_PAUSE,
        VKEY_CAPITAL = VK_CAPITAL,
        VKEY_KANA = VK_KANA,
        VKEY_HANGUL = VK_HANGUL,
        VKEY_JUNJA = VK_JUNJA,
        VKEY_FINAL = VK_FINAL,
        VKEY_HANJA = VK_HANJA,
        VKEY_KANJI = VK_KANJI,
        VKEY_ESCAPE = VK_ESCAPE,
        VKEY_CONVERT = VK_CONVERT,
        VKEY_NONCONVERT = VK_NONCONVERT,
        VKEY_ACCEPT = VK_ACCEPT,
        VKEY_MODECHANGE = VK_MODECHANGE,
        VKEY_SPACE = VK_SPACE,
        VKEY_PRIOR = VK_PRIOR,
        VKEY_NEXT = VK_NEXT,
        VKEY_END = VK_END,
        VKEY_HOME = VK_HOME,
        VKEY_LEFT = VK_LEFT,
        VKEY_UP = VK_UP,
        VKEY_RIGHT = VK_RIGHT,
        VKEY_DOWN = VK_DOWN,
        VKEY_SELECT = VK_SELECT,
        VKEY_PRINT = VK_PRINT,
        VKEY_EXECUTE = VK_EXECUTE,
        VKEY_SNAPSHOT = VK_SNAPSHOT,
        VKEY_INSERT = VK_INSERT,
        VKEY_DELETE = VK_DELETE,
        VKEY_HELP = VK_HELP,
        VKEY_0 = '0',
        VKEY_1 = '1',
        VKEY_2 = '2',
        VKEY_3 = '3',
        VKEY_4 = '4',
        VKEY_5 = '5',
        VKEY_6 = '6',
        VKEY_7 = '7',
        VKEY_8 = '8',
        VKEY_9 = '9',
        VKEY_A = 'A',
        VKEY_B = 'B',
        VKEY_C = 'C',
        VKEY_D = 'D',
        VKEY_E = 'E',
        VKEY_F = 'F',
        VKEY_G = 'G',
        VKEY_H = 'H',
        VKEY_I = 'I',
        VKEY_J = 'J',
        VKEY_K = 'K',
        VKEY_L = 'L',
        VKEY_M = 'M',
        VKEY_N = 'N',
        VKEY_O = 'O',
        VKEY_P = 'P',
        VKEY_Q = 'Q',
        VKEY_R = 'R',
        VKEY_S = 'S',
        VKEY_T = 'T',
        VKEY_U = 'U',
        VKEY_V = 'V',
        VKEY_W = 'W',
        VKEY_X = 'X',
        VKEY_Y = 'Y',
        VKEY_Z = 'Z',
        VKEY_LWIN = VK_LWIN,
        VKEY_COMMAND = VKEY_LWIN,
        VKEY_RWIN = VK_RWIN,
        VKEY_APPS = VK_APPS,
        VKEY_SLEEP = VK_SLEEP,
        VKEY_NUMPAD0 = VK_NUMPAD0,
        VKEY_NUMPAD1 = VK_NUMPAD1,
        VKEY_NUMPAD2 = VK_NUMPAD2,
        VKEY_NUMPAD3 = VK_NUMPAD3,
        VKEY_NUMPAD4 = VK_NUMPAD4,
        VKEY_NUMPAD5 = VK_NUMPAD5,
        VKEY_NUMPAD6 = VK_NUMPAD6,
        VKEY_NUMPAD7 = VK_NUMPAD7,
        VKEY_NUMPAD8 = VK_NUMPAD8,
        VKEY_NUMPAD9 = VK_NUMPAD9,
        VKEY_MULTIPLY = VK_MULTIPLY,
        VKEY_ADD = VK_ADD,
        VKEY_SEPARATOR = VK_SEPARATOR,
        VKEY_SUBTRACT = VK_SUBTRACT,
        VKEY_DECIMAL = VK_DECIMAL,
        VKEY_DIVIDE = VK_DIVIDE,
        VKEY_F1 = VK_F1,
        VKEY_F2 = VK_F2,
        VKEY_F3 = VK_F3,
        VKEY_F4 = VK_F4,
        VKEY_F5 = VK_F5,
        VKEY_F6 = VK_F6,
        VKEY_F7 = VK_F7,
        VKEY_F8 = VK_F8,
        VKEY_F9 = VK_F9,
        VKEY_F10 = VK_F10,
        VKEY_F11 = VK_F11,
        VKEY_F12 = VK_F12,
        VKEY_F13 = VK_F13,
        VKEY_F14 = VK_F14,
        VKEY_F15 = VK_F15,
        VKEY_F16 = VK_F16,
        VKEY_F17 = VK_F17,
        VKEY_F18 = VK_F18,
        VKEY_F19 = VK_F19,
        VKEY_F20 = VK_F20,
        VKEY_F21 = VK_F21,
        VKEY_F22 = VK_F22,
        VKEY_F23 = VK_F23,
        VKEY_F24 = VK_F24,
        VKEY_NUMLOCK = VK_NUMLOCK,
        VKEY_SCROLL = VK_SCROLL,
        VKEY_LSHIFT = VK_LSHIFT,
        VKEY_RSHIFT = VK_RSHIFT,
        VKEY_LCONTROL = VK_LCONTROL,
        VKEY_RCONTROL = VK_RCONTROL,
        VKEY_LMENU = VK_LMENU,
        VKEY_RMENU = VK_RMENU,
        VKEY_BROWSER_BACK = VK_BROWSER_BACK,
        VKEY_BROWSER_FORWARD = VK_BROWSER_FORWARD,
        VKEY_BROWSER_REFRESH = VK_BROWSER_REFRESH,
        VKEY_BROWSER_STOP = VK_BROWSER_STOP,
        VKEY_BROWSER_SEARCH = VK_BROWSER_SEARCH,
        VKEY_BROWSER_FAVORITES = VK_BROWSER_FAVORITES,
        VKEY_BROWSER_HOME = VK_BROWSER_HOME,
        VKEY_VOLUME_MUTE = VK_VOLUME_MUTE,
        VKEY_VOLUME_DOWN = VK_VOLUME_DOWN,
        VKEY_VOLUME_UP = VK_VOLUME_UP,
        VKEY_MEDIA_NEXT_TRACK = VK_MEDIA_NEXT_TRACK,
        VKEY_MEDIA_PREV_TRACK = VK_MEDIA_PREV_TRACK,
        VKEY_MEDIA_STOP = VK_MEDIA_STOP,
        VKEY_MEDIA_PLAY_PAUSE = VK_MEDIA_PLAY_PAUSE,
        VKEY_MEDIA_LAUNCH_MAIL = 0xB4,
        VKEY_MEDIA_LAUNCH_MEDIA_SELECT = 0xB5,
        VKEY_MEDIA_LAUNCH_APP1 = 0xB6,
        VKEY_MEDIA_LAUNCH_APP2 = 0xB7,
        VKEY_OEM_1 = VK_OEM_1,
        VKEY_OEM_PLUS = VK_OEM_PLUS,
        VKEY_OEM_COMMA = VK_OEM_COMMA,
        VKEY_OEM_MINUS = VK_OEM_MINUS,
        VKEY_OEM_PERIOD = VK_OEM_PERIOD,
        VKEY_OEM_2 = VK_OEM_2,
        VKEY_OEM_3 = VK_OEM_3,
        VKEY_OEM_4 = VK_OEM_4,
        VKEY_OEM_5 = VK_OEM_5,
        VKEY_OEM_6 = VK_OEM_6,
        VKEY_OEM_7 = VK_OEM_7,
        VKEY_OEM_8 = VK_OEM_8,
        VKEY_OEM_102 = VK_OEM_102,
        VKEY_PROCESSKEY = VK_PROCESSKEY,
        VKEY_PACKET = VK_PACKET,
        VKEY_ATTN = VK_ATTN,
        VKEY_CRSEL = VK_CRSEL,
        VKEY_EXSEL = VK_EXSEL,
        VKEY_EREOF = VK_EREOF,
        VKEY_PLAY = VK_PLAY,
        VKEY_ZOOM = VK_ZOOM,
        VKEY_NONAME = VK_NONAME,
        VKEY_PA1 = VK_PA1,
        VKEY_OEM_CLEAR = VK_OEM_CLEAR,
        VKEY_UNKNOWN = 0
    } KeyboardCode;

} //namespace ui

#endif //__ui_base_keyboard_codes_win_h__