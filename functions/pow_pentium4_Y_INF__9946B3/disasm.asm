0x9946B3: pextrw  eax, xmm4, 3
0x9946B8: and     eax, 7FF0h
0x9946BD: cmp     eax, 3FF0h
0x9946C2: jnb     short __pow_pentium4___RET_INF
0x9946C4: fldz
0x9946C6: retn
