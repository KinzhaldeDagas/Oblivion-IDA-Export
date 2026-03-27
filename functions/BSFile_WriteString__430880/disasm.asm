0x430880: mov     edx, [esp+arg_0]
0x430884: movzx   eax, word ptr [edx+4]
0x430888: cmp     ax, 0FFFFh
0x43088C: push    esi
0x43088D: mov     esi, ecx
0x43088F: jnz     short loc_4308A5
0x430891: mov     eax, [edx]
0x430893: push    edi
0x430894: lea     edi, [eax+1]
0x430897: mov     cl, [eax]
0x430899: add     eax, 1
0x43089C: test    cl, cl
0x43089E: jnz     short loc_430897
0x4308A0: sub     eax, edi
0x4308A2: pop     edi
0x4308A3: jmp     short loc_4308A8
0x4308A5: movzx   eax, ax
0x4308A8: mov     ecx, [edx]
0x4308AA: push    1
0x4308AC: lea     edx, [esp+8+arg_0]
0x4308B0: push    edx
0x4308B1: add     eax, 1
0x4308B4: push    eax
0x4308B5: mov     eax, [esi+8]
0x4308B8: push    ecx
0x4308B9: push    esi
0x4308BA: mov     [esp+18h+arg_0], 1
0x4308C2: call    eax
0x4308C4: add     [esi+148h], eax
0x4308CA: add     esp, 14h
0x4308CD: pop     esi
0x4308CE: retn    4
