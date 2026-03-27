0x8E0C30: mov     edx, [esp+arg_4]
0x8E0C34: mov     eax, [esp+arg_0]
0x8E0C38: mov     ecx, edx
0x8E0C3A: push    esi
0x8E0C3B: sub     ecx, eax
0x8E0C3D: mov     esi, ecx
0x8E0C3F: and     esi, 0FFFFFFFCh
0x8E0C42: cmp     esi, 40h ; '@'
0x8E0C45: mov     si, [esp+4+arg_8]
0x8E0C4A: jle     short loc_8E0C71
0x8E0C4C: push    edi
0x8E0C4D: lea     ecx, [ecx+0]
0x8E0C50: sar     ecx, 3
0x8E0C53: cmp     [eax+ecx*4], si
0x8E0C57: lea     ecx, [eax+ecx*4]
0x8E0C5A: jnb     short loc_8E0C60
0x8E0C5C: mov     eax, ecx
0x8E0C5E: jmp     short loc_8E0C62
0x8E0C60: mov     edx, ecx
0x8E0C62: mov     ecx, edx
0x8E0C64: sub     ecx, eax
0x8E0C66: mov     edi, ecx
0x8E0C68: and     edi, 0FFFFFFFCh
0x8E0C6B: cmp     edi, 40h ; '@'
0x8E0C6E: jg      short loc_8E0C50
0x8E0C70: pop     edi
0x8E0C71: cmp     [eax], si
0x8E0C74: jnb     short loc_8E0C7E
0x8E0C76: add     eax, 4
0x8E0C79: cmp     [eax], si
0x8E0C7C: jb      short loc_8E0C76
0x8E0C7E: pop     esi
0x8E0C7F: retn    0Ch
