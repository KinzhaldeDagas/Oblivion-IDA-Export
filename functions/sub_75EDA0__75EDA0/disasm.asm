0x75EDA0: push    ebx
0x75EDA1: push    esi
0x75EDA2: push    edi
0x75EDA3: mov     edi, [esp+0Ch+arg0]
0x75EDA7: push    edi; arg0
0x75EDA8: mov     esi, ecx
0x75EDAA: call    sub_700750
0x75EDAF: mov     ecx, [edi]
0x75EDB1: lea     eax, [esp+0Ch+arg0]
0x75EDB5: push    eax
0x75EDB6: push    esi
0x75EDB7: call    NiTMap_GetAt
0x75EDBC: mov     eax, [esi+10h]
0x75EDBF: test    eax, eax
0x75EDC1: mov     ebx, [esp+0Ch+arg0]
0x75EDC5: jz      short loc_75EDE7
0x75EDC7: lea     ecx, [esp+0Ch+arg0]
0x75EDCB: push    ecx
0x75EDCC: mov     ecx, [edi]
0x75EDCE: push    eax
0x75EDCF: call    NiTMap_GetAt
0x75EDD4: test    al, al
0x75EDD6: jz      short loc_75EDE1
0x75EDD8: mov     edx, [esp+0Ch+arg0]
0x75EDDC: mov     [ebx+10h], edx
0x75EDDF: jmp     short loc_75EDE7
0x75EDE1: mov     eax, [esi+10h]
0x75EDE4: mov     [ebx+10h], eax
0x75EDE7: mov     eax, [esi+24h]
0x75EDEA: test    eax, eax
0x75EDEC: jz      short loc_75EE0E
0x75EDEE: lea     ecx, [esp+0Ch+arg0]
0x75EDF2: push    ecx
0x75EDF3: mov     ecx, [edi]
0x75EDF5: push    eax
0x75EDF6: call    NiTMap_GetAt
0x75EDFB: test    al, al
0x75EDFD: jz      short loc_75EE08
0x75EDFF: mov     edx, [esp+0Ch+arg0]
0x75EE03: mov     [ebx+24h], edx
0x75EE06: jmp     short loc_75EE0E
0x75EE08: mov     eax, [esi+24h]
0x75EE0B: mov     [ebx+24h], eax
0x75EE0E: mov     ecx, [esi+28h]
0x75EE11: test    ecx, ecx
0x75EE13: jz      short loc_75EE1D
0x75EE15: mov     edx, [ecx]
0x75EE17: mov     eax, [edx+38h]
0x75EE1A: push    edi
0x75EE1B: call    eax
0x75EE1D: pop     edi
0x75EE1E: pop     esi
0x75EE1F: pop     ebx
0x75EE20: retn    4
