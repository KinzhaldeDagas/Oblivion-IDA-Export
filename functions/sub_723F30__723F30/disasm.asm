0x723F30: push    esi
0x723F31: push    edi
0x723F32: mov     edi, [esp+8+arg_0]
0x723F36: push    edi
0x723F37: mov     esi, ecx
0x723F39: call    sub_70AD70
0x723F3E: test    al, al
0x723F40: jz      short loc_723F68
0x723F42: mov     eax, [esi+0E0h]
0x723F48: cmp     eax, [edi+0E0h]
0x723F4E: jnz     short loc_723F68
0x723F50: mov     cl, [edi+0DCh]
0x723F56: xor     cl, [esi+0DCh]
0x723F5C: test    cl, 1
0x723F5F: jnz     short loc_723F68
0x723F61: pop     edi
0x723F62: mov     al, 1
0x723F64: pop     esi
0x723F65: retn    4
0x723F68: pop     edi
0x723F69: xor     al, al
0x723F6B: pop     esi
0x723F6C: retn    4
