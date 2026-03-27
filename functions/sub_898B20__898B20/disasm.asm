0x898B20: push    esi
0x898B21: mov     esi, [ecx+0F8h]
0x898B27: xor     eax, eax
0x898B29: test    esi, esi
0x898B2B: push    edi
0x898B2C: jle     short loc_898B44
0x898B2E: mov     edx, [ecx+0F4h]
0x898B34: mov     edi, [esp+8+arg_0]
0x898B38: cmp     [edx], edi
0x898B3A: jz      short loc_898B59
0x898B3C: inc     eax
0x898B3D: add     edx, 4
0x898B40: cmp     eax, esi
0x898B42: jl      short loc_898B38
0x898B44: mov     edx, [ecx+0F4h]
0x898B4A: pop     edi
0x898B4B: or      eax, 0FFFFFFFFh
0x898B4E: pop     esi
0x898B4F: mov     dword ptr [edx+eax*4], 0
0x898B56: retn    4
0x898B59: mov     ecx, [ecx+0F4h]
0x898B5F: pop     edi
0x898B60: pop     esi
0x898B61: mov     dword ptr [ecx+eax*4], 0
0x898B68: retn    4
