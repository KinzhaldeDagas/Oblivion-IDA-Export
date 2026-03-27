0x47D970: fld     [esp+arg_0]
0x47D974: fcom    qword ptr ds:0A3D360h
0x47D97A: fnstsw  ax
0x47D97C: test    ah, 41h
0x47D97F: jnz     short loc_47D9A3
0x47D981: fld1
0x47D983: fcomp   st(1)
0x47D985: fnstsw  ax
0x47D987: test    ah, 41h
0x47D98A: jnz     short loc_47D99A
0x47D98C: call    __CIasin
0x47D991: fstp    [esp+arg_0]
0x47D995: fld     [esp+arg_0]
0x47D999: retn
0x47D99A: fstp    st
0x47D99C: fld     dword ptr ds:0B3F99Ch
0x47D9A2: retn
0x47D9A3: fstp    st
0x47D9A5: fld     dword ptr ds:0B3F99Ch
0x47D9AB: fchs
0x47D9AD: retn
