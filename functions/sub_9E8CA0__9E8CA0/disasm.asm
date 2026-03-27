0x9E8CA0: fld     ds:flt_A3D65C
0x9E8CA6: push    ecx
0x9E8CA7: fstp    [esp+4+var_4]; float
0x9E8CAA: push    offset aFdamagetoarmor; "fDamageToArmorPercentage"
0x9E8CAF: mov     ecx, offset fDamageToArmorPercentage
0x9E8CB4: call    GameSetting_ConstrAndReg_float
0x9E8CB9: push    offset sub_A1E350; void (__cdecl *)()
0x9E8CBE: call    _atexit
0x9E8CC3: pop     ecx
0x9E8CC4: retn
