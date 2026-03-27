0x9F9E20: push    offset aDestructionDes; "Destruction Description"
0x9F9E25: push    offset aSskilldescdest; "sSkillDescDestruction"
0x9F9E2A: mov     ecx, offset sSkillDescDestruction
0x9F9E2F: call    GameSetting_ConstrAndReg
0x9F9E34: push    offset sub_A23C80; void (__cdecl *)()
0x9F9E39: call    _atexit
0x9F9E3E: pop     ecx
0x9F9E3F: retn
