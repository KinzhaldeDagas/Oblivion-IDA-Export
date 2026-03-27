0x9031C0: push    esi
0x9031C1: push    edi
0x9031C2: mov     edi, ecx
0x9031C4: mov     eax, [edi+10h]
0x9031C7: xor     esi, esi
0x9031C9: test    eax, eax
0x9031CB: jle     short loc_9031E3
0x9031CD: lea     ecx, [ecx+0]
0x9031D0: mov     eax, [edi+0Ch]
0x9031D3: mov     ecx, [eax+esi*4]
0x9031D6: mov     edx, [ecx]
0x9031D8: call    dword ptr [edx+18h]
0x9031DB: mov     eax, [edi+10h]
0x9031DE: inc     esi
0x9031DF: cmp     esi, eax
0x9031E1: jl      short loc_9031D0
0x9031E3: mov     eax, [edi]
0x9031E5: push    1
0x9031E7: mov     ecx, edi
0x9031E9: call    dword ptr [eax]
0x9031EB: pop     edi
0x9031EC: pop     esi
0x9031ED: retn
