0x5F1910: mov     eax, [esp+arg_0]
0x5F1914: push    eax
0x5F1915: call    Actor_GetBaseCalcAVf
0x5F191A: fstp    [esp+arg_0]
0x5F191E: fld     [esp+arg_0]
0x5F1922: fld     st
0x5F1924: call    Double_To_SInt32
0x5F1929: mov     [esp+arg_0], eax
0x5F192D: fild    [esp+arg_0]
0x5F1931: fstp    [esp+arg_0]
0x5F1935: fld     [esp+arg_0]
0x5F1939: fld     st
0x5F193B: fsubp   st(2), st
0x5F193D: fxch    st(1)
0x5F193F: fcomp   qword ptr ds:0A2FC68h
0x5F1945: fnstsw  ax
0x5F1947: test    ah, 1
0x5F194A: jz      short loc_5F1952
0x5F194C: fsub    qword ptr ds:0A2F928h
0x5F1952: fstp    [esp+arg_0]
0x5F1956: fld     [esp+arg_0]
0x5F195A: call    Double_To_SInt32
0x5F195F: retn    4
