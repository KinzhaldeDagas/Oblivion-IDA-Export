0x98347E: call    __getptd
0x983483: push    [esp+arg_8]; struct localeinfo_struct *
0x983487: add     eax, 20h ; ' '
0x98348A: push    eax; Context
0x98348B: push    [esp+8+Delim]; Delim
0x98348F: push    [esp+0Ch+Str]; Str
0x983493: call    __mbstok_s_l
0x983498: add     esp, 10h
0x98349B: retn
