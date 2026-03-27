0x9E8360: fld     ds:flt_A3D65C
0x9E8366: push    ecx
0x9E8367: fstp    [esp+4+var_4]; float
0x9E836A: push    offset aFdyingtimer; "fDyingTimer"
0x9E836F: mov     ecx, offset flt_B36C80
0x9E8374: call    GameSetting_ConstrAndReg_float
0x9E8379: push    offset sub_A1E020; void (__cdecl *)()
0x9E837E: call    _atexit
0x9E8383: pop     ecx
0x9E8384: retn
