0x9E75E0: fld1
0x9E75E2: push    ecx
0x9E75E3: fstp    [esp+4+var_4]; float
0x9E75E6: mov     ecx, offset unk_B36A18
0x9E75EB: push    offset aFlockpickquali; "fLockPickQualityBase"
0x9E75F0: call    GameSetting_ConstrAndReg_float
0x9E75F5: push    offset sub_A1DB50; void (__cdecl *)()
0x9E75FA: call    _atexit
0x9E75FF: pop     ecx
0x9E7600: retn
