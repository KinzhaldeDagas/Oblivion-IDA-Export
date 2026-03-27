0x6A2A3A: cmp     edi, eax
0x6A2A3C: jnz     short MagicTarget_AddEffect___CheckValidTarget
0x6A2A3E: call    GetGodMode
0x6A2A43: test    al, al
0x6A2A45: jz      short MagicTarget_AddEffect___CheckValidTarget
0x6A2A47: mov     ecx, [ebp+0Ch]
0x6A2A4A: call    EffectItem_IsHostile
0x6A2A4F: test    al, al
0x6A2A51: jnz     MagicTarget_AddEffect___Return_0
