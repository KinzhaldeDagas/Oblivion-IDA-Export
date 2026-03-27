0x9EC440: fld     ds:flt_A30634
0x9EC446: push    ecx
0x9EC447: fstp    [esp+4+var_4]; float
0x9EC44A: push    offset aFpersboastener; "fPersBoastEner"
0x9EC44F: mov     ecx, offset fPersBoastEner
0x9EC454: call    GameSetting_ConstrAndReg_float
0x9EC459: push    offset sub_A1F760; void (__cdecl *)()
0x9EC45E: call    _atexit
0x9EC463: pop     ecx
0x9EC464: retn
