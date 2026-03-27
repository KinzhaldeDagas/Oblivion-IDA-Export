0x4BC020: mov     ecx, [esp+arg_0]
0x4BC024: xor     eax, eax
0x4BC026: cmp     ecx, 5; switch 6 cases
0x4BC029: ja      short def_4BC02B
0x4BC02B: jmp     ds:jpt_4BC02B[ecx*4]; switch jump
0x4BC032: mov     eax, ds:0B38D98h; jumptable 004BC02B case 0
0x4BC037: retn
0x4BC038: mov     eax, ds:0B35B3Ch; jumptable 004BC02B case 1
0x4BC03D: retn
0x4BC03E: mov     eax, ds:0B35B4Ch; jumptable 004BC02B case 2
0x4BC043: retn
0x4BC044: mov     eax, ds:0B35B5Ch; jumptable 004BC02B case 3
0x4BC049: retn
0x4BC04A: mov     eax, ds:0B35B6Ch; jumptable 004BC02B case 4
0x4BC04F: retn
0x4BC050: mov     eax, ds:0B35B7Ch; jumptable 004BC02B case 5
