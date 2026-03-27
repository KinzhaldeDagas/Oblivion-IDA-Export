0x724040: push    ecx
0x724041: push    esi
0x724042: mov     esi, ecx
0x724044: xor     eax, eax
0x724046: cmp     [esi+0B6h], ax
0x72404D: push    edi
0x72404E: mov     edi, [esp+0Ch+arg_4]
0x724052: mov     [esp+0Ch+var_4], 0
0x72405A: mov     dword ptr [esi+0E8h], 1
0x724064: jbe     short loc_7240CB
0x724066: mov     ecx, [esi+0B0h]
0x72406C: lea     esp, [esp+0]
0x724070: cmp     edi, [ecx]
0x724072: jz      short loc_724087
0x724074: movzx   edx, word ptr [esi+0B6h]
0x72407B: add     eax, 1
0x72407E: add     ecx, 4
0x724081: cmp     eax, edx
0x724083: jb      short loc_724070
0x724085: jmp     short loc_7240CB
0x724087: movzx   ecx, word ptr [esi+0F6h]
0x72408E: cmp     eax, ecx
0x724090: jnb     short loc_7240CB
0x724092: mov     edx, [esi+0F0h]
0x724098: lea     ecx, [edx+eax*4]
0x72409B: mov     edx, [ecx]
0x72409D: test    edx, edx
0x72409F: mov     dword ptr [ecx], 0
0x7240A5: jz      short loc_7240B0
0x7240A7: add     word ptr [esi+0F8h], 0FFFFh
0x7240B0: movzx   ecx, word ptr [esi+0F6h]
0x7240B7: movzx   edx, cx
0x7240BA: sub     edx, 1
0x7240BD: cmp     eax, edx
0x7240BF: jnz     short loc_7240CB
0x7240C1: add     ecx, 0FFFFFFFFh
0x7240C4: mov     [esi+0F6h], cx
0x7240CB: push    edi
0x7240CC: mov     edi, [esp+10h+arg_0]
0x7240D0: push    edi
0x7240D1: mov     ecx, esi
0x7240D3: call    NiNode__RemoveObject
0x7240D8: mov     eax, [esi+0E0h]
0x7240DE: cmp     eax, 0FFFFFFFFh
0x7240E1: jle     short loc_724104
0x7240E3: movzx   ecx, word ptr [esi+0B6h]
0x7240EA: cmp     eax, ecx
0x7240EC: jge     short loc_7240FA
0x7240EE: mov     edx, [esi+0B0h]
0x7240F4: cmp     dword ptr [edx+eax*4], 0
0x7240F8: jnz     short loc_724104
0x7240FA: mov     dword ptr [esi+0E0h], 0FFFFFFFFh
0x724104: mov     eax, edi
0x724106: pop     edi
0x724107: pop     esi
0x724108: pop     ecx
0x724109: retn    8
