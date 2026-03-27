0x41B7C0: mov     ecx, [esp+arg_0]
0x41B7C4: add     ecx, 0FFFFFFECh; switch 6 cases
0x41B7C7: cmp     ecx, 5
0x41B7CA: mov     eax, 6
0x41B7CF: ja      short Magic_GetSchoolFromSkillAV___Done
0x41B7D1: jmp     ds:jpt_41B7D1[ecx*4]; switch jump
0x41B7D8: xor     eax, eax; jumptable 0041B7D1 case 20
0x41B7DA: retn
0x41B7DB: mov     eax, 1; jumptable 0041B7D1 case 21
0x41B7E0: retn
0x41B7E1: mov     eax, 2; jumptable 0041B7D1 case 22
0x41B7E6: retn
0x41B7E7: mov     eax, 3; jumptable 0041B7D1 case 23
0x41B7EC: retn
0x41B7ED: mov     eax, 4; jumptable 0041B7D1 case 24
0x41B7F2: retn
0x41B7F3: mov     eax, 5; jumptable 0041B7D1 case 25
