0x9E9570: fld     ds:flt_A41304
0x9E9576: push    ecx
0x9E9577: fstp    [esp+4+var_4]; float
0x9E957A: push    offset aFknockdownchan; "fKnockdownChance"
0x9E957F: mov     ecx, offset flt_B36FA0
0x9E9584: call    GameSetting_ConstrAndReg_float
0x9E9589: push    offset sub_A1E660; void (__cdecl *)()
0x9E958E: call    _atexit
0x9E9593: pop     ecx
0x9E9594: retn
