0x46C9D0: mov     eax, [esp+arg_0]
0x46C9D4: push    esi
0x46C9D5: push    0; int
0x46C9D7: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x46C9DC: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46C9E1: push    0; int
0x46C9E3: push    eax; void *
0x46C9E4: mov     esi, ecx
0x46C9E6: call    OblivionDynamicCast
0x46C9EB: add     esp, 14h
0x46C9EE: test    eax, eax
0x46C9F0: jnz     short loc_46C9F8
0x46C9F2: mov     al, 1
0x46C9F4: pop     esi
0x46C9F5: retn    4
0x46C9F8: mov     edx, [eax]
0x46C9FA: mov     ecx, eax
0x46C9FC: mov     eax, [edx+10h]
0x46C9FF: push    edi
0x46CA00: call    eax
0x46CA02: mov     edx, [esi]
0x46CA04: mov     edi, eax
0x46CA06: mov     eax, [edx+10h]
0x46CA09: mov     ecx, esi
0x46CA0B: call    eax
0x46CA0D: cmp     eax, edi
0x46CA0F: pop     edi
0x46CA10: setnz   al
0x46CA13: pop     esi
0x46CA14: retn    4
