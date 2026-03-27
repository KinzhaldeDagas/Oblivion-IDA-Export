0x69B341: push    0; char
0x69B343: sub     esp, 0Ch
0x69B346: fst     [esp+10h+var_8]; float
0x69B34A: lea     eax, [esp+10h+arg_20]
0x69B34E: fst     [esp+10h+var_C]; float
0x69B352: lea     ecx, [esp+10h+arg_24]
0x69B356: fstp    [esp+10h+var_10]; float
0x69B359: push    0; char
0x69B35B: fld     [esp+14h+arg_74]
0x69B362: push    6; int
0x69B364: sub     esp, 8
0x69B367: fstp    [esp+20h+var_1C]; float
0x69B36B: fld     [esp+20h+arg_2C]
0x69B36F: fstp    [esp+20h+var_20]; float
0x69B372: push    eax; int
0x69B373: push    ecx; int
0x69B374: call    Calc_T1PotionStrength
0x69B379: add     esp, 28h
0x69B37C: jmp     MagicCaster_ApplyActiveMagicItem___EffectLoop_InedbibleIngredFinish
