0x4E55A0: push    edi
0x4E55A1: mov     edi, ecx
0x4E55A3: cmp     dword ptr [edi+24h], 0
0x4E55A7: jz      short loc_4E55D0
0x4E55A9: push    esi
0x4E55AA: xor     esi, esi
0x4E55AC: cmp     [edi+30h], si
0x4E55B0: jbe     short loc_4E55CF
0x4E55B2: mov     eax, [edi+24h]
0x4E55B5: mov     ecx, [eax+4]
0x4E55B8: mov     ecx, [ecx+esi*4]; this
0x4E55BB: test    ecx, ecx
0x4E55BD: jz      short loc_4E55C4
0x4E55BF: call    GraphNode_ResetTransientSearchState; Verified resets graph-node scratch state: clears F/G/H at +0/+4/+8, predecessor at +0x0C, and masks flags at +0x10 with 0x68, preserving bits 0x08/0x20/0x40 while clearing the other transient bits.
0x4E55C4: movzx   edx, word ptr [edi+30h]
0x4E55C8: add     esi, 1
0x4E55CB: cmp     esi, edx
0x4E55CD: jb      short loc_4E55B2
0x4E55CF: pop     esi
0x4E55D0: pop     edi
0x4E55D1: retn
