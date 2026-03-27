0x725FC0: mov     eax, [esp+arg_0]
0x725FC4: test    eax, eax
0x725FC6: jnz     short loc_725FD0
0x725FC8: cmp     [ecx+0Ch], al
0x725FCB: jz      short loc_725FD0
0x725FCD: mov     eax, [ecx+8]
0x725FD0: push    eax
0x725FD1: call    FormHeapFree
0x725FD6: pop     ecx
0x725FD7: retn    4
