0x521DA0: push    ebx
0x521DA1: mov     ebx, ecx
0x521DA3: mov     ecx, ds:0B33B00h
0x521DA9: call    sub_45A500
0x521DAE: test    al, al
0x521DB0: jnz     short loc_521E24
0x521DB2: push    ebp
0x521DB3: mov     ebp, ds:0A2807Ch
0x521DB9: push    esi
0x521DBA: mov     esi, [ebx+1D4h]
0x521DC0: test    esi, esi
0x521DC2: push    edi
0x521DC3: lea     edi, [ebx+1D4h]
0x521DC9: jz      short loc_521DE9
0x521DCB: lea     eax, [esi+4]
0x521DCE: push    eax; lpAddend
0x521DCF: call    ebp ; InterlockedDecrement
0x521DD1: test    eax, eax
0x521DD3: jnz     short loc_521DE3
0x521DD5: test    esi, esi
0x521DD7: jz      short loc_521DE3
0x521DD9: mov     edx, [esi]
0x521DDB: mov     eax, [edx]
0x521DDD: push    1
0x521DDF: mov     ecx, esi
0x521DE1: call    eax
0x521DE3: mov     dword ptr [edi], 0
0x521DE9: push    edi
0x521DEA: lea     ecx, [ebx+1D8h]
0x521DF0: call    sub_55E2A0
0x521DF5: mov     esi, [ebx+1DCh]
0x521DFB: test    esi, esi
0x521DFD: jz      short loc_521E21
0x521DFF: lea     ecx, [esi+4]
0x521E02: push    ecx; lpAddend
0x521E03: call    ebp ; InterlockedDecrement
0x521E05: test    eax, eax
0x521E07: jnz     short loc_521E17
0x521E09: test    esi, esi
0x521E0B: jz      short loc_521E17
0x521E0D: mov     edx, [esi]
0x521E0F: mov     eax, [edx]
0x521E11: push    1
0x521E13: mov     ecx, esi
0x521E15: call    eax
0x521E17: mov     dword ptr [ebx+1DCh], 0
0x521E21: pop     edi
0x521E22: pop     esi
0x521E23: pop     ebp
0x521E24: mov     word ptr [ebx+1E0h], 0FFh
0x521E2D: mov     ecx, ebx
0x521E2F: pop     ebx
0x521E30: jmp     j_TESForm_ClearComponentReferences
