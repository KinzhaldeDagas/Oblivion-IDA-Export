0x69B3CB: shr     ecx, 8
0x69B3CE: test    cl, 1
0x69B3D1: jnz     short MagicCaster_ApplyActiveMagicItem___EffectLoop_T4InedbibleIngred
0x69B3D3: push    0; char
0x69B3D5: sub     esp, 0Ch
0x69B3D8: fst     [esp+10h+var_8]; float
0x69B3DC: lea     ecx, [esp+10h+arg_24]
0x69B3E0: fst     [esp+10h+var_C]; float
0x69B3E4: fstp    [esp+10h+var_10]; float
0x69B3E7: push    0; char
0x69B3E9: fld     [esp+14h+arg_74]
0x69B3F0: push    6; int
0x69B3F2: sub     esp, 8
0x69B3F5: fstp    [esp+20h+var_1C]; float
0x69B3F9: fld     [esp+20h+arg_2C]
0x69B3FD: fstp    [esp+20h+var_20]; float
0x69B400: push    ecx; int
0x69B401: call    Calc_T3PotionStrength
0x69B406: add     esp, 24h
0x69B409: jmp     short MagicCaster_ApplyActiveMagicItem___EffectLoop_InedbibleIngredFinish
