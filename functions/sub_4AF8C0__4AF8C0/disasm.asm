0x4AF8C0: push    ebx
0x4AF8C1: mov     ebx, [esp+4+a2]
0x4AF8C5: push    esi
0x4AF8C6: push    edi
0x4AF8C7: push    0; int
0x4AF8C9: push    offset ??_R0?AVTESLevCreature@@@8; struct TypeDescriptor *
0x4AF8CE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AF8D3: push    0; int
0x4AF8D5: push    ebx; void *
0x4AF8D6: mov     edi, ecx
0x4AF8D8: call    OblivionDynamicCast
0x4AF8DD: mov     esi, eax
0x4AF8DF: add     esp, 14h
0x4AF8E2: test    esi, esi
0x4AF8E4: jz      short loc_4AF8F4
0x4AF8E6: push    ebx; a2
0x4AF8E7: mov     ecx, edi; this
0x4AF8E9: call    TESForm_CopyAllComponentsFrom
0x4AF8EE: mov     eax, [esi+40h]
0x4AF8F1: mov     [edi+40h], eax
0x4AF8F4: pop     edi
0x4AF8F5: pop     esi
0x4AF8F6: pop     ebx
0x4AF8F7: retn    4
