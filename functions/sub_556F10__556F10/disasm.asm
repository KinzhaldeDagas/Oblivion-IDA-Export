0x556F10: push    esi
0x556F11: mov     esi, [esp+4+arg_0]
0x556F15: cmp     dword ptr [esi+1Ch], 10h
0x556F19: jb      short loc_556F27
0x556F1B: mov     eax, [esi+8]
0x556F1E: push    eax
0x556F1F: call    FormHeapFree
0x556F24: add     esp, 4
0x556F27: xor     eax, eax
0x556F29: mov     dword ptr [esi+1Ch], 0Fh
0x556F30: mov     [esi+18h], eax
0x556F33: mov     [esi+8], al
0x556F36: pop     esi
0x556F37: retn    4
