0x65DF40: push    esi
0x65DF41: mov     esi, ecx
0x65DF43: cmp     dword ptr [esi+5ACh], 0
0x65DF4A: jnz     short loc_65DF71
0x65DF4C: push    8; Size
0x65DF4E: call    FormHeapAlloc
0x65DF53: add     esp, 4
0x65DF56: test    eax, eax
0x65DF58: jz      short loc_65DF69
0x65DF5A: mov     dword ptr [eax], 0
0x65DF60: mov     dword ptr [eax+4], 0
0x65DF67: jmp     short loc_65DF6B
0x65DF69: xor     eax, eax
0x65DF6B: mov     [esi+5ACh], eax
0x65DF71: mov     ecx, [esi+5ACh]
0x65DF77: mov     edx, [esp+4+arg_0]
0x65DF7B: mov     eax, ecx
0x65DF7D: test    eax, eax
0x65DF7F: pop     esi
0x65DF80: jz      short loc_65DF8D
0x65DF82: cmp     [eax], edx
0x65DF84: jz      short locret_65DF96
0x65DF86: mov     eax, [eax+4]
0x65DF89: test    eax, eax
0x65DF8B: jnz     short loc_65DF82
0x65DF8D: mov     [esp+arg_0], edx
0x65DF91: jmp     BSSimpleList_PushFront
0x65DF96: retn    4
