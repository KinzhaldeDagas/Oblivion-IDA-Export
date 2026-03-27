0x9E5CB0: fld     ds:flt_A41304
0x9E5CB6: push    ecx
0x9E5CB7: fstp    [esp+4+var_4]; float
0x9E5CBA: push    offset aFmasserspeed; "fMasserSpeed"
0x9E5CBF: mov     ecx, offset flt_B365E0
0x9E5CC4: call    GameSetting_ConstrAndReg_float
0x9E5CC9: push    offset sub_A1D290; void (__cdecl *)()
0x9E5CCE: call    _atexit
0x9E5CD3: pop     ecx
0x9E5CD4: retn
