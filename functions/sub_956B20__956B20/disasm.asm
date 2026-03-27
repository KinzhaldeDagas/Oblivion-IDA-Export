0x956B20: mov     eax, [ecx]
0x956B22: lea     edx, [eax-1]
0x956B25: lea     eax, [edx+1]
0x956B28: cmp     eax, 4
0x956B2B: push    esi
0x956B2C: jl      loc_956BF4
0x956B32: mov     eax, [ecx+8]
0x956B35: lea     esi, [eax+edx*4]
0x956B38: mov     eax, [esi]
0x956B3A: test    eax, eax
0x956B3C: jz      loc_956C25
0x956B42: fld     dword ptr [eax+0Ch]
0x956B45: fcomp   [esp+4+arg_0]
0x956B49: fnstsw  ax
0x956B4B: test    ah, 5
0x956B4E: jp      loc_956C25
0x956B54: mov     eax, [esi]
0x956B56: mov     [ecx+0Ch], eax
0x956B59: mov     dword ptr [esi], 0
0x956B5F: dec     dword ptr [ecx]
0x956B61: mov     eax, [ecx+8]
0x956B64: lea     esi, [eax+edx*4-4]
0x956B68: mov     eax, [esi]
0x956B6A: test    eax, eax
0x956B6C: jz      loc_956C25
0x956B72: fld     dword ptr [eax+0Ch]
0x956B75: fcomp   [esp+4+arg_0]
0x956B79: fnstsw  ax
0x956B7B: test    ah, 5
0x956B7E: jp      loc_956C25
0x956B84: mov     eax, [esi]
0x956B86: mov     [ecx+0Ch], eax
0x956B89: mov     dword ptr [esi], 0
0x956B8F: dec     dword ptr [ecx]
0x956B91: mov     eax, [ecx+8]
0x956B94: lea     esi, [eax+edx*4-8]
0x956B98: mov     eax, [esi]
0x956B9A: test    eax, eax
0x956B9C: jz      loc_956C25
0x956BA2: fld     dword ptr [eax+0Ch]
0x956BA5: fcomp   [esp+4+arg_0]
0x956BA9: fnstsw  ax
0x956BAB: test    ah, 5
0x956BAE: jp      short loc_956C25
0x956BB0: mov     eax, [esi]
0x956BB2: mov     [ecx+0Ch], eax
0x956BB5: mov     dword ptr [esi], 0
0x956BBB: dec     dword ptr [ecx]
0x956BBD: mov     eax, [ecx+8]
0x956BC0: lea     esi, [eax+edx*4-0Ch]
0x956BC4: mov     eax, [esi]
0x956BC6: test    eax, eax
0x956BC8: jz      short loc_956C25
0x956BCA: fld     dword ptr [eax+0Ch]
0x956BCD: fcomp   [esp+4+arg_0]
0x956BD1: fnstsw  ax
0x956BD3: test    ah, 5
0x956BD6: jp      short loc_956C25
0x956BD8: mov     eax, [esi]
0x956BDA: mov     [ecx+0Ch], eax
0x956BDD: mov     dword ptr [esi], 0
0x956BE3: mov     eax, [ecx]
0x956BE5: dec     eax
0x956BE6: sub     edx, 4
0x956BE9: cmp     edx, 3
0x956BEC: mov     [ecx], eax
0x956BEE: jge     loc_956B32
0x956BF4: test    edx, edx
0x956BF6: jl      short loc_956C25
0x956BF8: mov     eax, [ecx+8]
0x956BFB: lea     esi, [eax+edx*4]
0x956BFE: mov     eax, [esi]
0x956C00: test    eax, eax
0x956C02: jz      short loc_956C25
0x956C04: fld     dword ptr [eax+0Ch]
0x956C07: fcomp   [esp+4+arg_0]
0x956C0B: fnstsw  ax
0x956C0D: test    ah, 5
0x956C10: jp      short loc_956C25
0x956C12: mov     eax, [esi]
0x956C14: mov     [ecx+0Ch], eax
0x956C17: mov     dword ptr [esi], 0
0x956C1D: mov     esi, [ecx]
0x956C1F: dec     esi
0x956C20: dec     edx
0x956C21: mov     [ecx], esi
0x956C23: jns     short loc_956BF8
0x956C25: pop     esi
0x956C26: retn    4
