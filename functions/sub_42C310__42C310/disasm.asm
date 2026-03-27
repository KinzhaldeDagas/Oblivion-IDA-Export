0x42C310: push    esi
0x42C311: mov     esi, ecx
0x42C313: xor     ecx, ecx
0x42C315: cmp     [esi+18h], ecx
0x42C318: jz      short loc_42C320
0x42C31A: mov     al, 1
0x42C31C: pop     esi
0x42C31D: retn    8
0x42C320: mov     eax, [esi+154h]
0x42C326: mov     edx, [eax+1Ch]
0x42C329: mov     eax, [esi+0Ch]
0x42C32C: cmp     eax, ecx
0x42C32E: mov     [esi+1Ch], edx
0x42C331: mov     [esi+14h], ecx
0x42C334: mov     [esi+10h], ecx
0x42C337: mov     [esi+18h], ecx
0x42C33A: jbe     short loc_42C348
0x42C33C: push    eax; Size
0x42C33D: call    FormHeapAlloc
0x42C342: add     esp, 4
0x42C345: mov     [esi+18h], eax
0x42C348: mov     al, 1
0x42C34A: mov     [esi+24h], al
0x42C34D: pop     esi
0x42C34E: retn    8
