0x909620: push    esi
0x909621: push    edi
0x909622: mov     edi, ecx
0x909624: mov     eax, [edi+10h]
0x909627: xor     esi, esi
0x909629: test    eax, eax
0x90962B: jle     short loc_909644
0x90962D: lea     ecx, [ecx+0]
0x909630: mov     eax, [edi+0Ch]
0x909633: mov     ecx, [eax+esi*8+4]
0x909637: mov     edx, [ecx]
0x909639: call    dword ptr [edx+18h]
0x90963C: mov     eax, [edi+10h]
0x90963F: inc     esi
0x909640: cmp     esi, eax
0x909642: jl      short loc_909630
0x909644: mov     eax, [edi]
0x909646: push    1
0x909648: mov     ecx, edi
0x90964A: call    dword ptr [eax]
0x90964C: pop     edi
0x90964D: pop     esi
0x90964E: retn
