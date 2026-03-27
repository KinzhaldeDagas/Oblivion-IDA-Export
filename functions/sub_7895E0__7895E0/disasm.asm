0x7895E0: mov     edx, [esp+Src]
0x7895E4: mov     eax, edx
0x7895E6: push    esi
0x7895E7: lea     esi, [eax+1]
0x7895EA: lea     ebx, [ebx+0]
0x7895F0: mov     cl, [eax]
0x7895F2: add     eax, 1
0x7895F5: test    cl, cl
0x7895F7: jnz     short loc_7895F0
0x7895F9: sub     eax, esi
0x7895FB: push    eax; MaxCount
0x7895FC: push    edx; Src
0x7895FD: mov     ecx, offset unk_B2B614
0x789602: call    sub_414500
0x789607: pop     esi
0x789608: retn
