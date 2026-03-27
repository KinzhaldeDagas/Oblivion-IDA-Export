0x9F9DA0: push    offset aHeavyArmorDesc; "Heavy Armor Description"
0x9F9DA5: push    offset aSskilldescheav; "sSkillDescHeavyArmor"
0x9F9DAA: mov     ecx, offset unk_B3A204
0x9F9DAF: call    GameSetting_ConstrAndReg
0x9F9DB4: push    offset sub_A23C40; void (__cdecl *)()
0x9F9DB9: call    _atexit
0x9F9DBE: pop     ecx
0x9F9DBF: retn
