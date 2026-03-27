0x948550: mov     eax, [edi+4]
0x948553: push    ebx
0x948554: push    esi
0x948555: xor     esi, esi
0x948557: test    eax, eax
0x948559: mov     ebx, 4
0x94855E: jle     short loc_948578
0x948560: mov     eax, [edi]
0x948562: mov     ecx, [eax+esi*4]
0x948565: push    ecx
0x948566: call    sub_948BC0
0x94856B: add     ebx, eax
0x94856D: mov     eax, [edi+4]
0x948570: add     esp, 4
0x948573: inc     esi
0x948574: cmp     esi, eax
0x948576: jl      short loc_948560
0x948578: pop     esi
0x948579: mov     eax, ebx
0x94857B: pop     ebx
0x94857C: retn
