0x9F06D0: push    offset aJourneymanSkil; "Journeyman Skills: "
0x9F06D5: push    offset aSmiscjourneyma; "sMiscJourneymanSkills"
0x9F06DA: mov     ecx, offset sMiscJourneymanSkills
0x9F06DF: call    GameSetting_ConstrAndReg
0x9F06E4: push    offset sub_A21060; void (__cdecl *)()
0x9F06E9: call    _atexit
0x9F06EE: pop     ecx
0x9F06EF: retn
