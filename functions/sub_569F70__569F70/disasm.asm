0x569F70: push    esi
0x569F71: push    edi
0x569F72: mov     edi, [esp+8+arg_0]
0x569F76: test    edi, edi
0x569F78: mov     esi, ecx
0x569F7A: jnz     short loc_569F83
0x569F7C: pop     edi
0x569F7D: mov     al, 1
0x569F7F: pop     esi
0x569F80: retn    4
0x569F83: mov     cl, [edi]
0x569F85: push    ebx
0x569F86: mov     bl, [esi]
0x569F88: cmp     bl, cl
0x569F8A: jnz     short loc_569FDE
0x569F8C: test    bl, bl
0x569F8E: jnz     short loc_569F95
0x569F90: mov     edx, [esi+4]
0x569F93: jmp     short loc_569F97
0x569F95: xor     edx, edx
0x569F97: test    cl, cl
0x569F99: jnz     short loc_569FA0
0x569F9B: mov     eax, [edi+4]
0x569F9E: jmp     short loc_569FA2
0x569FA0: xor     eax, eax
0x569FA2: cmp     edx, eax
0x569FA4: jnz     short loc_569FDE
0x569FA6: cmp     bl, 1
0x569FA9: jnz     short loc_569FB0
0x569FAB: mov     edx, [esi+4]
0x569FAE: jmp     short loc_569FB2
0x569FB0: xor     edx, edx
0x569FB2: cmp     cl, 1
0x569FB5: jnz     short loc_569FBC
0x569FB7: mov     eax, [edi+4]
0x569FBA: jmp     short loc_569FBE
0x569FBC: xor     eax, eax
0x569FBE: cmp     edx, eax
0x569FC0: jnz     short loc_569FDE
0x569FC2: cmp     bl, 2
0x569FC5: jnz     short loc_569FCC
0x569FC7: mov     edx, [esi+4]
0x569FCA: jmp     short loc_569FCE
0x569FCC: xor     edx, edx
0x569FCE: cmp     cl, 2
0x569FD1: jnz     short loc_569FD8
0x569FD3: mov     eax, [edi+4]
0x569FD6: jmp     short loc_569FDA
0x569FD8: xor     eax, eax
0x569FDA: cmp     edx, eax
0x569FDC: jz      short loc_569FE6
0x569FDE: pop     ebx
0x569FDF: pop     edi
0x569FE0: mov     al, 1
0x569FE2: pop     esi
0x569FE3: retn    4
0x569FE6: mov     eax, [esi+8]
0x569FE9: cmp     eax, [edi+8]
0x569FEC: pop     ebx
0x569FED: pop     edi
0x569FEE: setnz   al
0x569FF1: pop     esi
0x569FF2: retn    4
