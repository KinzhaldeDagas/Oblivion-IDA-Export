0x8ACD60: mov     eax, [ecx+88h]
0x8ACD66: push    esi
0x8ACD67: lea     esi, [ecx+80h]
0x8ACD6D: mov     ecx, [esi+4]
0x8ACD70: and     eax, 3FFFFFFFh
0x8ACD75: cmp     ecx, eax
0x8ACD77: jnz     short loc_8ACD84
0x8ACD79: push    4
0x8ACD7B: push    esi
0x8ACD7C: call    sub_8A6EE0
0x8ACD81: add     esp, 8
0x8ACD84: mov     ecx, [esi+4]
0x8ACD87: mov     edx, [esi]
0x8ACD89: mov     eax, [esp+4+arg_0]
0x8ACD8D: mov     [edx+ecx*4], eax
0x8ACD90: inc     dword ptr [esi+4]
0x8ACD93: pop     esi
0x8ACD94: retn    4
