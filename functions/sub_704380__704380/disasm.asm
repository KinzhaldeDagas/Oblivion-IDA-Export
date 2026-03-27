0x704380: push    esi
0x704381: push    edi
0x704382: mov     edi, [esp+8+arg_0]
0x704386: push    edi
0x704387: mov     esi, ecx
0x704389: call    sub_704290
0x70438E: test    al, al
0x704390: jnz     short loc_704397
0x704392: pop     edi
0x704393: pop     esi
0x704394: retn    4
0x704397: mov     eax, [esi+10h]
0x70439A: cmp     eax, [edi+10h]
0x70439D: pop     edi
0x70439E: setz    al
0x7043A1: pop     esi
0x7043A2: retn    4
