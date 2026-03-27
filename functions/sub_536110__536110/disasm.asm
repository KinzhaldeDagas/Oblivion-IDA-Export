0x536110: mov     eax, [esp+arg_0]
0x536114: push    esi
0x536115: xor     esi, esi
0x536117: test    eax, eax
0x536119: jz      short loc_536132
0x53611B: push    eax
0x53611C: call    sub_8AFCE0
0x536121: add     esp, 4
0x536124: test    eax, eax
0x536126: jz      short loc_536132
0x536128: pop     esi
0x536129: mov     [esp+arg_0], eax
0x53612D: jmp     sub_4DC270
0x536132: mov     eax, esi
0x536134: pop     esi
0x536135: retn
