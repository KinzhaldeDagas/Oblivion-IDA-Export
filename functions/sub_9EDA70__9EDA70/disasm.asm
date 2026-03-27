0x9EDA70: fld     ds:flt_A41328
0x9EDA76: push    ecx
0x9EDA77: fstp    [esp+4+var_4]; float
0x9EDA7A: push    offset aFrumblestrucks; "fRumbleStruckStrength"
0x9EDA7F: mov     ecx, offset unk_B37C10
0x9EDA84: call    GameSetting_ConstrAndReg_float
0x9EDA89: push    offset sub_A1FF40; void (__cdecl *)()
0x9EDA8E: call    _atexit
0x9EDA93: pop     ecx
0x9EDA94: retn
