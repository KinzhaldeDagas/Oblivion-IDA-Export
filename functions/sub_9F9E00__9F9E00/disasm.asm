0x9F9E00: push    offset aConjurationDes; "Conjuration Description"
0x9F9E05: push    offset aSskilldescconj; "sSkillDescConjuration"
0x9F9E0A: mov     ecx, offset unk_B3A21C
0x9F9E0F: call    GameSetting_ConstrAndReg
0x9F9E14: push    offset sub_A23C70; void (__cdecl *)()
0x9F9E19: call    _atexit
0x9F9E1E: pop     ecx
0x9F9E1F: retn
