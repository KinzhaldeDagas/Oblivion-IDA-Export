0x6F61A0: push    ebx
0x6F61A1: mov     ebx, [esp+4+arg_0]
0x6F61A5: mov     eax, [ebx+4]
0x6F61A8: push    esi
0x6F61A9: mov     esi, ecx
0x6F61AB: xor     ecx, ecx
0x6F61AD: cmp     eax, ecx
0x6F61AF: push    edi
0x6F61B0: jnz     short loc_6F61B6
0x6F61B2: xor     edi, edi
0x6F61B4: jmp     short loc_6F61BB
0x6F61B6: mov     edi, [ebx+8]
0x6F61B9: sub     edi, eax
0x6F61BB: cmp     edi, ecx
0x6F61BD: mov     [esi+4], ecx
0x6F61C0: mov     [esi+8], ecx
0x6F61C3: mov     [esi+0Ch], ecx
0x6F61C6: jz      short loc_6F621C
0x6F61C8: cmp     edi, 0FFFFFFFFh
0x6F61CB: jbe     short loc_6F61D2
0x6F61CD: call    sub_6F1780
0x6F61D2: push    ecx
0x6F61D3: push    edi; char *
0x6F61D4: call    sub_412E70
0x6F61D9: mov     [esi+4], eax
0x6F61DC: mov     [esi+8], eax
0x6F61DF: add     eax, edi
0x6F61E1: mov     [esi+0Ch], eax
0x6F61E4: mov     edi, [ebx+8]
0x6F61E7: add     esp, 8
0x6F61EA: cmp     [ebx+4], edi
0x6F61ED: jbe     short loc_6F61F4
0x6F61EF: call    __invalid_parameter_noinfo
0x6F61F4: push    ebp; MaxCount
0x6F61F5: mov     ebp, [ebx+4]
0x6F61F8: cmp     ebp, [ebx+8]
0x6F61FB: jbe     short loc_6F6202
0x6F61FD: call    __invalid_parameter_noinfo
0x6F6202: mov     eax, [esi+4]
0x6F6205: sub     edi, ebp
0x6F6207: lea     ebx, [edi+eax]
0x6F620A: jz      short loc_6F6218
0x6F620C: push    edi; Src
0x6F620D: push    ebp; Src
0x6F620E: push    edi; DstSize
0x6F620F: push    eax; Dst
0x6F6210: call    _memmove_s
0x6F6215: add     esp, 10h
0x6F6218: mov     [esi+8], ebx
0x6F621B: pop     ebp
0x6F621C: pop     edi
0x6F621D: mov     eax, esi
0x6F621F: pop     esi
0x6F6220: pop     ebx
0x6F6221: retn    4
