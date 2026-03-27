0x78D600: push    0FFFFFFFFh
0x78D602: push    offset SEH_78D600
0x78D607: mov     eax, large fs:0
0x78D60D: push    eax
0x78D60E: push    ecx
0x78D60F: push    ebx
0x78D610: push    ebp
0x78D611: push    esi
0x78D612: push    edi
0x78D613: mov     eax, ds:0B30AACh
0x78D618: xor     eax, esp
0x78D61A: push    eax
0x78D61B: lea     eax, [esp+24h+var_C]
0x78D61F: mov     large fs:0, eax
0x78D625: mov     ebp, ecx
0x78D627: mov     [esp+24h+var_10], ebp
0x78D62B: xor     esi, esi
0x78D62D: lea     edi, [ebp+4]
0x78D630: mov     [ebp+0], esi
0x78D633: mov     [edi+4], esi
0x78D636: mov     [edi+8], esi
0x78D639: mov     [edi+0Ch], esi
0x78D63C: mov     ebx, [esp+24h+arg_4]
0x78D640: push    esi; int
0x78D641: push    ebx; int
0x78D642: mov     ecx, edi; int
0x78D644: mov     [esp+2Ch+var_4], esi
0x78D648: call    sub_6EF4B0
0x78D64D: test    ebx, ebx
0x78D64F: jle     short loc_78D67A
0x78D651: mov     ecx, [edi+4]
0x78D654: test    ecx, ecx
0x78D656: jz      short loc_78D661
0x78D658: mov     eax, [edi+8]
0x78D65B: sub     eax, ecx
0x78D65D: cmp     esi, eax
0x78D65F: jb      short loc_78D666
0x78D661: call    __invalid_parameter_noinfo
0x78D666: mov     ecx, [esp+24h+arg_0]
0x78D66A: mov     dl, [esi+ecx]
0x78D66D: mov     eax, [edi+4]
0x78D670: mov     [esi+eax], dl
0x78D673: add     esi, 1
0x78D676: cmp     esi, ebx
0x78D678: jl      short loc_78D651
0x78D67A: mov     eax, ebp
0x78D67C: mov     ecx, [esp+24h+var_C]
0x78D680: mov     large fs:0, ecx
0x78D687: pop     ecx
0x78D688: pop     edi
0x78D689: pop     esi
0x78D68A: pop     ebp
0x78D68B: pop     ebx
0x78D68C: add     esp, 10h
0x78D68F: retn    8
