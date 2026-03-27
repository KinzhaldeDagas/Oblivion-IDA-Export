0x4293F0: push    ebx
0x4293F1: mov     ebx, [esp+4+arg_0]
0x4293F5: push    esi
0x4293F6: push    edi
0x4293F7: push    0; int
0x4293F9: push    offset ??_R0?AVExtraQuickKey@@@8; struct TypeDescriptor *
0x4293FE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429403: push    0; int
0x429405: push    ebx; void *
0x429406: mov     edi, ecx
0x429408: call    OblivionDynamicCast
0x42940D: mov     esi, eax
0x42940F: add     esp, 14h
0x429412: test    esi, esi
0x429414: jnz     short loc_42941E
0x429416: pop     edi
0x429417: pop     esi
0x429418: mov     al, 1
0x42941A: pop     ebx
0x42941B: retn    4
0x42941E: push    ebx
0x42941F: mov     ecx, edi
0x429421: call    BSExtraData_CompareTo
0x429426: test    al, al
0x429428: jnz     short loc_429416
0x42942A: mov     al, [edi+0Ch]
0x42942D: cmp     al, [esi+0Ch]
0x429430: pop     edi
0x429431: pop     esi
0x429432: setnz   al
0x429435: pop     ebx
0x429436: retn    4
