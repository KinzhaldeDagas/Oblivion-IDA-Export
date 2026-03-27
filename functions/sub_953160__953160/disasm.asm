0x953160: mov     edx, [ecx+8]
0x953163: push    esi
0x953164: xor     eax, eax
0x953166: test    edx, edx
0x953168: push    edi
0x953169: jle     short loc_953180
0x95316B: mov     esi, [ecx+4]
0x95316E: mov     edi, [esp+8+arg_0]
0x953172: mov     ecx, esi
0x953174: cmp     [ecx], edi
0x953176: jz      short loc_95318A
0x953178: inc     eax
0x953179: add     ecx, 8
0x95317C: cmp     eax, edx
0x95317E: jl      short loc_953174
0x953180: pop     edi
0x953181: pop     esi
0x953182: mov     eax, 1
0x953187: retn    8
0x95318A: mov     eax, [esi+eax*8+4]
0x95318E: mov     ecx, [esp+8+arg_4]
0x953192: pop     edi
0x953193: pop     esi
0x953194: mov     [ecx], eax
0x953196: xor     eax, eax
0x953198: retn    8
