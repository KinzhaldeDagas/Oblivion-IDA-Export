0x9E9720: fld     ds:flt_A31E2C
0x9E9726: push    ecx
0x9E9727: fstp    [esp+4+var_4]; float
0x9E972A: push    offset aFpowerattackfa; "fPowerAttackFatiguePenalty"
0x9E972F: mov     ecx, offset fPowerAttackFatiguePenalty
0x9E9734: call    GameSetting_ConstrAndReg_float
0x9E9739: push    offset sub_A1E6F0; void (__cdecl *)()
0x9E973E: call    _atexit
0x9E9743: pop     ecx
0x9E9744: retn
