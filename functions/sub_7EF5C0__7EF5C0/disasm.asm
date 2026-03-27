0x7EF5C0: push    ebx
0x7EF5C1: push    ebp
0x7EF5C2: push    edi
0x7EF5C3: call    sub_8025F0
0x7EF5C8: mov     ebp, ds:0A2807Ch
0x7EF5CE: mov     bl, al
0x7EF5D0: mov     edi, offset dword_B466E0
0x7EF5D5: push    esi
0x7EF5D6: mov     esi, [edi]
0x7EF5D8: test    esi, esi
0x7EF5DA: jz      short loc_7EF5FA
0x7EF5DC: lea     eax, [esi+4]
0x7EF5DF: push    eax; lpAddend
0x7EF5E0: call    ebp ; InterlockedDecrement
0x7EF5E2: test    eax, eax
0x7EF5E4: jnz     short loc_7EF5F4
0x7EF5E6: test    esi, esi
0x7EF5E8: jz      short loc_7EF5F4
0x7EF5EA: mov     edx, [esi]
0x7EF5EC: mov     eax, [edx]
0x7EF5EE: push    1
0x7EF5F0: mov     ecx, esi
0x7EF5F2: call    eax
0x7EF5F4: mov     dword ptr [edi], 0
0x7EF5FA: add     edi, 4
0x7EF5FD: cmp     edi, offset unk_B466F0
0x7EF603: jl      short loc_7EF5D6
0x7EF605: mov     edi, offset dword_B46708
0x7EF60A: lea     ebx, [ebx+0]
0x7EF610: mov     esi, [edi]
0x7EF612: test    esi, esi
0x7EF614: jz      short loc_7EF634
0x7EF616: lea     ecx, [esi+4]
0x7EF619: push    ecx; lpAddend
0x7EF61A: call    ebp ; InterlockedDecrement
0x7EF61C: test    eax, eax
0x7EF61E: jnz     short loc_7EF62E
0x7EF620: test    esi, esi
0x7EF622: jz      short loc_7EF62E
0x7EF624: mov     edx, [esi]
0x7EF626: mov     eax, [edx]
0x7EF628: push    1
0x7EF62A: mov     ecx, esi
0x7EF62C: call    eax
0x7EF62E: mov     dword ptr [edi], 0
0x7EF634: add     edi, 4
0x7EF637: cmp     edi, offset dword_B46710
0x7EF63D: jl      short loc_7EF610
0x7EF63F: mov     eax, ds:0B46704h
0x7EF644: test    eax, eax
0x7EF646: pop     esi
0x7EF647: jz      short loc_7EF660
0x7EF649: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7EF64D: mov     ecx, eax
0x7EF64F: jnz     short loc_7EF656
0x7EF651: call    sub_7604D0
0x7EF656: mov     dword ptr ds:0B46704h, 0
0x7EF660: pop     edi
0x7EF661: pop     ebp
0x7EF662: mov     al, bl
0x7EF664: pop     ebx
0x7EF665: retn
