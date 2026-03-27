0x546484: mov     eax, [esp+arg_18]
0x546488: test    eax, eax
0x54648A: jz      short loc_546492
0x54648C: fst     [esp+arg_0]
0x546490: jmp     short loc_54649C
0x546492: fld     dword ptr ds:0B36718h
0x546498: fstp    [esp+arg_0]; float
0x54649C: test    eax, eax
0x54649E: fxch    st(1)
0x5464A0: fst     [esp+arg_4]; int
0x5464A4: jz      short Calc_DetectionLevel___CalcSoundFactor
0x5464A6: fxch    st(1)
0x5464A8: fst     [esp+arg_4]
0x5464AC: fxch    st(1)
