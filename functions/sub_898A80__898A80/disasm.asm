0x898A80: push    esi
0x898A81: mov     esi, [ecx+110h]
0x898A87: xor     eax, eax
0x898A89: test    esi, esi
0x898A8B: push    edi
0x898A8C: jle     short loc_898AA4
0x898A8E: mov     edx, [ecx+10Ch]
0x898A94: mov     edi, [esp+8+arg_0]
0x898A98: cmp     [edx], edi
0x898A9A: jz      short loc_898AB9
0x898A9C: inc     eax
0x898A9D: add     edx, 4
0x898AA0: cmp     eax, esi
0x898AA2: jl      short loc_898A98
0x898AA4: mov     edx, [ecx+10Ch]
0x898AAA: pop     edi
0x898AAB: or      eax, 0FFFFFFFFh
0x898AAE: pop     esi
0x898AAF: mov     dword ptr [edx+eax*4], 0
0x898AB6: retn    4
0x898AB9: mov     ecx, [ecx+10Ch]
0x898ABF: pop     edi
0x898AC0: pop     esi
0x898AC1: mov     dword ptr [ecx+eax*4], 0
0x898AC8: retn    4
