0x993F39: movlpd  xmm0, [esp+arg_0]
0x993F3F: movlpd  xmm7, qword ptr ds:xmmword_AAB940
0x993F47: movlpd  xmm2, qword ptr ds:xmmword_AAB950
0x993F4F: andpd   xmm7, xmm0
0x993F53: movsd   xmm4, xmm0
0x993F57: psrlq   xmm0, 2Ch ; ','
0x993F5C: pextrw  eax, xmm0, 0
0x993F61: orpd    xmm7, xmm2
0x993F65: pextrw  ecx, xmm4, 3
0x993F6A: and     eax, 0FFh
0x993F6F: add     eax, 1
0x993F72: and     eax, 1FEh
0x993F77: mulsd   xmm7, ds:qword_AA80B0[eax*4]
0x993F80: movlpd  xmm5, ds:qword_AA80B0[eax*4]
0x993F89: add     eax, eax
0x993F8B: movapd  xmm6, ds:xmmword_AA84C0[eax*4]
0x993F94: mov     edx, 7FEFh
0x993F99: sub     edx, ecx
0x993F9B: sub     ecx, 10h
0x993F9E: or      ecx, edx
0x993FA0: cmp     ecx, 80000000h
0x993FA6: jnb     __pow_pentium4___SPECIAL_X
0x993FAC: mov     ecx, 0
0x993FB1: mov     edx, 3FE7Fh
