0x9F9C20: push    offset aPersonalityDes; "Personality Description"
0x9F9C25: push    offset aSattributede_5; "sAttributeDescPersonality"
0x9F9C2A: mov     ecx, offset unk_B3A1A4
0x9F9C2F: call    GameSetting_ConstrAndReg
0x9F9C34: push    offset sub_A23B80; void (__cdecl *)()
0x9F9C39: call    _atexit
0x9F9C3E: pop     ecx
0x9F9C3F: retn
