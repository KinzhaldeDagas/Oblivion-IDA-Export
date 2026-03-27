0x9A6670: mov     ecx, [esp+arg_0]
0x9A6674: cmp     byte ptr [ecx+0ACh], 0
0x9A667B: jz      short def_9A6689
0x9A667D: mov     eax, [esp+arg_4]
0x9A6681: add     eax, 0FFFFFFFFh; switch 4 cases
0x9A6684: cmp     eax, 3
0x9A6687: ja      short def_9A6689
0x9A6689: jmp     ds:jpt_9A6689[eax*4]; switch jump
0x9A6690: push    ecx; jumptable 009A6689 case 1
0x9A6691: push    offset dword_B40224
0x9A6696: call    sub_435CC0
0x9A669B: add     esp, 8
0x9A669E: neg     al
0x9A66A0: sbb     eax, eax
0x9A66A2: add     eax, 1
0x9A66A5: retn
0x9A66A6: mov     [esp+arg_4], ecx; jumptable 009A6689 case 2
0x9A66AA: mov     [esp+arg_0], offset dword_B3FD80
0x9A66B2: jmp     sub_435CC0
0x9A66B7: mov     [esp+arg_4], ecx; jumptable 009A6689 case 3
0x9A66BB: mov     [esp+arg_0], offset dword_B3FCFC
0x9A66C3: jmp     sub_435CC0
0x9A66C8: mov     [esp+arg_4], ecx; jumptable 009A6689 case 4
0x9A66CC: mov     [esp+arg_0], offset dword_B40190
0x9A66D4: jmp     sub_435CC0
