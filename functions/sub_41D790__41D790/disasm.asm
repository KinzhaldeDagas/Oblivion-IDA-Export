0x41D790: push    ebx
0x41D791: mov     ebx, [esp+4+arg_0]
0x41D795: push    esi
0x41D796: push    edi
0x41D797: push    0; int
0x41D799: push    offset ??_R0?AVExtraCellWaterType@@@8; struct TypeDescriptor *
0x41D79E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x41D7A3: push    0; int
0x41D7A5: push    ebx; void *
0x41D7A6: mov     edi, ecx
0x41D7A8: call    OblivionDynamicCast
0x41D7AD: mov     esi, eax
0x41D7AF: add     esp, 14h
0x41D7B2: test    esi, esi
0x41D7B4: jnz     short loc_41D7BE
0x41D7B6: pop     edi
0x41D7B7: pop     esi
0x41D7B8: mov     al, 1
0x41D7BA: pop     ebx
0x41D7BB: retn    4
0x41D7BE: push    ebx
0x41D7BF: mov     ecx, edi
0x41D7C1: call    BSExtraData_CompareTo
0x41D7C6: test    al, al
0x41D7C8: jnz     short loc_41D7B6
0x41D7CA: mov     eax, [esi+0Ch]
0x41D7CD: cmp     eax, [edi+0Ch]
0x41D7D0: pop     edi
0x41D7D1: pop     esi
0x41D7D2: setnz   al
0x41D7D5: pop     ebx
0x41D7D6: retn    4
