0x5E2510: fild    [esp+arg_4]
0x5E2514: fstp    [esp+arg_4]
0x5E2518: fld     [esp+arg_4]
0x5E251C: fld     st
0x5E251E: call    Double_To_SInt32
0x5E2523: mov     [esp+arg_4], eax
0x5E2527: fild    [esp+arg_4]
0x5E252B: fstp    [esp+arg_4]
0x5E252F: fld     [esp+arg_4]
0x5E2533: fld     st
0x5E2535: fsubp   st(2), st
0x5E2537: fxch    st(1)
0x5E2539: fcomp   qword ptr ds:0A2FC68h
0x5E253F: fnstsw  ax
0x5E2541: test    ah, 1
0x5E2544: jz      short loc_5E254C
0x5E2546: fsub    qword ptr ds:0A2F928h
0x5E254C: fstp    [esp+arg_4]
0x5E2550: fld     [esp+arg_4]
0x5E2554: call    Double_To_SInt32
0x5E2559: retn    0Ch
