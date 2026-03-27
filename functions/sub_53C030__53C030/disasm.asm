0x53C030: sub     esp, 8
0x53C033: fld     dword ptr [ecx+58h]
0x53C036: fld     qword ptr ds:0A3F418h
0x53C03C: fld     st
0x53C03E: fsubrp  st(2), st
0x53C040: fxch    st(1)
0x53C042: fstp    [esp+8+var_8]
0x53C045: fsub    dword ptr [ecx+5Ch]
0x53C048: fstp    [esp+8+var_4]
0x53C04C: fld     dword ptr ds:0A3F420h
0x53C052: fcomp   dword ptr [ecx+74h]
0x53C055: fnstsw  ax
0x53C057: test    ah, 5
0x53C05A: jnp     loc_53C0F5
0x53C060: fld     dword ptr [ecx+74h]
0x53C063: fld     dword ptr [ecx+58h]
0x53C066: fcompp
0x53C068: fnstsw  ax
0x53C06A: test    ah, 1
0x53C06D: jnz     short loc_53C096
0x53C06F: fld     dword ptr [ecx+74h]
0x53C072: fld     dword ptr [ecx+5Ch]
0x53C075: fcompp
0x53C077: fnstsw  ax
0x53C079: test    ah, 41h
0x53C07C: jp      short loc_53C096
0x53C07E: fld     dword ptr [ecx+74h]
0x53C081: fsub    dword ptr [ecx+5Ch]
0x53C084: fld     dword ptr [ecx+58h]
0x53C087: fsub    dword ptr [ecx+5Ch]
0x53C08A: fdivp   st(1), st
0x53C08C: fstp    [esp+8+var_8]
0x53C08F: fld     [esp+8+var_8]
0x53C092: add     esp, 8
0x53C095: retn
0x53C096: fld     dword ptr [ecx+74h]
0x53C099: fld     [esp+8+var_8]
0x53C09C: fcom    st(1)
0x53C09E: fnstsw  ax
0x53C0A0: fstp    st(1)
0x53C0A2: test    ah, 41h
0x53C0A5: jp      short loc_53C0D2
0x53C0A7: fld     dword ptr [ecx+74h]
0x53C0AA: fld     [esp+8+var_4]
0x53C0AE: fcom    st(1)
0x53C0B0: fnstsw  ax
0x53C0B2: fstp    st(1)
0x53C0B4: test    ah, 1
0x53C0B7: jnz     short loc_53C0D0
0x53C0B9: fld     st
0x53C0BB: fsub    dword ptr [ecx+74h]
0x53C0BE: fxch    st(1)
0x53C0C0: fsubrp  st(2), st
0x53C0C2: fdivrp  st(1), st
0x53C0C4: fstp    [esp+8+var_4]
0x53C0C8: fld     [esp+8+var_4]
0x53C0CC: add     esp, 8
0x53C0CF: retn
0x53C0D0: fstp    st
0x53C0D2: fld     dword ptr [ecx+74h]
0x53C0D5: fld     dword ptr [ecx+58h]
0x53C0D8: fcompp
0x53C0DA: fnstsw  ax
0x53C0DC: test    ah, 5
0x53C0DF: jp      short loc_53C0F3
0x53C0E1: fld     dword ptr [ecx+74h]
0x53C0E4: fcompp
0x53C0E6: fnstsw  ax
0x53C0E8: test    ah, 5
0x53C0EB: jp      short loc_53C0F5
0x53C0ED: fld1
0x53C0EF: add     esp, 8
0x53C0F2: retn
0x53C0F3: fstp    st
0x53C0F5: fldz
0x53C0F7: add     esp, 8
0x53C0FA: retn
