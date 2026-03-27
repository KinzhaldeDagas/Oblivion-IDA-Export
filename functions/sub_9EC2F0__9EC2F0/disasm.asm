0x9EC2F0: fld     ds:flt_A30634
0x9EC2F6: push    ecx
0x9EC2F7: fstp    [esp+4+var_4]; float
0x9EC2FA: push    offset aFpersbullyresp; "fPersBullyResp"
0x9EC2FF: mov     ecx, offset unk_B377E8
0x9EC304: call    GameSetting_ConstrAndReg_float
0x9EC309: push    offset sub_A1F6F0; void (__cdecl *)()
0x9EC30E: call    _atexit
0x9EC313: pop     ecx
0x9EC314: retn
