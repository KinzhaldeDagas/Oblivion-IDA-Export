0x8DC380: push    ebx
0x8DC381: push    esi
0x8DC382: mov     esi, [esp+8+arg_0]
0x8DC386: push    edi
0x8DC387: mov     edi, [esi+0D4h]
0x8DC38D: dec     edi
0x8DC38E: js      short loc_8DC3AA
0x8DC390: mov     ebx, [esp+0Ch+arg_4]
0x8DC394: mov     eax, [esi+0D0h]
0x8DC39A: mov     ecx, [eax+edi*4]
0x8DC39D: test    ecx, ecx
0x8DC39F: jz      short loc_8DC3A7
0x8DC3A1: mov     edx, [ecx]
0x8DC3A3: push    ebx
0x8DC3A4: call    dword ptr [edx+4]
0x8DC3A7: dec     edi
0x8DC3A8: jns     short loc_8DC394
0x8DC3AA: mov     edx, [esi+0D4h]
0x8DC3B0: dec     edx
0x8DC3B1: js      short loc_8DC3FD
0x8DC3B3: mov     eax, [esi+0D0h]
0x8DC3B9: cmp     dword ptr [eax+edx*4], 0
0x8DC3BD: jnz     short loc_8DC3FA
0x8DC3BF: mov     ebx, [esi+0D4h]
0x8DC3C5: dec     ebx
0x8DC3C6: mov     ecx, ebx
0x8DC3C8: cmp     edx, ecx
0x8DC3CA: mov     [esi+0D4h], ebx
0x8DC3D0: mov     eax, edx
0x8DC3D2: jge     short loc_8DC3FA
0x8DC3D4: jmp     short loc_8DC3E0
0x8DC3D6: align 10h
0x8DC3E0: mov     ecx, [esi+0D0h]
0x8DC3E6: mov     edi, [ecx+eax*4+4]
0x8DC3EA: lea     ecx, [ecx+eax*4]
0x8DC3ED: mov     [ecx], edi
0x8DC3EF: mov     ecx, [esi+0D4h]
0x8DC3F5: inc     eax
0x8DC3F6: cmp     eax, ecx
0x8DC3F8: jl      short loc_8DC3E0
0x8DC3FA: dec     edx
0x8DC3FB: jns     short loc_8DC3B3
0x8DC3FD: pop     edi
0x8DC3FE: pop     esi
0x8DC3FF: pop     ebx
0x8DC400: retn
