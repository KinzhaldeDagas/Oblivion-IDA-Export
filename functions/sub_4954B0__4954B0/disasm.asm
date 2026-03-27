0x4954B0: push    esi
0x4954B1: mov     esi, [esp+4+arg_0]
0x4954B5: cmp     esi, [ecx+0D0h]
0x4954BB: jb      short loc_4954C3
0x4954BD: xor     eax, eax
0x4954BF: pop     esi
0x4954C0: retn    4
0x4954C3: mov     ecx, [ecx+0C8h]
0x4954C9: xor     edx, edx
0x4954CB: test    ecx, ecx
0x4954CD: push    edi
0x4954CE: jz      short loc_4954E4
0x4954D0: lea     eax, [ecx+8]
0x4954D3: mov     ecx, [ecx]
0x4954D5: mov     eax, [eax]
0x4954D7: mov     edi, edx
0x4954D9: add     edx, 1
0x4954DC: cmp     edi, esi
0x4954DE: jz      short loc_4954E6
0x4954E0: test    ecx, ecx
0x4954E2: jnz     short loc_4954D0
0x4954E4: xor     eax, eax
0x4954E6: pop     edi
0x4954E7: pop     esi
0x4954E8: retn    4
