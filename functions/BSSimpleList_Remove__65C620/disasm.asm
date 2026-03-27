0x65C620: push    edi
0x65C621: mov     edi, [esp+4+arg_0]
0x65C625: test    edi, edi
0x65C627: jz      short BSSimpleList_Remove___Done
0x65C629: push    esi
0x65C62A: mov     esi, [ecx+4]
0x65C62D: test    esi, esi
0x65C62F: jnz     short loc_65C635
0x65C631: cmp     [ecx], esi
0x65C633: jz      short BSSimpleList_Remove___Done_
0x65C635: mov     eax, ecx
0x65C637: mov     edx, ecx
0x65C639: lea     esp, [esp+0]
