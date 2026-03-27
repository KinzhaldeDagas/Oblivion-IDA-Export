0x9FAAB0: push    offset aJourneyman; "Journeyman"
0x9FAAB5: push    offset aSskillleveljou; "sSkillLevelJourneyman"
0x9FAABA: mov     ecx, offset sSkillLevelJourneyman
0x9FAABF: call    GameSetting_ConstrAndReg
0x9FAAC4: push    offset sub_A241F0; void (__cdecl *)()
0x9FAAC9: call    _atexit
0x9FAACE: pop     ecx
0x9FAACF: retn
