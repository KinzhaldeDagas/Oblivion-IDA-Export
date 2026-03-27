0x9F85B0: fld     ds:flt_A6438C
0x9F85B6: push    ecx
0x9F85B7: fstp    [esp+4+var_4]; float
0x9F85BA: push    offset aFspeechdelay; "fSpeechDelay"
0x9F85BF: mov     ecx, offset flt_B39AC8
0x9F85C4: call    GameSetting_ConstrAndReg_float
0x9F85C9: push    offset sub_A231A0; void (__cdecl *)()
0x9F85CE: call    _atexit
0x9F85D3: pop     ecx
0x9F85D4: retn
