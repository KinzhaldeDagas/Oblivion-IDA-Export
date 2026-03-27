0x5F465C: test    edi, edi
0x5F465E: jz      Actor_MagicCaster_IsMagicItemUseable___SetFailureCode
0x5F4664: lea     ebp, [edi+0Ch]
0x5F4667: test    ebp, ebp
0x5F4669: jz      Actor_MagicCaster_IsMagicItemUseable___SetFailureCode
0x5F466F: jmp     short Actor_MagicCaster_IsMagicItemUseable___EffectLoop_Check_
