0x8F5C80: push    edi
0x8F5C81: mov     edi, ecx
0x8F5C83: mov     eax, [edi+8]
0x8F5C86: test    eax, eax
0x8F5C88: jz      short loc_8F5CBF
0x8F5C8A: push    ebx
0x8F5C8B: mov     ebx, [edi+10h]
0x8F5C8E: push    esi
0x8F5C8F: xor     esi, esi
0x8F5C91: test    ebx, ebx
0x8F5C93: jle     short loc_8F5CB2
0x8F5C95: mov     ecx, [edi+8]
0x8F5C98: mov     eax, [ecx]
0x8F5C9A: mov     edx, ebx
0x8F5C9C: sub     edx, esi
0x8F5C9E: push    edx
0x8F5C9F: mov     edx, [edi+0Ch]
0x8F5CA2: add     edx, esi
0x8F5CA4: push    edx
0x8F5CA5: call    dword ptr [eax+0Ch]
0x8F5CA8: add     esi, eax
0x8F5CAA: test    eax, eax
0x8F5CAC: jz      short loc_8F5CB9
0x8F5CAE: cmp     esi, ebx
0x8F5CB0: jl      short loc_8F5C95
0x8F5CB2: mov     dword ptr [edi+10h], 0
0x8F5CB9: mov     eax, esi
0x8F5CBB: pop     esi
0x8F5CBC: pop     ebx
0x8F5CBD: pop     edi
0x8F5CBE: retn
0x8F5CBF: xor     eax, eax
0x8F5CC1: pop     edi
0x8F5CC2: retn
