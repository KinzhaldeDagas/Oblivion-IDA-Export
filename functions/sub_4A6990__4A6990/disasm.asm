0x4A6990: push    ecx
0x4A6991: mov     edx, [esp+4+arg_0]
0x4A6995: fld     dword ptr [edx]
0x4A6997: fstp    [esp+4+var_4]
0x4A699A: fld     dword ptr [ecx]
0x4A699C: fstp    [esp+4+arg_0]
0x4A69A0: fld     [esp+4+arg_0]
0x4A69A4: fld     [esp+4+var_4]
0x4A69A7: fcom    st(1)
0x4A69A9: fnstsw  ax
0x4A69AB: test    ah, 5
0x4A69AE: jp      short loc_4A69CB
0x4A69B0: fsubp   st(1), st
0x4A69B2: fld     qword ptr ds:0A30E40h
0x4A69B8: fcom    st(1)
0x4A69BA: fnstsw  ax
0x4A69BC: fstp    st(1)
0x4A69BE: test    ah, 41h
0x4A69C1: jz      short loc_4A69DE
0x4A69C3: fstp    st
0x4A69C5: xor     al, al
0x4A69C7: pop     ecx
0x4A69C8: retn    4
0x4A69CB: fsubrp  st(1), st
0x4A69CD: fld     qword ptr ds:0A30E40h
0x4A69D3: fcom    st(1)
0x4A69D5: fnstsw  ax
0x4A69D7: fstp    st(1)
0x4A69D9: test    ah, 41h
0x4A69DC: jnz     short loc_4A69C3
0x4A69DE: fld     dword ptr [edx+4]
0x4A69E1: fstp    [esp+4+var_4]
0x4A69E4: fld     dword ptr [ecx+4]
0x4A69E7: fstp    [esp+4+arg_0]
0x4A69EB: fld     [esp+4+arg_0]
0x4A69EF: fld     [esp+4+var_4]
0x4A69F2: fcom    st(1)
0x4A69F4: fnstsw  ax
0x4A69F6: test    ah, 5
0x4A69F9: jp      short loc_4A6A0C
0x4A69FB: fsubp   st(1), st
0x4A69FD: fcompp
0x4A69FF: fnstsw  ax
0x4A6A01: test    ah, 5
0x4A6A04: jnp     short loc_4A6A17
0x4A6A06: xor     al, al
0x4A6A08: pop     ecx
0x4A6A09: retn    4
0x4A6A0C: fsubrp  st(1), st
0x4A6A0E: fcompp
0x4A6A10: fnstsw  ax
0x4A6A12: test    ah, 5
0x4A6A15: jp      short loc_4A69C5
0x4A6A17: mov     al, 1
0x4A6A19: pop     ecx
0x4A6A1A: retn    4
