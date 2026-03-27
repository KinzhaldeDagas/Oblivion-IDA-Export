0x547370: fld     [esp+arg_8]
0x547374: call    Double_To_SInt32
0x547379: fld     [esp+arg_4]
0x54737D: push    eax
0x54737E: call    Double_To_SInt32
0x547383: push    eax
0x547384: call    Calc_LuckModifiedSkill
0x547389: fstp    [esp+8+arg_8]
0x54738D: fld     dword ptr ds:0B36EA0h
0x547393: movzx   eax, word ptr [esp+8+arg_0]
0x547398: fld     dword ptr ds:0B36E98h
0x54739E: mov     [esp+8+arg_0], eax
0x5473A2: fld     st
0x5473A4: add     esp, 8
0x5473A7: fsubp   st(2), st
0x5473A9: fxch    st(1)
0x5473AB: fstp    [esp+arg_4]
0x5473AF: fld     [esp+arg_8]
0x5473B3: fdiv    qword ptr ds:0A309F0h
0x5473B9: fmul    [esp+arg_4]
0x5473BD: faddp   st(1), st
0x5473BF: fild    [esp+arg_0]
0x5473C3: fmulp   st(1), st
0x5473C5: fstp    [esp+arg_0]
0x5473C9: fld     [esp+arg_0]
0x5473CD: fst     [esp+arg_0]
0x5473D1: fld     [esp+arg_0]
0x5473D5: fld     st
0x5473D7: call    Double_To_SInt32
0x5473DC: mov     [esp+arg_0], eax
0x5473E0: fild    [esp+arg_0]
0x5473E4: fstp    [esp+arg_0]
0x5473E8: fld     [esp+arg_0]
0x5473EC: fld     st
0x5473EE: fsubp   st(2), st
0x5473F0: fldz
0x5473F2: fcom    st(2)
0x5473F4: fnstsw  ax
0x5473F6: fstp    st(2)
0x5473F8: test    ah, 41h
0x5473FB: fld1
0x5473FD: jnp     short loc_547401
0x5473FF: fsub    st(1), st
0x547401: fxch    st(1)
0x547403: fstp    [esp+arg_0]
0x547407: fld     [esp+arg_0]
0x54740B: fld1
0x54740D: fcom    st(1)
0x54740F: fnstsw  ax
0x547411: fstp    st(1)
0x547413: test    ah, 5
0x547416: jp      short loc_547464
0x547418: fstp    st
0x54741A: fxch    st(2)
0x54741C: fstp    [esp+arg_0]
0x547420: fld     [esp+arg_0]
0x547424: fld     st
0x547426: call    Double_To_SInt32
0x54742B: mov     [esp+arg_0], eax
0x54742F: fild    [esp+arg_0]
0x547433: fstp    [esp+arg_0]
0x547437: fld     [esp+arg_0]
0x54743B: fld     st
0x54743D: fsubp   st(2), st
0x54743F: fxch    st(1)
0x547441: fcomp   st(2)
0x547443: fnstsw  ax
0x547445: fstp    st(1)
0x547447: test    ah, 1
0x54744A: jnz     short loc_547458
0x54744C: fstp    st(1)
0x54744E: fstp    [esp+arg_0]
0x547452: fld     [esp+arg_0]
0x547456: jmp     short loc_54746A
0x547458: fsubrp  st(1), st
0x54745A: fstp    [esp+arg_0]
0x54745E: fld     [esp+arg_0]
0x547462: jmp     short loc_54746A
0x547464: fstp    st(3)
0x547466: fstp    st(1)
0x547468: fstp    st
0x54746A: fstp    [esp+arg_0]
0x54746E: fld     dword ptr ds:0B36EB0h
0x547474: fmul    [esp+arg_C]
0x547478: fadd    dword ptr ds:0B36EA8h
0x54747E: fstp    [esp+arg_8]
0x547482: fld     [esp+arg_8]
0x547486: fmul    [esp+arg_0]
0x54748A: fstp    [esp+arg_0]
0x54748E: fld     [esp+arg_0]
0x547492: retn
