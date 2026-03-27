0x9E83C0: fld     ds:fConstant_2
0x9E83C6: push    ecx
0x9E83C7: fstp    [esp+4+var_4]; float
0x9E83CA: push    offset aFplayerdeathre; "fPlayerDeathReloadTime"
0x9E83CF: mov     ecx, offset flt_B36C90
0x9E83D4: call    GameSetting_ConstrAndReg_float
0x9E83D9: push    offset sub_A1E040; void (__cdecl *)()
0x9E83DE: call    _atexit
0x9E83E3: pop     ecx
0x9E83E4: retn
