0x9A1702: push    ebp
0x9A1703: mov     ebp, esp
0x9A1705: push    ecx
0x9A1706: xor     eax, eax
0x9A1708: test    edi, edi
0x9A170A: mov     ecx, edi
0x9A170C: jnz     short loc_9A1710
0x9A170E: leave
0x9A170F: retn
0x9A1710: cmp     [edi], eax
0x9A1712: jz      short loc_9A171D
0x9A1714: add     ecx, 4
0x9A1717: inc     eax
0x9A1718: cmp     dword ptr [ecx], 0
0x9A171B: jnz     short loc_9A1714
0x9A171D: push    ebx
0x9A171E: push    esi
0x9A171F: inc     eax
0x9A1720: push    4
0x9A1722: push    eax
0x9A1723: call    unknown_libname_74
0x9A1728: mov     esi, eax
0x9A172A: test    esi, esi
0x9A172C: pop     ecx
0x9A172D: pop     ecx
0x9A172E: mov     [ebp+var_4], esi
0x9A1731: jnz     short loc_9A173B
0x9A1733: push    9
0x9A1735: call    __amsg_exit
0x9A173A: pop     ecx
0x9A173B: mov     eax, [edi]
0x9A173D: mov     ebx, edi
0x9A173F: jmp     short loc_9A1752
0x9A1741: push    eax; Src
0x9A1742: call    __strdup
0x9A1747: mov     [esi], eax
0x9A1749: add     esi, 4
0x9A174C: add     ebx, 4
0x9A174F: mov     eax, [ebx]
0x9A1751: pop     ecx
0x9A1752: test    eax, eax
0x9A1754: jnz     short loc_9A1741
0x9A1756: and     [esi], eax
0x9A1758: mov     eax, [ebp+var_4]
0x9A175B: pop     esi
0x9A175C: pop     ebx
0x9A175D: leave
0x9A175E: retn
