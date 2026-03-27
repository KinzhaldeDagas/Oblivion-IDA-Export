0x4291E0: push    ebx
0x4291E1: mov     ebx, [esp+4+arg_0]
0x4291E5: push    esi
0x4291E6: push    edi
0x4291E7: push    0; int
0x4291E9: push    offset ??_R0?AVExtraUses@@@8; struct TypeDescriptor *
0x4291EE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4291F3: push    0; int
0x4291F5: push    ebx; void *
0x4291F6: mov     edi, ecx
0x4291F8: call    OblivionDynamicCast
0x4291FD: mov     esi, eax
0x4291FF: add     esp, 14h
0x429202: test    esi, esi
0x429204: jnz     short loc_42920E
0x429206: pop     edi
0x429207: pop     esi
0x429208: mov     al, 1
0x42920A: pop     ebx
0x42920B: retn    4
0x42920E: push    ebx
0x42920F: mov     ecx, edi
0x429211: call    BSExtraData_CompareTo
0x429216: test    al, al
0x429218: jnz     short loc_429206
0x42921A: mov     al, [edi+0Ch]
0x42921D: cmp     al, [esi+0Ch]
0x429220: pop     edi
0x429221: pop     esi
0x429222: setnz   al
0x429225: pop     ebx
0x429226: retn    4
