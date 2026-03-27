0x9F0750: push    offset aSkillIncreases; "Skill Increases: "
0x9F0755: push    offset aSmiscskilladva; "sMiscSkillAdvances"
0x9F075A: mov     ecx, offset sMiscSkillAdvances
0x9F075F: call    GameSetting_ConstrAndReg
0x9F0764: push    offset sub_A210A0; void (__cdecl *)()
0x9F0769: call    _atexit
0x9F076E: pop     ecx
0x9F076F: retn
