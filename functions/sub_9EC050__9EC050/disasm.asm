0x9EC050: fld     ds:flt_A30634
0x9EC056: push    ecx
0x9EC057: fstp    [esp+4+var_4]; float
0x9EC05A: push    offset aFpersadmireint; "fPersAdmireIntel"
0x9EC05F: mov     ecx, offset fPersAdmireIntel
0x9EC064: call    GameSetting_ConstrAndReg_float
0x9EC069: push    offset sub_A1F610; void (__cdecl *)()
0x9EC06E: call    _atexit
0x9EC073: pop     ecx
0x9EC074: retn
