0x631C80: mov     ecx, [ecx+18Ch]
0x631C86: mov     eax, ecx
0x631C88: test    eax, eax
0x631C8A: jz      short locret_631CB6
0x631C8C: mov     edx, [esp+arg_0]
0x631C90: push    esi
0x631C91: mov     esi, [eax]
0x631C93: test    esi, esi
0x631C95: jz      short loc_631CB5
0x631C97: cmp     [esi], edx
0x631C99: jz      short loc_631CA6
0x631C9B: mov     eax, [eax+4]
0x631C9E: test    eax, eax
0x631CA0: jnz     short loc_631C91
0x631CA2: pop     esi
0x631CA3: retn    4
0x631CA6: push    esi
0x631CA7: call    BSSimpleList_Remove
0x631CAC: push    esi
0x631CAD: call    FormHeapFree
0x631CB2: add     esp, 4
0x631CB5: pop     esi
0x631CB6: retn    4
