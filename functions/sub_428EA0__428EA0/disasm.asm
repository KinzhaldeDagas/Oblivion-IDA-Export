0x428EA0: push    ebx
0x428EA1: mov     ebx, [esp+4+arg_0]
0x428EA5: push    esi
0x428EA6: push    edi
0x428EA7: push    0; int
0x428EA9: push    offset ??_R0?AVExtraTeleport@@@8; struct TypeDescriptor *
0x428EAE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x428EB3: push    0; int
0x428EB5: push    ebx; void *
0x428EB6: mov     edi, ecx
0x428EB8: call    OblivionDynamicCast
0x428EBD: mov     esi, eax
0x428EBF: add     esp, 14h
0x428EC2: test    esi, esi
0x428EC4: jnz     short loc_428ECE
0x428EC6: pop     edi
0x428EC7: pop     esi
0x428EC8: mov     al, 1
0x428ECA: pop     ebx
0x428ECB: retn    4
0x428ECE: push    ebx
0x428ECF: mov     ecx, edi
0x428ED1: call    BSExtraData_CompareTo
0x428ED6: test    al, al
0x428ED8: jnz     short loc_428EC6
0x428EDA: mov     eax, [esi+0Ch]
0x428EDD: mov     ecx, [edi+0Ch]
0x428EE0: push    eax
0x428EE1: call    sub_42BA10
0x428EE6: pop     edi
0x428EE7: test    al, al
0x428EE9: pop     esi
0x428EEA: setnz   al
0x428EED: pop     ebx
0x428EEE: retn    4
