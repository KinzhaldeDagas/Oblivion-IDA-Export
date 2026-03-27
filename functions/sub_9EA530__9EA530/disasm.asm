0x9EA530: fld     ds:dword_A46C30
0x9EA536: push    ecx
0x9EA537: fstp    [esp+4+var_4]; float
0x9EA53A: push    offset aFcombatbuffsta; "fCombatBuffStandoffTimer"
0x9EA53F: mov     ecx, offset unk_B37298
0x9EA544: call    GameSetting_ConstrAndReg_float
0x9EA549: push    offset sub_A1EC50; void (__cdecl *)()
0x9EA54E: call    _atexit
0x9EA553: pop     ecx
0x9EA554: retn
