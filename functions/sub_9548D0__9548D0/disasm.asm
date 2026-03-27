0x9548D0: mov     eax, [esp+arg_4]
0x9548D4: test    eax, eax
0x9548D6: mov     [esp+arg_4], eax
0x9548DA: jge     short loc_9548EF
0x9548DC: mov     eax, [esp+arg_0]
0x9548E0: mov     ecx, [ecx+10h]
0x9548E3: add     eax, 68h ; 'h'
0x9548E6: mov     [esp+arg_0], eax
0x9548EA: jmp     sub_9567C0
0x9548EF: cmp     eax, 100h
0x9548F4: jge     short loc_954909
0x9548F6: mov     edx, [esp+arg_0]
0x9548FA: mov     ecx, [ecx+10h]
0x9548FD: add     edx, 60h ; '`'
0x954900: mov     [esp+arg_0], edx
0x954904: jmp     sub_956580
0x954909: cmp     eax, 10000h
0x95490E: jge     short loc_954923
0x954910: mov     eax, [esp+arg_0]
0x954914: mov     ecx, [ecx+10h]
0x954917: add     eax, 64h ; 'd'
0x95491A: mov     [esp+arg_0], eax
0x95491E: jmp     sub_9565E0
0x954923: mov     edx, [esp+arg_0]
0x954927: mov     ecx, [ecx+10h]
0x95492A: add     edx, 68h ; 'h'
0x95492D: mov     [esp+arg_0], edx
0x954931: jmp     sub_9567C0
