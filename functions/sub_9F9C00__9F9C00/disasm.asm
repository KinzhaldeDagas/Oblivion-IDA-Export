0x9F9C00: push    offset aEnduranceDescr; "Endurance Description"
0x9F9C05: push    offset aSattributede_4; "sAttributeDescEndurance"
0x9F9C0A: mov     ecx, offset unk_B3A19C
0x9F9C0F: call    GameSetting_ConstrAndReg
0x9F9C14: push    offset sub_A23B70; void (__cdecl *)()
0x9F9C19: call    _atexit
0x9F9C1E: pop     ecx
0x9F9C1F: retn
