0x6825C0: push    ecx
0x6825C1: push    ebx
0x6825C2: push    esi
0x6825C3: mov     esi, ecx
0x6825C5: push    edi
0x6825C6: mov     ecx, offset stru_B3C000
0x6825CB: xor     ebx, ebx
0x6825CD: call    sub_49F470
0x6825D2: mov     edi, [esp+10h+arg_0]
0x6825D6: lea     eax, [esp+10h+var_4]
0x6825DA: push    eax
0x6825DB: push    edi
0x6825DC: lea     ecx, [esi+20h]
0x6825DF: mov     [esp+18h+var_4], ebx
0x6825E3: call    NiTMap_GetAt
0x6825E8: test    al, al
0x6825EA: jz      short loc_6825F2
0x6825EC: cmp     [esp+10h+var_4], ebx
0x6825F0: jnz     short loc_682622
0x6825F2: lea     ecx, [esp+10h+var_4]
0x6825F6: push    ecx
0x6825F7: push    edi
0x6825F8: lea     ecx, [esi+10h]
0x6825FB: call    NiTMap_GetAt
0x682600: test    al, al
0x682602: jz      short loc_68260A
0x682604: cmp     [esp+10h+var_4], ebx
0x682608: jnz     short loc_682622
0x68260A: lea     edx, [esp+10h+var_4]
0x68260E: push    edx
0x68260F: push    edi
0x682610: lea     ecx, [esi+30h]
0x682613: call    NiTMap_GetAt
0x682618: test    al, al
0x68261A: jz      short loc_682624
0x68261C: cmp     [esp+10h+var_4], ebx
0x682620: jz      short loc_682624
0x682622: mov     bl, 1
0x682624: mov     ecx, offset stru_B3C000
0x682629: call    j_NiLeaveCriticalSection_0
0x68262E: pop     edi
0x68262F: pop     esi
0x682630: mov     al, bl
0x682632: pop     ebx
0x682633: pop     ecx
0x682634: retn    4
