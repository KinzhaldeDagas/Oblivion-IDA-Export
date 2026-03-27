0x9F7FE0: fld     ds:flt_A63F04
0x9F7FE6: push    ecx
0x9F7FE7: fstp    [esp+4+var_4]; float
0x9F7FEA: push    offset aFnoticetexttim; "fNoticeTextTimePerCharacter"
0x9F7FEF: mov     ecx, offset flt_B394F8
0x9F7FF4: call    GameSetting_ConstrAndReg_float
0x9F7FF9: push    offset sub_A23110; void (__cdecl *)()
0x9F7FFE: call    _atexit
0x9F8003: pop     ecx
0x9F8004: retn
