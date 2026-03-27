0x9ED110: push    1Eh
0x9ED112: push    offset aIpcstartspells; "iPCStartSpellSkillLevel"
0x9ED117: mov     ecx, offset iPCStartSpellSkillLevel
0x9ED11C: call    GameSetting_ConstrAndReg
0x9ED121: push    offset sub_A1FC00; void (__cdecl *)()
0x9ED126: call    _atexit
0x9ED12B: pop     ecx
0x9ED12C: retn
