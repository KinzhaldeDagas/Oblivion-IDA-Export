0x5304C0: push    esi
0x5304C1: mov     esi, [esp+4+arg_0]
0x5304C5: cmp     esi, [ecx+0Ch]
0x5304C8: jb      short loc_5304D0
0x5304CA: xor     eax, eax
0x5304CC: pop     esi
0x5304CD: retn    4
0x5304D0: mov     eax, [ecx+4]
0x5304D3: lea     edx, [eax+esi*4]
0x5304D6: mov     eax, [edx]
0x5304D8: test    eax, eax
0x5304DA: mov     dword ptr [edx], 0
0x5304E0: jz      short loc_5304E6
0x5304E2: add     dword ptr [ecx+10h], 0FFFFFFFFh
0x5304E6: mov     edx, [ecx+0Ch]
0x5304E9: add     edx, 0FFFFFFFFh
0x5304EC: cmp     esi, edx
0x5304EE: jnz     short loc_5304F3
0x5304F0: mov     [ecx+0Ch], edx
0x5304F3: pop     esi
0x5304F4: retn    4
