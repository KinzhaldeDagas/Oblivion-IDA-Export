0x9EE350: fld     ds:flt_A35AA4
0x9EE356: push    ecx
0x9EE357: fstp    [esp+4+var_4]; float
0x9EE35A: push    offset aFmagicrangetar; "fMagicRangeTargetCostMult"
0x9EE35F: mov     ecx, offset fMagicRangeTargetCostMult
0x9EE364: call    GameSetting_ConstrAndReg_float
0x9EE369: push    offset sub_A202E0; void (__cdecl *)()
0x9EE36E: call    _atexit
0x9EE373: pop     ecx
0x9EE374: retn
