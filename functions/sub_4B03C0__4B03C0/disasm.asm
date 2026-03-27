0x4B03C0: mov     eax, [esp+arg_0]
0x4B03C4: push    esi
0x4B03C5: push    0; int
0x4B03C7: push    offset ??_R0?AVTESLevSpell@@@8; struct TypeDescriptor *
0x4B03CC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B03D1: push    0; int
0x4B03D3: push    eax; void *
0x4B03D4: mov     esi, ecx
0x4B03D6: call    OblivionDynamicCast
0x4B03DB: add     esp, 14h
0x4B03DE: test    eax, eax
0x4B03E0: jnz     short loc_4B03E8
0x4B03E2: mov     al, 1
0x4B03E4: pop     esi
0x4B03E5: retn    4
0x4B03E8: push    eax; a2
0x4B03E9: mov     ecx, esi; this
0x4B03EB: call    TESForm_CompareAllComponentsTo
0x4B03F0: test    al, al
0x4B03F2: setnz   al
0x4B03F5: pop     esi
0x4B03F6: retn    4
