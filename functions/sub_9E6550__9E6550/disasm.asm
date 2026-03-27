0x9E6550: fld     ds:flt_A5742C
0x9E6556: push    ecx
0x9E6557: fstp    [esp+4+var_4]; float
0x9E655A: push    offset aFsneaksoundsmu; "fSneakSoundsMult"
0x9E655F: mov     ecx, offset fSneakSoundsMult
0x9E6564: call    GameSetting_ConstrAndReg_float
0x9E6569: push    offset sub_A1D5A0; void (__cdecl *)()
0x9E656E: call    _atexit
0x9E6573: pop     ecx
0x9E6574: retn
