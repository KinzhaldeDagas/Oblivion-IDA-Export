0x9F09D0: push    offset aUnableToRemove; "Unable to remove the worn item."
0x9F09D5: push    offset aScantremovewor; "sCantRemoveWornItem"
0x9F09DA: mov     ecx, offset dword_B38560
0x9F09DF: call    GameSetting_ConstrAndReg
0x9F09E4: push    offset sub_A211E0; void (__cdecl *)()
0x9F09E9: call    _atexit
0x9F09EE: pop     ecx
0x9F09EF: retn
