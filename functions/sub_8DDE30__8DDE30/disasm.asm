0x8DDE30: push    ebx
0x8DDE31: mov     ebx, [esp+4+arg_0]
0x8DDE35: push    esi
0x8DDE36: push    edi
0x8DDE37: mov     edi, ecx
0x8DDE39: mov     [ebx+54h], edi
0x8DDE3C: mov     ax, [edi+38h]
0x8DDE40: lea     esi, [edi+34h]
0x8DDE43: mov     [ebx+8Ch], ax
0x8DDE4A: mov     ecx, [esi+8]
0x8DDE4D: mov     eax, [esi+4]
0x8DDE50: and     ecx, 3FFFFFFFh
0x8DDE56: cmp     eax, ecx
0x8DDE58: jnz     short loc_8DDE65
0x8DDE5A: push    4
0x8DDE5C: push    esi
0x8DDE5D: call    sub_8A6EE0
0x8DDE62: add     esp, 8
0x8DDE65: mov     edx, [esi+4]
0x8DDE68: mov     eax, [esi]
0x8DDE6A: mov     [eax+edx*4], ebx
0x8DDE6D: inc     dword ptr [esi+4]
0x8DDE70: mov     ecx, [ebx+50h]
0x8DDE73: mov     edx, [ecx]
0x8DDE75: mov     esi, [edi]
0x8DDE77: call    dword ptr [edx+1Ch]
0x8DDE7A: push    eax
0x8DDE7B: mov     ecx, edi
0x8DDE7D: call    dword ptr [esi+14h]
0x8DDE80: pop     edi
0x8DDE81: pop     esi
0x8DDE82: pop     ebx
0x8DDE83: retn    4
