0x42C360: mov     eax, [esp+arg_4]
0x42C364: sub     eax, 1
0x42C367: push    esi
0x42C368: mov     esi, [ecx+148h]
0x42C36E: jz      short loc_42C3A3
0x42C370: sub     eax, 1
0x42C373: mov     edx, [esp+4+arg_0]
0x42C377: jz      short loc_42C387
0x42C379: mov     eax, [ecx+150h]
0x42C37F: cmp     edx, eax
0x42C381: jbe     short loc_42C3B9
0x42C383: mov     edx, eax
0x42C385: jmp     short loc_42C3B9
0x42C387: test    edx, edx
0x42C389: jge     short loc_42C38D
0x42C38B: neg     edx
0x42C38D: mov     eax, [ecx+150h]
0x42C393: cmp     edx, eax
0x42C395: jbe     short loc_42C399
0x42C397: mov     edx, eax
0x42C399: sub     eax, edx
0x42C39B: mov     [ecx+148h], eax
0x42C3A1: jmp     short loc_42C3BF
0x42C3A3: mov     eax, [esp+4+arg_0]
0x42C3A7: mov     edx, [ecx+150h]
0x42C3AD: add     eax, esi
0x42C3AF: cmp     eax, edx
0x42C3B1: mov     [ecx+148h], eax
0x42C3B7: jbe     short loc_42C3BF
0x42C3B9: mov     [ecx+148h], edx
0x42C3BF: mov     edx, [ecx+148h]
0x42C3C5: sub     edx, esi
0x42C3C7: add     [ecx+14h], edx
0x42C3CA: mov     eax, [ecx+14h]
0x42C3CD: cmp     eax, [ecx+10h]
0x42C3D0: pop     esi
0x42C3D1: jbe     short locret_42C3D8
0x42C3D3: call    NiFile_Flush
0x42C3D8: retn    8
