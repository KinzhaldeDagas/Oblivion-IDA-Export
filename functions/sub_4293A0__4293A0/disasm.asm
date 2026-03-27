0x4293A0: push    ebx
0x4293A1: mov     ebx, [esp+4+arg_0]
0x4293A5: push    esi
0x4293A6: push    edi
0x4293A7: push    0; int
0x4293A9: push    offset ??_R0?AVExtraInvestmentGold@@@8; struct TypeDescriptor *
0x4293AE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4293B3: push    0; int
0x4293B5: push    ebx; void *
0x4293B6: mov     edi, ecx
0x4293B8: call    OblivionDynamicCast
0x4293BD: mov     esi, eax
0x4293BF: add     esp, 14h
0x4293C2: test    esi, esi
0x4293C4: jnz     short loc_4293CE
0x4293C6: pop     edi
0x4293C7: pop     esi
0x4293C8: mov     al, 1
0x4293CA: pop     ebx
0x4293CB: retn    4
0x4293CE: push    ebx
0x4293CF: mov     ecx, edi
0x4293D1: call    BSExtraData_CompareTo
0x4293D6: test    al, al
0x4293D8: jnz     short loc_4293C6
0x4293DA: mov     eax, [edi+0Ch]
0x4293DD: cmp     eax, [esi+0Ch]
0x4293E0: pop     edi
0x4293E1: pop     esi
0x4293E2: setnz   al
0x4293E5: pop     ebx
0x4293E6: retn    4
