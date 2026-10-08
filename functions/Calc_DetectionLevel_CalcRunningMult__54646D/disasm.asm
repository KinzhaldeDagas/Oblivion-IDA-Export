0x54646D: cmp     byte ptr [esp+arg_40], 0; Applies fSneakRunningMult when the target is running; otherwise uses multiplier 1.0.
0x546472: fld1
0x546474: fst     [esp+arg_4C]
0x546478: jz      short Calc_DetectionLevel_ApplyLOSMultiplier; Selects the LOS sound multiplier: full contribution with sight, fSneakSoundLosMult without sight. Detection can therefore still occur through sound when visual LOS fails.
0x54647A: fld     dword ptr ds:0B36720h
0x546480: fstp    [esp+arg_4C]
