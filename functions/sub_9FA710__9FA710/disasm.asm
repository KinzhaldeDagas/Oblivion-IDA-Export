0x9FA710: fld     ds:flt_A3F4E0; Verified setting registration: registers GameSettingFloat fPathMinimalUseDoorPenalty with default 40960.0 and pairs it with atexit cleanup GameSettings_Unregister_fPathMinimalUseDoorPenalty.
0x9FA716: push    ecx
0x9FA717: fstp    [esp+4+var_4]; float
0x9FA71A: push    offset aFpathminimalus; "fPathMinimalUseDoorPenalty"
0x9FA71F: mov     ecx, offset fPathMinimalUseDoorPenalty
0x9FA724: call    GameSetting_ConstrAndReg_float
0x9FA729: push    offset GameSettings_Unregister_fPathMinimalUseDoorPenalty; void (__cdecl *)()
0x9FA72E: call    _atexit
0x9FA733: pop     ecx
0x9FA734: retn
