0x5C1100: mov     eax, ds:0B3B430h
0x5C1105: cmp     eax, 0FFFFFFFFh
0x5C1108: jnz     short locret_5C1153
0x5C110A: mov     ecx, ds:0B3B434h
0x5C1110: test    ecx, ecx
0x5C1112: mov     edx, ds:0B394C8h
0x5C1118: push    edi
0x5C1119: mov     edi, ds:0B3B428h
0x5C111F: jl      short loc_5C1129
0x5C1121: cmp     edi, edx
0x5C1123: jle     short loc_5C1129
0x5C1125: mov     eax, ecx
0x5C1127: pop     edi
0x5C1128: retn
0x5C1129: mov     eax, ds:0B3B438h
0x5C112E: test    eax, eax
0x5C1130: push    esi
0x5C1131: mov     esi, ds:0B3B42Ch
0x5C1137: jl      short loc_5C113D
0x5C1139: cmp     esi, edx
0x5C113B: jg      short loc_5C1151
0x5C113D: test    ecx, ecx
0x5C113F: jl      short loc_5C114E
0x5C1141: test    eax, eax
0x5C1143: jl      short loc_5C1149
0x5C1145: cmp     esi, edi
0x5C1147: ja      short loc_5C1151
0x5C1149: pop     esi
0x5C114A: mov     eax, ecx
0x5C114C: pop     edi
0x5C114D: retn
0x5C114E: or      eax, 0FFFFFFFFh
0x5C1151: pop     esi
0x5C1152: pop     edi
0x5C1153: retn
