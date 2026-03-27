0x6C4BD0: push    ebx
0x6C4BD1: push    edi
0x6C4BD2: mov     ebx, ecx
0x6C4BD4: xor     edi, edi
0x6C4BD6: cmp     [ebx+46h], di
0x6C4BDA: jbe     short loc_6C4C04
0x6C4BDC: push    esi
0x6C4BDD: lea     ecx, [ecx+0]
0x6C4BE0: mov     eax, [ebx+40h]
0x6C4BE3: mov     esi, [eax+edi*4]
0x6C4BE6: test    esi, esi
0x6C4BE8: jz      short loc_6C4BF8
0x6C4BEA: mov     ecx, esi
0x6C4BEC: call    sub_6CAC60
0x6C4BF1: mov     dword ptr [esi+40h], 0
0x6C4BF8: movzx   ecx, word ptr [ebx+46h]
0x6C4BFC: add     edi, 1
0x6C4BFF: cmp     edi, ecx
0x6C4C01: jb      short loc_6C4BE0
0x6C4C03: pop     esi
0x6C4C04: lea     ecx, [ebx+3Ch]
0x6C4C07: call    sub_739670
0x6C4C0C: pop     edi
0x6C4C0D: lea     ecx, [ebx+58h]
0x6C4C10: pop     ebx
0x6C4C11: jmp     NiTMap_Clear
