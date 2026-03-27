0x913810: push    esi
0x913811: mov     esi, [ecx+4]
0x913814: mov     eax, [esi+24h]
0x913817: mov     ecx, [esi+20h]
0x91381A: add     esi, 1Ch
0x91381D: and     eax, 3FFFFFFFh
0x913822: cmp     ecx, eax
0x913824: jnz     short loc_913831
0x913826: push    4
0x913828: push    esi
0x913829: call    sub_8A6EE0
0x91382E: add     esp, 8
0x913831: mov     ecx, [esi+4]
0x913834: mov     edx, [esi]
0x913836: mov     dword ptr [edx+ecx*4], 0
0x91383D: inc     dword ptr [esi+4]
0x913840: pop     esi
0x913841: retn
