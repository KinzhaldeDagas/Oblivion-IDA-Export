0x98619C: cmp     eax, 3FF00000h
0x9861A1: jnb     short start_5___x_huge_0
0x9861A3: fld1
0x9861A5: fadd    st, st(1)
0x9861A7: fld1
0x9861A9: fsub    st, st(2)
0x9861AB: fmulp   st(1), st
0x9861AD: fsqrt
0x9861AF: fxch    st(1)
0x9861B1: fpatan
