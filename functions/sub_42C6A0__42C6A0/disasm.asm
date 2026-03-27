0x42C6A0: push    esi
0x42C6A1: mov     esi, ecx
0x42C6A3: xor     ecx, ecx
0x42C6A5: cmp     [esi+18h], ecx
0x42C6A8: jnz     short loc_42C6DB
0x42C6AA: mov     eax, [esi+154h]
0x42C6B0: mov     edx, [eax+1Ch]
0x42C6B3: mov     eax, [esi+0Ch]
0x42C6B6: cmp     eax, ecx
0x42C6B8: mov     [esi+1Ch], edx
0x42C6BB: mov     [esi+14h], ecx
0x42C6BE: mov     [esi+10h], ecx
0x42C6C1: mov     [esi+18h], ecx
0x42C6C4: jbe     short loc_42C6D2
0x42C6C6: push    eax; Size
0x42C6C7: call    FormHeapAlloc
0x42C6CC: add     esp, 4
0x42C6CF: mov     [esi+18h], eax
0x42C6D2: mov     al, 1
0x42C6D4: mov     [esi+24h], al
0x42C6D7: pop     esi
0x42C6D8: retn    8
0x42C6DB: mov     al, 1
0x42C6DD: pop     esi
0x42C6DE: retn    8
