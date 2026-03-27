0x682640: push    esi
0x682641: push    edi
0x682642: mov     edi, [esp+8+arg_0]
0x682646: test    edi, edi
0x682648: mov     esi, ecx
0x68264A: jz      short loc_6826BF
0x68264C: mov     ecx, offset stru_B3C000
0x682651: call    sub_49F470
0x682656: lea     eax, [esp+8+arg_0]
0x68265A: push    eax
0x68265B: push    edi
0x68265C: lea     ecx, [esi+20h]
0x68265F: mov     [esp+10h+arg_0], 0
0x682667: call    NiTMap_GetAt
0x68266C: mov     eax, [esp+8+arg_0]
0x682670: test    eax, eax
0x682672: jnz     short loc_6826A0
0x682674: lea     ecx, [esp+8+arg_0]
0x682678: push    ecx
0x682679: push    edi
0x68267A: lea     ecx, [esi+10h]
0x68267D: call    NiTMap_GetAt
0x682682: mov     eax, [esp+8+arg_0]
0x682686: test    eax, eax
0x682688: jnz     short loc_6826A0
0x68268A: lea     edx, [esp+8+arg_0]
0x68268E: push    edx
0x68268F: push    edi
0x682690: lea     ecx, [esi+30h]
0x682693: call    NiTMap_GetAt
0x682698: mov     eax, [esp+8+arg_0]
0x68269C: test    eax, eax
0x68269E: jz      short loc_6826B5
0x6826A0: mov     ecx, [esp+8+arg_4]
0x6826A4: mov     edx, [ecx]
0x6826A6: mov     [eax+14h], edx
0x6826A9: mov     edx, [ecx+4]
0x6826AC: mov     [eax+18h], edx
0x6826AF: mov     ecx, [ecx+8]
0x6826B2: mov     [eax+1Ch], ecx
0x6826B5: mov     ecx, offset stru_B3C000
0x6826BA: call    j_NiLeaveCriticalSection_0
0x6826BF: pop     edi
0x6826C0: pop     esi
0x6826C1: retn    8
