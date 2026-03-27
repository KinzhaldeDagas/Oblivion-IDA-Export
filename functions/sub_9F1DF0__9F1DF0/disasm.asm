0x9F1DF0: push    offset aYouCannotDropA; "You cannot drop an equiped item until y"...
0x9F1DF5: push    offset aSdropequippedi; "sDropEquippedItemWarning"
0x9F1DFA: mov     ecx, offset dword_B38A08
0x9F1DFF: call    GameSetting_ConstrAndReg
0x9F1E04: push    offset sub_A21B30; void (__cdecl *)()
0x9F1E09: call    _atexit
0x9F1E0E: pop     ecx
0x9F1E0F: retn
