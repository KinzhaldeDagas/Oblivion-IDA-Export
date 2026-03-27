0x6FBBA0: sub     esp, 8
0x6FBBA3: fld     dword ptr [ecx]
0x6FBBA5: push    esi
0x6FBBA6: mov     esi, [esp+0Ch+arg_0]
0x6FBBAA: fabs
0x6FBBAC: fstp    [esp+0Ch+var_8]
0x6FBBB0: fld     dword ptr [ecx+4]
0x6FBBB3: fabs
0x6FBBB5: fstp    [esp+0Ch+var_4]
0x6FBBB9: fld     [esp+0Ch+var_8]
0x6FBBBD: fld     [esp+0Ch+var_4]
0x6FBBC1: fcom    st(1)
0x6FBBC3: fnstsw  ax
0x6FBBC5: test    ah, 41h
0x6FBBC8: jnz     short loc_6FBC0A
0x6FBBCA: fstp    st
0x6FBBCC: fld     dword ptr [ecx+8]
0x6FBBCF: fabs
0x6FBBD1: fstp    [esp+0Ch+var_4]
0x6FBBD5: fld     [esp+0Ch+var_4]
0x6FBBD9: fcompp
0x6FBBDB: fnstsw  ax
0x6FBBDD: test    ah, 5
0x6FBBE0: jp      short loc_6FBBF6
0x6FBBE2: push    offset dword_B258E8
0x6FBBE7: push    esi
0x6FBBE8: call    sub_4BF9E0
0x6FBBED: mov     eax, esi
0x6FBBEF: pop     esi
0x6FBBF0: add     esp, 8
0x6FBBF3: retn    4
0x6FBBF6: push    offset dword_B258D0
0x6FBBFB: push    esi
0x6FBBFC: call    sub_4BF9E0
0x6FBC01: mov     eax, esi
0x6FBC03: pop     esi
0x6FBC04: add     esp, 8
0x6FBC07: retn    4
0x6FBC0A: fstp    st(1)
0x6FBC0C: fld     dword ptr [ecx+8]
0x6FBC0F: fabs
0x6FBC11: fstp    [esp+0Ch+var_4]
0x6FBC15: fld     [esp+0Ch+var_4]
0x6FBC19: fcompp
0x6FBC1B: fnstsw  ax
0x6FBC1D: test    ah, 5
0x6FBC20: jnp     short loc_6FBBE2
0x6FBC22: push    offset dword_B258DC
0x6FBC27: push    esi
0x6FBC28: call    sub_4BF9E0
0x6FBC2D: mov     eax, esi
0x6FBC2F: pop     esi
0x6FBC30: add     esp, 8
0x6FBC33: retn    4
