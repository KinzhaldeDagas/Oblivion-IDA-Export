0x6E5340: push    esi
0x6E5341: push    edi
0x6E5342: mov     edi, [esp+8+arg_0]
0x6E5346: push    edi
0x6E5347: mov     esi, ecx
0x6E5349: call    sub_6ED370
0x6E534E: test    al, al
0x6E5350: jnz     short loc_6E5359
0x6E5352: pop     edi
0x6E5353: xor     al, al
0x6E5355: pop     esi
0x6E5356: retn    4
0x6E5359: lea     eax, [edi+1Ch]
0x6E535C: push    eax
0x6E535D: lea     ecx, [esi+1Ch]
0x6E5360: call    sub_8AA390
0x6E5365: test    al, al
0x6E5367: jnz     short loc_6E5352
0x6E5369: mov     ecx, [edi+28h]
0x6E536C: cmp     ecx, [esi+28h]
0x6E536F: pop     edi
0x6E5370: setz    al
0x6E5373: pop     esi
0x6E5374: retn    4
