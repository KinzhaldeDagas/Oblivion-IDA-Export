0x9E89D0: fld     ds:flt_A56F44
0x9E89D6: push    ecx
0x9E89D7: fstp    [esp+4+var_4]; float
0x9E89DA: push    offset aFaifacetargeta; "fAIFaceTargetAnimationAngle"
0x9E89DF: mov     ecx, offset unk_B36DA0
0x9E89E4: call    GameSetting_ConstrAndReg_float
0x9E89E9: push    offset sub_A1E260; void (__cdecl *)()
0x9E89EE: call    _atexit
0x9E89F3: pop     ecx
0x9E89F4: retn
