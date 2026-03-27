0x99494F: pop     esi
0x994950: addsd   xmm0, xmm1
0x994954: mulsd   xmm0, xmm7
0x994958: mulsd   xmm6, xmm0
0x99495C: addsd   xmm0, xmm6
0x994960: pextrw  eax, xmm0, 3
0x994965: and     eax, 7FF0h
0x99496A: mov     edx, 18h
0x99496F: cmp     eax, 7FF0h
0x994974: jz      __pow_pentium4___CALL_LIBM_ERROR_0
0x99497A: mov     edx, 19h
0x99497F: cmp     eax, 0
0x994982: jz      __pow_pentium4___CALL_LIBM_ERROR_0
0x994988: sub     esp, 10h
0x99498B: movlpd  [esp+0Ch+var_8], xmm0
0x994991: fld     [esp+0Ch+var_8]
0x994995: add     esp, 10h
0x994998: retn
