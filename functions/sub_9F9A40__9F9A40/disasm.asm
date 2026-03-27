0x9F9A40: push    offset aSneak; "Sneak"
0x9F9A45: push    offset aSskillnamesnea; "sSkillNameSneak"
0x9F9A4A: mov     ecx, offset sSkillNameSneak
0x9F9A4F: call    GameSetting_ConstrAndReg
0x9F9A54: push    offset sub_A23A90; void (__cdecl *)()
0x9F9A59: call    _atexit
0x9F9A5E: pop     ecx
0x9F9A5F: retn
