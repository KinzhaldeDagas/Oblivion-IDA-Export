0x4BC070: mov     ecx, [esp+arg_0]
0x4BC074: xor     eax, eax
0x4BC076: cmp     ecx, 5; switch 6 cases
0x4BC079: ja      short def_4BC07B; jumptable 004BC07B default case
0x4BC07B: jmp     ds:jpt_4BC07B[ecx*4]; switch jump
0x4BC082: xor     eax, eax; jumptable 004BC07B case 0
0x4BC084: retn
0x4BC085: mov     eax, ds:0B35B44h; jumptable 004BC07B case 1
0x4BC08A: retn
0x4BC08B: mov     eax, ds:0B35B54h; jumptable 004BC07B case 2
0x4BC090: retn
0x4BC091: mov     eax, ds:0B35B64h; jumptable 004BC07B case 3
0x4BC096: retn
0x4BC097: mov     eax, ds:0B35B74h; jumptable 004BC07B case 4
0x4BC09C: retn
0x4BC09D: mov     eax, ds:0B35B84h; jumptable 004BC07B case 5
0x4BC0A2: retn; jumptable 004BC07B default case
