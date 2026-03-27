0x69B46B: mov     eax, [ebp+10h]
0x69B46E: test    eax, eax
0x69B470: mov     cl, [esp+arg_11]
0x69B474: jnz     short MagicCaster_ApplyActiveMagicItem___EffectLoop_ApplyOnTouch
0x69B476: test    cl, cl
0x69B478: jnz     short MagicCaster_ApplyActiveMagicItem___EffectLoop_ApplyOnTouch
0x69B47A: cmp     ebp, [esp+arg_34]
0x69B47E: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_ApplyOnSelf
0x69B480: or      dword ptr [edi+14h], 0Eh
