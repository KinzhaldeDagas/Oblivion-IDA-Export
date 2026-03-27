0x991BE9: sub     esp, 8
0x991BEC: fst     [esp+8+var_8]
0x991BEF: mov     eax, dword ptr [esp+8+var_8+4]
0x991BF3: add     esp, 8
0x991BF6: and     eax, 7FF00000h
0x991BFB: jz      short haveunderflow
0x991BFD: cmp     eax, 7FF00000h
0x991C02: jz      short haveoverflow
0x991C04: mov     ax, [esp+0]
0x991C08: cmp     ax, 27Fh
0x991C0C: jz      short loc_991C38
0x991C0E: and     ax, 20h
0x991C12: jnz     short loc_991C35
0x991C14: fstsw   ax
0x991C17: and     ax, 20h
0x991C1B: jz      short loc_991C35
0x991C1D: mov     eax, 8
0x991C22: cmp     edx, 1Dh
0x991C25: jz      short have_error_in_pow
0x991C27: call    unknown_libname_156
0x991C2C: pop     edx
0x991C2D: retn
0x991C2E: call    unknown_libname_155
0x991C33: pop     edx
0x991C34: retn
0x991C35: fldcw   word ptr [esp+0]
0x991C38: pop     edx
0x991C39: retn
0x991C3A: fld     ds:dbl_AA50BC
0x991C40: fxch    st(1)
0x991C42: fscale
0x991C44: fstp    st(1)
0x991C46: fld     st
0x991C48: fabs
0x991C4A: fcomp   ds:dbl_AA50AC
0x991C50: fstsw   ax
0x991C53: sahf
0x991C54: mov     eax, 4
0x991C59: jnb     short have_error
0x991C5B: fmul    ds:dbl_AA50CC
0x991C61: jmp     short have_error
0x991C63: fld     ds:dbl_AA50B4
0x991C69: fxch    st(1)
0x991C6B: fscale
0x991C6D: fstp    st(1)
0x991C6F: fld     st
0x991C71: fabs
0x991C73: fcomp   ds:dbl_AA50A4
0x991C79: fstsw   ax
0x991C7C: sahf
0x991C7D: mov     eax, 3
0x991C82: jbe     short have_error
0x991C84: fmul    ds:dbl_AA50C4
0x991C8A: jmp     short have_error
