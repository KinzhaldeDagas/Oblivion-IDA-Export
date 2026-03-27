0x9E6070: fld     ds:flt_A46B10
0x9E6076: push    ecx
0x9E6077: fstp    [esp+4+var_4]; float
0x9E607A: push    offset aFstarsrotateda; "fStarsRotateDays"
0x9E607F: mov     ecx, offset flt_B36690
0x9E6084: call    GameSetting_ConstrAndReg_float
0x9E6089: push    offset sub_A1D3E0; void (__cdecl *)()
0x9E608E: call    _atexit
0x9E6093: pop     ecx
0x9E6094: retn
