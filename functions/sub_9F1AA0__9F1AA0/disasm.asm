0x9F1AA0: push    offset aASpellWithThis; "A spell with this name already exists."
0x9F1AA5: push    offset aSduplicatename; "sDuplicateName"
0x9F1AAA: mov     ecx, offset dword_B38990
0x9F1AAF: call    GameSetting_ConstrAndReg
0x9F1AB4: push    offset sub_A21A40; void (__cdecl *)()
0x9F1AB9: call    _atexit
0x9F1ABE: pop     ecx
0x9F1ABF: retn
