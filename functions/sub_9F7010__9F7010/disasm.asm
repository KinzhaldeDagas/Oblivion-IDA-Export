0x9F7010: push    offset aMouthHighLow; "Mouth high/low"
0x9F7015: push    offset aSmouthhigh; "sMouthhigh"
0x9F701A: mov     ecx, offset dword_B39178
0x9F701F: call    GameSetting_ConstrAndReg
0x9F7024: push    offset sub_A22A10; void (__cdecl *)()
0x9F7029: call    _atexit
0x9F702E: pop     ecx
0x9F702F: retn
