0x9EDC60: push    910h
0x9EDC65: push    offset aIclasshealer; "iClassHealer"
0x9EDC6A: mov     ecx, offset iClassHealer
0x9EDC6F: call    GameSetting_ConstrAndReg
0x9EDC74: push    offset sub_A20000; void (__cdecl *)()
0x9EDC79: call    _atexit
0x9EDC7E: pop     ecx
0x9EDC7F: retn
