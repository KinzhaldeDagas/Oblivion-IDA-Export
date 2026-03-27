0x994A40: movlpd  xmm4, [esp+arg_0]
0x994A46: pextrw  edx, xmm4, 3
0x994A4B: and     edx, 7FF0h
0x994A51: sub     edx, 3FF0h
0x994A57: pextrw  eax, xmm1, 3
0x994A5C: xor     eax, edx
0x994A5E: and     eax, 8000h
0x994A63: cmp     eax, 0
0x994A66: jnz     __pow_pentium4___RET_ZERO_UF
0x994A6C: jmp     __pow_pentium4___RET_INF_OF
