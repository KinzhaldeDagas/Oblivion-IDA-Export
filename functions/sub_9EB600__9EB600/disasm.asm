0x9EB600: fld     ds:flt_A3D9A4
0x9EB606: push    ecx
0x9EB607: fstp    [esp+4+var_4]; float
0x9EB60A: push    offset aFactorswimbr_1; "fActorSwimBreathDamage"
0x9EB60F: mov     ecx, offset fActorSwimBreathDamage
0x9EB614: call    GameSetting_ConstrAndReg_float
0x9EB619: push    offset sub_A1F230; void (__cdecl *)()
0x9EB61E: call    _atexit
0x9EB623: pop     ecx
0x9EB624: retn
