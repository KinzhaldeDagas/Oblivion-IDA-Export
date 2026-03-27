0x9D9E20: push    offset aSecs; "secs"
0x9D9E25: push    offset aSmagiceffect_5; "sMagicEffectItemSecondsPlural"
0x9D9E2A: mov     ecx, offset sMagicEffectItemSecondsPlural
0x9D9E2F: call    GameSetting_ConstrAndReg
0x9D9E34: push    offset sub_A174B0; void (__cdecl *)()
0x9D9E39: call    _atexit
0x9D9E3E: pop     ecx
0x9D9E3F: retn
