0x9E65B0: fld     ds:flt_A524B0
0x9E65B6: push    ecx
0x9E65B7: fstp    [esp+4+var_4]; float
0x9E65BA: push    offset aFpickupweapond; "fPickUpWeaponDelay"
0x9E65BF: mov     ecx, offset fPickUpWeaponDelay
0x9E65C4: call    GameSetting_ConstrAndReg_float
0x9E65C9: push    offset sub_A1D5C0; void (__cdecl *)()
0x9E65CE: call    _atexit
0x9E65D3: pop     ecx
0x9E65D4: retn
