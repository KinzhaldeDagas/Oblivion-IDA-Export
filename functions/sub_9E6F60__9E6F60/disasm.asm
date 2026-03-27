0x9E6F60: fld     ds:flt_A5793C
0x9E6F66: push    ecx
0x9E6F67: fstp    [esp+4+var_4]; float
0x9E6F6A: push    offset aFaisocialchanc; "fAISocialchanceForConversation"
0x9E6F6F: mov     ecx, offset fAISocialchanceForConversation
0x9E6F74: call    GameSetting_ConstrAndReg_float
0x9E6F79: push    offset sub_A1D920; void (__cdecl *)()
0x9E6F7E: call    _atexit
0x9E6F83: pop     ecx
0x9E6F84: retn
