0x9EC1A0: fld1
0x9EC1A2: push    ecx
0x9EC1A3: fstp    [esp+4+var_4]; float
0x9EC1A6: mov     ecx, offset unk_B377B0
0x9EC1AB: push    offset aFpersjokestre; "fPersJokeStre"
0x9EC1B0: call    GameSetting_ConstrAndReg_float
0x9EC1B5: push    offset sub_A1F680; void (__cdecl *)()
0x9EC1BA: call    _atexit
0x9EC1BF: pop     ecx
0x9EC1C0: retn
