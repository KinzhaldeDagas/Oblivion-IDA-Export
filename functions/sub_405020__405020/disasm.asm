0x405020: movzx   eax, word ptr [ecx+0Ah]
0x405024: push    esi
0x405025: mov     esi, [esp+4+arg_0]
0x405029: cmp     esi, eax
0x40502B: jb      short loc_405033
0x40502D: xor     eax, eax
0x40502F: pop     esi
0x405030: retn    4
0x405033: mov     edx, [ecx+4]
0x405036: mov     eax, [edx+esi*4]
0x405039: test    eax, eax
0x40503B: lea     edx, [edx+esi*4]
0x40503E: mov     dword ptr [edx], 0
0x405044: jz      short loc_40504C
0x405046: add     word ptr [ecx+0Ch], 0FFFFh
0x40504C: movzx   edx, word ptr [ecx+0Ah]
0x405050: push    edi
0x405051: movzx   edi, dx
0x405054: sub     edi, 1
0x405057: cmp     esi, edi
0x405059: pop     edi
0x40505A: jnz     short loc_405063
0x40505C: add     edx, 0FFFFFFFFh
0x40505F: mov     [ecx+0Ah], dx
0x405063: pop     esi
0x405064: retn    4
