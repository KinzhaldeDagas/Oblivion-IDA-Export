0x479740: push    ebp
0x479741: mov     ebp, [esp+4+arg_0]
0x479745: test    ebp, ebp
0x479747: push    edi
0x479748: mov     edi, ecx
0x47974A: jz      short loc_479770
0x47974C: push    ebx
0x47974D: push    esi
0x47974E: lea     esi, [edi+4Ch]
0x479751: mov     ebx, 10h
0x479756: cmp     [esi], ebp
0x479758: jnz     short loc_479766
0x47975A: push    0
0x47975C: push    1
0x47975E: push    esi
0x47975F: mov     ecx, edi
0x479761: call    sub_478780
0x479766: add     esi, 10h
0x479769: sub     ebx, 1
0x47976C: jnz     short loc_479756
0x47976E: pop     esi
0x47976F: pop     ebx
0x479770: pop     edi
0x479771: pop     ebp
0x479772: retn    4
