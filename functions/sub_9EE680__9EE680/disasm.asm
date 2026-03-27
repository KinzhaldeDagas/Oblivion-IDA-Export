0x9EE680: fld     ds:flt_A3F458
0x9EE686: push    ecx
0x9EE687: fstp    [esp+4+var_4]; float
0x9EE68A: push    offset aFmagicdefaultt; "fMagicDefaultTouchDistance"
0x9EE68F: mov     ecx, offset fMagicDefaultTouchDistance
0x9EE694: call    GameSetting_ConstrAndReg_float
0x9EE699: push    offset sub_A203F0; void (__cdecl *)()
0x9EE69E: call    _atexit
0x9EE6A3: pop     ecx
0x9EE6A4: retn
