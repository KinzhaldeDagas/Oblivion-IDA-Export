0x5F4630: push    0; int
0x5F4632: push    offset ??_R0?AVEnchantmentItem@@@8; struct TypeDescriptor *
0x5F4637: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5F463C: push    0; int
0x5F463E: push    edi; void *
0x5F463F: xor     bl, bl
0x5F4641: call    OblivionDynamicCast
0x5F4646: add     esp, 14h
0x5F4649: test    eax, eax
0x5F464B: jz      short Actor_MagicCaster_IsMagicItemUseable___EffectLoop_Setup
0x5F464D: cmp     dword ptr [eax+34h], 3
0x5F4651: setnz   al
0x5F4654: test    al, al
0x5F4656: jz      Actor_MagicCaster_IsMagicItemUseable___SetFailureCode
