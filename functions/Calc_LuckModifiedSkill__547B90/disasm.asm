0x547B90: fild    [esp+luckValue]; Compute Luck-adjusted effective skill as skill + iActorLuckSkillBase + Luck*fActorLuckSkillMult, then clamp to 0..100. Defaults simplify to skill + (Luck-50)*0.4.
0x547B94: fmul    dword ptr ds:0B37390h
0x547B9A: fstp    [esp+luckValue]
0x547B9E: fld     [esp+luckValue]
0x547BA2: fiadd   dword ptr ds:0B37388h
0x547BA8: fstp    [esp+luckValue]
0x547BAC: fild    [esp+skillValue]
0x547BB0: fadd    [esp+luckValue]
