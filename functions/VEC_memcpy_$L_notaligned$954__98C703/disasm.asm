0x98C703: cmp     ecx, edi
0x98C705: jnz     short __VEC_memcpy___$L_unequalalign$957
0x98C707: neg     ecx
0x98C709: add     ecx, 10h
0x98C70C: mov     [ebp-1Ch], ecx
0x98C70F: mov     esi, [ebp+0Ch]
0x98C712: mov     edi, [ebp+8]
0x98C715: mov     ecx, [ebp-1Ch]
0x98C718: rep movsb
0x98C71A: mov     ecx, [ebp+8]
0x98C71D: add     ecx, [ebp-1Ch]
0x98C720: mov     edx, [ebp+0Ch]
0x98C723: add     edx, [ebp-1Ch]
0x98C726: mov     eax, [ebp+10h]
0x98C729: sub     eax, [ebp-1Ch]
0x98C72C: push    eax
0x98C72D: push    edx
0x98C72E: push    ecx
0x98C72F: call    __VEC_memcpy
0x98C734: add     esp, 0Ch
0x98C737: mov     eax, [ebp+8]
0x98C73A: jmp     short __VEC_memcpy___$L_return$956
