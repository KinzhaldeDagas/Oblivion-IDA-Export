0x6A1E04: test    al, al
0x6A1E06: jnz     short MagicTarget_HasMagicItem___Done_
0x6A1E08: mov     edx, [ecx]
0x6A1E0A: test    edx, edx
0x6A1E0C: jz      short MagicTarget_HasMagicItem___EffectLoopNext
0x6A1E0E: cmp     [edx+8], esi
0x6A1E11: jnz     short MagicTarget_HasMagicItem___EffectLoopNext
0x6A1E13: mov     al, 1
