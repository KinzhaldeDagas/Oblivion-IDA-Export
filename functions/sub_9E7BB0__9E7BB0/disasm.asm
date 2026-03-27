0x9E7BB0: fld     ds:flt_A57EF8
0x9E7BB6: push    ecx
0x9E7BB7: fstp    [esp+4+var_4]; float
0x9E7BBA: push    offset aFaiinteriors_0; "fAIInteriorSpectatorDistance"
0x9E7BBF: mov     ecx, offset flt_B36B20
0x9E7BC4: call    GameSetting_ConstrAndReg_float
0x9E7BC9: push    offset sub_A1DD60; void (__cdecl *)()
0x9E7BCE: call    _atexit
0x9E7BD3: pop     ecx
0x9E7BD4: retn
