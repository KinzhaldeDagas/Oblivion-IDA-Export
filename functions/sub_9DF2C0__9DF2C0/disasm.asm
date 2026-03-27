0x9DF2C0: push    offset aMorningStar; "Morning Star"
0x9DF2C5: push    offset aSmonthmornings; "sMonthMorningStar"
0x9DF2CA: mov     ecx, offset sMonthMorningStar
0x9DF2CF: call    GameSetting_ConstrAndReg
0x9DF2D4: push    offset sub_A19F20; void (__cdecl *)()
0x9DF2D9: call    _atexit
0x9DF2DE: pop     ecx
0x9DF2DF: retn
