0x41D740: push    ebx
0x41D741: mov     ebx, [esp+4+arg_0]
0x41D745: push    esi
0x41D746: push    edi
0x41D747: push    0; int
0x41D749: push    offset ??_R0?AVExtraCellClimate@@@8; struct TypeDescriptor *
0x41D74E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x41D753: push    0; int
0x41D755: push    ebx; void *
0x41D756: mov     edi, ecx
0x41D758: call    OblivionDynamicCast
0x41D75D: mov     esi, eax
0x41D75F: add     esp, 14h
0x41D762: test    esi, esi
0x41D764: jnz     short loc_41D76E
0x41D766: pop     edi
0x41D767: pop     esi
0x41D768: mov     al, 1
0x41D76A: pop     ebx
0x41D76B: retn    4
0x41D76E: push    ebx
0x41D76F: mov     ecx, edi
0x41D771: call    BSExtraData_CompareTo
0x41D776: test    al, al
0x41D778: jnz     short loc_41D766
0x41D77A: mov     eax, [esi+0Ch]
0x41D77D: cmp     eax, [edi+0Ch]
0x41D780: pop     edi
0x41D781: pop     esi
0x41D782: setnz   al
0x41D785: pop     ebx
0x41D786: retn    4
