0x8A9C90: push    esi
0x8A9C91: mov     esi, [esp+4+arg_0]
0x8A9C95: push    edi
0x8A9C96: mov     edi, ecx
0x8A9C98: mov     ecx, [edi+64h]
0x8A9C9B: test    ecx, ecx
0x8A9C9D: jz      short loc_8A9CA8
0x8A9C9F: mov     eax, [ecx]
0x8A9CA1: call    dword ptr [eax+10h]
0x8A9CA4: cmp     eax, esi
0x8A9CA6: jz      short loc_8A9D01
0x8A9CA8: mov     eax, esi
0x8A9CAA: dec     eax
0x8A9CAB: jz      short loc_8A9CF5
0x8A9CAD: dec     eax
0x8A9CAE: jnz     short loc_8A9D01
0x8A9CB0: mov     ecx, ds:0BA7D98h
0x8A9CB6: mov     edx, [ecx]
0x8A9CB8: push    28h ; '('
0x8A9CBA: push    70h ; 'p'
0x8A9CBC: call    dword ptr [edx+10h]
0x8A9CBF: mov     ecx, eax
0x8A9CC1: mov     word ptr [eax+4], 70h ; 'p'
0x8A9CC7: call    sub_8E90A0
0x8A9CCC: mov     esi, eax
0x8A9CCE: push    esi
0x8A9CCF: mov     ecx, edi
0x8A9CD1: call    sub_8A62C0
0x8A9CD6: cmp     word ptr [esi+4], 0
0x8A9CDB: jz      short loc_8A9D01
0x8A9CDD: dec     word ptr [esi+6]
0x8A9CE1: cmp     word ptr [esi+6], 0
0x8A9CE6: jnz     short loc_8A9D01
0x8A9CE8: mov     eax, [esi]
0x8A9CEA: push    1
0x8A9CEC: mov     ecx, esi
0x8A9CEE: call    dword ptr [eax]
0x8A9CF0: pop     edi
0x8A9CF1: pop     esi
0x8A9CF2: retn    4
0x8A9CF5: push    offset off_B2FD60
0x8A9CFA: mov     ecx, edi
0x8A9CFC: call    sub_8A62C0
0x8A9D01: pop     edi
0x8A9D02: pop     esi
0x8A9D03: retn    4
