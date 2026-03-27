0x8B15E0: mov     eax, [esp+arg_0]
0x8B15E4: lea     edx, [eax+eax*2]
0x8B15E7: mov     eax, 4
0x8B15EC: cmp     edx, eax
0x8B15EE: jle     short loc_8B15F6
0x8B15F0: add     eax, eax
0x8B15F2: cmp     eax, edx
0x8B15F4: jl      short loc_8B15F0
0x8B15F6: mov     [esp+arg_0], eax
0x8B15FA: jmp     sub_8B14B0
