0x6DEACB: mov     eax, [esp+arg_C]; jumptable 006DEA8F default case
0x6DEACF: fld     dword ptr [esp+0]
0x6DEAD2: fstp    dword ptr [eax]
0x6DEAD4: fld     [esp+arg_0]
0x6DEAD8: fstp    dword ptr [eax+4]
0x6DEADB: fld     [esp+arg_4]
0x6DEADF: fstp    dword ptr [eax+8]
0x6DEAE2: add     esp, 0Ch
0x6DEAE5: retn    4
