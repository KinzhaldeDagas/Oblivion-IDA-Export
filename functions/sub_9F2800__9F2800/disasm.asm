0x9F2800: push    offset aRemoveIt; "Remove It"
0x9F2805: push    offset aSremovemarker; "sRemoveMarker"
0x9F280A: mov     ecx, offset dword_B38C88
0x9F280F: call    GameSetting_ConstrAndReg
0x9F2814: push    offset sub_A22030; void (__cdecl *)()
0x9F2819: call    _atexit
0x9F281E: pop     ecx
0x9F281F: retn
