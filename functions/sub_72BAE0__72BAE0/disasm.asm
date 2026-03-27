0x72BAE0: mov     edx, [esp+arg_0]
0x72BAE4: test    edx, edx
0x72BAE6: jnz     short loc_72BAEE
0x72BAE8: mov     eax, 1
0x72BAED: retn
0x72BAEE: mov     eax, [esp+arg_4]
0x72BAF2: test    eax, eax
0x72BAF4: jnz     short loc_72BAFA
0x72BAF6: or      eax, 0FFFFFFFFh
0x72BAF9: retn
0x72BAFA: mov     ecx, [eax]
0x72BAFC: mov     eax, [edx]
0x72BAFE: mov     edi, edi
0x72BB00: mov     dl, [eax]
0x72BB02: cmp     dl, [ecx]
0x72BB04: jnz     short loc_72BB1F
0x72BB06: test    dl, dl
0x72BB08: jz      short loc_72BB1C
0x72BB0A: mov     dl, [eax+1]
0x72BB0D: cmp     dl, [ecx+1]
0x72BB10: jnz     short loc_72BB1F
0x72BB12: add     eax, 2
0x72BB15: add     ecx, 2
0x72BB18: test    dl, dl
0x72BB1A: jnz     short loc_72BB00
0x72BB1C: xor     eax, eax
0x72BB1E: retn
0x72BB1F: sbb     eax, eax
0x72BB21: sbb     eax, 0FFFFFFFFh
0x72BB24: retn
