0x4C1030: mov     ecx, [ecx+24h]
0x4C1033: test    ecx, ecx
0x4C1035: push    esi
0x4C1036: jz      short loc_4C1075
0x4C1038: mov     eax, [esp+4+arg_0]
0x4C103C: cmp     eax, 4
0x4C103F: jge     short loc_4C1075
0x4C1041: mov     edx, [esp+4+arg_4]
0x4C1045: lea     esi, [edx+12h]
0x4C1048: cmp     esi, 121h
0x4C104E: jge     short loc_4C1075
0x4C1050: lea     esi, [edx-12h]
0x4C1053: test    esi, esi
0x4C1055: jl      short loc_4C1075
0x4C1057: lea     esi, [esp+4+arg_0]
0x4C105B: push    esi
0x4C105C: shl     eax, 4
0x4C105F: push    edx
0x4C1060: lea     ecx, [eax+ecx+54h]
0x4C1064: call    NiTMap_GetAt
0x4C1069: neg     al
0x4C106B: pop     esi
0x4C106C: sbb     eax, eax
0x4C106E: and     eax, [esp+arg_0]
0x4C1072: retn    8
0x4C1075: xor     eax, eax
0x4C1077: pop     esi
0x4C1078: retn    8
