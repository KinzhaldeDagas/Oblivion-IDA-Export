0x9ED460: fld     ds:flt_A41328
0x9ED466: push    ecx
0x9ED467: fstp    [esp+4+var_4]; float
0x9ED46A: push    offset aFsubmergedangu; "fSubmergedAngularDamping"
0x9ED46F: mov     ecx, offset fSubmergedAngularDamping
0x9ED474: call    GameSetting_ConstrAndReg_float
0x9ED479: push    offset sub_A1FD20; void (__cdecl *)()
0x9ED47E: call    _atexit
0x9ED483: pop     ecx
0x9ED484: retn
