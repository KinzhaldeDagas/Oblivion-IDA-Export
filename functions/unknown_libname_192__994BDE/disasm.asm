0x994BDE: fld     st
0x994BE0: fabs
0x994BE2: fld     tbyte_B31CEE
0x994BE8: fcompp
0x994BEA: fstsw   word ptr [ebp-0A0h]
0x994BF1: wait
0x994BF2: test    byte ptr [ebp-9Fh], 41h
0x994BF9: jnz     short unknown_libname_192___ExpArgOutOfRange
0x994BFB: fld     st
0x994BFD: frndint
0x994BFF: ftst
0x994C01: fstsw   word ptr [ebp-0A0h]
0x994C08: wait
0x994C09: mov     dl, [ebp-9Fh]
0x994C0F: fxch    st(1)
0x994C11: fsub    st, st(1)
0x994C13: ftst
0x994C15: fstsw   word ptr [ebp-0A0h]
0x994C1C: fabs
0x994C1E: f2xm1
0x994C20: retn
