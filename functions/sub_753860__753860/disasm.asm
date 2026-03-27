0x753860: push    esi
0x753861: push    edi
0x753862: mov     edi, [esp+8+arg_0]
0x753866: push    edi
0x753867: mov     esi, ecx
0x753869: call    sub_75E890
0x75386E: test    al, al
0x753870: jnz     short loc_753877
0x753872: pop     edi
0x753873: pop     esi
0x753874: retn    4
0x753877: add     esi, 30h ; '0'
0x75387A: push    esi
0x75387B: lea     ecx, [edi+30h]
0x75387E: call    sub_8AA390
0x753883: test    al, al
0x753885: pop     edi
0x753886: setz    al
0x753889: pop     esi
0x75388A: retn    4
