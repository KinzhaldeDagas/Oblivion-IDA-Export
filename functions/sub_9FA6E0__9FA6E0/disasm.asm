0x9FA6E0: fld     ds:flt_A3F4E0; Verified setting registration: registers GameSettingFloat fPathMustLockpickPenalty with default 40960.0 and pairs it with atexit cleanup GameSettings_Unregister_fPathMustLockpickPenalty.
0x9FA6E6: push    ecx
0x9FA6E7: fstp    [esp+4+var_4]; float
0x9FA6EA: push    offset aFpathmustlockp; "fPathMustLockpickPenalty"
0x9FA6EF: mov     ecx, offset fPathMustLockpickPenalty
0x9FA6F4: call    GameSetting_ConstrAndReg_float
0x9FA6F9: push    offset GameSettings_Unregister_fPathMustLockpickPenalty; void (__cdecl *)()
0x9FA6FE: call    _atexit
0x9FA703: pop     ecx
0x9FA704: retn
