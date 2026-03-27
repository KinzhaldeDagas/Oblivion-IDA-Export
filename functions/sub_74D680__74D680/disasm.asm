0x74D680: push    ebx
0x74D681: mov     ebx, [esp+4+arg_0]
0x74D685: push    esi
0x74D686: push    edi
0x74D687: push    ebx
0x74D688: mov     esi, ecx
0x74D68A: call    sub_752D80
0x74D68F: xor     edi, edi
0x74D691: cmp     [esi+22h], di
0x74D695: jbe     short loc_74D6B4
0x74D697: mov     eax, [esi+1Ch]
0x74D69A: mov     ecx, [eax+edi*4]
0x74D69D: test    ecx, ecx
0x74D69F: jz      short loc_74D6A9
0x74D6A1: mov     edx, [ecx]
0x74D6A3: mov     eax, [edx+38h]
0x74D6A6: push    ebx
0x74D6A7: call    eax
0x74D6A9: movzx   ecx, word ptr [esi+22h]
0x74D6AD: add     edi, 1
0x74D6B0: cmp     edi, ecx
0x74D6B2: jb      short loc_74D697
0x74D6B4: pop     edi
0x74D6B5: pop     esi
0x74D6B6: pop     ebx
0x74D6B7: retn    4
