0x994C21: fld     st
0x994C23: frndint
0x994C25: fcomp   st(1)
0x994C27: fstsw   ax
0x994C2A: sahf
0x994C2B: jnz     short _isintTOS___notanint
0x994C2D: fld     st
0x994C2F: fmul    dbl_B31D02
0x994C35: fld     st
0x994C37: frndint
0x994C39: fcompp
0x994C3B: fstsw   ax
0x994C3E: sahf
0x994C3F: jz      short _isintTOS___evenint
0x994C41: mov     eax, 1
