0x9EBEA0: fld     ds:flt_A3F424
0x9EBEA6: push    ecx
0x9EBEA7: fstp    [esp+4+var_4]; float
0x9EBEAA: push    offset aFtorchlightlev; "fTorchLightLevelMorning"
0x9EBEAF: mov     ecx, offset fTorchLightLevelMorning
0x9EBEB4: call    GameSetting_ConstrAndReg_float
0x9EBEB9: push    offset sub_A1F580; void (__cdecl *)()
0x9EBEBE: call    _atexit
0x9EBEC3: pop     ecx
0x9EBEC4: retn
