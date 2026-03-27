0x993B2C: fabs
0x993B2E: fld     st
0x993B30: fld     st
0x993B32: fld1
0x993B34: fsubrp  st(1), st
0x993B36: fxch    st(1)
0x993B38: fld1
0x993B3A: faddp   st(1), st
0x993B3C: fmulp   st(1), st
0x993B3E: ftst
0x993B40: fstsw   word ptr [ebp-0A0h]
0x993B47: wait
0x993B48: test    byte ptr [ebp-9Fh], 1
0x993B4F: jnz     short unknown_libname_176___unknown_libname_177
0x993B51: xor     ch, ch
0x993B53: fsqrt
0x993B55: retn
