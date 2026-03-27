0x9F0BB0: push    offset aCombat_0; "Combat"
0x9F0BB5: push    offset aScombatname; "sCombatName"
0x9F0BBA: mov     ecx, offset dword_B385D8
0x9F0BBF: call    GameSetting_ConstrAndReg
0x9F0BC4: push    offset sub_A212D0; void (__cdecl *)()
0x9F0BC9: call    _atexit
0x9F0BCE: pop     ecx
0x9F0BCF: retn
