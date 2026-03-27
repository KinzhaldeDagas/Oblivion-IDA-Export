0x8E3A90: push    ebp
0x8E3A91: mov     ebp, esp
0x8E3A93: and     esp, 0FFFFFFF0h
0x8E3A96: sub     esp, 34h
0x8E3A99: mov     eax, [ebp+arg_0]
0x8E3A9C: mov     edx, [eax]
0x8E3A9E: mov     dword ptr [esp+34h+var_10], edx
0x8E3AA2: mov     edx, [eax+4]
0x8E3AA5: mov     dword ptr [esp+34h+var_10+4], edx
0x8E3AA9: mov     edx, [eax+8]
0x8E3AAC: mov     eax, [eax+0Ch]
0x8E3AAF: push    ebx
0x8E3AB0: push    esi
0x8E3AB1: mov     dword ptr [esp+3Ch+var_10+8], edx
0x8E3AB5: mov     dword ptr [esp+3Ch+var_10+0Ch], eax
0x8E3AB9: push    edi
0x8E3ABA: mov     [esp+40h+var_30], ecx
0x8E3ABE: lea     edx, [ecx+30h]
0x8E3AC1: xor     eax, eax
0x8E3AC3: fld     dword ptr [edx]
0x8E3AC5: fmul    dword ptr [esp+eax+40h+var_10]
0x8E3AC9: fstp    [esp+40h+var_28]
0x8E3ACD: fld     [esp+40h+var_28]
0x8E3AD1: fistp   [esp+40h+var_2C]
0x8E3AD5: mov     esi, [esp+40h+var_2C]
0x8E3AD9: and     esi, 0FFFFFFFEh
0x8E3ADC: mov     [esp+40h+var_28], esi
0x8E3AE0: fild    [esp+40h+var_28]
0x8E3AE4: mov     [esp+eax+40h+var_1C], esi
0x8E3AE8: add     eax, 4
0x8E3AEB: fdiv    dword ptr [edx]
0x8E3AED: add     edx, 4
0x8E3AF0: cmp     eax, 0Ch
0x8E3AF3: fstp    [esp+eax+40h+var_14]
0x8E3AF7: jl      short loc_8E3AC3
0x8E3AF9: mov     edx, [ebp+arg_4]
0x8E3AFC: movaps  xmm0, [esp+40h+var_10]
0x8E3B01: mov     esi, [ebp+arg_8]
0x8E3B04: movaps  xmmword ptr [edx], xmm0
0x8E3B07: xor     eax, eax
0x8E3B09: lea     edx, [ecx+50h]
0x8E3B0C: mov     [esp+40h+var_28], eax
0x8E3B10: mov     [esp+40h+var_34], edx
0x8E3B14: mov     edi, [esp+eax*4+40h+var_1C]
0x8E3B18: mov     ebx, [edx]
0x8E3B1A: mov     [esp+40h+var_24], edi
0x8E3B1E: mov     edi, 1
0x8E3B23: dec     ebx
0x8E3B24: cmp     ebx, edi
0x8E3B26: mov     [esp+40h+var_2C], edi
0x8E3B2A: jle     loc_8E3C0D
0x8E3B30: mov     eax, [edx-4]
0x8E3B33: lea     ebx, [eax+edi*4]
0x8E3B36: movzx   eax, word ptr [ebx]
0x8E3B39: cmp     eax, 1
0x8E3B3C: jle     loc_8E3BF9
0x8E3B42: cmp     eax, 0FFFCh
0x8E3B47: jge     loc_8E3BF9
0x8E3B4D: mov     edi, [esp+40h+var_24]
0x8E3B51: add     edi, eax
0x8E3B53: jns     short loc_8E3B97
0x8E3B55: movzx   edx, word ptr [ebx+2]
0x8E3B59: and     eax, 1
0x8E3B5C: shl     edx, 4
0x8E3B5F: mov     edi, eax
0x8E3B61: mov     eax, [ecx+40h]
0x8E3B64: lea     ecx, [edx+eax+0Ch]
0x8E3B68: mov     edx, [esi+8]
0x8E3B6B: mov     eax, [esi+4]
0x8E3B6E: and     edx, 3FFFFFFFh
0x8E3B74: cmp     eax, edx
0x8E3B76: mov     [esp+40h+var_20], ecx
0x8E3B7A: jnz     short loc_8E3B87
0x8E3B7C: push    4
0x8E3B7E: push    esi
0x8E3B7F: call    sub_8A6EE0
0x8E3B84: add     esp, 8
0x8E3B87: mov     edx, [esp+40h+var_20]
0x8E3B8B: mov     eax, [esi+4]
0x8E3B8E: mov     ecx, [esi]
0x8E3B90: mov     edx, [edx]
0x8E3B92: mov     [ecx+eax*4], edx
0x8E3B95: jmp     short loc_8E3BE3
0x8E3B97: cmp     edi, 0FFFCh
0x8E3B9D: jl      short loc_8E3BF2
0x8E3B9F: mov     ecx, [ecx+40h]
0x8E3BA2: and     eax, 1
0x8E3BA5: or      eax, 0FFFCh
0x8E3BAA: mov     edi, eax
0x8E3BAC: movzx   eax, word ptr [ebx+2]
0x8E3BB0: shl     eax, 4
0x8E3BB3: lea     edx, [eax+ecx+0Ch]
0x8E3BB7: mov     eax, [esi+8]
0x8E3BBA: mov     ecx, [esi+4]
0x8E3BBD: and     eax, 3FFFFFFFh
0x8E3BC2: cmp     ecx, eax
0x8E3BC4: mov     [esp+40h+var_20], edx
0x8E3BC8: jnz     short loc_8E3BD5
0x8E3BCA: push    4
0x8E3BCC: push    esi
0x8E3BCD: call    sub_8A6EE0
0x8E3BD2: add     esp, 8
0x8E3BD5: mov     eax, [esp+40h+var_20]
0x8E3BD9: mov     ecx, [esi+4]
0x8E3BDC: mov     edx, [esi]
0x8E3BDE: mov     eax, [eax]
0x8E3BE0: mov     [edx+ecx*4], eax
0x8E3BE3: mov     eax, [esi+4]
0x8E3BE6: mov     ecx, [esp+40h+var_30]
0x8E3BEA: mov     edx, [esp+40h+var_34]
0x8E3BEE: inc     eax
0x8E3BEF: mov     [esi+4], eax
0x8E3BF2: mov     [ebx], di
0x8E3BF5: mov     edi, [esp+40h+var_2C]
0x8E3BF9: mov     eax, [edx]
0x8E3BFB: inc     edi
0x8E3BFC: dec     eax
0x8E3BFD: cmp     edi, eax
0x8E3BFF: mov     [esp+40h+var_2C], edi
0x8E3C03: jl      loc_8E3B30
0x8E3C09: mov     eax, [esp+40h+var_28]
0x8E3C0D: inc     eax
0x8E3C0E: add     edx, 0Ch
0x8E3C11: cmp     eax, 3
0x8E3C14: mov     [esp+40h+var_28], eax
0x8E3C18: mov     [esp+40h+var_34], edx
0x8E3C1C: jl      loc_8E3B14
0x8E3C22: pop     edi
0x8E3C23: pop     esi
0x8E3C24: pop     ebx
0x8E3C25: mov     esp, ebp
0x8E3C27: pop     ebp
0x8E3C28: retn    0Ch
