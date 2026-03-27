0x94D510: push    ebx
0x94D511: push    esi
0x94D512: push    edi
0x94D513: mov     esi, ecx
0x94D515: mov     ecx, ds:0BA7D98h
0x94D51B: mov     eax, [ecx]
0x94D51D: push    24h ; '$'
0x94D51F: push    18h
0x94D521: call    dword ptr [eax+10h]
0x94D524: xor     ebx, ebx
0x94D526: cmp     eax, ebx
0x94D528: jz      short loc_94D542
0x94D52A: mov     ecx, 80000000h
0x94D52F: mov     [eax], ebx
0x94D531: mov     [eax+4], ebx
0x94D534: mov     [eax+8], ecx
0x94D537: mov     [eax+0Ch], ebx
0x94D53A: mov     [eax+10h], ebx
0x94D53D: mov     [eax+14h], ecx
0x94D540: jmp     short loc_94D544
0x94D542: xor     eax, eax
0x94D544: push    eax
0x94D545: mov     ecx, esi
0x94D547: mov     [esi+50h], eax
0x94D54A: call    sub_94D2E0
0x94D54F: mov     edi, [esi+50h]
0x94D552: mov     ecx, [edi+8]
0x94D555: mov     eax, [edi+4]
0x94D558: and     ecx, 3FFFFFFFh
0x94D55E: cmp     eax, ecx
0x94D560: jnz     short loc_94D56D
0x94D562: push    10h
0x94D564: push    edi
0x94D565: call    sub_8A6EE0
0x94D56A: add     esp, 8
0x94D56D: mov     ecx, [edi+4]
0x94D570: mov     edx, [edi]
0x94D572: mov     eax, ecx
0x94D574: shl     eax, 4
0x94D577: add     eax, edx
0x94D579: inc     ecx
0x94D57A: mov     [edi+4], ecx
0x94D57D: movaps  xmm0, xmmword ptr [esi+80h]
0x94D584: movaps  xmmword ptr [eax], xmm0
0x94D587: mov     edx, [esi+50h]
0x94D58A: mov     edi, [edx+4]
0x94D58D: mov     eax, [esi+9Ch]
0x94D593: dec     edi
0x94D594: xor     ecx, ecx
0x94D596: cmp     eax, ebx
0x94D598: jle     short loc_94D5C2
0x94D59A: lea     ebx, [ebx+0]
0x94D5A0: mov     eax, [esi+50h]
0x94D5A3: mov     eax, [eax+0Ch]
0x94D5A6: add     eax, ebx
0x94D5A8: lea     edx, [ecx+1]
0x94D5AB: mov     [eax+8], ecx
0x94D5AE: mov     [eax], edi
0x94D5B0: mov     [eax+4], edx
0x94D5B3: mov     eax, [esi+9Ch]
0x94D5B9: mov     ecx, edx
0x94D5BB: add     ebx, 0Ch
0x94D5BE: cmp     ecx, eax
0x94D5C0: jl      short loc_94D5A0
0x94D5C2: pop     edi
0x94D5C3: pop     esi
0x94D5C4: pop     ebx
0x94D5C5: retn
