0x683C70: xor     al, al
0x683C72: add     ecx, 34h ; '4'
0x683C75: jz      short locret_683CA6
0x683C77: push    esi
0x683C78: mov     esi, [esp+4+arg_0]
0x683C7C: push    edi
0x683C7D: mov     edi, [esp+8+arg_4]
0x683C81: mov     edx, [ecx+4]
0x683C84: test    edx, edx
0x683C86: jnz     short loc_683C8C
0x683C88: cmp     [ecx], edx
0x683C8A: jz      short loc_683CA4
0x683C8C: mov     ecx, [ecx]
0x683C8E: cmp     [ecx], esi
0x683C90: jnz     short loc_683C97
0x683C92: cmp     [ecx+4], edi
0x683C95: jz      short loc_683CA2
0x683C97: mov     ecx, edx
0x683C99: test    ecx, ecx
0x683C9B: jnz     short loc_683C81
0x683C9D: pop     edi
0x683C9E: pop     esi
0x683C9F: retn    8
0x683CA2: mov     al, 1
0x683CA4: pop     edi
0x683CA5: pop     esi
0x683CA6: retn    8
