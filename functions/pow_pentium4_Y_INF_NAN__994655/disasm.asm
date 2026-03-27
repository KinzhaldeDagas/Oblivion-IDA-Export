0x994655: movlpd  xmm3, qword ptr ds:xmmword_AAB940
0x99465D: xorpd   xmm1, xmm1
0x994661: andpd   xmm3, xmm2
0x994665: pcmpeqd xmm1, xmm3
0x994669: pmovmskb eax, xmm1
0x99466D: and     eax, 0FFh
0x994672: cmp     eax, 0FFh
0x994677: jnz     short __pow_pentium4___RET_Y_NAN
0x994679: pextrw  eax, xmm2, 3
0x99467E: movlpd  xmm4, [esp+arg_0]
0x994684: and     eax, 8000h
0x994689: xor     ecx, 0BFF00000h
0x99468F: or      edx, ecx
0x994691: cmp     edx, 0
0x994694: jz      __pow_pentium4___RET_ONE
0x99469A: cmp     eax, 0
0x99469D: jz      short __pow_pentium4___Y_INF
0x99469F: pextrw  eax, xmm4, 3
0x9946A4: and     eax, 7FF0h
0x9946A9: cmp     eax, 3FF0h
0x9946AE: jb      short __pow_pentium4___RET_INF
0x9946B0: fldz
0x9946B2: retn
