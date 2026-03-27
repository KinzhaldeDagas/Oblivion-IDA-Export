0x9F24E0: push    offset aCharge; "Charge"
0x9F24E5: push    offset aSmisccharge; "sMiscCharge"
0x9F24EA: mov     ecx, offset sMiscCharge
0x9F24EF: call    GameSetting_ConstrAndReg
0x9F24F4: push    offset sub_A21EA0; void (__cdecl *)()
0x9F24F9: call    _atexit
0x9F24FE: pop     ecx
0x9F24FF: retn
