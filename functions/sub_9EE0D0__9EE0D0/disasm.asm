0x9EE0D0: fld     ds:flt_A2FB0C
0x9EE0D6: push    ecx
0x9EE0D7: fstp    [esp+4+var_4]; float
0x9EE0DA: push    offset aFactoranimzadj; "fActorAnimZAdjust"
0x9EE0DF: mov     ecx, offset fActorAnimZAdjust
0x9EE0E4: call    GameSetting_ConstrAndReg_float
0x9EE0E9: push    offset sub_A20200; void (__cdecl *)()
0x9EE0EE: call    _atexit
0x9EE0F3: pop     ecx
0x9EE0F4: retn
