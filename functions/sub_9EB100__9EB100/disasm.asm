0x9EB100: fld     ds:kHeadBodyNormalMatchRadius
0x9EB106: push    ecx
0x9EB107: fstp    [esp+4+var_4]; float
0x9EB10A: push    offset aFjumpdoublemul; "fJumpDoubleMult"
0x9EB10F: mov     ecx, (offset flt_B37488+20h)
0x9EB114: call    GameSetting_ConstrAndReg_float
0x9EB119: push    offset sub_A1F070; void (__cdecl *)()
0x9EB11E: call    _atexit
0x9EB123: pop     ecx
0x9EB124: retn
