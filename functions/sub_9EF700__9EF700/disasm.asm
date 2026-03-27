0x9EF700: fld     ds:dword_A46C30
0x9EF706: push    ecx
0x9EF707: fstp    [esp+4+var_4]; float
0x9EF70A: push    offset aFshockboltsmal; "fShockBoltSmallWidth"
0x9EF70F: mov     ecx, offset fShockBoltSmallWidth
0x9EF714: call    GameSetting_ConstrAndReg_float
0x9EF719: push    offset sub_A20990; void (__cdecl *)()
0x9EF71E: call    _atexit
0x9EF723: pop     ecx
0x9EF724: retn
