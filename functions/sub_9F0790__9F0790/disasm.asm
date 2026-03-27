0x9F0790: push    offset aHoursWaited; "Hours Waited: "
0x9F0795: push    offset aSmischourswait; "sMiscHoursWaited"
0x9F079A: mov     ecx, offset dword_B384D0
0x9F079F: call    GameSetting_ConstrAndReg
0x9F07A4: push    offset sub_A210C0; void (__cdecl *)()
0x9F07A9: call    _atexit
0x9F07AE: pop     ecx
0x9F07AF: retn
