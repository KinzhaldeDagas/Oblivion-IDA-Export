0x54658B: cmp     byte ptr [esp+arg_44], 0; When the underwater condition is active, scales the relevant light/visibility term by fSneakSwimmingLightMult.
0x546590: jz      short Calc_DetectionLevel_ApplySleepBonus; Carries the sleeping-target bonus stage (fSneakSleepBonus) into final aggregation.
0x546592: fst     [esp+arg_1C]
0x546596: fld     dword ptr ds:0B36730h
0x54659C: fmul    [esp+arg_4C]
0x5465A0: fstp    [esp+arg_4C]
