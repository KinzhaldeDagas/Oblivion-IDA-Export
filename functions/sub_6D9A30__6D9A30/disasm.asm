0x6D9A30: push    esi
0x6D9A31: push    edi
0x6D9A32: mov     edi, [esp+8+arg_0]
0x6D9A36: push    edi
0x6D9A37: mov     esi, ecx
0x6D9A39: call    sub_6EC2C0
0x6D9A3E: test    al, al
0x6D9A40: jnz     short loc_6D9A47
0x6D9A42: pop     edi
0x6D9A43: pop     esi
0x6D9A44: retn    4
0x6D9A47: mov     ecx, [esi+1Ch]
0x6D9A4A: test    ecx, ecx
0x6D9A4C: jz      short loc_6D9A56
0x6D9A4E: mov     eax, [ecx]
0x6D9A50: mov     edx, [eax+24h]
0x6D9A53: push    edi
0x6D9A54: call    edx
0x6D9A56: pop     edi
0x6D9A57: mov     al, 1
0x6D9A59: pop     esi
0x6D9A5A: retn    4
