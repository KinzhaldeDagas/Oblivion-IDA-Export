0x9EB450: fld     ds:flt_A31C80
0x9EB456: push    ecx
0x9EB457: fstp    [esp+4+var_4]; float
0x9EB45A: push    offset aFfatiguereturn; "fFatigueReturnBase"
0x9EB45F: mov     ecx, offset fFatigueReturnBase
0x9EB464: call    GameSetting_ConstrAndReg_float
0x9EB469: push    offset sub_A1F1A0; void (__cdecl *)()
0x9EB46E: call    _atexit
0x9EB473: pop     ecx
0x9EB474: retn
