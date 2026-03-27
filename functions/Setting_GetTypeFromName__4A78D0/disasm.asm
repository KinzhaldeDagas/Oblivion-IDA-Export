0x4A78D0: mov     ecx, [esp+arg_0]
0x4A78D4: test    ecx, ecx
0x4A78D6: mov     eax, 9
0x4A78DB: jz      short Setting_GetTypeFromName___GMSTType_Done; jumptable 004A78EF default case, cases 84-96,100,101,103,106-113,116
0x4A78DD: movsx   ecx, byte ptr [ecx]
0x4A78E0: add     ecx, 0FFFFFFADh; switch 35 cases
0x4A78E3: cmp     ecx, 22h
0x4A78E6: ja      short Setting_GetTypeFromName___GMSTType_Done; jumptable 004A78EF default case, cases 84-96,100,101,103,106-113,116
0x4A78E8: movzx   ecx, ds:byte_4A7954[ecx]
0x4A78EF: jmp     ds:jpt_4A78EF[ecx*4]; switch jump
0x4A78F6: xor     eax, eax; jumptable 004A78EF case 98
0x4A78F8: retn
0x4A78F9: mov     eax, 1; jumptable 004A78EF case 99
0x4A78FE: retn
0x4A78FF: mov     eax, 5; jumptable 004A78EF case 102
0x4A7904: retn
0x4A7905: mov     eax, 2; jumptable 004A78EF case 104
0x4A790A: retn
0x4A790B: mov     eax, 3; jumptable 004A78EF case 105
0x4A7910: retn
0x4A7911: mov     eax, 4; jumptable 004A78EF case 117
0x4A7916: retn
0x4A7917: mov     eax, 6; jumptable 004A78EF cases 83,115
0x4A791C: retn
0x4A791D: mov     eax, 7; jumptable 004A78EF case 114
0x4A7922: retn
0x4A7923: mov     eax, 8; jumptable 004A78EF case 97
0x4A7928: retn; jumptable 004A78EF default case, cases 84-96,100,101,103,106-113,116
