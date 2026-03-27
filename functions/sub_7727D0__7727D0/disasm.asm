0x7727D0: mov     eax, [ecx+8]
0x7727D3: test    eax, eax
0x7727D5: mov     edx, [esp+arg_0]
0x7727D9: jz      short loc_7727EB
0x7727DB: jmp     short loc_7727E0
0x7727DD: align 10h
0x7727E0: cmp     [eax], edx
0x7727E2: jz      short loc_772802
0x7727E4: mov     eax, [eax+8]
0x7727E7: test    eax, eax
0x7727E9: jnz     short loc_7727E0
0x7727EB: mov     eax, [ecx+10h]
0x7727EE: test    eax, eax
0x7727F0: jz      short loc_7727FD
0x7727F2: cmp     [eax], edx
0x7727F4: jz      short loc_77280C
0x7727F6: mov     eax, [eax+8]
0x7727F9: test    eax, eax
0x7727FB: jnz     short loc_7727F2
0x7727FD: xor     eax, eax
0x7727FF: retn    8
0x772802: mov     ecx, [esp+arg_4]
0x772806: mov     byte ptr [ecx], 0
0x772809: retn    8
0x77280C: mov     edx, [esp+arg_4]
0x772810: mov     byte ptr [edx], 1
0x772813: retn    8
