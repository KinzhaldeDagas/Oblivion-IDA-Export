0x6A2A3A: cmp     edi, eax
0x6A2A3C: jnz     short MagicTarget_AddEffect___CheckValidTarget; OBMEFix verification 2026-05-30: MagicTarget_AddEffect loads ActiveEffect vtable +0x34, pushes MagicTarget (edi), sets ecx=ActiveEffect (ebp), and calls IsTargetValid before insertion.
0x6A2A3E: call    GetGodMode; Returns g_godModeEnabled (0x00B3BB06).
0x6A2A43: test    al, al
0x6A2A45: jz      short MagicTarget_AddEffect___CheckValidTarget; OBMEFix verification 2026-05-30: MagicTarget_AddEffect loads ActiveEffect vtable +0x34, pushes MagicTarget (edi), sets ecx=ActiveEffect (ebp), and calls IsTargetValid before insertion.
0x6A2A47: mov     ecx, [ebp+0Ch]
0x6A2A4A: call    EffectItem_IsHostile
0x6A2A4F: test    al, al
0x6A2A51: jnz     MagicTarget_AddEffect___Return_0
