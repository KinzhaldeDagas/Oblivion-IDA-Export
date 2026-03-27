0x9DA0E0: push    offset aYouAreCurrentl; "You are currently Silenced"
0x9DA0E5: push    offset aSmagiccastsile; "sMagicCastSilenced"
0x9DA0EA: mov     ecx, offset sMagicCastSilenced
0x9DA0EF: call    GameSetting_ConstrAndReg
0x9DA0F4: push    offset sub_A17610; void (__cdecl *)()
0x9DA0F9: call    _atexit
0x9DA0FE: pop     ecx
0x9DA0FF: retn
