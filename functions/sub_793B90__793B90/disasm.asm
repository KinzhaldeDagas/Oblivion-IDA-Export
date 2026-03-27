0x793B90: fld     [esp+arg_0]
0x793B94: xor     eax, eax
0x793B96: fst     dword ptr [ecx+4]
0x793B99: fld     st
0x793B9B: fld     qword ptr ds:0A49310h
0x793BA1: fmul    st(1), st
0x793BA3: fld     dword ptr [ecx+1Ch]
0x793BA6: fmulp   st(2), st
0x793BA8: fxch    st(1)
0x793BAA: fstp    [esp+arg_0]
0x793BAE: fld     [esp+arg_0]
0x793BB2: fst     dword ptr [ecx+20h]
0x793BB5: fxch    st(2)
0x793BB7: fmul    qword ptr ds:0A3F418h
0x793BBD: fmul    dword ptr [ecx+18h]
0x793BC0: fstp    dword ptr [ecx+24h]
0x793BC3: fmul    [esp+arg_4]
0x793BC7: fmul    dword ptr [ecx+1Ch]
0x793BCA: fstp    [esp+arg_0]
0x793BCE: fld     [esp+arg_0]
0x793BD2: fld     dword ptr ds:0B42A0Ch
0x793BD8: mov     [ecx+34h], eax
0x793BDB: fld     st
0x793BDD: mov     [ecx+30h], eax
0x793BE0: fmulp   st(2), st
0x793BE2: fld     [esp+arg_8]
0x793BE6: faddp   st(2), st
0x793BE8: fmulp   st(2), st
0x793BEA: fsubrp  st(1), st
0x793BEC: fstp    dword ptr [ecx]
0x793BEE: fld     dword ptr [ecx]
0x793BF0: retn    0Ch
