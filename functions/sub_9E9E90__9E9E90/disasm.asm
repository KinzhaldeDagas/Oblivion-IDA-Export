0x9E9E90: fld     ds:flt_A2FE7C
0x9E9E96: push    ecx
0x9E9E97: fstp    [esp+4+var_4]; float
0x9E9E9A: push    offset aFweaponclutter; "fWeaponClutterKnockMult"
0x9E9E9F: mov     ecx, offset unk_B37130
0x9E9EA4: call    GameSetting_ConstrAndReg_float
0x9E9EA9: push    offset sub_A1E980; void (__cdecl *)()
0x9E9EAE: call    _atexit
0x9E9EB3: pop     ecx
0x9E9EB4: retn
