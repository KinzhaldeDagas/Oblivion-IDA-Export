0x41B770: mov     ecx, [esp+arg_0]
0x41B774: or      eax, 0FFFFFFFFh
0x41B777: cmp     ecx, 5; switch 6 cases
0x41B77A: ja      short Magic_GetSkillAVFromSchool___Done
0x41B77C: jmp     ds:jpt_41B77C[ecx*4]; switch jump
0x41B783: mov     eax, 14h; jumptable 0041B77C case 0
0x41B788: retn
0x41B789: mov     eax, 15h; jumptable 0041B77C case 1
0x41B78E: retn
0x41B78F: mov     eax, 16h; jumptable 0041B77C case 2
0x41B794: retn
0x41B795: mov     eax, 17h; jumptable 0041B77C case 3
0x41B79A: retn
0x41B79B: mov     eax, 18h; jumptable 0041B77C case 4
0x41B7A0: retn
0x41B7A1: mov     eax, 19h; jumptable 0041B77C case 5
