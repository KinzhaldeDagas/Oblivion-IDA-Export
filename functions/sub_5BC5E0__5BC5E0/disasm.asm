0x5BC5E0: mov     eax, [esp+arg_0]
0x5BC5E4: add     eax, 0FFFFFFFFh; switch 13 cases
0x5BC5E7: cmp     eax, 0Ch
0x5BC5EA: ja      short def_5BC5EC
0x5BC5EC: jmp     ds:jpt_5BC5EC[eax*4]; switch jump
0x5BC5F3: mov     eax, [ecx+28h]; jumptable 005BC5EC case 1
0x5BC5F6: retn    4
0x5BC5F9: mov     eax, [ecx+2Ch]; jumptable 005BC5EC case 2
0x5BC5FC: retn    4
0x5BC5FF: mov     eax, [ecx+30h]; jumptable 005BC5EC case 3
0x5BC602: retn    4
0x5BC605: mov     eax, [ecx+34h]; jumptable 005BC5EC case 4
0x5BC608: retn    4
0x5BC60B: mov     eax, [ecx+38h]; jumptable 005BC5EC case 5
0x5BC60E: retn    4
0x5BC611: mov     eax, [ecx+3Ch]; jumptable 005BC5EC case 6
0x5BC614: retn    4
0x5BC617: mov     eax, [ecx+40h]; jumptable 005BC5EC case 7
0x5BC61A: retn    4
0x5BC61D: mov     eax, [ecx+44h]; jumptable 005BC5EC case 8
0x5BC620: retn    4
0x5BC623: mov     eax, [ecx+48h]; jumptable 005BC5EC case 9
0x5BC626: retn    4
0x5BC629: mov     eax, [ecx+4Ch]; jumptable 005BC5EC case 10
0x5BC62C: retn    4
0x5BC62F: mov     eax, [ecx+50h]; jumptable 005BC5EC case 11
0x5BC632: retn    4
0x5BC635: mov     eax, [ecx+54h]; jumptable 005BC5EC case 12
0x5BC638: retn    4
0x5BC63B: mov     eax, [ecx+58h]; jumptable 005BC5EC case 13
0x5BC63E: retn    4
