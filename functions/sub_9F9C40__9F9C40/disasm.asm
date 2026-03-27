0x9F9C40: push    offset aLuckDescriptio; "Luck Description"
0x9F9C45: push    offset aSattributede_6; "sAttributeDescLuck"
0x9F9C4A: mov     ecx, offset sAttributeDescLuck
0x9F9C4F: call    GameSetting_ConstrAndReg
0x9F9C54: push    offset sub_A23B90; void (__cdecl *)()
0x9F9C59: call    _atexit
0x9F9C5E: pop     ecx
0x9F9C5F: retn
