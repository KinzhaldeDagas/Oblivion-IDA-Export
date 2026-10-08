0x5465A4: cmp     byte ptr [esp+arg_48], 0; Carries the sleeping-target bonus stage (fSneakSleepBonus) into final aggregation.
0x5465A9: jz      short Calc_DetectionLevel_Finalize; Final Oblivion aggregation: adds fSneakBaseValue and the accumulated distance/sound/light/skill/context contributions, converts to an integer detection score, and preserves a minimum positive result of 1 where required.
0x5465AB: fld     dword ptr ds:0B36728h
0x5465B1: fstp    [esp+arg_4C]
