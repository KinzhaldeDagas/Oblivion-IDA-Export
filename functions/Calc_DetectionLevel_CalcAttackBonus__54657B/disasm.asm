0x54657B: fst     [esp+arg_4]; Applies fSneakTargetAttackBonus when the target has attacked the detector; otherwise retains the current factor.
0x54657F: jz      short Calc_DetectionLevel_ApplyUnderwaterFactor; When the underwater condition is active, scales the relevant light/visibility term by fSneakSwimmingLightMult.
0x546581: fld     dword ptr ds:0B366E0h
0x546587: fstp    [esp+arg_4]
