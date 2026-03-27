0x9F9B60: push    offset aStrengthDescri; "Strength Description"
0x9F9B65: push    offset aSattributedesc; "sAttributeDescStrength"
0x9F9B6A: mov     ecx, offset sAttributeDescStrength
0x9F9B6F: call    GameSetting_ConstrAndReg
0x9F9B74: push    offset sub_A23B20; void (__cdecl *)()
0x9F9B79: call    _atexit
0x9F9B7E: pop     ecx
0x9F9B7F: retn
