0x419A20: push    esi
0x419A21: push    edi
0x419A22: push    0; int
0x419A24: push    offset ??_R0?AVMagicItemForm@@@8; struct TypeDescriptor *
0x419A29: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x419A2E: mov     esi, ecx
0x419A30: push    0; int
0x419A32: push    esi; void *
0x419A33: call    OblivionDynamicCast
0x419A38: push    0; int
0x419A3A: push    offset ??_R0?AVMagicItemObject@@@8; struct TypeDescriptor *
0x419A3F: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x419A44: push    0; int
0x419A46: push    esi; void *
0x419A47: mov     edi, eax
0x419A49: call    OblivionDynamicCast
0x419A4E: add     esp, 28h
0x419A51: test    edi, edi
0x419A53: jz      short MagicItem_GetFormID___NotAForm
0x419A55: mov     eax, [edi+0Ch]
0x419A58: pop     edi
0x419A59: pop     esi
0x419A5A: retn
