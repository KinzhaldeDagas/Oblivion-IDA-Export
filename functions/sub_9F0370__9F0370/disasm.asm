0x9F0370: push    offset aGoverningAttri; "Governing Attribute: "
0x9F0375: push    offset aSgoverningattr; "sGoverningAttribute"
0x9F037A: mov     ecx, offset dword_B383C8
0x9F037F: call    GameSetting_ConstrAndReg
0x9F0384: push    offset sub_A20EB0; void (__cdecl *)()
0x9F0389: call    _atexit
0x9F038E: pop     ecx
0x9F038F: retn
