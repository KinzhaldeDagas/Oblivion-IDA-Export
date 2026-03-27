0x91B550: push    edi
0x91B551: mov     edi, [esp+4+arg_0]
0x91B555: mov     eax, [edi+14h]
0x91B558: test    eax, eax
0x91B55A: jz      short loc_91B5DA
0x91B55C: mov     edx, [ecx+0Ch]
0x91B55F: xor     eax, eax
0x91B561: test    edx, edx
0x91B563: push    ebx
0x91B564: mov     ebx, [edi+8]
0x91B567: jle     short loc_91B5D9
0x91B569: push    esi
0x91B56A: mov     esi, [ecx+8]
0x91B56D: push    ebp
0x91B56E: mov     edi, edi
0x91B570: mov     ebp, [esi]
0x91B572: cmp     [ebp+0], ebx
0x91B575: jz      short loc_91B586
0x91B577: inc     eax
0x91B578: add     esi, 4
0x91B57B: cmp     eax, edx
0x91B57D: jl      short loc_91B570
0x91B57F: pop     ebp
0x91B580: pop     esi
0x91B581: pop     ebx
0x91B582: pop     edi
0x91B583: retn    4
0x91B586: test    eax, eax
0x91B588: jl      short loc_91B5D7
0x91B58A: mov     edx, [ecx+8]
0x91B58D: mov     esi, [edx+eax*4]
0x91B590: mov     edx, ds:0BA842Ch
0x91B596: mov     ecx, [ecx-10h]
0x91B599: mov     eax, [ecx]
0x91B59B: push    edx
0x91B59C: add     edi, 17h
0x91B59F: push    edi
0x91B5A0: call    dword ptr [eax+10h]
0x91B5A3: mov     ecx, [esi+8]
0x91B5A6: xor     eax, eax
0x91B5A8: test    ecx, ecx
0x91B5AA: jle     short loc_91B5D7
0x91B5AC: mov     edx, [esi+4]
0x91B5AF: nop
0x91B5B0: cmp     [edx], edi
0x91B5B2: jz      short loc_91B5C3
0x91B5B4: inc     eax
0x91B5B5: add     edx, 4
0x91B5B8: cmp     eax, ecx
0x91B5BA: jl      short loc_91B5B0
0x91B5BC: pop     ebp
0x91B5BD: pop     esi
0x91B5BE: pop     ebx
0x91B5BF: pop     edi
0x91B5C0: retn    4
0x91B5C3: test    eax, eax
0x91B5C5: jl      short loc_91B5D7
0x91B5C7: mov     ecx, [esi+8]
0x91B5CA: dec     ecx
0x91B5CB: mov     [esi+8], ecx
0x91B5CE: mov     esi, [esi+4]
0x91B5D1: mov     ecx, [esi+ecx*4]
0x91B5D4: mov     [esi+eax*4], ecx
0x91B5D7: pop     ebp
0x91B5D8: pop     esi
0x91B5D9: pop     ebx
0x91B5DA: pop     edi
0x91B5DB: retn    4
