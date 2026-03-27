0x9EAFB0: fld     ds:flt_A57FB8
0x9EAFB6: push    ecx
0x9EAFB7: fstp    [esp+4+var_4]; float
0x9EAFBA: push    offset aFjumpfallveloc; "fJumpFallVelocityMin"
0x9EAFBF: mov     ecx, offset flt_B37470
0x9EAFC4: call    GameSetting_ConstrAndReg_float
0x9EAFC9: push    offset sub_A1F000; void (__cdecl *)()
0x9EAFCE: call    _atexit
0x9EAFD3: pop     ecx
0x9EAFD4: retn
