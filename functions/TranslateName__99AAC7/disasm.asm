0x99AAC7: push    ebp
0x99AAC8: mov     ebp, esp
0x99AACA: xor     eax, eax
0x99AACC: push    ebx
0x99AACD: xor     ebx, ebx
0x99AACF: inc     eax
0x99AAD0: cmp     [ebp+arg_4], ebx
0x99AAD3: jl      short loc_99AB1B
0x99AAD5: push    esi
0x99AAD6: push    edi
0x99AAD7: test    eax, eax
0x99AAD9: jz      short loc_99AB19
0x99AADB: mov     eax, [ebp+arg_4]
0x99AADE: add     eax, ebx
0x99AAE0: cdq
0x99AAE1: sub     eax, edx
0x99AAE3: mov     esi, eax
0x99AAE5: mov     eax, [ebp+arg_0]
0x99AAE8: sar     esi, 1
0x99AAEA: lea     edi, [eax+esi*8]
0x99AAED: push    dword ptr [edi]; Str2
0x99AAEF: mov     eax, [ebp+arg_8]
0x99AAF2: push    dword ptr [eax]; Str1
0x99AAF4: call    __strcmp
0x99AAF9: test    eax, eax
0x99AAFB: pop     ecx
0x99AAFC: pop     ecx
0x99AAFD: jnz     short loc_99AB09
0x99AAFF: mov     ecx, [ebp+arg_8]
0x99AB02: add     edi, 4
0x99AB05: mov     [ecx], edi
0x99AB07: jmp     short loc_99AB14
0x99AB09: jge     short loc_99AB11
0x99AB0B: dec     esi
0x99AB0C: mov     [ebp+arg_4], esi
0x99AB0F: jmp     short loc_99AB14
0x99AB11: lea     ebx, [esi+1]
0x99AB14: cmp     ebx, [ebp+arg_4]
0x99AB17: jle     short loc_99AAD7
0x99AB19: pop     edi
0x99AB1A: pop     esi
0x99AB1B: xor     ecx, ecx
0x99AB1D: test    eax, eax
0x99AB1F: setz    cl
0x99AB22: pop     ebx
0x99AB23: mov     eax, ecx
0x99AB25: pop     ebp
0x99AB26: retn
