0x9FA680: fld     ds:flt_A67558
0x9FA686: push    ecx
0x9FA687: fstp    [esp+4+var_4]; float
0x9FA68A: push    offset aFpathspaceexit; "fPathSpaceExitPenalty"
0x9FA68F: mov     ecx, offset flt_B3A428
0x9FA694: call    GameSetting_ConstrAndReg_float
0x9FA699: push    offset sub_A24080; void (__cdecl *)()
0x9FA69E: call    _atexit
0x9FA6A3: pop     ecx
0x9FA6A4: retn
