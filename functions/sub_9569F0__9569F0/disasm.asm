0x9569F0: push    ebx
0x9569F1: mov     ebx, [esp+4+arg_0]
0x9569F5: mov     eax, [ebx+0Ch]
0x9569F8: mov     [esp+4+arg_0], eax
0x9569FC: mov     eax, [ecx]
0x9569FE: lea     edx, [eax-1]
0x956A01: lea     eax, [edx+1]
0x956A04: cmp     eax, 4
0x956A07: push    esi
0x956A08: push    edi
0x956A09: jl      loc_956AAA
0x956A0F: nop
0x956A10: mov     eax, [ecx+8]
0x956A13: mov     esi, [eax+edx*4]
0x956A16: test    esi, esi
0x956A18: lea     edi, [eax+edx*4]
0x956A1B: jz      loc_956B0E
0x956A21: fld     dword ptr [esi+0Ch]
0x956A24: fcomp   [esp+0Ch+arg_0]
0x956A28: fnstsw  ax
0x956A2A: test    ah, 5
0x956A2D: jp      loc_956B0E
0x956A33: mov     [edi+4], esi
0x956A36: mov     eax, [ecx+8]
0x956A39: mov     esi, [eax+edx*4-4]
0x956A3D: test    esi, esi
0x956A3F: lea     edi, [eax+edx*4]
0x956A42: jz      loc_956AE3
0x956A48: fld     dword ptr [esi+0Ch]
0x956A4B: fcomp   [esp+0Ch+arg_0]
0x956A4F: fnstsw  ax
0x956A51: test    ah, 5
0x956A54: jp      loc_956AE3
0x956A5A: mov     [edi], esi
0x956A5C: mov     edi, [ecx+8]
0x956A5F: mov     esi, [edi+edx*4-8]
0x956A63: test    esi, esi
0x956A65: jz      loc_956AF6
0x956A6B: fld     dword ptr [esi+0Ch]
0x956A6E: fcomp   [esp+0Ch+arg_0]
0x956A72: fnstsw  ax
0x956A74: test    ah, 5
0x956A77: jp      short loc_956AF6
0x956A79: mov     [edi+edx*4-4], esi
0x956A7D: mov     edi, [ecx+8]
0x956A80: mov     esi, [edi+edx*4-0Ch]
0x956A84: test    esi, esi
0x956A86: jz      loc_956B0B
0x956A8C: fld     dword ptr [esi+0Ch]
0x956A8F: fcomp   [esp+0Ch+arg_0]
0x956A93: fnstsw  ax
0x956A95: test    ah, 5
0x956A98: jp      short loc_956B0B
0x956A9A: mov     [edi+edx*4-8], esi
0x956A9E: sub     edx, 4
0x956AA1: cmp     edx, 3
0x956AA4: jge     loc_956A10
0x956AAA: test    edx, edx
0x956AAC: jl      short loc_956B0E
0x956AAE: mov     edi, edi
0x956AB0: mov     eax, [ecx+8]
0x956AB3: mov     esi, [eax+edx*4]
0x956AB6: test    esi, esi
0x956AB8: lea     edi, [eax+edx*4]
0x956ABB: jz      short loc_956B0E
0x956ABD: fld     dword ptr [esi+0Ch]
0x956AC0: fcomp   [esp+0Ch+arg_0]
0x956AC4: fnstsw  ax
0x956AC6: test    ah, 5
0x956AC9: jp      short loc_956B0E
0x956ACB: dec     edx
0x956ACC: mov     [edi+4], esi
0x956ACF: jns     short loc_956AB0
0x956AD1: mov     eax, [ecx+8]
0x956AD4: mov     [eax+edx*4+4], ebx
0x956AD8: mov     eax, [ecx]
0x956ADA: pop     edi
0x956ADB: inc     eax
0x956ADC: pop     esi
0x956ADD: mov     [ecx], eax
0x956ADF: pop     ebx
0x956AE0: retn    4
0x956AE3: mov     eax, [ecx+8]
0x956AE6: dec     edx
0x956AE7: mov     [eax+edx*4+4], ebx
0x956AEB: mov     eax, [ecx]
0x956AED: pop     edi
0x956AEE: inc     eax
0x956AEF: pop     esi
0x956AF0: mov     [ecx], eax
0x956AF2: pop     ebx
0x956AF3: retn    4
0x956AF6: mov     eax, [ecx+8]
0x956AF9: sub     edx, 2
0x956AFC: mov     [eax+edx*4+4], ebx
0x956B00: mov     eax, [ecx]
0x956B02: pop     edi
0x956B03: inc     eax
0x956B04: pop     esi
0x956B05: mov     [ecx], eax
0x956B07: pop     ebx
0x956B08: retn    4
0x956B0B: sub     edx, 3
0x956B0E: mov     eax, [ecx+8]
0x956B11: mov     [eax+edx*4+4], ebx
0x956B15: mov     eax, [ecx]
0x956B17: pop     edi
0x956B18: inc     eax
0x956B19: pop     esi
0x956B1A: mov     [ecx], eax
0x956B1C: pop     ebx
0x956B1D: retn    4
