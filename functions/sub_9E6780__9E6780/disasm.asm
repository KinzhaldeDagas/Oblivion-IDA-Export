0x9E6780: fld     ds:flt_A3D65C
0x9E6786: push    ecx
0x9E6787: fstp    [esp+4+var_4]; float
0x9E678A: push    offset aFactorteleport; "fActorTeleportFadeSeconds"
0x9E678F: mov     ecx, offset fActorTeleportFadeSeconds
0x9E6794: call    GameSetting_ConstrAndReg_float
0x9E6799: push    offset sub_A1D670; void (__cdecl *)()
0x9E679E: call    _atexit
0x9E67A3: pop     ecx
0x9E67A4: retn
