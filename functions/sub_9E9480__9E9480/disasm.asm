0x9E9480: fld     ds:fConstant_2
0x9E9486: push    ecx
0x9E9487: fstp    [esp+4+var_4]; float
0x9E948A: push    offset aFcombatstaffti; "fCombatStaffTimer"
0x9E948F: mov     ecx, offset unk_B36F78
0x9E9494: call    GameSetting_ConstrAndReg_float
0x9E9499: push    offset sub_A1E610; void (__cdecl *)()
0x9E949E: call    _atexit
0x9E94A3: pop     ecx
0x9E94A4: retn
