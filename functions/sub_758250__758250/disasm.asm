0x758250: push    esi
0x758251: push    edi
0x758252: mov     edi, [esp+8+arg_0]
0x758256: push    edi
0x758257: mov     esi, ecx
0x758259: call    sub_75E600
0x75825E: test    al, al
0x758260: jz      short loc_75829E
0x758262: mov     eax, [esi+40h]
0x758265: lea     ecx, [esp+8+arg_0]
0x758269: push    ecx
0x75826A: push    eax
0x75826B: lea     ecx, [edi+0D4h]
0x758271: call    NiTMap_GetAt
0x758276: test    al, al
0x758278: jz      short loc_75829E
0x75827A: mov     ecx, [esp+8+arg_0]
0x75827E: test    ecx, ecx
0x758280: jz      short loc_75829E
0x758282: mov     edx, [ecx]
0x758284: mov     eax, [edx+4]
0x758287: call    eax
0x758289: test    eax, eax
0x75828B: jz      short loc_75829E
0x75828D: lea     ecx, [ecx+0]
0x758290: cmp     eax, offset dword_B40B50
0x758295: jz      short loc_7582A5
0x758297: mov     eax, [eax+4]
0x75829A: test    eax, eax
0x75829C: jnz     short loc_758290
0x75829E: pop     edi
0x75829F: xor     al, al
0x7582A1: pop     esi
0x7582A2: retn    4
0x7582A5: pop     edi
0x7582A6: mov     al, 1
0x7582A8: pop     esi
0x7582A9: retn    4
