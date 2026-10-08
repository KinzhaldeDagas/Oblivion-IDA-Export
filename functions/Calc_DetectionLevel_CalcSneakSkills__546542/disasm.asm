0x546542: mov     eax, 64h ; 'd'; Oblivion Sneak-skill stage. Vanilla caps both detector and target Luck-modified Sneak values at 100, subtracts the target's concealment term from the detector term, and scales by fSneakSkillMult. Existing AVU patch context is preserved conceptually: its patch skips the two vanilla caps.
0x546547: cmp     [esp+arg_10], eax
0x54654B: jle     short loc_546551
0x54654D: mov     [esp+arg_10], eax
0x546551: cmp     [esp+arg_14], eax
0x546555: jle     short loc_54655B
0x546557: mov     [esp+arg_14], eax
0x54655B: test    cl, cl
0x54655D: fild    [esp+arg_10]; Calc_DetectionLevel::CalcSneakSkills starts applying detector/target sneak factors after the vanilla 100 caps.
0x546561: fmulp   st(2), st
0x546563: fild    [esp+arg_14]
0x546567: fmul    [esp+arg_4]
0x54656B: fsubp   st(2), st
0x54656D: fld     dword ptr ds:0B36710h
0x546573: fmulp   st(2), st
0x546575: fxch    st(1)
0x546577: fstp    [esp+arg_8]
