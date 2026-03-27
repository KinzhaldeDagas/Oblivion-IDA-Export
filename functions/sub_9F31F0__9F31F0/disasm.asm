0x9F31F0: push    offset aThatKeyCannotB; "That key cannot be remapped"
0x9F31F5: push    offset aSkeylocked; "sKeyLocked"
0x9F31FA: mov     ecx, offset dword_B38ED0
0x9F31FF: call    GameSetting_ConstrAndReg
0x9F3204: push    offset sub_A224C0; void (__cdecl *)()
0x9F3209: call    _atexit
0x9F320E: pop     ecx
0x9F320F: retn
