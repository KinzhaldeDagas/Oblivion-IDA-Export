0x627D60: push    ebx
0x627D61: mov     ebx, [esp+4+arg_0]
0x627D65: push    esi
0x627D66: mov     esi, ecx
0x627D68: push    edi
0x627D69: lea     edi, [esi+54h]
0x627D6C: push    ebx
0x627D6D: mov     ecx, edi
0x627D6F: call    BSSimpleList_Remove
0x627D74: mov     ecx, [esi+28h]
0x627D77: test    ecx, ecx
0x627D79: jz      short loc_627DB7
0x627D7B: call    sub_569E60
0x627D80: test    eax, eax
0x627D82: jz      short loc_627DB7
0x627D84: cmp     eax, ebx
0x627D86: jnz     short loc_627DB7
0x627D88: cmp     dword ptr [edi+4], 0
0x627D8C: jnz     short loc_627D93
0x627D8E: cmp     dword ptr [edi], 0
0x627D91: jz      short loc_627DA3
0x627D93: mov     eax, [edi]
0x627D95: mov     ecx, [esi+28h]
0x627D98: push    eax
0x627D99: call    TeSPackage_TargetData_SetTargetREFR
0x627D9E: mov     ecx, [edi]
0x627DA0: push    ecx
0x627DA1: jmp     short loc_627DAF
0x627DA3: mov     ecx, [esi+28h]
0x627DA6: push    0
0x627DA8: call    TeSPackage_TargetData_SetTargetREFR
0x627DAD: push    0
0x627DAF: mov     ecx, [esi+24h]
0x627DB2: call    TESPackage_LocationData_SetReference
0x627DB7: cmp     ebx, [esi+60h]
0x627DBA: jnz     short loc_627DC3
0x627DBC: mov     dword ptr [esi+60h], 0
0x627DC3: pop     edi
0x627DC4: pop     esi
0x627DC5: pop     ebx
0x627DC6: retn    4
