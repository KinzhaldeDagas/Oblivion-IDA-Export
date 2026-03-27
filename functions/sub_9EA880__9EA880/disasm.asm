0x9EA880: fld     ds:flt_A46B10
0x9EA886: push    ecx
0x9EA887: fstp    [esp+4+var_4]; float
0x9EA88A: push    offset aFperksneakatta; "fPerkSneakAttackMeleeNoviceMult"
0x9EA88F: mov     ecx, offset fPerkSneakAttackMeleeNoviceMult
0x9EA894: call    GameSetting_ConstrAndReg_float
0x9EA899: push    offset sub_A1ED90; void (__cdecl *)()
0x9EA89E: call    _atexit
0x9EA8A3: pop     ecx
0x9EA8A4: retn
