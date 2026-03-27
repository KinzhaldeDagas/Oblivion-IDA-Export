0x9F09B0: push    offset aBrokenItemsCan; "Broken items cannot be equipped until t"...
0x9F09B5: push    offset aScantequipbrok; "sCantEquipBrokenItem"
0x9F09BA: mov     ecx, offset dword_B38558
0x9F09BF: call    GameSetting_ConstrAndReg
0x9F09C4: push    offset sub_A211D0; void (__cdecl *)()
0x9F09C9: call    _atexit
0x9F09CE: pop     ecx
0x9F09CF: retn
