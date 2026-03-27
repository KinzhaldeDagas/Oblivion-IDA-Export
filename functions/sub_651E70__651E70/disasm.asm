0x651E70: push    esi
0x651E71: push    edi
0x651E72: mov     edi, [esp+8+arg_0]
0x651E76: test    edi, edi
0x651E78: mov     esi, ecx
0x651E7A: jz      short loc_651EC7
0x651E7C: cmp     dword ptr [esi+170h], 0
0x651E83: jnz     short loc_651EAA
0x651E85: push    8; Size
0x651E87: call    FormHeapAlloc
0x651E8C: add     esp, 4
0x651E8F: test    eax, eax
0x651E91: jz      short loc_651EA2
0x651E93: mov     dword ptr [eax], 0
0x651E99: mov     dword ptr [eax+4], 0
0x651EA0: jmp     short loc_651EA4
0x651EA2: xor     eax, eax
0x651EA4: mov     [esi+170h], eax
0x651EAA: mov     ecx, [esi+170h]
0x651EB0: mov     eax, ecx
0x651EB2: test    eax, eax
0x651EB4: jz      short loc_651EC1
0x651EB6: cmp     [eax], edi
0x651EB8: jz      short loc_651EC7
0x651EBA: mov     eax, [eax+4]
0x651EBD: test    eax, eax
0x651EBF: jnz     short loc_651EB6
0x651EC1: push    edi
0x651EC2: call    BSSimpleList_PushFront
0x651EC7: pop     edi
0x651EC8: pop     esi
0x651EC9: retn    4
