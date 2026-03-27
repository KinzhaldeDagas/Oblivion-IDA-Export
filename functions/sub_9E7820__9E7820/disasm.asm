0x9E7820: fld     ds:flt_A34ABC
0x9E7826: push    ecx
0x9E7827: fstp    [esp+4+var_4]; float
0x9E782A: push    offset aFaimovedistanc; "fAIMoveDistanceToRecalcFollowPath"
0x9E782F: mov     ecx, offset flt_B36A88
0x9E7834: call    GameSetting_ConstrAndReg_float
0x9E7839: push    offset sub_A1DC30; void (__cdecl *)()
0x9E783E: call    _atexit
0x9E7843: pop     ecx
0x9E7844: retn
