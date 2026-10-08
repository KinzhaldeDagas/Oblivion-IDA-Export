0x54645A: cmp     [esp+arg_3C], 0; Applies fSneakTargetInCombatBonus when the observed target is in combat.
0x54645F: fst     dword ptr [esp+0]
0x546462: jz      short Calc_DetectionLevel_ApplyRunningMultiplier; Applies fSneakRunningMult when the target is running; otherwise uses multiplier 1.0.
0x546464: fld     dword ptr ds:0B366E8h
0x54646A: fstp    dword ptr [esp+0]
