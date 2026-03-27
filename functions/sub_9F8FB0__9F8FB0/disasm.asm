0x9F8FB0: fld     ds:fConstant_2
0x9F8FB6: push    ecx
0x9F8FB7: fstp    [esp+4+var_4]; float
0x9F8FBA: push    offset aFleafrocktimes; "fLeafRockTimeScale"
0x9F8FBF: mov     ecx, offset flt_B39E28
0x9F8FC4: call    GameSetting_ConstrAndReg_float
0x9F8FC9: push    offset sub_A235A0; void (__cdecl *)()
0x9F8FCE: call    _atexit
0x9F8FD3: pop     ecx
0x9F8FD4: retn
