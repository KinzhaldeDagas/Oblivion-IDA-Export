0x403F50: mov     edx, [esp+a3]
0x403F54: test    edx, edx
0x403F56: push    ebx
0x403F57: mov     bl, [esp+4+a4]
0x403F5B: push    edi
0x403F5C: mov     edi, ecx
0x403F5E: jnz     short loc_403FB2
0x403F60: cmp     bl, 1
0x403F63: jz      short loc_403FAB
0x403F65: cmp     bl, 29h ; ')'
0x403F68: jz      short loc_403FAB
0x403F6A: cmp     bl, 0B7h ; '·'
0x403F6D: jz      short loc_403FAB
0x403F6F: cmp     bl, 2
0x403F72: jz      short loc_403FAB
0x403F74: cmp     bl, 3
0x403F77: jz      short loc_403FAB
0x403F79: cmp     bl, 4
0x403F7C: jz      short loc_403FAB
0x403F7E: cmp     bl, 5
0x403F81: jz      short loc_403FAB
0x403F83: cmp     bl, 6
0x403F86: jz      short loc_403FAB
0x403F88: cmp     bl, 7
0x403F8B: jz      short loc_403FAB
0x403F8D: cmp     bl, 8
0x403F90: jz      short loc_403FAB
0x403F92: cmp     bl, 9
0x403F95: jz      short loc_403FAB
0x403F97: cmp     bl, 3Bh ; ';'
0x403F9A: jz      short loc_403FAB
0x403F9C: cmp     bl, 3Ch ; '<'
0x403F9F: jz      short loc_403FAB
0x403FA1: cmp     bl, 3Dh ; '='
0x403FA4: jz      short loc_403FAB
0x403FA6: cmp     bl, 3Eh ; '>'
0x403FA9: jnz     short loc_403FB2
0x403FAB: pop     edi
0x403FAC: xor     al, al
0x403FAE: pop     ebx
0x403FAF: retn    0Ch
0x403FB2: xor     eax, eax
0x403FB4: imul    edx, 1Dh
0x403FB7: push    esi
0x403FB8: lea     esi, [edx+edi+1B7Eh]
0x403FBF: nop
0x403FC0: cmp     [esi+eax], bl
0x403FC3: jz      short loc_403FE2
0x403FC5: add     eax, 1
0x403FC8: cmp     eax, 1Dh
0x403FCB: jl      short loc_403FC0
0x403FCD: mov     eax, [esp+0Ch+a2]
0x403FD1: add     edx, eax
0x403FD3: pop     esi
0x403FD4: mov     [edx+edi+1B7Eh], bl
0x403FDB: pop     edi
0x403FDC: mov     al, 1
0x403FDE: pop     ebx
0x403FDF: retn    0Ch
0x403FE2: mov     ecx, [esp+0Ch+a2]
0x403FE6: add     ecx, edx
0x403FE8: mov     cl, [ecx+edi+1B7Eh]
0x403FEF: add     eax, edx
0x403FF1: mov     [eax+edi+1B7Eh], cl
0x403FF8: mov     eax, [esp+0Ch+a2]
0x403FFC: add     edx, eax
0x403FFE: pop     esi
0x403FFF: mov     [edx+edi+1B7Eh], bl
0x404006: pop     edi
0x404007: mov     al, 1
0x404009: pop     ebx
0x40400A: retn    0Ch
