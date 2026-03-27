0x9F9D00: push    offset aAthleticsDescr; "Athletics Description"
0x9F9D05: push    offset aSskilldescathl; "sSkillDescAthletics"
0x9F9D0A: mov     ecx, offset unk_B3A1DC
0x9F9D0F: call    GameSetting_ConstrAndReg
0x9F9D14: push    offset sub_A23BF0; void (__cdecl *)()
0x9F9D19: call    _atexit
0x9F9D1E: pop     ecx
0x9F9D1F: retn
