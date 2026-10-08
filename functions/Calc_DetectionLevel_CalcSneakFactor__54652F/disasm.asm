0x54652F: cmp     [esp+arg_34], 0; Selects whether the target's sneaking state contributes the alternate sneak factor before skill comparison.
0x546534: fst     [esp+arg_4]; float
0x546538: jz      short Calc_DetectionLevel_ApplySneakSkills; Oblivion Sneak-skill stage. Vanilla caps both detector and target Luck-modified Sneak values at 100, subtracts the target's concealment term from the detector term, and scales by fSneakSkillMult. Existing AVU patch context is preserved conceptually: its patch skips the two vanilla caps.
0x54653A: fxch    st(2)
0x54653C: fst     [esp+arg_4]
0x546540: fxch    st(2)
