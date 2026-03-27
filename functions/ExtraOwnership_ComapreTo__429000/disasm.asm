0x429000: push    ebx
0x429001: mov     ebx, [esp+4+arg_0]
0x429005: push    esi
0x429006: push    edi
0x429007: push    0; int
0x429009: push    offset ??_R0?AVExtraOwnership@@@8; struct TypeDescriptor *
0x42900E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429013: push    0; int
0x429015: push    ebx; void *
0x429016: mov     edi, ecx
0x429018: call    OblivionDynamicCast
0x42901D: mov     esi, eax
0x42901F: add     esp, 14h
0x429022: test    esi, esi
0x429024: jnz     short loc_42902E
0x429026: pop     edi
0x429027: pop     esi
0x429028: mov     al, 1
0x42902A: pop     ebx
0x42902B: retn    4
0x42902E: push    ebx
0x42902F: mov     ecx, edi
0x429031: call    BSExtraData_CompareTo
0x429036: test    al, al
0x429038: jnz     short loc_429026
0x42903A: mov     eax, [edi+0Ch]
0x42903D: cmp     eax, [esi+0Ch]
0x429040: pop     edi
0x429041: pop     esi
0x429042: setnz   al
0x429045: pop     ebx
0x429046: retn    4
