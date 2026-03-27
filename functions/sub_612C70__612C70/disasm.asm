0x612C70: push    esi
0x612C71: push    edi
0x612C72: mov     edi, ecx
0x612C74: mov     esi, [edi+118h]
0x612C7A: test    esi, esi
0x612C7C: jz      short loc_612CC6
0x612C7E: mov     edi, edi
0x612C80: cmp     dword ptr [esi+4], 0
0x612C84: mov     eax, [esi]
0x612C86: jnz     short loc_612C8E
0x612C88: test    eax, eax
0x612C8A: jz      short loc_612CA2
0x612C8C: jmp     short loc_612C92
0x612C8E: test    eax, eax
0x612C90: jz      short loc_612C9B
0x612C92: push    eax
0x612C93: call    FormHeapFree
0x612C98: add     esp, 4
0x612C9B: mov     esi, [esi+4]
0x612C9E: test    esi, esi
0x612CA0: jnz     short loc_612C80
0x612CA2: mov     ecx, [edi+118h]
0x612CA8: call    BSSimpleList_Clear
0x612CAD: mov     eax, [edi+118h]
0x612CB3: push    eax
0x612CB4: call    FormHeapFree
0x612CB9: add     esp, 4
0x612CBC: mov     dword ptr [edi+118h], 0
0x612CC6: pop     edi
0x612CC7: pop     esi
0x612CC8: retn
