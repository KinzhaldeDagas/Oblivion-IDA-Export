0x8992B0: mov     edx, [ecx+3Ch]
0x8992B3: xor     eax, eax
0x8992B5: dec     edx
0x8992B6: js      short locret_8992E8
0x8992B8: mov     ecx, [ecx+38h]
0x8992BB: push    ebx
0x8992BC: push    esi
0x8992BD: push    edi
0x8992BE: lea     esi, [ecx+edx*4]
0x8992C1: lea     edi, [edx+1]
0x8992C4: mov     edx, [esi]
0x8992C6: mov     ebx, [edx+14h]
0x8992C9: mov     ecx, [edx+18h]
0x8992CC: lea     ecx, [ebx+ecx*4+9Ch]
0x8992D3: add     ecx, [edx+10h]
0x8992D6: add     ecx, [edx+0Ch]
0x8992D9: cmp     eax, ecx
0x8992DB: jg      short loc_8992DF
0x8992DD: mov     eax, ecx
0x8992DF: sub     esi, 4
0x8992E2: dec     edi
0x8992E3: jnz     short loc_8992C4
0x8992E5: pop     edi
0x8992E6: pop     esi
0x8992E7: pop     ebx
0x8992E8: retn
