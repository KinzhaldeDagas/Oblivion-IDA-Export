0x990A43: mov     dword ptr [ebp-8Eh], 3
0x990A4D: fld     ds:dbl_AA5070
0x990A53: fxch    st(1)
0x990A55: fscale
0x990A57: fstp    st(1)
0x990A59: fld     st
0x990A5B: fabs
0x990A5D: fcomp   ds:dbl_AA5060
0x990A63: fstsw   ax
0x990A66: sahf
0x990A67: jbe     short unknown_libname_100___unknown_libname_107
0x990A69: fmul    ds:dbl_AA5080
