0x4290A0: push    ebx
0x4290A1: mov     ebx, [esp+4+arg_0]
0x4290A5: push    esi
0x4290A6: push    edi
0x4290A7: push    0; int
0x4290A9: push    offset ??_R0?AVExtraRank@@@8; struct TypeDescriptor *
0x4290AE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4290B3: push    0; int
0x4290B5: push    ebx; void *
0x4290B6: mov     edi, ecx
0x4290B8: call    OblivionDynamicCast
0x4290BD: mov     esi, eax
0x4290BF: add     esp, 14h
0x4290C2: test    esi, esi
0x4290C4: jnz     short loc_4290CE
0x4290C6: pop     edi
0x4290C7: pop     esi
0x4290C8: mov     al, 1
0x4290CA: pop     ebx
0x4290CB: retn    4
0x4290CE: push    ebx
0x4290CF: mov     ecx, edi
0x4290D1: call    BSExtraData_CompareTo
0x4290D6: test    al, al
0x4290D8: jnz     short loc_4290C6
0x4290DA: mov     eax, [edi+0Ch]
0x4290DD: cmp     eax, [esi+0Ch]
0x4290E0: pop     edi
0x4290E1: pop     esi
0x4290E2: setnz   al
0x4290E5: pop     ebx
0x4290E6: retn    4
