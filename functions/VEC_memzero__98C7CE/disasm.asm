0x98C7CE: push    ebp
0x98C7CF: mov     ebp, esp
0x98C7D1: sub     esp, 10h
0x98C7D4: mov     [ebp+var_4], edi
0x98C7D7: mov     eax, [ebp+arg_0]
0x98C7DA: cdq
0x98C7DB: mov     edi, eax
0x98C7DD: xor     edi, edx
0x98C7DF: sub     edi, edx
0x98C7E1: and     edi, 0Fh
0x98C7E4: xor     edi, edx
0x98C7E6: sub     edi, edx
0x98C7E8: test    edi, edi
0x98C7EA: jnz     short __VEC_memzero___$L_notaligned$952
0x98C7EC: mov     ecx, [ebp+arg_8]
0x98C7EF: mov     edx, ecx
0x98C7F1: and     edx, 7Fh
0x98C7F4: mov     [ebp+var_C], edx
0x98C7F7: cmp     ecx, edx
0x98C7F9: jz      short __VEC_memzero___$L_trailing$953
0x98C7FB: sub     ecx, edx
0x98C7FD: push    ecx
0x98C7FE: push    eax
0x98C7FF: call    _fastzero_I
0x98C804: add     esp, 8
0x98C807: mov     eax, [ebp+arg_0]
0x98C80A: mov     edx, [ebp+var_C]
