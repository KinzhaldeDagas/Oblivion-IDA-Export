0x9FA6E0: fld     ds:flt_A3F4E0
0x9FA6E6: push    ecx
0x9FA6E7: fstp    [esp+4+var_4]; float
0x9FA6EA: push    offset aFpathmustlockp; "fPathMustLockpickPenalty"
0x9FA6EF: mov     ecx, offset unk_B3A438
0x9FA6F4: call    GameSetting_ConstrAndReg_float
0x9FA6F9: push    offset sub_A240A0; void (__cdecl *)()
0x9FA6FE: call    _atexit
0x9FA703: pop     ecx
0x9FA704: retn
