0x92CC50: push    ebp
0x92CC51: mov     ebp, esp
0x92CC53: and     esp, 0FFFFFFF0h
0x92CC56: sub     esp, 24h
0x92CC59: push    ebx
0x92CC5A: push    esi
0x92CC5B: push    edi
0x92CC5C: mov     edi, [ebp+arg_0]
0x92CC5F: nop
0x92CC60: mov     esi, [ebp+arg_8]
0x92CC63: mov     ebx, [ebp+arg_4]
0x92CC66: lea     eax, [ebx+esi]
0x92CC69: sar     eax, 1
0x92CC6B: mov     ecx, [edi+eax*8]
0x92CC6E: mov     edx, [edi+eax*8+4]
0x92CC72: mov     [esp+30h+var_10], ecx
0x92CC76: mov     [esp+30h+var_C], edx
0x92CC7A: lea     ebx, [ebx+0]
0x92CC80: lea     ecx, [esp+30h+var_10]
0x92CC84: push    ecx
0x92CC85: lea     eax, [edi+ebx*8]
0x92CC88: push    eax
0x92CC89: lea     edx, [esp+38h+var_16]
0x92CC8D: push    edx
0x92CC8E: call    [ebp+arg_C]
0x92CC91: mov     cl, [eax]
0x92CC93: add     esp, 0Ch
0x92CC96: test    cl, cl
0x92CC98: jz      short loc_92CCC2
0x92CC9A: lea     eax, [edi+ebx*8]
0x92CC9D: jmp     short loc_92CCA3
0x92CC9F: mov     eax, [esp+30h+var_14]
0x92CCA3: lea     ecx, [esp+30h+var_10]
0x92CCA7: add     eax, 8
0x92CCAA: push    ecx
0x92CCAB: push    eax
0x92CCAC: lea     edx, [esp+38h+var_16]
0x92CCB0: push    edx
0x92CCB1: inc     ebx
0x92CCB2: mov     [esp+3Ch+var_14], eax
0x92CCB6: call    [ebp+arg_C]
0x92CCB9: mov     cl, [eax]
0x92CCBB: add     esp, 0Ch
0x92CCBE: test    cl, cl
0x92CCC0: jnz     short loc_92CC9F
0x92CCC2: lea     eax, [edi+esi*8]
0x92CCC5: push    eax
0x92CCC6: lea     eax, [esp+34h+var_10]
0x92CCCA: push    eax
0x92CCCB: lea     ecx, [esp+38h+var_15]
0x92CCCF: push    ecx
0x92CCD0: call    [ebp+arg_C]
0x92CCD3: mov     cl, [eax]
0x92CCD5: add     esp, 0Ch
0x92CCD8: test    cl, cl
0x92CCDA: jz      short loc_92CD04
0x92CCDC: lea     eax, [edi+esi*8]
0x92CCDF: jmp     short loc_92CCE5
0x92CCE1: mov     eax, [esp+30h+var_14]
0x92CCE5: sub     eax, 8
0x92CCE8: push    eax
0x92CCE9: lea     edx, [esp+34h+var_10]
0x92CCED: mov     [esp+34h+var_14], eax
0x92CCF1: push    edx
0x92CCF2: lea     eax, [esp+38h+var_15]
0x92CCF6: push    eax
0x92CCF7: dec     esi
0x92CCF8: call    [ebp+arg_C]
0x92CCFB: mov     cl, [eax]
0x92CCFD: add     esp, 0Ch
0x92CD00: test    cl, cl
0x92CD02: jnz     short loc_92CCE1
0x92CD04: cmp     esi, ebx
0x92CD06: jl      short loc_92CD30
0x92CD08: jz      short loc_92CD26
0x92CD0A: mov     edx, [edi+ebx*8]
0x92CD0D: mov     eax, [edi+esi*8]
0x92CD10: mov     ecx, [edi+esi*8+4]
0x92CD14: mov     [edi+esi*8], edx
0x92CD17: mov     edx, [edi+ebx*8+4]
0x92CD1B: mov     [edi+esi*8+4], edx
0x92CD1F: mov     [edi+ebx*8], eax
0x92CD22: mov     [edi+ebx*8+4], ecx
0x92CD26: dec     esi
0x92CD27: inc     ebx
0x92CD28: cmp     ebx, esi
0x92CD2A: jle     loc_92CC80
0x92CD30: mov     eax, [ebp+arg_4]
0x92CD33: cmp     eax, esi
0x92CD35: jge     short loc_92CD46
0x92CD37: mov     ecx, [ebp+arg_C]
0x92CD3A: push    ecx
0x92CD3B: push    esi
0x92CD3C: push    eax
0x92CD3D: push    edi
0x92CD3E: call    sub_92CC50
0x92CD43: add     esp, 10h
0x92CD46: cmp     ebx, [ebp+arg_8]
0x92CD49: jge     short loc_92CD53
0x92CD4B: mov     [ebp+arg_4], ebx
0x92CD4E: jmp     loc_92CC60
0x92CD53: pop     edi
0x92CD54: pop     esi
0x92CD55: pop     ebx
0x92CD56: mov     esp, ebp
0x92CD58: pop     ebp
0x92CD59: retn
