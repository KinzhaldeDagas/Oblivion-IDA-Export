0x994770: cmp     eax, 0
0x994773: jle     short __pow_pentium4___UNDERFLOW_CASES
0x994775: cmp     eax, 40000h
0x99477A: jnb     __pow_pentium4___RET_INF_OF
0x994780: push    esi
0x994781: mov     edx, eax
0x994783: and     eax, 7Fh
0x994786: add     ecx, 3FF00h
0x99478C: sub     edx, 80h ; '€'
0x994792: and     edx, 0FFFFFF80h
0x994795: push    edi
0x994796: mov     edi, 3FF0h
0x99479B: jmp     short __pow_pentium4___OF_CONT
