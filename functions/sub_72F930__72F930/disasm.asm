0x72F930: fld     dword ptr [ecx+0Ch]
0x72F933: push    esi
0x72F934: fld     [esp+4+arg_4]
0x72F938: sub     esp, 10h
0x72F93B: fld     st
0x72F93D: mov     esi, [esp+14h+arg_0]
0x72F941: fmulp   st(2), st
0x72F943: fxch    st(1)
0x72F945: fstp    [esp+14h+arg_4]
0x72F949: fld     [esp+14h+arg_4]
0x72F94D: fstp    [esp+14h+var_8]; float
0x72F951: fld     dword ptr [ecx+8]
0x72F954: fmul    st, st(1)
0x72F956: fstp    [esp+14h+arg_4]
0x72F95A: fld     [esp+14h+arg_4]
0x72F95E: fstp    [esp+14h+var_C]; float
0x72F962: fld     dword ptr [ecx+4]
0x72F965: fmul    st, st(1)
0x72F967: fstp    [esp+14h+arg_4]
0x72F96B: fld     [esp+14h+arg_4]
0x72F96F: fstp    [esp+14h+var_10]; float
0x72F973: fmul    dword ptr [ecx]
0x72F975: mov     ecx, esi
0x72F977: fstp    [esp+14h+arg_4]
0x72F97B: fld     [esp+14h+arg_4]
0x72F97F: fstp    [esp+14h+var_14]; float
0x72F982: call    sub_714C40
0x72F987: mov     eax, esi
0x72F989: pop     esi
0x72F98A: retn    8
