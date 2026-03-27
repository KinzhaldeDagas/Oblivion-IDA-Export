0x9EFA20: push    32h ; '2'
0x9EFA22: push    offset aIshockbranchse; "iShockBranchSegmentsPerBolt"
0x9EFA27: mov     ecx, offset iShockBranchSegmentsPerBolt
0x9EFA2C: call    GameSetting_ConstrAndReg
0x9EFA31: push    offset sub_A20AB0; void (__cdecl *)()
0x9EFA36: call    _atexit
0x9EFA3B: pop     ecx
0x9EFA3C: retn
