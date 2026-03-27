0x8CB070: push    ebx
0x8CB071: mov     ebx, [esp+4+arg_0]
0x8CB075: push    esi
0x8CB076: push    edi
0x8CB077: mov     edi, ecx
0x8CB079: mov     ecx, [edi+60h]
0x8CB07C: lea     esi, [edi+5Ch]
0x8CB07F: xor     eax, eax
0x8CB081: test    ecx, ecx
0x8CB083: jle     short loc_8CB099
0x8CB085: mov     edx, [esi]
0x8CB087: cmp     [edx], ebx
0x8CB089: jz      short loc_8CB095
0x8CB08B: inc     eax
0x8CB08C: add     edx, 4
0x8CB08F: cmp     eax, ecx
0x8CB091: jl      short loc_8CB087
0x8CB093: jmp     short loc_8CB099
0x8CB095: test    eax, eax
0x8CB097: jge     short loc_8CB0FB
0x8CB099: test    edi, edi
0x8CB09B: jz      short loc_8CB0A2
0x8CB09D: lea     eax, [edi+48h]
0x8CB0A0: jmp     short loc_8CB0A4
0x8CB0A2: xor     eax, eax
0x8CB0A4: push    eax
0x8CB0A5: mov     ecx, ebx
0x8CB0A7: call    sub_899DA0
0x8CB0AC: mov     eax, [esi+8]
0x8CB0AF: mov     ecx, [esi+4]
0x8CB0B2: and     eax, 3FFFFFFFh
0x8CB0B7: cmp     ecx, eax
0x8CB0B9: jnz     short loc_8CB0C6
0x8CB0BB: push    4
0x8CB0BD: push    esi
0x8CB0BE: call    sub_8A6EE0
0x8CB0C3: add     esp, 8
0x8CB0C6: mov     ecx, [esi+4]
0x8CB0C9: mov     edx, [esi]
0x8CB0CB: mov     [edx+ecx*4], ebx
0x8CB0CE: inc     dword ptr [esi+4]
0x8CB0D1: mov     eax, [edi+6Ch]
0x8CB0D4: xor     esi, esi
0x8CB0D6: test    eax, eax
0x8CB0D8: jle     short loc_8CB0F3
0x8CB0DA: lea     ebx, [ebx+0]
0x8CB0E0: mov     eax, [edi+68h]
0x8CB0E3: mov     ecx, [eax+esi*4]
0x8CB0E6: mov     edx, [ecx]
0x8CB0E8: push    ebx
0x8CB0E9: call    dword ptr [edx]
0x8CB0EB: mov     eax, [edi+6Ch]
0x8CB0EE: inc     esi
0x8CB0EF: cmp     esi, eax
0x8CB0F1: jl      short loc_8CB0E0
0x8CB0F3: push    ebx
0x8CB0F4: mov     ecx, edi
0x8CB0F6: call    sub_8CAD40
0x8CB0FB: pop     edi
0x8CB0FC: pop     esi
0x8CB0FD: pop     ebx
0x8CB0FE: retn    4
