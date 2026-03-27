0x8DC650: push    ebx
0x8DC651: push    esi
0x8DC652: mov     esi, [esp+8+arg_0]
0x8DC656: push    edi
0x8DC657: mov     edi, [esi+0E0h]
0x8DC65D: dec     edi
0x8DC65E: js      short loc_8DC67A
0x8DC660: mov     ebx, [esp+0Ch+arg_4]
0x8DC664: mov     eax, [esi+0DCh]
0x8DC66A: mov     ecx, [eax+edi*4]
0x8DC66D: test    ecx, ecx
0x8DC66F: jz      short loc_8DC677
0x8DC671: mov     edx, [ecx]
0x8DC673: push    ebx
0x8DC674: call    dword ptr [edx+0Ch]
0x8DC677: dec     edi
0x8DC678: jns     short loc_8DC664
0x8DC67A: mov     edx, [esi+0E0h]
0x8DC680: dec     edx
0x8DC681: js      short loc_8DC6CD
0x8DC683: mov     eax, [esi+0DCh]
0x8DC689: cmp     dword ptr [eax+edx*4], 0
0x8DC68D: jnz     short loc_8DC6CA
0x8DC68F: mov     ebx, [esi+0E0h]
0x8DC695: dec     ebx
0x8DC696: mov     ecx, ebx
0x8DC698: cmp     edx, ecx
0x8DC69A: mov     [esi+0E0h], ebx
0x8DC6A0: mov     eax, edx
0x8DC6A2: jge     short loc_8DC6CA
0x8DC6A4: jmp     short loc_8DC6B0
0x8DC6A6: align 10h
0x8DC6B0: mov     ecx, [esi+0DCh]
0x8DC6B6: mov     edi, [ecx+eax*4+4]
0x8DC6BA: lea     ecx, [ecx+eax*4]
0x8DC6BD: mov     [ecx], edi
0x8DC6BF: mov     ecx, [esi+0E0h]
0x8DC6C5: inc     eax
0x8DC6C6: cmp     eax, ecx
0x8DC6C8: jl      short loc_8DC6B0
0x8DC6CA: dec     edx
0x8DC6CB: jns     short loc_8DC683
0x8DC6CD: pop     edi
0x8DC6CE: pop     esi
0x8DC6CF: pop     ebx
0x8DC6D0: retn
