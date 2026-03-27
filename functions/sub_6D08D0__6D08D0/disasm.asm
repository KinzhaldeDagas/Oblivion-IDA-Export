0x6D08D0: push    ebx
0x6D08D1: mov     ebx, [esp+4+arg_0]
0x6D08D5: push    esi
0x6D08D6: push    edi
0x6D08D7: push    ebx
0x6D08D8: mov     esi, ecx
0x6D08DA: call    sub_715E40
0x6D08DF: mov     eax, [esi]
0x6D08E1: mov     edx, [eax+74h]
0x6D08E4: mov     ecx, esi
0x6D08E6: xor     edi, edi
0x6D08E8: call    edx
0x6D08EA: test    ax, ax
0x6D08ED: jbe     short loc_6D0916
0x6D08EF: nop
0x6D08F0: mov     ecx, [esi+54h]
0x6D08F3: movzx   eax, di
0x6D08F6: mov     ecx, [ecx+eax*4]
0x6D08F9: test    ecx, ecx
0x6D08FB: jz      short loc_6D0905
0x6D08FD: mov     edx, [ecx]
0x6D08FF: mov     eax, [edx+38h]
0x6D0902: push    ebx
0x6D0903: call    eax
0x6D0905: mov     edx, [esi]
0x6D0907: mov     eax, [edx+74h]
0x6D090A: mov     ecx, esi
0x6D090C: add     edi, 1
0x6D090F: call    eax
0x6D0911: cmp     di, ax
0x6D0914: jb      short loc_6D08F0
0x6D0916: pop     edi
0x6D0917: pop     esi
0x6D0918: pop     ebx
0x6D0919: retn    4
