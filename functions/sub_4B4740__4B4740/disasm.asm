0x4B4740: push    ebx
0x4B4741: mov     ebx, [esp+4+a2]
0x4B4745: push    esi
0x4B4746: push    edi
0x4B4747: push    0; int
0x4B4749: push    offset ??_R0?AVTESObjectAPPA@@@8; struct TypeDescriptor *
0x4B474E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B4753: push    0; int
0x4B4755: push    ebx; void *
0x4B4756: mov     edi, ecx
0x4B4758: call    OblivionDynamicCast
0x4B475D: mov     esi, eax
0x4B475F: add     esp, 14h
0x4B4762: test    esi, esi
0x4B4764: jz      short loc_4B4774
0x4B4766: push    ebx; a2
0x4B4767: mov     ecx, edi; this
0x4B4769: call    TESForm_CopyAllComponentsFrom
0x4B476E: mov     al, [esi+78h]
0x4B4771: mov     [edi+78h], al
0x4B4774: pop     edi
0x4B4775: pop     esi
0x4B4776: pop     ebx
0x4B4777: retn    4
