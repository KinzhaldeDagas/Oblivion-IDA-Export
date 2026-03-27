0x4C5AF0: mov     eax, [esp+arg_0]
0x4C5AF4: sub     esp, 50h
0x4C5AF7: push    esi
0x4C5AF8: push    0
0x4C5AFA: mov     esi, ecx
0x4C5AFC: push    eax
0x4C5AFD: lea     ecx, [esp+5Ch+var_50]
0x4C5B01: push    ecx
0x4C5B02: mov     ecx, esi
0x4C5B04: call    sub_4C3030
0x4C5B09: test    al, al
0x4C5B0B: jz      short loc_4C5B43
0x4C5B0D: mov     eax, [esi+24h]
0x4C5B10: test    eax, eax
0x4C5B12: jz      short loc_4C5B43
0x4C5B14: cmp     dword ptr [eax], 0
0x4C5B17: jz      short loc_4C5B43
0x4C5B19: mov     edx, [eax]
0x4C5B1B: mov     eax, [esp+54h+var_38]
0x4C5B1F: cmp     dword ptr [edx+eax*4], 0
0x4C5B23: lea     eax, [edx+eax*4]
0x4C5B26: jz      short loc_4C5B43
0x4C5B28: mov     eax, [eax]
0x4C5B2A: cmp     word ptr [eax+0B6h], 0
0x4C5B32: jbe     short loc_4C5B43
0x4C5B34: mov     ecx, [eax+0B0h]
0x4C5B3A: mov     eax, [ecx]
0x4C5B3C: pop     esi
0x4C5B3D: add     esp, 50h
0x4C5B40: retn    4
0x4C5B43: xor     eax, eax
0x4C5B45: pop     esi
0x4C5B46: add     esp, 50h
0x4C5B49: retn    4
