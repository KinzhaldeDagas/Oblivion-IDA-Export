0x9F02F0: push    offset aSkillIncreased; "skill increased"
0x9F02F5: push    offset aSskillincrease; "sSkillIncreased"
0x9F02FA: mov     ecx, offset SGameSetting_SkillIncreased
0x9F02FF: call    GameSetting_ConstrAndReg
0x9F0304: push    offset sub_A20E70; void (__cdecl *)()
0x9F0309: call    _atexit
0x9F030E: pop     ecx
0x9F030F: retn
