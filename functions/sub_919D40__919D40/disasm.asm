0x919D40: push    ebx
0x919D41: mov     ebx, ecx
0x919D43: mov     eax, [ebx+1Ch]
0x919D46: test    eax, eax
0x919D48: jz      short loc_919D79
0x919D4A: push    esi
0x919D4B: push    edi
0x919D4C: mov     edi, [eax+60h]
0x919D4F: xor     esi, esi
0x919D51: test    edi, edi
0x919D53: jle     short loc_919D77
0x919D55: push    ebp
0x919D56: lea     ebp, [ebx-8]
0x919D59: lea     esp, [esp+0]
0x919D60: mov     eax, [ebx+1Ch]
0x919D63: mov     ecx, [eax+5Ch]
0x919D66: mov     edx, [ecx+esi*4]
0x919D69: push    edx
0x919D6A: mov     ecx, ebp
0x919D6C: call    sub_91C620
0x919D71: inc     esi
0x919D72: cmp     esi, edi
0x919D74: jl      short loc_919D60
0x919D76: pop     ebp
0x919D77: pop     edi
0x919D78: pop     esi
0x919D79: pop     ebx
0x919D7A: retn
