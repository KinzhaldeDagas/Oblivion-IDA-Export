0x546484: mov     eax, [esp+arg_18]; Selects the LOS sound multiplier: full contribution with sight, fSneakSoundLosMult without sight. Detection can therefore still occur through sound when visual LOS fails.
0x546488: test    eax, eax
0x54648A: jz      short loc_546492
0x54648C: fst     [esp+arg_0]
0x546490: jmp     short loc_54649C
0x546492: fld     dword ptr ds:0B36718h
0x546498: fstp    [esp+arg_0]; float
0x54649C: test    eax, eax
0x54649E: fxch    st(1)
0x5464A0: fst     [esp+arg_4]; int
0x5464A4: jz      short Calc_DetectionLevel_ApplySoundFactor; Combines movement/boot noise, distance attenuation, LOS and running multipliers, then scales the audible contribution by fSneakSoundsMult while preserving the stronger accumulated contribution.
0x5464A6: fxch    st(1)
0x5464A8: fst     [esp+arg_4]
0x5464AC: fxch    st(1)
