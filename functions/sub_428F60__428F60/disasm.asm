0x428F60: push    ebx
0x428F61: mov     ebx, [esp+4+arg_0]
0x428F65: push    esi
0x428F66: push    edi
0x428F67: push    0; int
0x428F69: push    offset ??_R0?AVExtraAction@@@8; struct TypeDescriptor *
0x428F6E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x428F73: push    0; int
0x428F75: push    ebx; void *
0x428F76: mov     edi, ecx
0x428F78: call    OblivionDynamicCast
0x428F7D: mov     esi, eax
0x428F7F: add     esp, 14h
0x428F82: test    esi, esi
0x428F84: jnz     short loc_428F8E
0x428F86: pop     edi
0x428F87: pop     esi
0x428F88: mov     al, 1
0x428F8A: pop     ebx
0x428F8B: retn    4
0x428F8E: push    ebx
0x428F8F: mov     ecx, edi
0x428F91: call    BSExtraData_CompareTo
0x428F96: test    al, al
0x428F98: jnz     short loc_428F86
0x428F9A: mov     al, [edi+0Ch]
0x428F9D: cmp     al, [esi+0Ch]
0x428FA0: pop     edi
0x428FA1: pop     esi
0x428FA2: setnz   al
0x428FA5: pop     ebx
0x428FA6: retn    4
