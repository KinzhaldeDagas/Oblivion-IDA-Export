0x9FA9B0: fld     ds:flt_A2FAAC
0x9FA9B6: push    ecx
0x9FA9B7: fstp    [esp+4+var_4]; float
0x9FA9BA: push    offset aFpathavoidan_1; "fPathAvoidanceObstacleCheckTimeLimit"
0x9FA9BF: mov     ecx, offset unk_B3A4B0
0x9FA9C4: call    GameSetting_ConstrAndReg_float
0x9FA9C9: push    offset sub_A24190; void (__cdecl *)()
0x9FA9CE: call    _atexit
0x9FA9D3: pop     ecx
0x9FA9D4: retn
