0x9E6F30: fld     ds:flt_A34A80
0x9E6F36: push    ecx
0x9E6F37: fstp    [esp+4+var_4]; float
0x9E6F3A: push    offset aFaisocialrad_0; "fAISocialRadiusToTriggerConversationInt"...
0x9E6F3F: mov     ecx, offset fAISocialRadiusToTriggerConversationInt
0x9E6F44: call    GameSetting_ConstrAndReg_float
0x9E6F49: push    offset sub_A1D910; void (__cdecl *)()
0x9E6F4E: call    _atexit
0x9E6F53: pop     ecx
0x9E6F54: retn
