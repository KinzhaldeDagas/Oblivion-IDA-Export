0x9F9CE0: push    offset aArmorerDescrip; "Armorer Description"
0x9F9CE5: push    offset aSskilldescarmo; "sSkillDescArmorer"
0x9F9CEA: mov     ecx, offset sSkillDescArmorer
0x9F9CEF: call    GameSetting_ConstrAndReg
0x9F9CF4: push    offset sub_A23BE0; void (__cdecl *)()
0x9F9CF9: call    _atexit
0x9F9CFE: pop     ecx
0x9F9CFF: retn
