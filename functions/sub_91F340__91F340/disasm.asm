0x91F340: push    ebx
0x91F341: mov     ebx, [esp+4+arg_0]
0x91F345: push    esi
0x91F346: mov     esi, [esp+8+arg_4]
0x91F34A: push    edi
0x91F34B: mov     edi, ecx
0x91F34D: mov     [edi], ebx
0x91F34F: mov     eax, [ebx+8]
0x91F352: and     eax, 3FFFFFFFh
0x91F357: cmp     eax, esi
0x91F359: jge     short loc_91F36F
0x91F35B: add     eax, eax
0x91F35D: cmp     esi, eax
0x91F35F: jl      short loc_91F363
0x91F361: mov     eax, esi
0x91F363: push    4
0x91F365: push    eax
0x91F366: push    ebx
0x91F367: call    sub_8A6E40
0x91F36C: add     esp, 0Ch
0x91F36F: xor     eax, eax
0x91F371: test    esi, esi
0x91F373: mov     [ebx+4], esi
0x91F376: jle     short loc_91F390
0x91F378: jmp     short loc_91F380
0x91F37A: align 10h
0x91F380: mov     ecx, [edi]
0x91F382: mov     edx, [ecx]
0x91F384: mov     dword ptr [edx+eax*4], 0FFFFFFFFh
0x91F38B: inc     eax
0x91F38C: cmp     eax, esi
0x91F38E: jl      short loc_91F380
0x91F390: mov     eax, edi
0x91F392: pop     edi
0x91F393: pop     esi
0x91F394: pop     ebx
0x91F395: retn    8
