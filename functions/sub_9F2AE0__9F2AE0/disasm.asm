0x9F2AE0: push    offset aSmall; "Small"
0x9F2AE5: push    offset aSsmall; "sSmall"
0x9F2AEA: mov     ecx, offset sSmall
0x9F2AEF: call    GameSetting_ConstrAndReg
0x9F2AF4: push    offset sub_A221A0; void (__cdecl *)()
0x9F2AF9: call    _atexit
0x9F2AFE: pop     ecx
0x9F2AFF: retn
