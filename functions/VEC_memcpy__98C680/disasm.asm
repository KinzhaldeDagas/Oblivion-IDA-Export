0x98C680: push    ebp
0x98C681: mov     ebp, esp
0x98C683: sub     esp, 1Ch
0x98C686: mov     [ebp+var_C], edi
0x98C689: mov     [ebp+var_8], esi
0x98C68C: mov     [ebp+var_4], ebx
0x98C68F: mov     ebx, [ebp+arg_4]
0x98C692: mov     eax, ebx
0x98C694: cdq
0x98C695: mov     ecx, eax
0x98C697: mov     eax, [ebp+arg_0]
0x98C69A: xor     ecx, edx
0x98C69C: sub     ecx, edx
0x98C69E: and     ecx, 0Fh
0x98C6A1: xor     ecx, edx
0x98C6A3: sub     ecx, edx
0x98C6A5: cdq
0x98C6A6: mov     edi, eax
0x98C6A8: xor     edi, edx
0x98C6AA: sub     edi, edx
0x98C6AC: and     edi, 0Fh
0x98C6AF: xor     edi, edx
0x98C6B1: sub     edi, edx
0x98C6B3: mov     edx, ecx
0x98C6B5: or      edx, edi
0x98C6B7: jnz     short __VEC_memcpy___$L_notaligned$954
0x98C6B9: mov     esi, [ebp+arg_8]
0x98C6BC: mov     ecx, esi
0x98C6BE: and     ecx, 7Fh
0x98C6C1: mov     [ebp+var_18], ecx
0x98C6C4: cmp     esi, ecx
0x98C6C6: jz      short __VEC_memcpy___$L_trailing$955
0x98C6C8: sub     esi, ecx
0x98C6CA: push    esi
0x98C6CB: push    ebx
0x98C6CC: push    eax
0x98C6CD: call    _fastcopy_I
0x98C6D2: add     esp, 0Ch
0x98C6D5: mov     eax, [ebp+arg_0]
0x98C6D8: mov     ecx, [ebp+var_18]
