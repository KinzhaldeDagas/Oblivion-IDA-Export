0x7A3440: push    esi
0x7A3441: mov     esi, [esp+4+arg_0]
0x7A3445: cmp     dword ptr [esi+2Ch], 10h
0x7A3449: jb      short loc_7A3457
0x7A344B: mov     eax, [esi+18h]
0x7A344E: push    eax
0x7A344F: call    FormHeapFree
0x7A3454: add     esp, 4
0x7A3457: xor     eax, eax
0x7A3459: mov     dword ptr [esi+2Ch], 0Fh
0x7A3460: mov     [esi+28h], eax
0x7A3463: mov     [esi+18h], al
0x7A3466: pop     esi
0x7A3467: retn    4
