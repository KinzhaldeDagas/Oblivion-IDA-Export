0x9EB070: fldz
0x9EB072: push    ecx
0x9EB073: fstp    [esp+4+var_4]; float
0x9EB076: mov     ecx, offset fJumpFallRiderMult
0x9EB07B: push    offset aFjumpfallrider; "fJumpFallRiderMult"
0x9EB080: call    GameSetting_ConstrAndReg_float
0x9EB085: push    offset sub_A1F040; void (__cdecl *)()
0x9EB08A: call    _atexit
0x9EB08F: pop     ecx
0x9EB090: retn
