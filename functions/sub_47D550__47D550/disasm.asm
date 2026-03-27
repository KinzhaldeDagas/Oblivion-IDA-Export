0x47D550: push    esi
0x47D551: mov     esi, [esp+4+arg_0]
0x47D555: mov     eax, esi
0x47D557: lea     edx, [eax+1]
0x47D55A: lea     ebx, [ebx+0]
0x47D560: mov     cl, [eax]
0x47D562: add     eax, 1
0x47D565: test    cl, cl
0x47D567: jnz     short loc_47D560
0x47D569: sub     eax, edx
0x47D56B: mov     edx, eax
0x47D56D: jz      short loc_47D5A7
0x47D56F: mov     al, [esi]
0x47D571: cmp     al, 30h ; '0'
0x47D573: jl      short loc_47D579
0x47D575: cmp     al, 39h ; '9'
0x47D577: jle     short loc_47D57D
0x47D579: cmp     al, 2Dh ; '-'
0x47D57B: jnz     short loc_47D5A7
0x47D57D: cmp     edx, 1
0x47D580: jnz     short loc_47D586
0x47D582: cmp     al, 2Dh ; '-'
0x47D584: jz      short loc_47D5A7
0x47D586: mov     ecx, 1
0x47D58B: cmp     edx, ecx
0x47D58D: jle     short loc_47D5A0
0x47D58F: nop
0x47D590: mov     al, [ecx+esi]
0x47D593: sub     al, 30h ; '0'
0x47D595: cmp     al, 9
0x47D597: ja      short loc_47D5A7
0x47D599: add     ecx, 1
0x47D59C: cmp     ecx, edx
0x47D59E: jl      short loc_47D590
0x47D5A0: mov     eax, 1
0x47D5A5: pop     esi
0x47D5A6: retn
0x47D5A7: xor     eax, eax
0x47D5A9: pop     esi
0x47D5AA: retn
