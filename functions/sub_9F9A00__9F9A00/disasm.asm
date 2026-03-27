0x9F9A00: push    offset aMercantile; "Mercantile"
0x9F9A05: push    offset aSskillnamemerc; "sSkillNameMercantile"
0x9F9A0A: mov     ecx, offset sSkillNameMercantile
0x9F9A0F: call    GameSetting_ConstrAndReg
0x9F9A14: push    offset sub_A23A70; void (__cdecl *)()
0x9F9A19: call    _atexit
0x9F9A1E: pop     ecx
0x9F9A1F: retn
