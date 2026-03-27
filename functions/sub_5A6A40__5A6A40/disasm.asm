0x5A6A40: push    esi
0x5A6A41: push    edi
0x5A6A42: mov     edi, [esp+8+arg_0]
0x5A6A46: mov     esi, ecx
0x5A6A48: mov     ecx, [esi+38h]
0x5A6A4B: push    edi
0x5A6A4C: push    0FE6h
0x5A6A51: call    Tile_SetString
0x5A6A56: mov     eax, ds:0B33D84h
0x5A6A5B: push    eax; unsigned __int8 *
0x5A6A5C: push    edi; unsigned __int8 *
0x5A6A5D: call    __mbscmp
0x5A6A62: add     esp, 8
0x5A6A65: push    eax
0x5A6A66: mov     ecx, esi
0x5A6A68: call    sub_5A6220
0x5A6A6D: pop     edi
0x5A6A6E: pop     esi
0x5A6A6F: retn    4
