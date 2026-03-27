0x9EF6D0: fld     ds:dword_A46C30
0x9EF6D6: push    ecx
0x9EF6D7: fstp    [esp+4+var_4]; float
0x9EF6DA: push    offset aFshockboltsr_0; "fShockBoltsRadiusStrength"
0x9EF6DF: mov     ecx, offset fShockBoltsRadiusStrength
0x9EF6E4: call    GameSetting_ConstrAndReg_float
0x9EF6E9: push    offset sub_A20980; void (__cdecl *)()
0x9EF6EE: call    _atexit
0x9EF6F3: pop     ecx
0x9EF6F4: retn
