0x9F9D40: push    offset aBlockDescripti; "Block Description"
0x9F9D45: push    offset aSskilldescbloc; "sSkillDescBlock"
0x9F9D4A: mov     ecx, offset unk_B3A1EC
0x9F9D4F: call    GameSetting_ConstrAndReg
0x9F9D54: push    offset sub_A23C10; void (__cdecl *)()
0x9F9D59: call    _atexit
0x9F9D5E: pop     ecx
0x9F9D5F: retn
