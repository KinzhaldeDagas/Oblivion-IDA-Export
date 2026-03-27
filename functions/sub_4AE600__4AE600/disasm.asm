0x4AE600: mov     eax, [esp+arg_0]
0x4AE604: push    esi
0x4AE605: push    edi
0x4AE606: push    0; int
0x4AE608: push    offset ??_R0?AVTESFurniture@@@8; struct TypeDescriptor *
0x4AE60D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AE612: push    0; int
0x4AE614: push    eax; void *
0x4AE615: mov     edi, ecx
0x4AE617: call    OblivionDynamicCast
0x4AE61C: mov     esi, eax
0x4AE61E: add     esp, 14h
0x4AE621: test    esi, esi
0x4AE623: jnz     short loc_4AE62C
0x4AE625: pop     edi
0x4AE626: mov     al, 1
0x4AE628: pop     esi
0x4AE629: retn    4
0x4AE62C: push    esi; a2
0x4AE62D: mov     ecx, edi; this
0x4AE62F: call    TESForm_CompareAllComponentsTo
0x4AE634: test    al, al
0x4AE636: jnz     short loc_4AE625
0x4AE638: mov     ecx, [edi+58h]
0x4AE63B: cmp     ecx, [esi+58h]
0x4AE63E: pop     edi
0x4AE63F: setnz   al
0x4AE642: pop     esi
0x4AE643: retn    4
