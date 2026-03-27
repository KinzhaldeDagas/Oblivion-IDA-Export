0x683AD0: fld     [esp+arg_4]
0x683AD4: mov     ecx, [esp+arg_8]
0x683AD8: fsub    [esp+arg_0]
0x683ADC: fstp    [esp+arg_4]
0x683AE0: fldz
0x683AE2: fst     dword ptr [ecx]
0x683AE4: fld     st
0x683AE6: fld     [esp+arg_4]
0x683AEA: fucom   st(1)
0x683AEC: fnstsw  ax
0x683AEE: fstp    st(1)
0x683AF0: test    ah, 44h
0x683AF3: jnp     short loc_683B4D
0x683AF5: fld1
0x683AF7: fstp    dword ptr [ecx]
0x683AF9: fcom    st(1)
0x683AFB: fnstsw  ax
0x683AFD: fstp    st(1)
0x683AFF: test    ah, 5
0x683B02: jp      short loc_683B29
0x683B04: fcom    qword ptr ds:0A491E0h
0x683B0A: fnstsw  ax
0x683B0C: test    ah, 41h
0x683B0F: jnz     short loc_683B1A
0x683B11: fld     dword ptr ds:0A30634h
0x683B17: fstp    dword ptr [ecx]
0x683B19: retn
0x683B1A: fadd    qword ptr ds:0A3D5B0h
0x683B20: fstp    [esp+arg_4]
0x683B24: fld     [esp+arg_4]
0x683B28: retn
0x683B29: fcom    qword ptr ds:0A3D5B8h
0x683B2F: fnstsw  ax
0x683B31: test    ah, 41h
0x683B34: jnz     short locret_683B4F
0x683B36: fld     dword ptr ds:0A30634h
0x683B3C: fstp    dword ptr [ecx]
0x683B3E: fsubr   qword ptr ds:0A3D5B0h
0x683B44: fstp    [esp+arg_4]
0x683B48: fld     [esp+arg_4]
0x683B4C: retn
0x683B4D: fstp    st(1)
0x683B4F: retn
