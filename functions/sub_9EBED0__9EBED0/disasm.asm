0x9EBED0: fld     ds:flt_A57414
0x9EBED6: push    ecx
0x9EBED7: fstp    [esp+4+var_4]; float
0x9EBEDA: push    offset aFtorchlightl_0; "fTorchLightLevelNight"
0x9EBEDF: mov     ecx, offset fTorchLightLevelNight
0x9EBEE4: call    GameSetting_ConstrAndReg_float
0x9EBEE9: push    offset sub_A1F590; void (__cdecl *)()
0x9EBEEE: call    _atexit
0x9EBEF3: pop     ecx
0x9EBEF4: retn
