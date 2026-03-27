0x477E90: push    esi
0x477E91: mov     esi, [esp+4+arg_0]
0x477E95: xor     eax, eax
0x477E97: test    esi, esi
0x477E99: jz      short loc_477EB1
0x477E9B: lea     edx, [ecx+4Ch]
0x477E9E: mov     edi, edi
0x477EA0: cmp     [edx], esi
0x477EA2: jz      short loc_477EB5
0x477EA4: add     eax, 1
0x477EA7: add     edx, 10h
0x477EAA: cmp     eax, 10h
0x477EAD: jl      short loc_477EA0
0x477EAF: xor     eax, eax
0x477EB1: pop     esi
0x477EB2: retn    4
0x477EB5: shl     eax, 4
0x477EB8: lea     eax, [eax+ecx+4Ch]
0x477EBC: pop     esi
0x477EBD: retn    4
