0x9EC0B0: fld     ds:flt_A30634
0x9EC0B6: push    ecx
0x9EC0B7: fstp    [esp+4+var_4]; float
0x9EC0BA: push    offset aFpersadmireper; "fPersAdmirePers"
0x9EC0BF: mov     ecx, offset fPersAdmirePers
0x9EC0C4: call    GameSetting_ConstrAndReg_float
0x9EC0C9: push    offset sub_A1F630; void (__cdecl *)()
0x9EC0CE: call    _atexit
0x9EC0D3: pop     ecx
0x9EC0D4: retn
