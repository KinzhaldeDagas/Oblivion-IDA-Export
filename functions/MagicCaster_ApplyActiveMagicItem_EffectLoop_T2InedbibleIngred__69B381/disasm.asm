0x69B381: test    al, al
0x69B383: jnz     short MagicCaster_ApplyActiveMagicItem___EffectLoop_T3InedbibleIngred
0x69B385: mov     edx, ecx
0x69B387: shr     edx, 8
0x69B38A: test    dl, 1
0x69B38D: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_T3InedbibleIngred_
0x69B38F: push    0; char
0x69B391: sub     esp, 0Ch
0x69B394: fst     [esp+10h+var_8]; float
0x69B398: lea     eax, [esp+10h+arg_20]
0x69B39C: fst     [esp+10h+var_C]; float
0x69B3A0: fstp    [esp+10h+var_10]; float
0x69B3A3: push    0; char
0x69B3A5: fld     [esp+14h+arg_74]
0x69B3AC: push    6; int
0x69B3AE: sub     esp, 8
0x69B3B1: fstp    [esp+20h+var_1C]; float
0x69B3B5: fld     [esp+20h+arg_2C]
0x69B3B9: fstp    [esp+20h+var_20]; float
0x69B3BC: push    eax; int
0x69B3BD: call    Calc_T2PotionStrength
0x69B3C2: add     esp, 24h
0x69B3C5: jmp     short MagicCaster_ApplyActiveMagicItem___EffectLoop_InedbibleIngredFinish
