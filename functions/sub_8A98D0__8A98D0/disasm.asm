0x8A98D0: push    esi
0x8A98D1: mov     esi, ecx
0x8A98D3: mov     ecx, [esi+50h]
0x8A98D6: mov     eax, [ecx]
0x8A98D8: call    dword ptr [eax+8]
0x8A98DB: cmp     eax, 6
0x8A98DE: jz      short loc_8A98F1
0x8A98E0: mov     ecx, [esi+50h]
0x8A98E3: mov     edx, [ecx]
0x8A98E5: call    dword ptr [edx+8]
0x8A98E8: cmp     eax, 7
0x8A98EB: jz      short loc_8A98F1
0x8A98ED: xor     eax, eax
0x8A98EF: pop     esi
0x8A98F0: retn
0x8A98F1: mov     eax, [esi+50h]
0x8A98F4: mov     eax, [eax+0F0h]
0x8A98FA: pop     esi
0x8A98FB: retn
