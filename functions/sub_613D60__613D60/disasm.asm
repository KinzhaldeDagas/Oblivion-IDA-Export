0x613D60: push    ebp
0x613D61: push    esi
0x613D62: push    edi
0x613D63: mov     edi, [esp+0Ch+arg_0]
0x613D67: xor     ebp, ebp
0x613D69: cmp     edi, ebp
0x613D6B: mov     esi, ecx
0x613D6D: jz      loc_613E03
0x613D73: mov     ecx, [esi+5Ch]
0x613D76: cmp     ecx, ebp
0x613D78: jz      short loc_613D80
0x613D7A: push    edi
0x613D7B: call    BSSimpleList_Remove
0x613D80: mov     ecx, [esi+60h]
0x613D83: cmp     ecx, ebp
0x613D85: jz      short loc_613D8D
0x613D87: push    edi
0x613D88: call    BSSimpleList_Remove
0x613D8D: mov     ecx, [esi+64h]
0x613D90: cmp     ecx, ebp
0x613D92: jz      short loc_613D9A
0x613D94: push    edi
0x613D95: call    BSSimpleList_Remove
0x613D9A: push    ebx
0x613D9B: mov     ebx, [edi+4]
0x613D9E: cmp     ebx, ebp
0x613DA0: jz      short loc_613DB2
0x613DA2: mov     ecx, ebx
0x613DA4: call    ContainerEntryExtraData_DestroyDataTable
0x613DA9: push    ebx
0x613DAA: call    FormHeapFree
0x613DAF: add     esp, 4
0x613DB2: cmp     edi, [esi+94h]
0x613DB8: pop     ebx
0x613DB9: jnz     short loc_613DC3
0x613DBB: mov     [esi+94h], ebp
0x613DC1: jmp     short loc_613DF1
0x613DC3: cmp     edi, [esi+98h]
0x613DC9: jnz     short loc_613DD3
0x613DCB: mov     [esi+98h], ebp
0x613DD1: jmp     short loc_613DF1
0x613DD3: cmp     edi, [esi+90h]
0x613DD9: jnz     short loc_613DE3
0x613DDB: mov     [esi+90h], ebp
0x613DE1: jmp     short loc_613DF1
0x613DE3: cmp     edi, [esi+9Ch]
0x613DE9: jnz     short loc_613DF1
0x613DEB: mov     [esi+9Ch], ebp
0x613DF1: mov     ecx, [edi]
0x613DF3: push    1
0x613DF5: call    sub_419F10
0x613DFA: push    edi
0x613DFB: call    FormHeapFree
0x613E00: add     esp, 4
0x613E03: pop     edi
0x613E04: pop     esi
0x613E05: pop     ebp
0x613E06: retn    4
