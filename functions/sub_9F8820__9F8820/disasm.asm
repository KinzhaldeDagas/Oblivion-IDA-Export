0x9F8820: fldz
0x9F8822: push    ecx
0x9F8823: fstp    [esp+4+var_4]; float
0x9F8826: mov     ecx, offset unk_B39B30
0x9F882B: push    offset aFtrackfudgexy; "fTrackFudgeXY"
0x9F8830: call    GameSetting_ConstrAndReg_float
0x9F8835: push    offset sub_A23270; void (__cdecl *)()
0x9F883A: call    _atexit
0x9F883F: pop     ecx
0x9F8840: retn
