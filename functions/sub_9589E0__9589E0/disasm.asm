0x9589E0: mov     edx, [ecx+10h]
0x9589E3: xor     eax, eax
0x9589E5: test    edx, edx
0x9589E7: push    esi
0x9589E8: jle     short loc_958A01
0x9589EA: lea     edx, [ecx+0FB4h]
0x9589F0: mov     dword ptr [edx], 0
0x9589F6: mov     esi, [ecx+10h]
0x9589F9: inc     eax
0x9589FA: add     edx, 50h ; 'P'
0x9589FD: cmp     eax, esi
0x9589FF: jl      short loc_9589F0
0x958A01: mov     edx, [ecx+8]
0x958A04: xor     eax, eax
0x958A06: test    edx, edx
0x958A08: jle     short loc_958A21
0x958A0A: lea     edx, [ecx+50h]
0x958A0D: lea     ecx, [ecx+0]
0x958A10: mov     dword ptr [edx], 0
0x958A16: mov     esi, [ecx+8]
0x958A19: inc     eax
0x958A1A: add     edx, 40h ; '@'
0x958A1D: cmp     eax, esi
0x958A1F: jl      short loc_958A10
0x958A21: pop     esi
0x958A22: retn
