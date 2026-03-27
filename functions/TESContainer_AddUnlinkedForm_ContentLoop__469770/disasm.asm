0x469770: mov     ecx, [eax]
0x469772: test    ecx, ecx
0x469774: jz      short loc_469784
0x469776: mov     edx, [ecx+4]
0x469779: cmp     edx, [esi]
0x46977B: jz      short loc_4697A1
0x46977D: mov     eax, [eax+4]
0x469780: test    eax, eax
0x469782: jnz     short TESContainer_AddUnlinkedForm___ContentLoop
0x469784: push    8; Size
0x469786: call    FormHeapAlloc
0x46978B: add     esp, 4
0x46978E: test    eax, eax
0x469790: jz      short loc_4697AB
0x469792: mov     dword ptr [eax], 1
0x469798: mov     dword ptr [eax+4], 0
0x46979F: jmp     short loc_4697AD
0x4697A1: mov     eax, [esi+4]
0x4697A4: pop     edi
0x4697A5: mov     [ecx], eax
0x4697A7: pop     esi
0x4697A8: retn    4
0x4697AB: xor     eax, eax
0x4697AD: mov     ecx, [esi]
0x4697AF: mov     [eax+4], ecx
0x4697B2: mov     edx, [esi+4]
0x4697B5: push    eax
0x4697B6: mov     ecx, edi
0x4697B8: mov     [eax], edx
0x4697BA: call    BSSimpleList_PushFront
0x4697BF: pop     edi
0x4697C0: pop     esi
0x4697C1: retn    4
