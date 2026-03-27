0x9EC290: fld     ds:fConstant_2
0x9EC296: push    ecx
0x9EC297: fstp    [esp+4+var_4]; float
0x9EC29A: push    offset aFpersbullyconf; "fPersBullyConf"
0x9EC29F: mov     ecx, offset fPersBullyConf
0x9EC2A4: call    GameSetting_ConstrAndReg_float
0x9EC2A9: push    offset sub_A1F6D0; void (__cdecl *)()
0x9EC2AE: call    _atexit
0x9EC2B3: pop     ecx
0x9EC2B4: retn
