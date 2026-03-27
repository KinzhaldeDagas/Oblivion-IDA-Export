0x5ACAB7: push    ecx; jumptable 005AC9ED default case
0x5ACAB8: mov     ecx, ds:0B38398h
0x5ACABE: push    ecx; a2
0x5ACABF: lea     ecx, [esp+8+arg_8]; this
0x5ACAC3: call    BSStringT_Set
0x5ACAC8: mov     ecx, [esi+4]
0x5ACACB: mov     esi, [esp+arg_8.m_data]
0x5ACACF: push    esi
0x5ACAD0: push    0FB0h
0x5ACAD5: call    Tile_SetString
0x5ACADA: push    esi
0x5ACADB: call    FormHeapFree
0x5ACAE0: add     esp, 4
0x5ACAE3: mov     ecx, [esp+arg_14]
0x5ACAE7: mov     large fs:0, ecx
0x5ACAEE: pop     ecx
0x5ACAEF: pop     esi
0x5ACAF0: mov     esp, ebp
0x5ACAF2: pop     ebp
0x5ACAF3: retn
