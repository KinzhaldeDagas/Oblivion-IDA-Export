0x9F9F00: push    offset aMercantileDesc; "Mercantile Description"
0x9F9F05: push    offset aSskilldescmerc; "sSkillDescMercantile"
0x9F9F0A: mov     ecx, offset unk_B3A25C
0x9F9F0F: call    GameSetting_ConstrAndReg
0x9F9F14: push    offset sub_A23CF0; void (__cdecl *)()
0x9F9F19: call    _atexit
0x9F9F1E: pop     ecx
0x9F9F1F: retn
