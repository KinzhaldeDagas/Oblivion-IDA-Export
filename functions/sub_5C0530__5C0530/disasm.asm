0x5C0530: mov     eax, [esp+arg_0]
0x5C0534: cmp     eax, 1
0x5C0537: jnz     short loc_5C0543
0x5C0539: mov     eax, [esp+arg_4]
0x5C053D: mov     [ecx+28h], eax
0x5C0540: retn    8
0x5C0543: cmp     eax, 2
0x5C0546: jnz     short loc_5C0552
0x5C0548: mov     edx, [esp+arg_4]
0x5C054C: mov     [ecx+2Ch], edx
0x5C054F: retn    8
0x5C0552: cmp     eax, 3
0x5C0555: jnz     short loc_5C0561
0x5C0557: mov     eax, [esp+arg_4]
0x5C055B: mov     [ecx+30h], eax
0x5C055E: retn    8
0x5C0561: cmp     eax, 4
0x5C0564: jnz     short loc_5C0570
0x5C0566: mov     edx, [esp+arg_4]
0x5C056A: mov     [ecx+34h], edx
0x5C056D: retn    8
0x5C0570: cmp     eax, 6
0x5C0573: jnz     short loc_5C057F
0x5C0575: mov     eax, [esp+arg_4]
0x5C0579: mov     [ecx+38h], eax
0x5C057C: retn    8
0x5C057F: cmp     eax, 7
0x5C0582: jnz     short locret_5C058B
0x5C0584: mov     edx, [esp+arg_4]
0x5C0588: mov     [ecx+3Ch], edx
0x5C058B: retn    8
