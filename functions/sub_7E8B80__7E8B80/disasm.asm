0x7E8B80: push    ebx
0x7E8B81: push    esi
0x7E8B82: mov     esi, ecx
0x7E8B84: push    edi
0x7E8B85: lea     edi, [esi+7Ch]
0x7E8B88: mov     ebx, 3
0x7E8B8D: lea     ecx, [ecx+0]
0x7E8B90: mov     ecx, [edi]
0x7E8B92: mov     eax, [esi]
0x7E8B94: mov     edx, [eax+94h]
0x7E8B9A: push    ecx
0x7E8B9B: mov     ecx, esi
0x7E8B9D: call    edx
0x7E8B9F: add     edi, 4
0x7E8BA2: sub     ebx, 1
0x7E8BA5: jnz     short loc_7E8B90
0x7E8BA7: pop     edi
0x7E8BA8: pop     esi
0x7E8BA9: pop     ebx
0x7E8BAA: retn
