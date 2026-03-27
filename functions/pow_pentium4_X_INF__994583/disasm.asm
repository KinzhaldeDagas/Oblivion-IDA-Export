0x994583: movlpd  xmm1, [esp+arg_8]
0x994589: pextrw  eax, xmm1, 3
0x99458E: and     eax, 8000h
0x994593: cmp     eax, 0
0x994596: jz      __pow_pentium4___RET_INF
0x99459C: fldz
0x99459E: retn
