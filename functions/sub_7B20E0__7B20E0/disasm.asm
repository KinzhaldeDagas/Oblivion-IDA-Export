0x7B20E0: mov     eax, [esp+arg_0]
0x7B20E4: test    eax, eax
0x7B20E6: jz      short loc_7B20FC
0x7B20E8: jle     short locret_7B2106
0x7B20EA: cmp     eax, 3
0x7B20ED: jg      short locret_7B2106
0x7B20EF: mov     dword ptr [ecx+0A4h], 1
0x7B20F9: retn    4
0x7B20FC: mov     dword ptr [ecx+0A4h], 3
0x7B2106: retn    4
