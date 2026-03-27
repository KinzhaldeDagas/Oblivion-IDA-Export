0x9E5ED0: fld     ds:flt_A41304
0x9E5ED6: push    ecx
0x9E5ED7: fstp    [esp+4+var_4]; float
0x9E5EDA: push    offset aFweatherflashd; "fWeatherFlashDuration"
0x9E5EDF: mov     ecx, offset flt_B36640
0x9E5EE4: call    GameSetting_ConstrAndReg_float
0x9E5EE9: push    offset sub_A1D350; void (__cdecl *)()
0x9E5EEE: call    _atexit
0x9E5EF3: pop     ecx
0x9E5EF4: retn
