0x4199C0: mov     eax, [esp+a1]
0x4199C4: push    esi
0x4199C5: push    edi
0x4199C6: push    eax; a1
0x4199C7: call    TESForm_LookupByFormID
0x4199CC: mov     esi, eax
0x4199CE: add     esp, 4
0x4199D1: test    esi, esi
0x4199D3: jz      short MagicItem_LookupByFormID___Return_0
0x4199D5: push    0; int
0x4199D7: push    offset ??_R0?AVMagicItemForm@@@8; struct TypeDescriptor *
0x4199DC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4199E1: push    0; int
0x4199E3: push    esi; void *
0x4199E4: call    OblivionDynamicCast
0x4199E9: push    0; int
0x4199EB: push    offset ??_R0?AVMagicItemObject@@@8; struct TypeDescriptor *
0x4199F0: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4199F5: push    0; int
0x4199F7: push    esi; void *
0x4199F8: mov     edi, eax
0x4199FA: call    OblivionDynamicCast
0x4199FF: add     esp, 28h
0x419A02: test    edi, edi
0x419A04: jz      short loc_419A0C
0x419A06: lea     eax, [edi+18h]
0x419A09: pop     edi
0x419A0A: pop     esi
0x419A0B: retn
0x419A0C: test    eax, eax
0x419A0E: jz      short MagicItem_LookupByFormID___Return_0
0x419A10: pop     edi
0x419A11: add     eax, 24h ; '$'
0x419A14: pop     esi
0x419A15: retn
