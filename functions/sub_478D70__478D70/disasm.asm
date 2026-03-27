0x478D70: push    ebx
0x478D71: mov     ebx, [esp+4+arg_0]
0x478D75: test    ebx, ebx
0x478D77: push    esi
0x478D78: mov     esi, ecx
0x478D7A: jz      short loc_478D9F
0x478D7C: cmp     byte ptr [ebx+4], 22h ; '"'
0x478D80: jnz     short loc_478D9F
0x478D82: push    edi
0x478D83: push    0
0x478D85: push    1
0x478D87: lea     edi, [esi+10Ch]
0x478D8D: push    edi
0x478D8E: call    sub_478780
0x478D93: mov     [edi], ebx
0x478D95: add     ebx, 30h ; '0'
0x478D98: mov     [esi+110h], ebx
0x478D9E: pop     edi
0x478D9F: pop     esi
0x478DA0: pop     ebx
0x478DA1: retn    4
