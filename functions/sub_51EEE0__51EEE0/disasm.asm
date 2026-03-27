0x51EEE0: mov     eax, [esp+arg_0]
0x51EEE4: push    esi
0x51EEE5: push    edi
0x51EEE6: push    0; int
0x51EEE8: push    offset ??_R0?AVTESEyes@@@8; struct TypeDescriptor *
0x51EEED: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51EEF2: push    0; int
0x51EEF4: push    eax; void *
0x51EEF5: mov     edi, ecx
0x51EEF7: call    OblivionDynamicCast
0x51EEFC: mov     esi, eax
0x51EEFE: add     esp, 14h
0x51EF01: test    esi, esi
0x51EF03: jnz     short loc_51EF0C
0x51EF05: pop     edi
0x51EF06: mov     al, 1
0x51EF08: pop     esi
0x51EF09: retn    4
0x51EF0C: push    esi; a2
0x51EF0D: mov     ecx, edi; this
0x51EF0F: call    TESForm_CompareAllComponentsTo
0x51EF14: test    al, al
0x51EF16: jnz     short loc_51EF05
0x51EF18: mov     al, [esi+30h]
0x51EF1B: xor     al, [edi+30h]
0x51EF1E: pop     edi
0x51EF1F: and     al, 1
0x51EF21: pop     esi
0x51EF22: retn    4
