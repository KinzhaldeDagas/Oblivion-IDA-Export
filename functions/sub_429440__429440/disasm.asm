0x429440: push    ebx
0x429441: mov     ebx, [esp+4+arg_0]
0x429445: push    esi
0x429446: push    edi
0x429447: push    0; int
0x429449: push    offset ??_R0?AVExtraSeed@@@8; struct TypeDescriptor *
0x42944E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429453: push    0; int
0x429455: push    ebx; void *
0x429456: mov     edi, ecx
0x429458: call    OblivionDynamicCast
0x42945D: mov     esi, eax
0x42945F: add     esp, 14h
0x429462: test    esi, esi
0x429464: jnz     short loc_42946E
0x429466: pop     edi
0x429467: pop     esi
0x429468: mov     al, 1
0x42946A: pop     ebx
0x42946B: retn    4
0x42946E: push    ebx
0x42946F: mov     ecx, edi
0x429471: call    BSExtraData_CompareTo
0x429476: test    al, al
0x429478: jnz     short loc_429466
0x42947A: mov     al, [edi+0Ch]
0x42947D: cmp     al, [esi+0Ch]
0x429480: pop     edi
0x429481: pop     esi
0x429482: setnz   al
0x429485: pop     ebx
0x429486: retn    4
