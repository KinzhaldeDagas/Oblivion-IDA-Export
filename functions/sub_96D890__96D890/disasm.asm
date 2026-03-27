0x96D890: push    esi
0x96D891: mov     esi, ecx
0x96D893: mov     ecx, [esi+2Ch]
0x96D896: test    ecx, ecx
0x96D898: jz      short loc_96D8A3
0x96D89A: mov     eax, [ecx]
0x96D89C: mov     edx, [eax+8]
0x96D89F: push    1
0x96D8A1: call    edx
0x96D8A3: mov     ecx, [esi+30h]
0x96D8A6: test    ecx, ecx
0x96D8A8: jz      short loc_96D8B3
0x96D8AA: mov     eax, [ecx]
0x96D8AC: mov     edx, [eax+8]
0x96D8AF: push    1
0x96D8B1: call    edx
0x96D8B3: mov     ecx, [esp+4+arg_0]
0x96D8B7: test    ecx, ecx
0x96D8B9: mov     [esi+2Ch], ecx
0x96D8BC: jz      short loc_96D8E4
0x96D8BE: mov     eax, [ecx]
0x96D8C0: mov     edx, [eax+18h]
0x96D8C3: call    edx
0x96D8C5: mov     ecx, [esi+8]
0x96D8C8: test    ecx, ecx
0x96D8CA: mov     [esi+30h], eax
0x96D8CD: jz      short loc_96D8EB
0x96D8CF: mov     edx, [eax]
0x96D8D1: mov     edx, [edx+14h]
0x96D8D4: add     ecx, 64h ; 'd'
0x96D8D7: push    ecx
0x96D8D8: mov     ecx, [esi+2Ch]
0x96D8DB: push    ecx
0x96D8DC: mov     ecx, eax
0x96D8DE: call    edx
0x96D8E0: pop     esi
0x96D8E1: retn    4
0x96D8E4: mov     dword ptr [esi+30h], 0
0x96D8EB: pop     esi
0x96D8EC: retn    4
