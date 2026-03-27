0x9E2FC0: fld     ds:flt_A3F514
0x9E2FC6: push    ecx
0x9E2FC7: fstp    [esp+4+var_4]; float
0x9E2FCA: push    offset aFseendataupdat; "fSeenDataUpdateRadius"
0x9E2FCF: mov     ecx, offset fSeenDataUpdateRadius
0x9E2FD4: call    GameSetting_ConstrAndReg_float
0x9E2FD9: push    offset sub_A1BAE0; void (__cdecl *)()
0x9E2FDE: call    _atexit
0x9E2FE3: pop     ecx
0x9E2FE4: retn
