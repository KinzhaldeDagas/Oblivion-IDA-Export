0x546660: fild    [esp+arg_4]
0x546664: fmul    dword ptr ds:0B36968h
0x54666A: fadd    dword ptr ds:0B36960h
0x546670: fstp    [esp+arg_4]
0x546674: fld     [esp+arg_4]
0x546678: fild    [esp+arg_0]
0x54667C: fmul    dword ptr ds:0B36958h
0x546682: fadd    dword ptr ds:0B36950h
0x546688: fstp    [esp+arg_4]
0x54668C: fadd    [esp+arg_4]
0x546690: fld     dword ptr ds:0B36978h
0x546696: fmul    [esp+arg_8]
0x54669A: fadd    dword ptr ds:0B36970h
0x5466A0: fstp    [esp+arg_4]
0x5466A4: fadd    [esp+arg_4]
0x5466A8: call    Double_To_SInt32
0x5466AD: mov     ecx, eax
0x5466AF: mov     [esp+arg_4], ecx
0x5466B3: fild    [esp+arg_4]
0x5466B7: fstp    [esp+arg_4]
0x5466BB: fld     [esp+arg_4]
0x5466BF: fld     dword ptr ds:0B369A0h
0x5466C5: fcom    st(1)
0x5466C7: fnstsw  ax
0x5466C9: test    ah, 41h
0x5466CC: jnz     short loc_5466D5
0x5466CE: fstp    st(1)
0x5466D0: jmp     Double_To_SInt32
0x5466D5: fstp    st
0x5466D7: fld     dword ptr ds:0B369A8h
0x5466DD: fcom    st(1)
0x5466DF: fnstsw  ax
0x5466E1: fstp    st(1)
0x5466E3: test    ah, 5
0x5466E6: jp      short loc_5466ED
0x5466E8: jmp     Double_To_SInt32
0x5466ED: fstp    st
0x5466EF: mov     eax, ecx
0x5466F1: retn
