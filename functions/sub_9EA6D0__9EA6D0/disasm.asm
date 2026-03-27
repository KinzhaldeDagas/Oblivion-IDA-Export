0x9EA6D0: fld     ds:dword_A46C30
0x9EA6D6: push    ecx
0x9EA6D7: fstp    [esp+4+var_4]; float
0x9EA6DA: push    offset aFaimagictimer; "fAIMagicTimer"
0x9EA6DF: mov     ecx, offset unk_B372E8
0x9EA6E4: call    GameSetting_ConstrAndReg_float
0x9EA6E9: push    offset sub_A1ECF0; void (__cdecl *)()
0x9EA6EE: call    _atexit
0x9EA6F3: pop     ecx
0x9EA6F4: retn
