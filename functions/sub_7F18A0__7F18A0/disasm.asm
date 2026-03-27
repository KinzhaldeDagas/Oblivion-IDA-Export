0x7F18A0: push    ebx
0x7F18A1: mov     ebx, ecx
0x7F18A3: mov     ecx, [esp+4+Src]
0x7F18A7: test    ecx, ecx
0x7F18A9: jz      short loc_7F1901
0x7F18AB: mov     eax, [ebx+8]
0x7F18AE: test    eax, eax
0x7F18B0: jz      short loc_7F1901
0x7F18B2: push    esi
0x7F18B3: mov     esi, [esp+8+arg_4]
0x7F18B7: test    esi, esi
0x7F18B9: jz      short loc_7F1900
0x7F18BB: cmp     esi, 0C0h ; 'À'
0x7F18C1: jb      short loc_7F18C8
0x7F18C3: mov     esi, 0C0h ; 'À'
0x7F18C8: push    edi
0x7F18C9: lea     edi, ds:0[esi*4]
0x7F18D0: push    edi; Size
0x7F18D1: push    ecx; Src
0x7F18D2: push    eax; Dst
0x7F18D3: call    _memcpy
0x7F18D8: add     esp, 0Ch
0x7F18DB: cmp     esi, 0C0h ; 'À'
0x7F18E1: jnb     short loc_7F18FF
0x7F18E3: mov     ecx, [ebx+8]
0x7F18E6: mov     eax, 0C0h ; 'À'
0x7F18EB: sub     eax, esi
0x7F18ED: add     eax, eax
0x7F18EF: add     eax, eax
0x7F18F1: push    eax
0x7F18F2: add     ecx, edi
0x7F18F4: push    0
0x7F18F6: push    ecx
0x7F18F7: call    __memset
0x7F18FC: add     esp, 0Ch
0x7F18FF: pop     edi
0x7F1900: pop     esi
0x7F1901: pop     ebx
0x7F1902: retn    8
