0x9F0390: push    offset aLevel; "Level: "
0x9F0395: push    offset aSskilllevel; "sSkillLevel"
0x9F039A: mov     ecx, offset dword_B383D0
0x9F039F: call    GameSetting_ConstrAndReg
0x9F03A4: push    offset sub_A20EC0; void (__cdecl *)()
0x9F03A9: call    _atexit
0x9F03AE: pop     ecx
0x9F03AF: retn
