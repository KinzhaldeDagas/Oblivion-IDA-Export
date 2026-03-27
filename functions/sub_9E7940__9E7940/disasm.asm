0x9E7940: fld     ds:flt_A342A0
0x9E7946: push    ecx
0x9E7947: fstp    [esp+4+var_4]; float
0x9E794A: push    offset aFaimaxheadtrac; "fAIMaxHeadTrackDistanceFromPC"
0x9E794F: mov     ecx, offset flt_B36AB8
0x9E7954: call    GameSetting_ConstrAndReg_float
0x9E7959: push    offset sub_A1DC90; void (__cdecl *)()
0x9E795E: call    _atexit
0x9E7963: pop     ecx
0x9E7964: retn
