0x984A90: cmp     cl, 40h ; '@'
0x984A93: jnb     short RETSIGN
0x984A95: cmp     cl, 20h ; ' '
0x984A98: jnb     short MORE32
0x984A9A: shrd    eax, edx, cl
0x984A9D: sar     edx, cl
0x984A9F: retn
0x984AA0: mov     eax, edx
0x984AA2: sar     edx, 1Fh
0x984AA5: and     cl, 1Fh
0x984AA8: sar     eax, cl
0x984AAA: retn
0x984AAB: sar     edx, 1Fh
0x984AAE: mov     eax, edx
0x984AB0: retn
