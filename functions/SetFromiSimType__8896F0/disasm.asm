0x8896F0: mov     eax, [esp+arg_0]
0x8896F4: mov     ecx, 4
0x8896F9: cmp     eax, ecx; switch 5 cases
0x8896FB: ja      short def_8896FD; jumptable 008896FD default case, case 1
0x8896FD: jmp     ds:jpt_8896FD[eax*4]; switch jump
0x889704: mov     dword ptr ds:0B2E2DCh, 1; jumptable 008896FD case 0
0x88970E: retn
0x88970F: mov     dword ptr ds:0B2E2DCh, 2; jumptable 008896FD case 2
0x889719: retn
0x88971A: mov     dword ptr ds:0B2E2DCh, 5; jumptable 008896FD case 3
0x889724: retn
0x889725: mov     dword ptr ds:0B2E2DCh, 9; jumptable 008896FD case 4
0x88972F: retn
0x889730: mov     ds:0B2E2DCh, ecx; jumptable 008896FD default case, case 1
0x889736: retn
