0x484370: fld     [esp+arg_0]
0x484374: fld     st
0x484376: call    Double_To_SInt32
0x48437B: mov     [esp+arg_0], eax
0x48437F: fild    [esp+arg_0]
0x484383: fstp    [esp+arg_0]
0x484387: fld     [esp+arg_0]
0x48438B: fld     st
0x48438D: fsubrp  st(2), st
0x48438F: fxch    st(1)
0x484391: fcomp   qword ptr ds:0A2FC68h
0x484397: fnstsw  ax
0x484399: test    ah, 1
0x48439C: jz      short loc_4843A4
0x48439E: fadd    qword ptr ds:0A2F928h
0x4843A4: fstp    [esp+arg_0]
0x4843A8: fld     [esp+arg_0]
0x4843AC: retn
