0x74FF60: push    esi
0x74FF61: push    edi
0x74FF62: mov     edi, [esp+8+arg_0]
0x74FF66: push    edi
0x74FF67: mov     esi, ecx
0x74FF69: call    sub_6C3680
0x74FF6E: test    al, al
0x74FF70: jnz     short loc_74FF77
0x74FF72: pop     edi
0x74FF73: pop     esi
0x74FF74: retn    4
0x74FF77: mov     ecx, [esi+48h]
0x74FF7A: test    ecx, ecx
0x74FF7C: jz      short loc_74FF86
0x74FF7E: mov     eax, [ecx]
0x74FF80: mov     edx, [eax+24h]
0x74FF83: push    edi
0x74FF84: call    edx
0x74FF86: pop     edi
0x74FF87: mov     al, 1
0x74FF89: pop     esi
0x74FF8A: retn    4
