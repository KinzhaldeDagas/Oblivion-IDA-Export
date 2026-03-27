0x9E6460: fld     ds:flt_A3D65C
0x9E6466: push    ecx
0x9E6467: fstp    [esp+4+var_4]; float
0x9E646A: push    offset aFsneaksoundlos; "fSneakSoundLosMult"
0x9E646F: mov     ecx, offset fSneakSoundLosMult
0x9E6474: call    GameSetting_ConstrAndReg_float
0x9E6479: push    offset sub_A1D550; void (__cdecl *)()
0x9E647E: call    _atexit
0x9E6483: pop     ecx
0x9E6484: retn
