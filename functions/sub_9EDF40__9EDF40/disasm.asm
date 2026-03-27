0x9EDF40: fld     ds:flt_A430CC
0x9EDF46: push    ecx
0x9EDF47: fstp    [esp+4+var_4]; float
0x9EDF4A: push    offset aFmaxarmorratin; "fMaxArmorRating"
0x9EDF4F: mov     ecx, offset fMaxArmorRating
0x9EDF54: call    GameSetting_ConstrAndReg_float
0x9EDF59: push    offset sub_A20160; void (__cdecl *)()
0x9EDF5E: call    _atexit
0x9EDF63: pop     ecx
0x9EDF64: retn
