0x8904E0: mov     ecx, [esp+arg_0]
0x8904E4: fld     dword ptr [ecx]
0x8904E6: mov     edx, [esp+arg_4]
0x8904EA: fsub    dword ptr [edx]
0x8904EC: fstp    [esp+arg_0]
0x8904F0: fld     [esp+arg_0]
0x8904F4: fabs
0x8904F6: fstp    [esp+arg_0]
0x8904FA: fld     [esp+arg_0]
0x8904FE: fld     [esp+arg_8]
0x890502: fcom    st(1)
0x890504: fnstsw  ax
0x890506: fstp    st(1)
0x890508: test    ah, 1
0x89050B: jnz     short loc_890555
0x89050D: fld     dword ptr [ecx+4]
0x890510: fsub    dword ptr [edx+4]
0x890513: fstp    [esp+arg_0]
0x890517: fld     [esp+arg_0]
0x89051B: fabs
0x89051D: fstp    [esp+arg_0]
0x890521: fld     [esp+arg_0]
0x890525: fcomp   st(1)
0x890527: fnstsw  ax
0x890529: test    ah, 41h
0x89052C: jp      short loc_890555
0x89052E: fld     dword ptr [ecx+8]
0x890531: fsub    dword ptr [edx+8]
0x890534: fstp    [esp+arg_0]
0x890538: fld     [esp+arg_0]
0x89053C: fabs
0x89053E: fstp    [esp+arg_0]
0x890542: fld     [esp+arg_0]
0x890546: fcompp
0x890548: fnstsw  ax
0x89054A: test    ah, 41h
0x89054D: jp      short loc_890557
0x89054F: mov     eax, 1
0x890554: retn
0x890555: fstp    st
0x890557: xor     eax, eax
0x890559: retn
