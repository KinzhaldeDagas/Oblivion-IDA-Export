0x565C50: mov     eax, [esp+arg_0]
0x565C54: cmp     eax, 6; switch 7 cases
0x565C57: ja      short ActorValue_GetGroupOffsetFromAV___def_565C59
0x565C59: jmp     ds:jpt_565C59[eax*4]; switch jump
0x565C60: mov     al, byte ptr [esp+arg_4]; jumptable 00565C59 case 0
0x565C64: retn
0x565C65: mov     eax, [esp+arg_4]; jumptable 00565C59 case 1
0x565C69: add     eax, 0FFFFFFF8h
0x565C6C: retn
0x565C6D: mov     eax, [esp+arg_4]; jumptable 00565C59 case 2
0x565C71: add     eax, 0FFFFFFF4h
0x565C74: retn
0x565C75: mov     eax, [esp+arg_4]; jumptable 00565C59 case 3
0x565C79: add     eax, 0FFFFFFDFh
0x565C7C: retn
0x565C7D: mov     eax, [esp+arg_4]; jumptable 00565C59 case 4
0x565C81: add     eax, 0FFFFFFDBh
0x565C84: retn
0x565C85: mov     eax, [esp+arg_4]; jumptable 00565C59 case 5
0x565C89: add     eax, 0FFFFFFD8h
0x565C8C: retn
0x565C8D: mov     eax, [esp+arg_4]; jumptable 00565C59 case 6
0x565C91: add     eax, 0FFFFFFD6h
0x565C94: retn
