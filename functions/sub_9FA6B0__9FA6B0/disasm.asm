0x9FA6B0: fld     ds:flt_A67B5C
0x9FA6B6: push    ecx
0x9FA6B7: fstp    [esp+4+var_4]; float
0x9FA6BA: push    offset aFpathimpassabl; "fPathImpassableDoorPenalty"
0x9FA6BF: mov     ecx, offset unk_B3A430
0x9FA6C4: call    GameSetting_ConstrAndReg_float
0x9FA6C9: push    offset sub_A24090; void (__cdecl *)()
0x9FA6CE: call    _atexit
0x9FA6D3: pop     ecx
0x9FA6D4: retn
