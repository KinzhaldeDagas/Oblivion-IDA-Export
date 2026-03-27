0x556F70: push    ebx
0x556F71: push    esi
0x556F72: mov     esi, [esp+8+arg_0]
0x556F76: mov     eax, [esi+24h]
0x556F79: xor     ebx, ebx
0x556F7B: cmp     eax, ebx
0x556F7D: jz      short loc_556F88
0x556F7F: push    eax
0x556F80: call    FormHeapFree
0x556F85: add     esp, 4
0x556F88: mov     [esi+24h], ebx
0x556F8B: mov     [esi+28h], ebx
0x556F8E: mov     [esi+2Ch], ebx
0x556F91: cmp     dword ptr [esi+18h], 10h
0x556F95: jb      short loc_556FA3
0x556F97: mov     eax, [esi+4]
0x556F9A: push    eax
0x556F9B: call    FormHeapFree
0x556FA0: add     esp, 4
0x556FA3: mov     [esi+14h], ebx
0x556FA6: mov     dword ptr [esi+18h], 0Fh
0x556FAD: mov     [esi+4], bl
0x556FB0: pop     esi
0x556FB1: pop     ebx
0x556FB2: retn    4
