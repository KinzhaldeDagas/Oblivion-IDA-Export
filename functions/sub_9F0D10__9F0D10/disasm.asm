0x9F0D10: push    offset aYouWillStartAt; "You will start at 25 (Apprentice Level)"...
0x9F0D15: push    offset aSmajorskills; "sMajorSkills"
0x9F0D1A: mov     ecx, offset dword_B38630
0x9F0D1F: call    GameSetting_ConstrAndReg
0x9F0D24: push    offset sub_A21380; void (__cdecl *)()
0x9F0D29: call    _atexit
0x9F0D2E: pop     ecx
0x9F0D2F: retn
