0x9FA6B0: fld     ds:flt_A67B5C; Verified setting registration: registers GameSettingFloat fPathImpassableDoorPenalty with default 409600.0 and pairs it with atexit cleanup GameSettings_Unregister_fPathImpassableDoorPenalty.
0x9FA6B6: push    ecx
0x9FA6B7: fstp    [esp+4+var_4]; float
0x9FA6BA: push    offset aFpathimpassabl; "fPathImpassableDoorPenalty"
0x9FA6BF: mov     ecx, offset fPathImpassableDoorPenalty
0x9FA6C4: call    GameSetting_ConstrAndReg_float
0x9FA6C9: push    offset GameSettings_Unregister_fPathImpassableDoorPenalty; void (__cdecl *)()
0x9FA6CE: call    _atexit
0x9FA6D3: pop     ecx
0x9FA6D4: retn
