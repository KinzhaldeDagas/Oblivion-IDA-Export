0x6EF560: push    esi
0x6EF561: mov     esi, [esp+4+arg_0]
0x6EF565: push    edi
0x6EF566: mov     edi, [esp+8+arg_4]
0x6EF56A: cmp     esi, edi
0x6EF56C: jz      short loc_6EF583
0x6EF56E: push    ebx
0x6EF56F: mov     ebx, [esp+0Ch+arg_8]
0x6EF573: push    ebx
0x6EF574: mov     ecx, esi
0x6EF576: call    sub_557770
0x6EF57B: add     esi, 40h ; '@'
0x6EF57E: cmp     esi, edi
0x6EF580: jnz     short loc_6EF573
0x6EF582: pop     ebx
0x6EF583: pop     edi
0x6EF584: pop     esi
0x6EF585: retn
