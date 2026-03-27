0x468950: mov     eax, [esp+arg_0]
0x468954: push    esi
0x468955: push    edi
0x468956: push    0; int
0x468958: push    offset ??_R0?AVTESAnimation@@@8; struct TypeDescriptor *
0x46895D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x468962: push    0; int
0x468964: push    eax; void *
0x468965: mov     edi, ecx
0x468967: call    OblivionDynamicCast
0x46896C: mov     esi, eax
0x46896E: add     esp, 14h
0x468971: test    esi, esi
0x468973: jz      short loc_468998
0x468975: mov     edx, [edi]
0x468977: mov     eax, [edx+4]
0x46897A: mov     ecx, edi
0x46897C: call    eax
0x46897E: add     esi, 4
0x468981: jz      short loc_468998
0x468983: mov     eax, [esi]
0x468985: test    eax, eax
0x468987: jz      short loc_468991
0x468989: push    eax
0x46898A: mov     ecx, edi
0x46898C: call    TESAnimation_AddAnimation
0x468991: mov     esi, [esi+4]
0x468994: test    esi, esi
0x468996: jnz     short loc_468983
0x468998: pop     edi
0x468999: pop     esi
0x46899A: retn    4
