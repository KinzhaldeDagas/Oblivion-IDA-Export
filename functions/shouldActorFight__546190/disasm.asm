0x546190: sub     esp, 0Ch
0x546193: cmp     [esp+0Ch+aggressionStat], 0
0x546198: jg      short loc_5461A0
0x54619A: xor     eax, eax
0x54619C: add     esp, 0Ch
0x54619F: retn
0x5461A0: fild    [esp+0Ch+disposition]
0x5461A4: fmul    dword ptr ds:0B36848h
0x5461AA: fadd    dword ptr ds:0B36840h
0x5461B0: fstp    [esp+0Ch+var_4]
0x5461B4: fild    [esp+0Ch+aggressionStat]
0x5461B8: fmul    dword ptr ds:0B36858h
0x5461BE: fadd    dword ptr ds:0B36850h
0x5461C4: fstp    [esp+0Ch+var_8]
0x5461C8: fld     dword ptr ds:0B36868h
0x5461CE: fmul    [esp+0Ch+distanceToTarget]
0x5461D2: fadd    dword ptr ds:0B36860h
0x5461D8: fstp    [esp+0Ch+aggressionStat]
0x5461DC: fldz
0x5461DE: fcom    [esp+0Ch+aggressionStat]
0x5461E2: fnstsw  ax
0x5461E4: test    ah, 5
0x5461E7: jp      short loc_5461ED
0x5461E9: fst     [esp+0Ch+aggressionStat]
0x5461ED: cmp     [esp+0Ch+arg_18], 0
0x5461F2: fstp    [esp+0Ch+var_C]
0x5461F5: jz      short loc_54620E
0x5461F7: fild    [esp+0Ch+friendlyFight_]
0x5461FB: fild    [esp+0Ch+responsibility]
0x5461FF: fmul    dword ptr ds:0B36A58h
0x546205: fcompp
0x546207: fnstsw  ax
0x546209: test    ah, 5
0x54620C: jp      short loc_546232
0x54620E: cmp     [esp+0Ch+arg_10], 0
0x546213: jz      short loc_546232
0x546215: mov     eax, [esp+0Ch+disposition]
0x546219: cmp     eax, [esp+0Ch+friendlyFight_]
0x54621D: jge     short loc_546232
0x54621F: fild    [esp+0Ch+friendlyFight_]
0x546223: fmul    dword ptr ds:0B36878h
0x546229: fadd    dword ptr ds:0B36870h
0x54622F: fstp    [esp+0Ch+var_C]
0x546232: fld     [esp+0Ch+var_8]
0x546236: fadd    [esp+0Ch+var_4]
0x54623A: fadd    [esp+0Ch+aggressionStat]
0x54623E: fadd    [esp+0Ch+var_C]
0x546241: call    Double_To_SInt32
0x546246: cmp     eax, 64h ; 'd'
0x546249: jle     short loc_546250
0x54624B: mov     eax, 64h ; 'd'
0x546250: add     esp, 0Ch
0x546253: retn
