0x7EF9E0: mov     eax, [esp+arg_0]
0x7EF9E4: test    eax, eax
0x7EF9E6: jz      short loc_7EF9FC
0x7EF9E8: jle     short locret_7EFA06
0x7EF9EA: cmp     eax, 3
0x7EF9ED: jg      short locret_7EFA06
0x7EF9EF: mov     dword ptr [ecx+0A0h], 1
0x7EF9F9: retn    4
0x7EF9FC: mov     dword ptr [ecx+0A0h], 3
0x7EFA06: retn    4
