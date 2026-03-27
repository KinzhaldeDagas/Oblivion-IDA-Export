0x6BDE40: push    esi
0x6BDE41: mov     esi, [esp+4+arg_4]
0x6BDE45: push    edi
0x6BDE46: mov     edi, [esp+8+arg_0]
0x6BDE4A: push    esi
0x6BDE4B: push    edi
0x6BDE4C: call    sub_6D3190
0x6BDE51: add     esp, 8
0x6BDE54: test    al, al
0x6BDE56: jnz     short loc_6BDE5B
0x6BDE58: pop     edi
0x6BDE59: pop     esi
0x6BDE5A: retn
0x6BDE5B: mov     al, [edi+4]
0x6BDE5E: xor     ecx, ecx
0x6BDE60: cmp     al, [esi+4]
0x6BDE63: pop     edi
0x6BDE64: setz    cl
0x6BDE67: mov     al, cl
0x6BDE69: pop     esi
0x6BDE6A: retn
