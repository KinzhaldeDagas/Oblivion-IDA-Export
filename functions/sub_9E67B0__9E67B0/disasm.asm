0x9E67B0: fld     ds:flt_A37080
0x9E67B6: push    ecx
0x9E67B7: fstp    [esp+4+var_4]; float
0x9E67BA: push    offset aFplayertelepor; "fPlayerTeleportFadeSeconds"
0x9E67BF: mov     ecx, offset flt_B367B0
0x9E67C4: call    GameSetting_ConstrAndReg_float
0x9E67C9: push    offset sub_A1D680; void (__cdecl *)()
0x9E67CE: call    _atexit
0x9E67D3: pop     ecx
0x9E67D4: retn
