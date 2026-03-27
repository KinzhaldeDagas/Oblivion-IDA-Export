0x65FB30: push    esi
0x65FB31: mov     esi, ecx
0x65FB33: mov     eax, [esi+184h]
0x65FB39: cdq
0x65FB3A: idiv    dword ptr ds:0B37618h
0x65FB40: test    edx, edx
0x65FB42: jnz     short loc_65FBA2
0x65FB44: cmp     [esi+5B4h], edx
0x65FB4A: jnz     short loc_65FB71
0x65FB4C: push    8; Size
0x65FB4E: call    FormHeapAlloc
0x65FB53: add     esp, 4
0x65FB56: test    eax, eax
0x65FB58: jz      short loc_65FB69
0x65FB5A: mov     dword ptr [eax], 0
0x65FB60: mov     dword ptr [eax+4], 0
0x65FB67: jmp     short loc_65FB6B
0x65FB69: xor     eax, eax
0x65FB6B: mov     [esi+5B4h], eax
0x65FB71: push    8; Size
0x65FB73: call    FormHeapAlloc
0x65FB78: add     esp, 4
0x65FB7B: test    eax, eax
0x65FB7D: jz      short loc_65FB94
0x65FB7F: xor     ecx, ecx
0x65FB81: mov     [eax], ecx
0x65FB83: mov     [eax+4], ecx
0x65FB86: mov     ecx, [esi+5B4h]
0x65FB8C: push    eax
0x65FB8D: call    BSSimpleList_PushFront
0x65FB92: pop     esi
0x65FB93: retn
0x65FB94: mov     ecx, [esi+5B4h]
0x65FB9A: xor     eax, eax
0x65FB9C: push    eax
0x65FB9D: call    BSSimpleList_PushFront
0x65FBA2: pop     esi
0x65FBA3: retn
