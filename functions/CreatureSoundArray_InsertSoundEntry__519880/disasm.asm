0x519880: push    ebp
0x519881: mov     ebp, [esp+4+arg_0]
0x519885: test    ebp, ebp
0x519887: push    esi
0x519888: mov     esi, ecx
0x51988A: jz      short loc_5198ED
0x51988C: push    edi
0x51988D: mov     edi, [esp+0Ch+arg_4]
0x519891: cmp     edi, 9
0x519894: ja      short loc_5198EC
0x519896: cmp     dword ptr [esi+edi*4], 0
0x51989A: jnz     short loc_5198BE
0x51989C: push    8; Size
0x51989E: call    FormHeapAlloc
0x5198A3: add     esp, 4
0x5198A6: test    eax, eax
0x5198A8: jz      short loc_5198B9
0x5198AA: mov     dword ptr [eax], 0
0x5198B0: mov     dword ptr [eax+4], 0
0x5198B7: jmp     short loc_5198BB
0x5198B9: xor     eax, eax
0x5198BB: mov     [esi+edi*4], eax
0x5198BE: mov     eax, [esi+edi*4]
0x5198C1: test    eax, eax
0x5198C3: jz      short loc_5198EC
0x5198C5: mov     edx, [eax+4]
0x5198C8: test    edx, edx
0x5198CA: jnz     short loc_5198D0
0x5198CC: cmp     [eax], edx
0x5198CE: jz      short loc_5198F2
0x5198D0: mov     ecx, [eax]
0x5198D2: mov     cl, [ecx+4]
0x5198D5: cmp     cl, [ebp+4]
0x5198D8: ja      short loc_5198F2
0x5198DA: mov     ecx, eax
0x5198DC: mov     eax, edx
0x5198DE: test    eax, eax
0x5198E0: jnz     short loc_5198C5
0x5198E2: test    ecx, ecx
0x5198E4: jz      short loc_5198EC
0x5198E6: push    ebp
0x5198E7: call    BSSimpleList_PushBack
0x5198EC: pop     edi
0x5198ED: pop     esi
0x5198EE: pop     ebp
0x5198EF: retn    8
0x5198F2: push    ebp
0x5198F3: mov     ecx, eax
0x5198F5: call    BSSimpleList_PushFront
0x5198FA: pop     edi
0x5198FB: pop     esi
0x5198FC: pop     ebp
0x5198FD: retn    8
