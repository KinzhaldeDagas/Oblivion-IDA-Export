0x4FB510: push    esi
0x4FB511: mov     esi, ecx
0x4FB513: cmp     dword ptr [esi+8], 0
0x4FB517: push    edi
0x4FB518: jnz     short loc_4FB53C
0x4FB51A: push    8; Size
0x4FB51C: call    FormHeapAlloc
0x4FB521: add     esp, 4
0x4FB524: test    eax, eax
0x4FB526: jz      short loc_4FB537
0x4FB528: mov     dword ptr [eax], 0
0x4FB52E: mov     dword ptr [eax+4], 0
0x4FB535: jmp     short loc_4FB539
0x4FB537: xor     eax, eax
0x4FB539: mov     [esi+8], eax
0x4FB53C: mov     eax, [esi+8]
0x4FB53F: test    eax, eax
0x4FB541: mov     edi, [esp+8+arg_0]
0x4FB545: jz      short loc_4FB558
0x4FB547: mov     ecx, [eax]
0x4FB549: test    ecx, ecx
0x4FB54B: jz      short loc_4FB558
0x4FB54D: cmp     [ecx], edi
0x4FB54F: jz      short loc_4FB574
0x4FB551: mov     eax, [eax+4]
0x4FB554: test    eax, eax
0x4FB556: jnz     short loc_4FB547
0x4FB558: push    8; Size
0x4FB55A: call    FormHeapAlloc
0x4FB55F: add     esp, 4
0x4FB562: mov     [eax], edi
0x4FB564: mov     dword ptr [eax+4], 0
0x4FB56B: mov     ecx, [esi+8]
0x4FB56E: push    eax
0x4FB56F: call    BSSimpleList_PushFront
0x4FB574: pop     edi
0x4FB575: pop     esi
0x4FB576: retn    4
