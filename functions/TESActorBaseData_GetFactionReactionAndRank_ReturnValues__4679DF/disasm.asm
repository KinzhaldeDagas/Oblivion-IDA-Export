0x4679DF: test    ebx, ebx
0x4679E1: pop     edi
0x4679E2: pop     esi
0x4679E3: pop     ebp
0x4679E4: jz      short loc_4679F9
0x4679E6: mov     ecx, [esp-0Ch+arg_24]
0x4679EA: mov     edx, [esp-0Ch+arg_14]
0x4679EE: mov     eax, ebx
0x4679F0: mov     [ecx], edx
0x4679F2: pop     ebx
0x4679F3: add     esp, 10h
0x4679F6: retn    8
0x4679F9: mov     eax, [esp-0Ch+arg_10]
0x4679FD: cmp     eax, 2710h
0x467A02: jz      short loc_467A15
0x467A04: mov     ecx, [esp-0Ch+arg_24]
0x467A08: mov     edx, [esp-0Ch+arg_18]
0x467A0C: mov     [ecx], edx
0x467A0E: pop     ebx
0x467A0F: add     esp, 10h
0x467A12: retn    8
0x467A15: xor     eax, eax
0x467A17: pop     ebx
0x467A18: add     esp, 10h
0x467A1B: retn    8
