0x5E43B0: push    ebp
0x5E43B1: push    esi
0x5E43B2: mov     esi, ecx
0x5E43B4: push    edi
0x5E43B5: lea     ecx, [esi+44h]; this
0x5E43B8: xor     edi, edi
0x5E43BA: call    ExtraDataList_GetContainerChanges
0x5E43BF: mov     ebp, eax
0x5E43C1: test    ebp, ebp
0x5E43C3: jz      short loc_5E43F9
0x5E43C5: mov     eax, [esi]
0x5E43C7: mov     edx, [eax+170h]
0x5E43CD: push    ebx
0x5E43CE: mov     ecx, esi
0x5E43D0: call    edx
0x5E43D2: mov     ebx, eax
0x5E43D4: test    ebx, ebx
0x5E43D6: jz      short loc_5E43EA
0x5E43D8: mov     eax, [esi]
0x5E43DA: mov     edx, [eax+190h]
0x5E43E0: mov     ecx, esi
0x5E43E2: call    edx
0x5E43E4: test    al, al
0x5E43E6: jz      short loc_5E43EA
0x5E43E8: mov     edi, ebx
0x5E43EA: push    0; float
0x5E43EC: push    edi; int
0x5E43ED: mov     ecx, ebp
0x5E43EF: call    sub_48B660
0x5E43F4: pop     ebx
0x5E43F5: pop     edi
0x5E43F6: pop     esi
0x5E43F7: pop     ebp
0x5E43F8: retn
0x5E43F9: mov     eax, edi
0x5E43FB: pop     edi
0x5E43FC: pop     esi
0x5E43FD: pop     ebp
0x5E43FE: retn
