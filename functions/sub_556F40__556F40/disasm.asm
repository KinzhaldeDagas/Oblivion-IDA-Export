0x556F40: push    esi
0x556F41: mov     esi, [esp+4+arg_0]
0x556F45: cmp     dword ptr [esi+28h], 10h
0x556F49: jb      short loc_556F57
0x556F4B: mov     eax, [esi+14h]
0x556F4E: push    eax
0x556F4F: call    FormHeapFree
0x556F54: add     esp, 4
0x556F57: xor     eax, eax
0x556F59: mov     dword ptr [esi+28h], 0Fh
0x556F60: mov     [esi+24h], eax
0x556F63: mov     [esi+14h], al
0x556F66: pop     esi
0x556F67: retn    4
