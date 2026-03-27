0x8DC4A0: push    ebx
0x8DC4A1: push    esi
0x8DC4A2: mov     esi, [esp+8+arg_0]
0x8DC4A6: push    edi
0x8DC4A7: mov     edi, [esi+0D4h]
0x8DC4AD: dec     edi
0x8DC4AE: js      short loc_8DC4CA
0x8DC4B0: mov     ebx, [esp+0Ch+arg_4]
0x8DC4B4: mov     eax, [esi+0D0h]
0x8DC4BA: mov     ecx, [eax+edi*4]
0x8DC4BD: test    ecx, ecx
0x8DC4BF: jz      short loc_8DC4C7
0x8DC4C1: mov     edx, [ecx]
0x8DC4C3: push    ebx
0x8DC4C4: call    dword ptr [edx+0Ch]
0x8DC4C7: dec     edi
0x8DC4C8: jns     short loc_8DC4B4
0x8DC4CA: mov     edx, [esi+0D4h]
0x8DC4D0: dec     edx
0x8DC4D1: js      short loc_8DC51D
0x8DC4D3: mov     eax, [esi+0D0h]
0x8DC4D9: cmp     dword ptr [eax+edx*4], 0
0x8DC4DD: jnz     short loc_8DC51A
0x8DC4DF: mov     ebx, [esi+0D4h]
0x8DC4E5: dec     ebx
0x8DC4E6: mov     ecx, ebx
0x8DC4E8: cmp     edx, ecx
0x8DC4EA: mov     [esi+0D4h], ebx
0x8DC4F0: mov     eax, edx
0x8DC4F2: jge     short loc_8DC51A
0x8DC4F4: jmp     short loc_8DC500
0x8DC4F6: align 10h
0x8DC500: mov     ecx, [esi+0D0h]
0x8DC506: mov     edi, [ecx+eax*4+4]
0x8DC50A: lea     ecx, [ecx+eax*4]
0x8DC50D: mov     [ecx], edi
0x8DC50F: mov     ecx, [esi+0D4h]
0x8DC515: inc     eax
0x8DC516: cmp     eax, ecx
0x8DC518: jl      short loc_8DC500
0x8DC51A: dec     edx
0x8DC51B: jns     short loc_8DC4D3
0x8DC51D: pop     edi
0x8DC51E: pop     esi
0x8DC51F: pop     ebx
0x8DC520: retn
