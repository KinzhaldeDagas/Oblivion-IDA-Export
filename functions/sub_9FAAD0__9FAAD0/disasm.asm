0x9FAAD0: push    offset aExpert; "Expert"
0x9FAAD5: push    offset aSskilllevelexp; "sSkillLevelExpert"
0x9FAADA: mov     ecx, offset sSkillLevelExpert
0x9FAADF: call    GameSetting_ConstrAndReg
0x9FAAE4: push    offset sub_A24200; void (__cdecl *)()
0x9FAAE9: call    _atexit
0x9FAAEE: pop     ecx
0x9FAAEF: retn
