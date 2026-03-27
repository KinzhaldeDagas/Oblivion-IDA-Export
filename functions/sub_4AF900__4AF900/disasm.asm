0x4AF900: mov     eax, [esp+arg_0]
0x4AF904: push    esi
0x4AF905: push    edi
0x4AF906: push    0; int
0x4AF908: push    offset ??_R0?AVTESLevCreature@@@8; struct TypeDescriptor *
0x4AF90D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AF912: push    0; int
0x4AF914: push    eax; void *
0x4AF915: mov     edi, ecx
0x4AF917: call    OblivionDynamicCast
0x4AF91C: mov     esi, eax
0x4AF91E: add     esp, 14h
0x4AF921: test    esi, esi
0x4AF923: jnz     short loc_4AF92C
0x4AF925: pop     edi
0x4AF926: mov     al, 1
0x4AF928: pop     esi
0x4AF929: retn    4
0x4AF92C: push    esi; a2
0x4AF92D: mov     ecx, edi; this
0x4AF92F: call    TESForm_CompareAllComponentsTo
0x4AF934: test    al, al
0x4AF936: jnz     short loc_4AF925
0x4AF938: mov     ecx, [edi+40h]
0x4AF93B: cmp     ecx, [esi+40h]
0x4AF93E: pop     edi
0x4AF93F: setnz   al
0x4AF942: pop     esi
0x4AF943: retn    4
