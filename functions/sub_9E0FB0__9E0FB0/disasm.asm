0x9E0FB0: fld     ds:flt_A41328
0x9E0FB6: push    ecx
0x9E0FB7: fstp    [esp+4+var_4]; float
0x9E0FBA: push    offset aFaidefaultat_4; "fAIDefaultAttackDuringAttackMult"
0x9E0FBF: mov     ecx, offset flt_B35718
0x9E0FC4: call    GameSetting_ConstrAndReg_float
0x9E0FC9: push    offset sub_A1AD60; void (__cdecl *)()
0x9E0FCE: call    _atexit
0x9E0FD3: pop     ecx
0x9E0FD4: retn
