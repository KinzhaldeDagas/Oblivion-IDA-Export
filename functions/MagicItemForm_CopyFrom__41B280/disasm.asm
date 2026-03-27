0x41B280: push    ebx
0x41B281: mov     ebx, [esp+4+a2]
0x41B285: push    esi
0x41B286: push    edi
0x41B287: push    0; int
0x41B289: push    offset ??_R0?AVMagicItemForm@@@8; struct TypeDescriptor *
0x41B28E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41B293: push    0; int
0x41B295: push    ebx; void *
0x41B296: mov     esi, ecx
0x41B298: call    OblivionDynamicCast
0x41B29D: mov     edi, eax
0x41B29F: add     esp, 14h
0x41B2A2: test    edi, edi
0x41B2A4: jz      short loc_41B2C9
0x41B2A6: push    ebx; a2
0x41B2A7: mov     ecx, esi; this
0x41B2A9: call    TESForm_CopyAllComponentsFrom
0x41B2AE: mov     eax, [esi+18h]
0x41B2B1: mov     eax, [eax+34h]
0x41B2B4: lea     ecx, [esi+18h]
0x41B2B7: lea     edx, [edi+18h]
0x41B2BA: push    edx
0x41B2BB: call    eax
0x41B2BD: add     edi, 24h ; '$'
0x41B2C0: push    edi
0x41B2C1: lea     ecx, [esi+24h]
0x41B2C4: call    EffectItemList_CopyFrom
0x41B2C9: pop     edi
0x41B2CA: pop     esi
0x41B2CB: pop     ebx
0x41B2CC: retn    4
