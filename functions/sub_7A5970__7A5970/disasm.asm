0x7A5970: push    esi
0x7A5971: mov     esi, [esp+4+arg_0]
0x7A5975: push    edi
0x7A5976: mov     edi, [esp+8+arg_4]
0x7A597A: cmp     esi, edi
0x7A597C: jz      short loc_7A5993
0x7A597E: push    ebx
0x7A597F: mov     ebx, [esp+0Ch+arg_8]
0x7A5983: push    ebx
0x7A5984: mov     ecx, esi
0x7A5986: call    sub_7A3470
0x7A598B: add     esi, 54h ; 'T'
0x7A598E: cmp     esi, edi
0x7A5990: jnz     short loc_7A5983
0x7A5992: pop     ebx
0x7A5993: pop     edi
0x7A5994: pop     esi
0x7A5995: retn
