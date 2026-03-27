0x6ED330: push    esi
0x6ED331: push    edi
0x6ED332: mov     edi, [esp+8+arg_0]
0x6ED336: push    edi
0x6ED337: mov     esi, ecx
0x6ED339: call    sub_6E7270
0x6ED33E: test    al, al
0x6ED340: jnz     short loc_6ED347
0x6ED342: pop     edi
0x6ED343: pop     esi
0x6ED344: retn    4
0x6ED347: mov     ecx, [esi+14h]
0x6ED34A: test    ecx, ecx
0x6ED34C: jz      short loc_6ED356
0x6ED34E: mov     eax, [ecx]
0x6ED350: mov     edx, [eax+24h]
0x6ED353: push    edi
0x6ED354: call    edx
0x6ED356: mov     ecx, [esi+18h]
0x6ED359: test    ecx, ecx
0x6ED35B: jz      short loc_6ED365
0x6ED35D: mov     eax, [ecx]
0x6ED35F: mov     edx, [eax+24h]
0x6ED362: push    edi
0x6ED363: call    edx
0x6ED365: pop     edi
0x6ED366: mov     al, 1
0x6ED368: pop     esi
0x6ED369: retn    4
