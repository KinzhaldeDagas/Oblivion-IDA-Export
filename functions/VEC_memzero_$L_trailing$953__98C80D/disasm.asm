0x98C80D: test    edx, edx
0x98C80F: jz      short __VEC_memzero___$L_return$954
0x98C811: add     eax, [ebp+10h]
0x98C814: sub     eax, edx
0x98C816: mov     [ebp-8], eax
0x98C819: xor     eax, eax
0x98C81B: mov     edi, [ebp-8]
0x98C81E: mov     ecx, [ebp-0Ch]
0x98C821: rep stosb
0x98C823: mov     eax, [ebp+8]
0x98C826: jmp     short __VEC_memzero___$L_return$954
