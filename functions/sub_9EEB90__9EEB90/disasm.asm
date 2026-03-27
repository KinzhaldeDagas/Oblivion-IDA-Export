0x9EEB90: fld     ds:flt_A468FC
0x9EEB96: push    ecx
0x9EEB97: fstp    [esp+4+var_4]; float
0x9EEB9A: push    offset aFfatiguecastba; "fFatigueCastBase"
0x9EEB9F: mov     ecx, offset fFatigueCastBase
0x9EEBA4: call    GameSetting_ConstrAndReg_float
0x9EEBA9: push    offset sub_A205A0; void (__cdecl *)()
0x9EEBAE: call    _atexit
0x9EEBB3: pop     ecx
0x9EEBB4: retn
