0x9E2790: push    offset aLight; "Light"
0x9E2795: push    offset aSarmorweightli; "sArmorWeightLight"
0x9E279A: mov     ecx, offset sArmorWeightLight
0x9E279F: call    GameSetting_ConstrAndReg
0x9E27A4: push    offset sub_A1B690; void (__cdecl *)()
0x9E27A9: call    _atexit
0x9E27AE: pop     ecx
0x9E27AF: retn
