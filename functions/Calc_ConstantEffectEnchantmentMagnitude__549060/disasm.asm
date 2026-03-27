0x549060: fld     [esp+arg_0]
0x549064: fmul    [esp+arg_4]
0x549068: fimul   [esp+arg_8]
0x54906C: fadd    dword ptr ds:0B380E0h
0x549072: fadd    qword ptr ds:0A2FAA0h
0x549078: fstp    [esp+arg_0]
0x54907C: fld     [esp+arg_0]
0x549080: fld     st
0x549082: call    Double_To_SInt32
0x549087: mov     [esp+arg_0], eax
0x54908B: fild    [esp+arg_0]
0x54908F: fstp    [esp+arg_0]
0x549093: fld     [esp+arg_0]
0x549097: fld     st
0x549099: fsubp   st(2), st
0x54909B: fxch    st(1)
0x54909D: fcomp   qword ptr ds:0A2FC68h
0x5490A3: fnstsw  ax
0x5490A5: test    ah, 1
0x5490A8: jz      short loc_5490B0
0x5490AA: fsub    qword ptr ds:0A2F928h
0x5490B0: fstp    [esp+arg_0]
0x5490B4: fld     [esp+arg_0]
0x5490B8: retn
