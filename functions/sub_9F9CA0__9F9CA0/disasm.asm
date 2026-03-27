0x9F9CA0: push    offset aFatigueDescrip; "Fatigue Description"
0x9F9CA5: push    offset aSderivedattr_5; "sDerivedAttributeDescFatigue"
0x9F9CAA: mov     ecx, offset sDerivedAttributeDescFatigue
0x9F9CAF: call    GameSetting_ConstrAndReg
0x9F9CB4: push    offset sub_A23BC0; void (__cdecl *)()
0x9F9CB9: call    _atexit
0x9F9CBE: pop     ecx
0x9F9CBF: retn
