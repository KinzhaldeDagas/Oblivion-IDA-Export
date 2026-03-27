0x9F19E0: push    offset aSelf; "Self"
0x9F19E5: push    offset aSselfrange; "sSelfRange"
0x9F19EA: mov     ecx, offset sSelfRange
0x9F19EF: call    GameSetting_ConstrAndReg
0x9F19F4: push    offset sub_A219E0; void (__cdecl *)()
0x9F19F9: call    _atexit
0x9F19FE: pop     ecx
0x9F19FF: retn
