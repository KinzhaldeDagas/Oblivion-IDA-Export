0x9E64C0: fld     ds:flt_A57384
0x9E64C6: push    ecx
0x9E64C7: fstp    [esp+4+var_4]; float
0x9E64CA: push    offset aFsneaksleepbon; "fSneakSleepBonus"
0x9E64CF: mov     ecx, offset fSneakSleepBonus
0x9E64D4: call    GameSetting_ConstrAndReg_float
0x9E64D9: push    offset sub_A1D570; void (__cdecl *)()
0x9E64DE: call    _atexit
0x9E64E3: pop     ecx
0x9E64E4: retn
