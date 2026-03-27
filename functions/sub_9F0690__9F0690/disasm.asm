0x9F0690: push    offset aNoviceSkills; "Novice Skills: "
0x9F0695: push    offset aSmiscnoviceski; "sMiscNoviceSkills"
0x9F069A: mov     ecx, offset sMiscNoviceSkills
0x9F069F: call    GameSetting_ConstrAndReg
0x9F06A4: push    offset sub_A21040; void (__cdecl *)()
0x9F06A9: call    _atexit
0x9F06AE: pop     ecx
0x9F06AF: retn
