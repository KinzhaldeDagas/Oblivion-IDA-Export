0x47D890: mov     ecx, [esp+arg_0]
0x47D894: fld     dword ptr [ecx]
0x47D896: mov     edx, [esp+arg_4]
0x47D89A: fsub    dword ptr [edx]
0x47D89C: fstp    [esp+arg_0]
0x47D8A0: fld     [esp+arg_0]
0x47D8A4: fabs
0x47D8A6: fstp    [esp+arg_0]
0x47D8AA: fld     [esp+arg_0]
0x47D8AE: fld     [esp+arg_8]
0x47D8B2: fcom    st(1)
0x47D8B4: fnstsw  ax
0x47D8B6: fstp    st(1)
0x47D8B8: test    ah, 41h
0x47D8BB: jp      short loc_47D8C2
0x47D8BD: fstp    st
0x47D8BF: xor     al, al
0x47D8C1: retn
0x47D8C2: fld     dword ptr [ecx+4]
0x47D8C5: fsub    dword ptr [edx+4]
0x47D8C8: fstp    [esp+arg_0]
0x47D8CC: fld     [esp+arg_0]
0x47D8D0: fabs
0x47D8D2: fstp    [esp+arg_0]
0x47D8D6: fld     [esp+arg_0]
0x47D8DA: fcompp
0x47D8DC: fnstsw  ax
0x47D8DE: test    ah, 1
0x47D8E1: jz      short loc_47D8BF
0x47D8E3: mov     al, 1
0x47D8E5: retn
