0x8E0E30: mov     eax, [esp+arg_0]
0x8E0E34: mov     edx, ecx
0x8E0E36: mov     ecx, [edx]
0x8E0E38: push    esi
0x8E0E39: mov     esi, [esp+4+arg_4]
0x8E0E3D: lea     eax, [ecx+eax*4]
0x8E0E40: lea     ecx, [ecx+esi*4-4]
0x8E0E44: cmp     eax, ecx
0x8E0E46: push    edi
0x8E0E47: jnb     short loc_8E0E5E
0x8E0E49: sub     ecx, eax
0x8E0E4B: dec     ecx
0x8E0E4C: shr     ecx, 2
0x8E0E4F: inc     ecx
0x8E0E50: push    ebx
0x8E0E51: mov     ebx, ecx
0x8E0E53: lea     esi, [eax+4]
0x8E0E56: mov     edi, eax
0x8E0E58: lea     eax, [eax+ebx*4]
0x8E0E5B: rep movsd
0x8E0E5D: pop     ebx
0x8E0E5E: mov     ecx, [edx+4]
0x8E0E61: lea     esi, [ecx-2]
0x8E0E64: mov     ecx, [edx]
0x8E0E66: lea     ecx, [ecx+esi*4]
0x8E0E69: cmp     eax, ecx
0x8E0E6B: mov     [edx+4], esi
0x8E0E6E: jnb     short loc_8E0E7E
0x8E0E70: sub     ecx, eax
0x8E0E72: dec     ecx
0x8E0E73: shr     ecx, 2
0x8E0E76: lea     esi, [eax+8]
0x8E0E79: inc     ecx
0x8E0E7A: mov     edi, eax
0x8E0E7C: rep movsd
0x8E0E7E: pop     edi
0x8E0E7F: pop     esi
0x8E0E80: retn    8
