0x9F2540: push    offset aConstantEffect; "Constant Effect"
0x9F2545: push    offset aSmiscconstante; "sMiscConstantEffect"
0x9F254A: mov     ecx, offset sMiscConstantEffect
0x9F254F: call    GameSetting_ConstrAndReg
0x9F2554: push    offset sub_A21ED0; void (__cdecl *)()
0x9F2559: call    _atexit
0x9F255E: pop     ecx
0x9F255F: retn
