0x6DD230: push    esi
0x6DD231: push    edi
0x6DD232: mov     edi, [esp+8+arg_0]
0x6DD236: push    edi
0x6DD237: mov     esi, ecx
0x6DD239: call    sub_715F10
0x6DD23E: test    al, al
0x6DD240: jnz     short loc_6DD247
0x6DD242: pop     edi
0x6DD243: pop     esi
0x6DD244: retn    4
0x6DD247: mov     ecx, [esi+48h]
0x6DD24A: test    ecx, ecx
0x6DD24C: jz      short loc_6DD256
0x6DD24E: mov     eax, [ecx]
0x6DD250: mov     edx, [eax+24h]
0x6DD253: push    edi
0x6DD254: call    edx
0x6DD256: mov     ecx, [esi+4Ch]
0x6DD259: test    ecx, ecx
0x6DD25B: jz      short loc_6DD265
0x6DD25D: mov     eax, [ecx]
0x6DD25F: mov     edx, [eax+24h]
0x6DD262: push    edi
0x6DD263: call    edx
0x6DD265: pop     edi
0x6DD266: mov     al, 1
0x6DD268: pop     esi
0x6DD269: retn    4
