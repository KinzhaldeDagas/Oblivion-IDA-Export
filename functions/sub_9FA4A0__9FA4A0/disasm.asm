0x9FA4A0: fld     ds:flt_A67558
0x9FA4A6: push    ecx
0x9FA4A7: fstp    [esp+4+var_4]; float
0x9FA4AA: push    offset aFtargetsearchr; "fTargetSearchRadius"
0x9FA4AF: mov     ecx, offset fTargetSearchRadius
0x9FA4B4: call    GameSetting_ConstrAndReg_float
0x9FA4B9: push    offset sub_A23FC0; void (__cdecl *)()
0x9FA4BE: call    _atexit
0x9FA4C3: pop     ecx
0x9FA4C4: retn
