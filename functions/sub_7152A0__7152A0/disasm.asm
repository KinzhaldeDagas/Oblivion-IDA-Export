0x7152A0: push    ecx
0x7152A1: fld     dword ptr [ecx+4]
0x7152A4: fabs
0x7152A6: fstp    [esp+4+var_4]
0x7152A9: fld     [esp+4+var_4]
0x7152AC: fld     dword ptr ds:0A7E738h
0x7152B2: fcom    st(1)
0x7152B4: fnstsw  ax
0x7152B6: fstp    st(1)
0x7152B8: test    ah, 1
0x7152BB: fldz
0x7152BD: jnz     short loc_7152CC
0x7152BF: fcom    dword ptr [ecx+4]
0x7152C2: fnstsw  ax
0x7152C4: test    ah, 44h
0x7152C7: jnp     short loc_7152CC
0x7152C9: fst     dword ptr [ecx+4]
0x7152CC: fld     dword ptr [ecx+8]
0x7152CF: fabs
0x7152D1: fstp    [esp+4+var_4]
0x7152D4: fld     [esp+4+var_4]
0x7152D7: fcomp   st(2)
0x7152D9: fnstsw  ax
0x7152DB: test    ah, 41h
0x7152DE: jp      short loc_7152ED
0x7152E0: fcom    dword ptr [ecx+8]
0x7152E3: fnstsw  ax
0x7152E5: test    ah, 44h
0x7152E8: jnp     short loc_7152ED
0x7152EA: fst     dword ptr [ecx+8]
0x7152ED: fld     dword ptr [ecx+0Ch]
0x7152F0: fabs
0x7152F2: fstp    [esp+4+var_4]
0x7152F5: fld     [esp+4+var_4]
0x7152F8: fcomp   st(2)
0x7152FA: fnstsw  ax
0x7152FC: test    ah, 41h
0x7152FF: jp      short loc_71530E
0x715301: fcom    dword ptr [ecx+0Ch]
0x715304: fnstsw  ax
0x715306: test    ah, 44h
0x715309: jnp     short loc_71530E
0x71530B: fst     dword ptr [ecx+0Ch]
0x71530E: fld     dword ptr [ecx]
0x715310: fabs
0x715312: fstp    [esp+4+var_4]
0x715315: fld     [esp+4+var_4]
0x715318: fcomp   st(2)
0x71531A: fnstsw  ax
0x71531C: fstp    st(1)
0x71531E: test    ah, 41h
0x715321: jp      short loc_715330
0x715323: fcom    dword ptr [ecx]
0x715325: fnstsw  ax
0x715327: test    ah, 44h
0x71532A: jnp     short loc_715330
0x71532C: fstp    dword ptr [ecx]
0x71532E: pop     ecx
0x71532F: retn
0x715330: fstp    st
0x715332: pop     ecx
0x715333: retn
