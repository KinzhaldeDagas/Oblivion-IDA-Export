0x42BE10: mov     ecx, ds:0B338E0h
0x42BE16: push    esi
0x42BE17: push    edi
0x42BE18: xor     edi, edi
0x42BE1A: cmp     ecx, edi
0x42BE1C: jz      short loc_42BE63
0x42BE1E: mov     esi, [esp+8+arg_0]
0x42BE22: cmp     esi, edi
0x42BE24: jz      short loc_42BE63
0x42BE26: push    esi
0x42BE27: mov     ds:0B338E4h, edi
0x42BE2D: call    BSSimpleList_Remove
0x42BE32: xor     eax, eax
0x42BE34: cmp     [eax+0B338E8h], esi
0x42BE3A: jnz     short loc_42BE42
0x42BE3C: mov     [eax+0B338E8h], edi
0x42BE42: cmp     dword_B3390C[eax], esi
0x42BE48: jnz     short loc_42BE50
0x42BE4A: mov     dword_B3390C[eax], edi
0x42BE50: add     eax, 4
0x42BE53: cmp     eax, 24h ; '$'
0x42BE56: jb      short loc_42BE34
0x42BE58: mov     ds:0B338E4h, edi
0x42BE5E: pop     edi
0x42BE5F: mov     al, 1
0x42BE61: pop     esi
0x42BE62: retn
0x42BE63: pop     edi
0x42BE64: xor     al, al
0x42BE66: pop     esi
0x42BE67: retn
