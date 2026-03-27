0x597940: mov     eax, [esp+arg_0]
0x597944: add     eax, 0FFFFFFF5h; switch 5 cases
0x597947: cmp     eax, 4
0x59794A: ja      short def_59794C
0x59794C: jmp     ds:jpt_59794C[eax*4]; switch jump
0x597953: mov     eax, [esp+arg_4]; jumptable 0059794C case 11
0x597957: mov     [ecx+28h], eax
0x59795A: retn    8
0x59795D: mov     edx, [esp+arg_4]; jumptable 0059794C case 12
0x597961: mov     [ecx+2Ch], edx
0x597964: retn    8
0x597967: mov     eax, [esp+arg_4]; jumptable 0059794C case 13
0x59796B: mov     [ecx+30h], eax
0x59796E: retn    8
0x597971: mov     edx, [esp+arg_4]; jumptable 0059794C case 14
0x597975: mov     [ecx+34h], edx
0x597978: retn    8
0x59797B: mov     eax, [esp+arg_4]; jumptable 0059794C case 15
0x59797F: mov     [ecx+38h], eax
