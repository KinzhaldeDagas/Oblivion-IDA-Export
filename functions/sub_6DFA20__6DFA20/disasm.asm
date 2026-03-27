0x6DFA20: push    ebx
0x6DFA21: push    esi
0x6DFA22: push    edi
0x6DFA23: mov     edi, [esp+0Ch+arg0]
0x6DFA27: push    edi; arg0
0x6DFA28: mov     esi, ecx
0x6DFA2A: call    sub_700750
0x6DFA2F: mov     ecx, [edi]
0x6DFA31: lea     eax, [esp+0Ch+arg0]
0x6DFA35: push    eax
0x6DFA36: push    esi
0x6DFA37: call    NiTMap_GetAt
0x6DFA3C: mov     edx, [esi+10h]
0x6DFA3F: mov     ebx, [esp+0Ch+arg0]
0x6DFA43: lea     ecx, [esp+0Ch+arg0]
0x6DFA47: push    ecx
0x6DFA48: mov     ecx, [edi]
0x6DFA4A: push    edx
0x6DFA4B: call    NiTMap_GetAt
0x6DFA50: test    al, al
0x6DFA52: jz      short loc_6DFA61
0x6DFA54: mov     eax, [esp+0Ch+arg0]
0x6DFA58: pop     edi
0x6DFA59: pop     esi
0x6DFA5A: mov     [ebx+10h], eax
0x6DFA5D: pop     ebx
0x6DFA5E: retn    4
0x6DFA61: mov     ecx, [esi+10h]
0x6DFA64: pop     edi
0x6DFA65: pop     esi
0x6DFA66: mov     [ebx+10h], ecx
0x6DFA69: pop     ebx
0x6DFA6A: retn    4
