0x79BE50: push    esi
0x79BE51: mov     esi, [esp+4+arg_0]
0x79BE55: push    edi
0x79BE56: mov     edi, [esp+8+arg_4]
0x79BE5A: cmp     esi, edi
0x79BE5C: jz      short loc_79BE73
0x79BE5E: push    ebx
0x79BE5F: mov     ebx, [esp+0Ch+arg_8]
0x79BE63: push    ebx
0x79BE64: mov     ecx, esi
0x79BE66: call    sub_79B2F0
0x79BE6B: add     esi, 10h
0x79BE6E: cmp     esi, edi
0x79BE70: jnz     short loc_79BE63
0x79BE72: pop     ebx
0x79BE73: pop     edi
0x79BE74: pop     esi
0x79BE75: retn
