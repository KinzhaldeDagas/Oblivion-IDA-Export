0x772DF0: mov     ecx, ds:0B427A8h
0x772DF6: cmp     dword ptr [ecx+8], 0
0x772DFA: push    esi
0x772DFB: lea     esi, [ecx+8]
0x772DFE: push    edi
0x772DFF: mov     edi, ecx
0x772E01: jnz     short loc_772E17
0x772E03: mov     eax, [ecx+0Ch]
0x772E06: push    ebx
0x772E07: lea     ebx, [ecx+0Ch]
0x772E0A: push    eax
0x772E0B: call    sub_7729E0
0x772E10: mov     ecx, [ebx]
0x772E12: add     ecx, ecx
0x772E14: mov     [ebx], ecx
0x772E16: pop     ebx
0x772E17: mov     ecx, [edi]
0x772E19: mov     eax, [ecx]
0x772E1B: add     dword ptr [esi], 0FFFFFFFFh
0x772E1E: mov     esi, [esi]
0x772E20: mov     edx, [ecx+esi*4]
0x772E23: mov     [ecx], edx
0x772E25: cmp     byte ptr [eax], 0
0x772E28: pop     edi
0x772E29: pop     esi
0x772E2A: jnz     short locret_772E2F
0x772E2C: mov     byte ptr [eax], 1
0x772E2F: retn
