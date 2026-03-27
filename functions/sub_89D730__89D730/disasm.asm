0x89D730: push    esi
0x89D731: mov     esi, ecx
0x89D733: test    esi, esi
0x89D735: push    edi
0x89D736: jz      short loc_89D73D
0x89D738: mov     eax, [esi+8]
0x89D73B: jmp     short loc_89D73F
0x89D73D: xor     eax, eax
0x89D73F: mov     edi, [esp+8+arg_0]
0x89D743: cmp     edi, eax
0x89D745: jz      short loc_89D770
0x89D747: test    eax, eax
0x89D749: jz      short loc_89D768
0x89D74B: mov     eax, [esi]
0x89D74D: mov     edx, [eax+58h]
0x89D750: call    edx
0x89D752: test    eax, eax
0x89D754: jz      short loc_89D768
0x89D756: cmp     dword ptr [eax+2B0h], 0
0x89D75D: jz      short loc_89D768
0x89D75F: mov     eax, [esi]
0x89D761: mov     edx, [eax+60h]
0x89D764: mov     ecx, esi
0x89D766: call    edx
0x89D768: push    edi
0x89D769: mov     ecx, esi
0x89D76B: call    sub_89D400
0x89D770: pop     edi
0x89D771: pop     esi
0x89D772: retn    4
