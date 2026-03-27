0x9F9F20: push    offset aSecurityDescri; "Security Description"
0x9F9F25: push    offset aSskilldescsecu; "sSkillDescSecurity"
0x9F9F2A: mov     ecx, offset unk_B3A264
0x9F9F2F: call    GameSetting_ConstrAndReg
0x9F9F34: push    offset sub_A23D00; void (__cdecl *)()
0x9F9F39: call    _atexit
0x9F9F3E: pop     ecx
0x9F9F3F: retn
