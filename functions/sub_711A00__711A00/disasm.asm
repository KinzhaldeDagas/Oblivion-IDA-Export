0x711A00: push    ecx
0x711A01: fld     dword ptr ds:0A7E738h
0x711A07: push    esi
0x711A08: fldz
0x711A0A: mov     esi, 3
0x711A0F: mov     edx, 3
0x711A14: fld     dword ptr [ecx]
0x711A16: fabs
0x711A18: fstp    [esp+8+var_4]
0x711A1C: fld     [esp+8+var_4]
0x711A20: fcomp   st(2)
0x711A22: fnstsw  ax
0x711A24: test    ah, 41h
0x711A27: jp      short loc_711A34
0x711A29: fcom    dword ptr [ecx]
0x711A2B: fnstsw  ax
0x711A2D: test    ah, 44h
0x711A30: jnp     short loc_711A34
0x711A32: fst     dword ptr [ecx]
0x711A34: add     ecx, 4
0x711A37: sub     edx, 1
0x711A3A: jnz     short loc_711A14
0x711A3C: sub     esi, 1
0x711A3F: jnz     short loc_711A0F
0x711A41: fstp    st
0x711A43: pop     esi
0x711A44: fstp    st
0x711A46: pop     ecx
0x711A47: retn
