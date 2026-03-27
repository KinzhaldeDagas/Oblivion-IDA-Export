0x9DF3A0: push    offset aLastSeed; "Last Seed"
0x9DF3A5: push    offset aSmonthlastseed; "sMonthLastSeed"
0x9DF3AA: mov     ecx, offset unk_B35124
0x9DF3AF: call    GameSetting_ConstrAndReg
0x9DF3B4: push    offset sub_A19F90; void (__cdecl *)()
0x9DF3B9: call    _atexit
0x9DF3BE: pop     ecx
0x9DF3BF: retn
