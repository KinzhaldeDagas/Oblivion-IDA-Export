0x98C6DB: test    ecx, ecx
0x98C6DD: jz      short __VEC_memcpy___$L_return$956
0x98C6DF: mov     ebx, [ebp+10h]
0x98C6E2: mov     edx, [ebp+0Ch]
0x98C6E5: add     edx, ebx
0x98C6E7: sub     edx, ecx
0x98C6E9: mov     [ebp-14h], edx
0x98C6EC: add     ebx, eax
0x98C6EE: sub     ebx, ecx
0x98C6F0: mov     [ebp-10h], ebx
0x98C6F3: mov     esi, [ebp-14h]
0x98C6F6: mov     edi, [ebp-10h]
0x98C6F9: mov     ecx, [ebp-18h]
0x98C6FC: rep movsb
0x98C6FE: mov     eax, [ebp+8]
0x98C701: jmp     short __VEC_memcpy___$L_return$956
