0x5C1060: mov     eax, [esp+arg_0]
0x5C1064: lea     ecx, [eax+1]
0x5C1067: cmp     ecx, 8
0x5C106A: ja      locret_5C10F4
0x5C1070: mov     ecx, ds:0B3B430h
0x5C1076: cmp     eax, ecx
0x5C1078: jz      short locret_5C10F4
0x5C107A: xor     edx, edx
0x5C107C: cmp     eax, edx
0x5C107E: mov     ds:0B3B420h, dl
0x5C1084: jl      short loc_5C10B7
0x5C1086: cmp     ecx, edx
0x5C1088: jge     short loc_5C10B7
0x5C108A: or      ecx, 0FFFFFFFFh
0x5C108D: mov     ds:0B3B428h, edx
0x5C1093: mov     ds:0B3B42Ch, edx
0x5C1099: mov     edx, ds:0B33EA0h
0x5C109F: mov     ds:0B3B434h, ecx
0x5C10A5: mov     ds:0B3B438h, ecx
0x5C10AB: mov     ds:0B3B424h, edx
0x5C10B1: mov     ds:0B3B430h, eax
0x5C10B6: retn
0x5C10B7: mov     edx, ds:0B3B434h
0x5C10BD: mov     ds:0B3B438h, edx
0x5C10C3: mov     edx, ds:0B3B428h
0x5C10C9: mov     ds:0B3B434h, ecx
0x5C10CF: mov     ecx, ds:0B33EA0h
0x5C10D5: mov     ds:0B3B42Ch, edx
0x5C10DB: mov     edx, ecx
0x5C10DD: sub     edx, ds:0B3B424h
0x5C10E3: mov     ds:0B3B424h, ecx
0x5C10E9: mov     ds:0B3B428h, edx
0x5C10EF: mov     ds:0B3B430h, eax
0x5C10F4: retn
