0x9EE260: fld     ds:flt_A58180
0x9EE266: push    ecx
0x9EE267: fstp    [esp+4+var_4]; float
0x9EE26A: push    offset aFmagicunitsper; "fMagicUnitsPerFoot"
0x9EE26F: mov     ecx, offset fMagicUnitsPerFoot
0x9EE274: call    GameSetting_ConstrAndReg_float
0x9EE279: push    offset sub_A20290; void (__cdecl *)()
0x9EE27E: call    _atexit
0x9EE283: pop     ecx
0x9EE284: retn
