0x9F97A0: push    offset aFatigue; "Fatigue"
0x9F97A5: push    offset aSderivedattr_1; "sDerivedAttributeNameFatigue"
0x9F97AA: mov     ecx, offset sDerivedAttributeNameFatigue
0x9F97AF: call    GameSetting_ConstrAndReg
0x9F97B4: push    offset sub_A23940; void (__cdecl *)()
0x9F97B9: call    _atexit
0x9F97BE: pop     ecx
0x9F97BF: retn
