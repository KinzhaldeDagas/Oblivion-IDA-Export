0x459790: mov     ecx, [ecx+10h]
0x459793: test    ecx, ecx
0x459795: jnz     short loc_45979C
0x459797: xor     eax, eax
0x459799: retn    0Ch
0x45979C: mov     edx, [esp+arg_0]
0x4597A0: lea     eax, [esp+arg_0]
0x4597A4: push    eax
0x4597A5: push    edx
0x4597A6: call    NiTMap_GetAt
0x4597AB: test    al, al
0x4597AD: jz      short loc_459797
0x4597AF: mov     ecx, [esp+arg_0]
0x4597B3: test    ecx, ecx
0x4597B5: push    esi
0x4597B6: push    edi
0x4597B7: mov     eax, ecx
0x4597B9: jz      short loc_4597DA
0x4597BB: mov     edx, [esp+8+arg_8]
0x4597BF: mov     edi, [esp+8+arg_4]
0x4597C3: mov     esi, [eax]
0x4597C5: test    esi, esi
0x4597C7: jz      short loc_4597D3
0x4597C9: cmp     edi, [esi+4]
0x4597CC: jnz     short loc_4597D3
0x4597CE: cmp     edx, [esi+8]
0x4597D1: jz      short loc_4597E1
0x4597D3: mov     eax, [eax+4]
0x4597D6: test    eax, eax
0x4597D8: jnz     short loc_4597C3
0x4597DA: pop     edi
0x4597DB: xor     eax, eax
0x4597DD: pop     esi
0x4597DE: retn    0Ch
0x4597E1: mov     edi, [esi]
0x4597E3: push    esi
0x4597E4: call    BSSimpleList_Remove
0x4597E9: push    esi
0x4597EA: call    FormHeapFree
0x4597EF: add     esp, 4
0x4597F2: mov     eax, edi
0x4597F4: pop     edi
0x4597F5: pop     esi
0x4597F6: retn    0Ch
