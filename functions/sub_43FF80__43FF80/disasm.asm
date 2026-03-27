0x43FF80: push    ebp
0x43FF81: mov     ebp, [esp+4+arg_0]
0x43FF85: test    ebp, ebp
0x43FF87: jz      short loc_43FFE4
0x43FF89: push    edi
0x43FF8A: mov     edi, ds:0B051DCh
0x43FF90: add     edi, 0FFFFFFFFh
0x43FF93: xor     eax, eax
0x43FF95: test    edi, edi
0x43FF97: jle     short loc_43FFE3
0x43FF99: push    esi
0x43FF9A: mov     esi, [ecx+3Ch]
0x43FF9D: lea     ecx, [ecx+0]
0x43FFA0: mov     edx, [esi]
0x43FFA2: cmp     ebp, edx
0x43FFA4: jz      short loc_43FFBA
0x43FFA6: test    edx, edx
0x43FFA8: jz      short loc_43FFE2
0x43FFAA: add     eax, 1
0x43FFAD: add     esi, 4
0x43FFB0: cmp     eax, edi
0x43FFB2: jl      short loc_43FFA0
0x43FFB4: pop     esi
0x43FFB5: pop     edi
0x43FFB6: pop     ebp
0x43FFB7: retn    4
0x43FFBA: cmp     eax, edi
0x43FFBC: jge     short loc_43FFDC
0x43FFBE: mov     edi, edi
0x43FFC0: mov     edx, [ecx+3Ch]
0x43FFC3: lea     esi, [edx+eax*4]
0x43FFC6: mov     edx, [esi+4]
0x43FFC9: test    edx, edx
0x43FFCB: jz      short loc_43FFDC
0x43FFCD: cmp     byte ptr [edx+26h], 6
0x43FFD1: jnz     short loc_43FFDC
0x43FFD3: add     eax, 1
0x43FFD6: cmp     eax, edi
0x43FFD8: mov     [esi], edx
0x43FFDA: jl      short loc_43FFC0
0x43FFDC: mov     ecx, [ecx+3Ch]
0x43FFDF: mov     [ecx+eax*4], ebp
0x43FFE2: pop     esi
0x43FFE3: pop     edi
0x43FFE4: pop     ebp
0x43FFE5: retn    4
