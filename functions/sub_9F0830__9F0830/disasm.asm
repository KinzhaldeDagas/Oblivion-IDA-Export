0x9F0830: push    offset aSkillBooksRead; "Skill Books Read: "
0x9F0835: push    offset aSmiscnumskillb; "sMiscNumSkillBooksRead"
0x9F083A: mov     ecx, offset dword_B384F8
0x9F083F: call    GameSetting_ConstrAndReg
0x9F0844: push    offset sub_A21110; void (__cdecl *)()
0x9F0849: call    _atexit
0x9F084E: pop     ecx
0x9F084F: retn
