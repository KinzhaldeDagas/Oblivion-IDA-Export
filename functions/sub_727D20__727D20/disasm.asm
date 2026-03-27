0x727D20: push    esi
0x727D21: push    edi
0x727D22: mov     edi, [esp+8+arg_0]
0x727D26: push    edi
0x727D27: mov     esi, ecx
0x727D29: call    sub_726430
0x727D2E: test    al, al
0x727D30: jz      short loc_727D49
0x727D32: mov     eax, [esi+2Ch]
0x727D35: cmp     eax, [edi+2Ch]
0x727D38: jnz     short loc_727D49
0x727D3A: mov     ecx, [esi+30h]
0x727D3D: cmp     ecx, [edi+30h]
0x727D40: jnz     short loc_727D49
0x727D42: pop     edi
0x727D43: mov     al, 1
0x727D45: pop     esi
0x727D46: retn    4
0x727D49: pop     edi
0x727D4A: xor     al, al
0x727D4C: pop     esi
0x727D4D: retn    4
