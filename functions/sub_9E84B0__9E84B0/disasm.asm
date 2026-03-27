0x9E84B0: fldz
0x9E84B2: push    ecx
0x9E84B3: fstp    [esp+4+var_4]; float
0x9E84B6: mov     ecx, offset fDetectionSneakLightMod
0x9E84BB: push    offset aFdetectionsnea; "fDetectionSneakLightMod"
0x9E84C0: call    GameSetting_ConstrAndReg_float
0x9E84C5: push    offset sub_A1E090; void (__cdecl *)()
0x9E84CA: call    _atexit
0x9E84CF: pop     ecx
0x9E84D0: retn
