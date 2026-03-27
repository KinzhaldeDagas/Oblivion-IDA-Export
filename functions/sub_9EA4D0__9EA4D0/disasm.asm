0x9EA4D0: fld     ds:dword_A46C30
0x9EA4D6: push    ecx
0x9EA4D7: fstp    [esp+4+var_4]; float
0x9EA4DA: push    offset aFcombatmonitor; "fCombatMonitorBuffsTimer"
0x9EA4DF: mov     ecx, offset flt_B37288
0x9EA4E4: call    GameSetting_ConstrAndReg_float
0x9EA4E9: push    offset sub_A1EC30; void (__cdecl *)()
0x9EA4EE: call    _atexit
0x9EA4F3: pop     ecx
0x9EA4F4: retn
