0x9ECBA0: fldz
0x9ECBA2: push    ecx
0x9ECBA3: fstp    [esp+4+var_4]; float
0x9ECBA6: mov     ecx, offset fPersuasionMinInput
0x9ECBAB: push    offset aFpersuasionm_3; "fPersuasionMinInput"
0x9ECBB0: call    GameSetting_ConstrAndReg_float
0x9ECBB5: push    offset sub_A1FA30; void (__cdecl *)()
0x9ECBBA: call    _atexit
0x9ECBBF: pop     ecx
0x9ECBC0: retn
