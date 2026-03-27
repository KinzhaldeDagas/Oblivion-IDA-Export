0x419BEA: mov     edi, [edi+8]
0x419BED: test    edi, edi
0x419BEF: jz      short MagicItem_GetFXEffect___CheckSCIT_VFX
0x419BF1: add     edi, 0FFFFFFFCh
0x419BF4: jnz     short MagicItem_GetFXEffect___EffectLoop
0x419BF6: mov     esi, [esp+arg_C]
