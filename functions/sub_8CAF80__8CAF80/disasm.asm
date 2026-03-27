0x8CAF80: push    ebx
0x8CAF81: push    esi
0x8CAF82: mov     esi, ecx
0x8CAF84: mov     eax, [esi+4]
0x8CAF87: test    eax, eax
0x8CAF89: push    edi
0x8CAF8A: jz      short loc_8CAFAE
0x8CAF8C: mov     eax, [esi+58h]
0x8CAF8F: xor     edi, edi
0x8CAF91: test    eax, eax
0x8CAF93: jle     short loc_8CAFAE
0x8CAF95: lea     ebx, [esi-8]
0x8CAF98: mov     eax, [esi+54h]
0x8CAF9B: mov     ecx, [eax+edi*4]
0x8CAF9E: push    ecx
0x8CAF9F: mov     ecx, ebx
0x8CAFA1: call    sub_8CAE40
0x8CAFA6: mov     eax, [esi+58h]
0x8CAFA9: inc     edi
0x8CAFAA: cmp     edi, eax
0x8CAFAC: jl      short loc_8CAF98
0x8CAFAE: mov     eax, [esp+0Ch+arg_0]
0x8CAFB2: test    eax, eax
0x8CAFB4: mov     [esi+4], eax
0x8CAFB7: jz      short loc_8CAFDB
0x8CAFB9: mov     eax, [esi+58h]
0x8CAFBC: xor     edi, edi
0x8CAFBE: test    eax, eax
0x8CAFC0: jle     short loc_8CAFDB
0x8CAFC2: lea     ebx, [esi-8]
0x8CAFC5: mov     edx, [esi+54h]
0x8CAFC8: mov     eax, [edx+edi*4]
0x8CAFCB: push    eax
0x8CAFCC: mov     ecx, ebx
0x8CAFCE: call    sub_8CAD40
0x8CAFD3: mov     eax, [esi+58h]
0x8CAFD6: inc     edi
0x8CAFD7: cmp     edi, eax
0x8CAFD9: jl      short loc_8CAFC5
0x8CAFDB: pop     edi
0x8CAFDC: pop     esi
0x8CAFDD: pop     ebx
0x8CAFDE: retn    4
