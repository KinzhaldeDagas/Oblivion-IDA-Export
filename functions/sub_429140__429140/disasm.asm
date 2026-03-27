0x429140: push    esi
0x429141: push    edi
0x429142: mov     edi, [esp+8+arg_0]
0x429146: push    0; int
0x429148: push    offset ??_R0?AVExtraLeveledItem@@@8; struct TypeDescriptor *
0x42914D: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429152: push    0; int
0x429154: push    edi; void *
0x429155: mov     esi, ecx
0x429157: call    OblivionDynamicCast
0x42915C: add     esp, 14h
0x42915F: test    eax, eax
0x429161: jnz     short loc_42916A
0x429163: pop     edi
0x429164: mov     al, 1
0x429166: pop     esi
0x429167: retn    4
0x42916A: push    edi
0x42916B: mov     ecx, esi
0x42916D: call    BSExtraData_CompareTo
0x429172: test    al, al
0x429174: pop     edi
0x429175: setnz   al
0x429178: pop     esi
0x429179: retn    4
