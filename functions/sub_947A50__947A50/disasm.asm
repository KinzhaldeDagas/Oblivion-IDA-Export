0x947A50: push    ebx
0x947A51: push    ebp
0x947A52: push    esi
0x947A53: mov     esi, ecx
0x947A55: mov     ecx, [esi+18h]; lpCriticalSection
0x947A58: push    edi
0x947A59: call    sub_8A7720
0x947A5E: mov     eax, [esi+10h]
0x947A61: xor     ebx, ebx
0x947A63: test    eax, eax
0x947A65: jle     short loc_947A8F
0x947A67: mov     ebp, [esp+10h+arg_0]
0x947A6B: xor     edi, edi
0x947A6D: lea     ecx, [ecx+0]
0x947A70: mov     eax, [esi+0Ch]
0x947A73: mov     eax, [edi+eax]
0x947A76: push    ebp
0x947A77: push    eax
0x947A78: call    sub_8B1770
0x947A7D: add     esp, 8
0x947A80: test    eax, eax
0x947A82: jz      short loc_947AA3
0x947A84: mov     eax, [esi+10h]
0x947A87: inc     ebx
0x947A88: add     edi, 0Ch
0x947A8B: cmp     ebx, eax
0x947A8D: jl      short loc_947A70
0x947A8F: mov     edx, [esi+18h]
0x947A92: push    edx; lpCriticalSection
0x947A93: call    dword ptr ds:0A28074h
0x947A99: pop     edi
0x947A9A: pop     esi
0x947A9B: pop     ebp
0x947A9C: or      eax, 0FFFFFFFFh
0x947A9F: pop     ebx
0x947AA0: retn    4
0x947AA3: mov     ecx, [esi+18h]
0x947AA6: push    ecx; lpCriticalSection
0x947AA7: call    dword ptr ds:0A28074h
0x947AAD: pop     edi
0x947AAE: pop     esi
0x947AAF: pop     ebp
0x947AB0: mov     eax, ebx
0x947AB2: pop     ebx
0x947AB3: retn    4
