0x9EC7D0: fld     ds:flt_A31C80
0x9EC7D6: push    ecx
0x9EC7D7: fstp    [esp+4+var_4]; float
0x9EC7DA: push    offset aFdemandbase; "fDemandBase"
0x9EC7DF: mov     ecx, offset fDemandBase
0x9EC7E4: call    GameSetting_ConstrAndReg_float
0x9EC7E9: push    offset sub_A1F8D0; void (__cdecl *)()
0x9EC7EE: call    _atexit
0x9EC7F3: pop     ecx
0x9EC7F4: retn
