0x9858DC: cmp     eax, 3FF00000h
0x9858E1: jnb     short start_2___x_huge
0x9858E3: fld1
0x9858E5: fadd    st, st(1)
0x9858E7: fld1
0x9858E9: fsub    st, st(2)
0x9858EB: fmulp   st(1), st
0x9858ED: fsqrt
0x9858EF: fpatan
