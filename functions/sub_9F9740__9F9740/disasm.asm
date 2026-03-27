0x9F9740: push    offset aLuck; "Luck"
0x9F9745: push    offset aSattributena_6; "sAttributeNameLuck"
0x9F974A: mov     ecx, offset sAttributeNameLuck
0x9F974F: call    GameSetting_ConstrAndReg
0x9F9754: push    offset sub_A23910; void (__cdecl *)()
0x9F9759: call    _atexit
0x9F975E: pop     ecx
0x9F975F: retn
