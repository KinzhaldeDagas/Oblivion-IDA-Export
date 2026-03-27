0x9EC6C0: fld     ds:flt_A3744C
0x9EC6C6: push    ecx
0x9EC6C7: fstp    [esp+4+var_4]; float
0x9EC6CA: push    offset aFdetectiontime; "fDetectionTimerSetting"
0x9EC6CF: mov     ecx, offset fDetectionTimerSetting
0x9EC6D4: call    GameSetting_ConstrAndReg_float
0x9EC6D9: push    offset sub_A1F870; void (__cdecl *)()
0x9EC6DE: call    _atexit
0x9EC6E3: pop     ecx
0x9EC6E4: retn
