0x9EF550: fld     ds:flt_A41304
0x9EF556: push    ecx
0x9EF557: fstp    [esp+4+var_4]; float
0x9EF55A: push    offset aFmagicdiseas_0; "fMagicDiseaseTransferMult"
0x9EF55F: mov     ecx, offset fMagicDiseaseTransferMult
0x9EF564: call    GameSetting_ConstrAndReg_float
0x9EF569: push    offset sub_A20900; void (__cdecl *)()
0x9EF56E: call    _atexit
0x9EF573: pop     ecx
0x9EF574: retn
