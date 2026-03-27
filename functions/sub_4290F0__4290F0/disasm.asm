0x4290F0: push    ebx
0x4290F1: mov     ebx, [esp+4+arg_0]
0x4290F5: push    esi
0x4290F6: push    edi
0x4290F7: push    0; int
0x4290F9: push    offset ??_R0?AVExtraCount@@@8; struct TypeDescriptor *
0x4290FE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429103: push    0; int
0x429105: push    ebx; void *
0x429106: mov     edi, ecx
0x429108: call    OblivionDynamicCast
0x42910D: mov     esi, eax
0x42910F: add     esp, 14h
0x429112: test    esi, esi
0x429114: jnz     short loc_42911E
0x429116: pop     edi
0x429117: pop     esi
0x429118: mov     al, 1
0x42911A: pop     ebx
0x42911B: retn    4
0x42911E: push    ebx
0x42911F: mov     ecx, edi
0x429121: call    BSExtraData_CompareTo
0x429126: test    al, al
0x429128: jnz     short loc_429116
0x42912A: mov     ax, [edi+0Ch]
0x42912E: cmp     ax, [esi+0Ch]
0x429132: pop     edi
0x429133: pop     esi
0x429134: setnz   al
0x429137: pop     ebx
0x429138: retn    4
