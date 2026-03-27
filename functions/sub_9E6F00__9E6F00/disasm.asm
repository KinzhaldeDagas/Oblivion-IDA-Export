0x9E6F00: fld     ds:flt_A342A0
0x9E6F06: push    ecx
0x9E6F07: fstp    [esp+4+var_4]; float
0x9E6F0A: push    offset aFaisocialradiu; "fAISocialRadiusToTriggerConversation"
0x9E6F0F: mov     ecx, offset fAISocialRadiusToTriggerConversation
0x9E6F14: call    GameSetting_ConstrAndReg_float
0x9E6F19: push    offset sub_A1D900; void (__cdecl *)()
0x9E6F1E: call    _atexit
0x9E6F23: pop     ecx
0x9E6F24: retn
