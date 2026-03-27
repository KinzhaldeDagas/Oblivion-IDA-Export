0x8DF540: mov     edx, [ecx+48h]
0x8DF543: push    esi
0x8DF544: xor     eax, eax
0x8DF546: test    edx, edx
0x8DF548: push    edi
0x8DF549: jle     short loc_8DF560
0x8DF54B: mov     edi, [ecx+44h]
0x8DF54E: mov     esi, edi
0x8DF550: cmp     dword ptr [esi], 1140h
0x8DF556: jz      short loc_8DF5A3
0x8DF558: inc     eax
0x8DF559: add     esi, 10h
0x8DF55C: cmp     eax, edx
0x8DF55E: jl      short loc_8DF550
0x8DF560: mov     eax, [ecx+4Ch]
0x8DF563: lea     esi, [ecx+44h]
0x8DF566: mov     ecx, [esi+4]
0x8DF569: and     eax, 3FFFFFFFh
0x8DF56E: cmp     ecx, eax
0x8DF570: jnz     short loc_8DF57D
0x8DF572: push    10h
0x8DF574: push    esi
0x8DF575: call    sub_8A6EE0
0x8DF57A: add     esp, 8
0x8DF57D: mov     ecx, [esi+4]
0x8DF580: mov     edx, [esi]
0x8DF582: mov     eax, ecx
0x8DF584: shl     eax, 4
0x8DF587: add     eax, edx
0x8DF589: inc     ecx
0x8DF58A: add     eax, 8
0x8DF58D: mov     [esi+4], ecx
0x8DF590: mov     dword ptr [eax-8], 1140h
0x8DF597: jz      short loc_8DF5AD
0x8DF599: pop     edi
0x8DF59A: pop     esi
0x8DF59B: mov     byte ptr [eax], 0FDh ; 'ý'
0x8DF59E: mov     byte ptr [eax+1], 0
0x8DF5A2: retn
0x8DF5A3: shl     eax, 4
0x8DF5A6: lea     eax, [eax+edi+8]
0x8DF5AA: pop     edi
0x8DF5AB: pop     esi
0x8DF5AC: retn
0x8DF5AD: pop     edi
0x8DF5AE: pop     esi
0x8DF5AF: xor     eax, eax
0x8DF5B1: retn
