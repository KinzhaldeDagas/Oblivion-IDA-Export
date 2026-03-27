0x719D40: mov     edx, [ecx+4Ch]
0x719D43: push    ebx
0x719D44: mov     ebx, [ecx+48h]
0x719D47: mov     ecx, [esp+4+arg_0]
0x719D4B: push    esi
0x719D4C: movzx   esi, word ptr [ebx]
0x719D4F: lea     eax, [esi-2]
0x719D52: movzx   eax, ax
0x719D55: push    edi
0x719D56: xor     edi, edi
0x719D58: cmp     cx, ax
0x719D5B: jb      short loc_719D7D
0x719D5D: movzx   esi, si
0x719D60: sub     ecx, eax
0x719D62: movzx   eax, si
0x719D65: lea     edx, [edx+eax*2]
0x719D68: add     edi, 1
0x719D6B: movzx   eax, di
0x719D6E: movzx   esi, word ptr [ebx+eax*2]
0x719D72: lea     eax, [esi-2]
0x719D75: movzx   eax, ax
0x719D78: cmp     cx, ax
0x719D7B: jnb     short loc_719D60
0x719D7D: test    cl, 1
0x719D80: mov     esi, [esp+0Ch+arg_4]
0x719D84: movzx   eax, cx
0x719D87: jz      short loc_719D97
0x719D89: movzx   ecx, word ptr [edx+eax*2+2]
0x719D8E: mov     [esi], cx
0x719D91: movzx   ecx, word ptr [edx+eax*2]
0x719D95: jmp     short loc_719DA3
0x719D97: movzx   ecx, word ptr [edx+eax*2]
0x719D9B: mov     [esi], cx
0x719D9E: movzx   ecx, word ptr [edx+eax*2+2]
0x719DA3: mov     esi, [esp+0Ch+arg_8]
0x719DA7: mov     [esi], cx
0x719DAA: mov     dx, [edx+eax*2+4]
0x719DAF: mov     eax, [esp+0Ch+arg_C]
0x719DB3: pop     edi
0x719DB4: pop     esi
0x719DB5: mov     [eax], dx
0x719DB8: pop     ebx
0x719DB9: retn    10h
