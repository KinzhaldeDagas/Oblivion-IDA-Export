0x9EA560: fld     ds:flt_A5977C
0x9EA566: push    ecx
0x9EA567: fstp    [esp+4+var_4]; float
0x9EA56A: push    offset aFcombatbuffmax; "fCombatBuffMaxTimer"
0x9EA56F: mov     ecx, offset unk_B372A0
0x9EA574: call    GameSetting_ConstrAndReg_float
0x9EA579: push    offset sub_A1EC60; void (__cdecl *)()
0x9EA57E: call    _atexit
0x9EA583: pop     ecx
0x9EA584: retn
