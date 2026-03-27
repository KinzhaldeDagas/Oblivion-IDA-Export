0x676F90: push    ecx
0x676F91: push    ebx
0x676F92: push    ebp
0x676F93: push    esi
0x676F94: push    edi
0x676F95: mov     [esp+14h+var_4], ecx
0x676F99: xor     ebx, ebx
0x676F9B: jmp     short loc_676FA0
0x676F9D: align 10h
0x676FA0: mov     eax, [esp+14h+var_4]
0x676FA4: mov     ebp, [eax+ebx*4+28h]
0x676FA8: mov     edi, ebp
0x676FAA: test    edi, edi
0x676FAC: jz      short loc_676FFA
0x676FAE: mov     edi, edi
0x676FB0: cmp     dword ptr [edi+4], 0
0x676FB4: jnz     short loc_676FBB
0x676FB6: cmp     dword ptr [edi], 0
0x676FB9: jz      short loc_676FFA
0x676FBB: mov     esi, [edi]
0x676FBD: test    esi, esi
0x676FBF: jz      short loc_676FD7
0x676FC1: mov     eax, [esp+14h+arg_0]
0x676FC5: cmp     [esi+0Ch], eax
0x676FC8: jz      short loc_676FE0
0x676FCA: cmp     [esi+8], eax
0x676FCD: jz      short loc_676FE0
0x676FCF: push    eax
0x676FD0: mov     ecx, esi
0x676FD2: call    sub_607110
0x676FD7: mov     edi, [edi+4]
0x676FDA: test    edi, edi
0x676FDC: jnz     short loc_676FB0
0x676FDE: jmp     short loc_676FFA
0x676FE0: push    esi
0x676FE1: mov     ecx, ebp
0x676FE3: call    BSSimpleList_Remove
0x676FE8: mov     ecx, esi
0x676FEA: call    sub_605E80
0x676FEF: push    esi
0x676FF0: call    FormHeapFree
0x676FF5: add     esp, 4
0x676FF8: xor     ebx, ebx
0x676FFA: add     ebx, 1
0x676FFD: cmp     ebx, 6
0x677000: jl      short loc_676FA0
0x677002: pop     edi
0x677003: pop     esi
0x677004: pop     ebp
0x677005: pop     ebx
0x677006: pop     ecx
0x677007: retn    4
