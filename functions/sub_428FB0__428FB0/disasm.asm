0x428FB0: push    ebx
0x428FB1: mov     ebx, [esp+4+arg_0]
0x428FB5: push    esi
0x428FB6: push    edi
0x428FB7: push    0; int
0x428FB9: push    offset ??_R0?AVExtraOriginalReference@@@8; struct TypeDescriptor *
0x428FBE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x428FC3: push    0; int
0x428FC5: push    ebx; void *
0x428FC6: mov     edi, ecx
0x428FC8: call    OblivionDynamicCast
0x428FCD: mov     esi, eax
0x428FCF: add     esp, 14h
0x428FD2: test    esi, esi
0x428FD4: jnz     short loc_428FDE
0x428FD6: pop     edi
0x428FD7: pop     esi
0x428FD8: mov     al, 1
0x428FDA: pop     ebx
0x428FDB: retn    4
0x428FDE: push    ebx
0x428FDF: mov     ecx, edi
0x428FE1: call    BSExtraData_CompareTo
0x428FE6: test    al, al
0x428FE8: jnz     short loc_428FD6
0x428FEA: mov     eax, [edi+0Ch]
0x428FED: cmp     eax, [esi+0Ch]
0x428FF0: pop     edi
0x428FF1: pop     esi
0x428FF2: setnz   al
0x428FF5: pop     ebx
0x428FF6: retn    4
