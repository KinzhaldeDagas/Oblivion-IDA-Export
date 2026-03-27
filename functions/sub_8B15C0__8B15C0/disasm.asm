0x8B15C0: mov     eax, [esp+arg_0]
0x8B15C4: lea     edx, [eax+eax*2]
0x8B15C7: mov     eax, 4
0x8B15CC: cmp     edx, eax
0x8B15CE: jle     short loc_8B15D6
0x8B15D0: add     eax, eax
0x8B15D2: cmp     eax, edx
0x8B15D4: jl      short loc_8B15D0
0x8B15D6: mov     [esp+arg_0], eax
0x8B15DA: jmp     sub_8B1060
