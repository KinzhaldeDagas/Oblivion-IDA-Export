0x9A85C0: push    ebp
0x9A85C1: mov     ebp, [esp+4+Src]
0x9A85C5: test    ebp, ebp
0x9A85C7: push    esi
0x9A85C8: mov     esi, ecx
0x9A85CA: jz      short loc_9A863B
0x9A85CC: cmp     byte ptr [ebp+0], 0
0x9A85D0: jz      short loc_9A863B
0x9A85D2: mov     eax, ebp
0x9A85D4: lea     edx, [eax+1]
0x9A85D7: mov     cl, [eax]
0x9A85D9: add     eax, 1
0x9A85DC: test    cl, cl
0x9A85DE: jnz     short loc_9A85D7
0x9A85E0: mov     ecx, [esi+24h]
0x9A85E3: sub     eax, edx
0x9A85E5: test    ecx, ecx
0x9A85E7: push    edi; Src
0x9A85E8: lea     edi, [eax+1]
0x9A85EB: jz      short loc_9A8615
0x9A85ED: mov     eax, ecx
0x9A85EF: lea     ebp, [eax+1]
0x9A85F2: mov     dl, [eax]
0x9A85F4: add     eax, 1
0x9A85F7: test    dl, dl
0x9A85F9: jnz     short loc_9A85F2
0x9A85FB: sub     eax, ebp
0x9A85FD: cmp     eax, edi
0x9A85FF: jnb     short loc_9A8611
0x9A8601: push    ecx
0x9A8602: call    FormHeapFree
0x9A8607: add     esp, 4
0x9A860A: mov     dword ptr [esi+24h], 0
0x9A8611: mov     ebp, [esp+0Ch+Src]
0x9A8615: cmp     dword ptr [esi+24h], 0
0x9A8619: jnz     short loc_9A8627
0x9A861B: push    edi; Size
0x9A861C: call    FormHeapAlloc
0x9A8621: add     esp, 4
0x9A8624: mov     [esi+24h], eax
0x9A8627: mov     eax, [esi+24h]
0x9A862A: push    ebp; Src
0x9A862B: push    edi; SizeInBytes
0x9A862C: push    eax; Dst
0x9A862D: call    _strcpy_s
0x9A8632: add     esp, 0Ch
0x9A8635: pop     edi
0x9A8636: pop     esi
0x9A8637: pop     ebp
0x9A8638: retn    4
0x9A863B: mov     ecx, [esi+24h]
0x9A863E: push    ecx
0x9A863F: call    FormHeapFree
0x9A8644: add     esp, 4
0x9A8647: mov     dword ptr [esi+24h], 0
0x9A864E: pop     esi
0x9A864F: pop     ebp
0x9A8650: retn    4
