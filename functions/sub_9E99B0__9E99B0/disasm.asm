0x9E99B0: fld     ds:flt_A2FAAC
0x9E99B6: push    ecx
0x9E99B7: fstp    [esp+4+var_4]; float
0x9E99BA: push    offset aFarrowbounceli; "fArrowBounceLinearSpeed"
0x9E99BF: mov     ecx, offset flt_B37058
0x9E99C4: call    GameSetting_ConstrAndReg_float
0x9E99C9: push    offset sub_A1E7D0; void (__cdecl *)()
0x9E99CE: call    _atexit
0x9E99D3: pop     ecx
0x9E99D4: retn
