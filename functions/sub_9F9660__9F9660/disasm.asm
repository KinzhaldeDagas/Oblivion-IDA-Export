0x9F9660: push    offset aStrength; "Strength"
0x9F9665: push    offset aSattributename; "sAttributeNameStrength"
0x9F966A: mov     ecx, offset sAttributeNameStrength
0x9F966F: call    GameSetting_ConstrAndReg
0x9F9674: push    offset sub_A238A0; void (__cdecl *)()
0x9F9679: call    _atexit
0x9F967E: pop     ecx
0x9F967F: retn
