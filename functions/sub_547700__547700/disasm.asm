0x547700: mov     eax, [esp+luckValue]
0x547704: fld     [esp+arg_4]
0x547708: push    eax; luckValue
0x547709: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x54770E: push    eax; skillValue
0x54770F: call    Calc_LuckModifiedSkill; Compute Luck-adjusted effective skill as skill + iActorLuckSkillBase + Luck*fActorLuckSkillMult, then clamp to 0..100. Defaults simplify to skill + (Luck-50)*0.4.
0x547714: fstp    [esp+8+arg_4]
0x547718: fld     dword ptr ds:0B37068h
0x54771E: add     esp, 8
0x547721: fld     dword ptr ds:0B37070h
0x547727: fmul    [esp+arg_4]
0x54772B: fsubp   st(1), st
0x54772D: fstp    [esp+arg_4]
0x547731: fld     [esp+arg_4]
0x547735: fld     [esp+arg_0]
0x547739: fld     st
0x54773B: fmulp   st(2), st
0x54773D: fld1
0x54773F: fsubrp  st(1), st
0x547741: fmul    dword ptr ds:0B37098h
0x547747: faddp   st(1), st
0x547749: fstp    [esp+arg_4]
0x54774D: fldz
0x54774F: fld     [esp+arg_4]
0x547753: fcom    st(1)
0x547755: fnstsw  ax
0x547757: test    ah, 5
0x54775A: jp      short loc_547767
0x54775C: fstp    st
0x54775E: fstp    [esp+arg_4]
0x547762: fld     [esp+arg_4]
0x547766: retn
0x547767: fstp    st(1)
0x547769: retn
