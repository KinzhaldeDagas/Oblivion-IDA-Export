0x9EB160: fld     ds:flt_A3744C
0x9EB166: push    ecx
0x9EB167: fstp    [esp+4+var_4]; float
0x9EB16A: push    offset aFjumpmovemult; "fJumpMoveMult"
0x9EB16F: mov     ecx, offset fJumpMoveMult
0x9EB174: call    GameSetting_ConstrAndReg_float
0x9EB179: push    offset sub_A1F090; void (__cdecl *)()
0x9EB17E: call    _atexit
0x9EB183: pop     ecx
0x9EB184: retn
