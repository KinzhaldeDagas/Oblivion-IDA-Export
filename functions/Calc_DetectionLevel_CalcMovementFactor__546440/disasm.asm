0x546440: fst     [esp+arg_1C]; When the target is moving, builds its boot-noise term as bootWeight * fSneakBootWeightMult + fSneakBootWeightBase; stationary targets retain the quiet baseline.
0x546444: jz      short Calc_DetectionLevel_ApplyCombatBonus; Applies fSneakTargetInCombatBonus when the observed target is in combat.
0x546446: fild    [esp+arg_2C]
0x54644A: fmul    dword ptr ds:0B366F8h
0x546450: fadd    dword ptr ds:0B366F0h
0x546456: fstp    [esp+arg_1C]
