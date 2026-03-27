0x8D39E0: push    ebp
0x8D39E1: mov     ebp, esp
0x8D39E3: and     esp, 0FFFFFFF0h
0x8D39E6: sub     esp, 434h
0x8D39EC: mov     ecx, large fs:2Ch
0x8D39F3: mov     eax, ds:0BA9DE4h
0x8D39F8: mov     eax, [ecx+eax*4]
0x8D39FB: mov     ecx, [eax+19Ch]
0x8D3A01: mov     edx, [ecx+20h]
0x8D3A04: push    ebx
0x8D3A05: mov     ebx, [ecx+2Ch]
0x8D3A08: push    esi
0x8D3A09: mov     [esp+43Ch+var_404], eax
0x8D3A0D: push    edi
0x8D3A0E: mov     edi, [ebp+arg_18]
0x8D3A11: mov     eax, [edi+4]
0x8D3A14: shl     eax, 5
0x8D3A17: add     eax, 10h
0x8D3A1A: and     eax, 0FFFFFFF0h
0x8D3A1D: lea     esi, [edx+eax]
0x8D3A20: cmp     esi, ebx
0x8D3A22: ja      short loc_8D3A2D
0x8D3A24: mov     [ecx+20h], esi
0x8D3A27: mov     [esp+440h+var_428], edx
0x8D3A2B: jmp     short loc_8D3A39
0x8D3A2D: mov     edx, [ecx]
0x8D3A2F: push    eax
0x8D3A30: call    dword ptr [edx+0Ch]
0x8D3A33: mov     [esp+440h+var_428], eax
0x8D3A37: mov     edx, eax
0x8D3A39: mov     eax, [edi+4]
0x8D3A3C: xor     esi, esi
0x8D3A3E: test    eax, eax
0x8D3A40: jle     loc_8D3AC7
0x8D3A46: mov     eax, [edi]
0x8D3A48: mov     eax, [eax+esi*4]
0x8D3A4B: mov     ecx, [eax+50h]
0x8D3A4E: mov     eax, [ecx+8]
0x8D3A51: mov     ebx, [ebp+arg_0]
0x8D3A54: add     eax, [ebx+0Ch]
0x8D3A57: mov     ebx, edx
0x8D3A59: movaps  xmm0, xmmword ptr [eax+10h]
0x8D3A5D: movaps  xmmword ptr [ebx], xmm0
0x8D3A60: movaps  xmm0, xmmword ptr [eax+20h]
0x8D3A64: add     edx, 10h
0x8D3A67: mov     ebx, edx
0x8D3A69: movaps  xmmword ptr [ebx], xmm0
0x8D3A6C: movaps  xmm1, xmmword ptr [ecx+50h]
0x8D3A70: movaps  xmm0, xmmword ptr [ecx+60h]
0x8D3A74: subps   xmm0, xmm1
0x8D3A77: movaps  xmmword ptr [eax+10h], xmm0
0x8D3A7B: mov     ebx, [ecx+6Ch]
0x8D3A7E: mov     dword ptr [esp+440h+var_424], ebx
0x8D3A82: movss   xmm1, dword ptr [esp+440h+var_424]
0x8D3A88: movaps  xmm2, xmm1
0x8D3A8B: shufps  xmm2, xmm1, 0
0x8D3A8F: mulps   xmm2, xmm0
0x8D3A92: movaps  xmmword ptr [eax+10h], xmm2
0x8D3A96: mov     ebx, [ecx+6Ch]
0x8D3A99: movaps  xmm1, xmmword ptr [ecx+0A0h]
0x8D3AA0: mov     [esp+440h+var_42C], ebx
0x8D3AA4: movss   xmm0, [esp+440h+var_42C]
0x8D3AAA: movaps  xmm2, xmm0
0x8D3AAD: shufps  xmm2, xmm0, 0
0x8D3AB1: add     edx, 10h
0x8D3AB4: mulps   xmm2, xmm1
0x8D3AB7: movaps  xmmword ptr [eax+20h], xmm2
0x8D3ABB: mov     eax, [edi+4]
0x8D3ABE: inc     esi
0x8D3ABF: cmp     esi, eax
0x8D3AC1: jl      short loc_8D3A46
0x8D3AC3: mov     edx, [esp+440h+var_428]
0x8D3AC7: mov     ecx, [ebp+arg_C]
0x8D3ACA: mov     ebx, [ecx]
0x8D3ACC: mov     eax, [ebp+arg_8]
0x8D3ACF: cmp     ebx, [eax+4]
0x8D3AD2: mov     dword ptr [esp+440h+var_424], ebx
0x8D3AD6: jge     loc_8D3C95
0x8D3ADC: mov     esi, [ebp+arg_1C]
0x8D3ADF: lea     ebx, [ebx+ebx*2]
0x8D3AE2: shl     ebx, 2
0x8D3AE5: mov     [esp+440h+var_42C], ebx
0x8D3AE9: lea     esp, [esp+0]
0x8D3AF0: mov     edi, [eax]
0x8D3AF2: mov     eax, [edi+ebx]
0x8D3AF5: movzx   edx, byte ptr [eax+18h]
0x8D3AF9: mov     ecx, [ebp+arg_10]
0x8D3AFC: add     edi, ebx
0x8D3AFE: cmp     ecx, edx
0x8D3B00: jg      loc_8D3C70
0x8D3B06: mov     eax, [eax+24h]
0x8D3B09: mov     edx, [eax+4]
0x8D3B0C: movzx   edx, word ptr [edx+8Ch]
0x8D3B13: mov     ecx, [ebp+arg_14]
0x8D3B16: mov     ecx, [ecx]
0x8D3B18: add     eax, 4
0x8D3B1B: xor     ebx, ebx
0x8D3B1D: cmp     byte ptr [edx+ecx], 8
0x8D3B21: setz    bl
0x8D3B24: mov     ebx, [eax+ebx*4]
0x8D3B27: movzx   eax, word ptr [ebx+8Ch]
0x8D3B2E: cmp     byte ptr [eax+ecx], 4
0x8D3B32: jnz     short loc_8D3B91
0x8D3B34: mov     eax, [ebp+arg_C]
0x8D3B37: mov     ecx, [eax]
0x8D3B39: mov     ebx, [esp+440h+var_42C]
0x8D3B3D: lea     edx, [ecx+1]
0x8D3B40: mov     [eax], edx
0x8D3B42: mov     eax, [ebp+arg_8]
0x8D3B45: mov     edx, [eax]
0x8D3B47: lea     eax, [ebx+edx]
0x8D3B4A: lea     ecx, [ecx+ecx*2]
0x8D3B4D: lea     ecx, [edx+ecx*4]
0x8D3B50: mov     edx, ecx
0x8D3B52: mov     edi, [edx]
0x8D3B54: mov     [esp+440h+var_41C], edi
0x8D3B58: mov     edi, [edx+4]
0x8D3B5B: mov     edx, [edx+8]
0x8D3B5E: mov     [esp+440h+var_414], edx
0x8D3B62: mov     [esp+440h+var_418], edi
0x8D3B66: mov     edx, eax
0x8D3B68: mov     edi, [edx]
0x8D3B6A: mov     [ecx], edi
0x8D3B6C: mov     edi, [edx+4]
0x8D3B6F: mov     [ecx+4], edi
0x8D3B72: mov     edx, [edx+8]
0x8D3B75: mov     [ecx+8], edx
0x8D3B78: mov     ecx, [esp+440h+var_41C]
0x8D3B7C: mov     edx, [esp+440h+var_418]
0x8D3B80: mov     [eax], ecx
0x8D3B82: mov     ecx, [esp+440h+var_414]
0x8D3B86: mov     [eax+4], edx
0x8D3B89: mov     [eax+8], ecx
0x8D3B8C: jmp     loc_8D3C70
0x8D3B91: mov     eax, [edi+4]
0x8D3B94: mov     ecx, [ebp+arg_0]
0x8D3B97: lea     edx, [esp+440h+var_400]
0x8D3B9B: push    edx
0x8D3B9C: mov     edx, [ecx+4]
0x8D3B9F: push    100h
0x8D3BA4: push    eax
0x8D3BA5: push    edx
0x8D3BA6: call    sub_91FF70
0x8D3BAB: mov     ecx, [ebp+arg_4]
0x8D3BAE: push    ecx; int
0x8D3BAF: push    eax; int
0x8D3BB0: mov     eax, [ebp+arg_0]
0x8D3BB3: mov     ecx, [eax]
0x8D3BB5: lea     edx, [esp+458h+var_400]
0x8D3BB9: push    edx; int
0x8D3BBA: mov     edx, [ecx+8]
0x8D3BBD: push    edi; int
0x8D3BBE: push    edx; float
0x8D3BBF: lea     eax, [esp+464h+var_420]
0x8D3BC3: push    eax; int
0x8D3BC4: call    sub_8D3980
0x8D3BC9: mov     al, byte ptr [esp+468h+var_420]
0x8D3BCD: add     esp, 28h
0x8D3BD0: test    al, al
0x8D3BD2: jnz     loc_8D3C6C
0x8D3BD8: movzx   ecx, word ptr [ebx+8Ch]
0x8D3BDF: mov     edx, [ebp+arg_14]
0x8D3BE2: mov     eax, [edx]
0x8D3BE4: mov     byte ptr [ecx+eax], 4
0x8D3BE8: mov     ecx, [esi+8]
0x8D3BEB: mov     eax, [esi+4]
0x8D3BEE: and     ecx, 3FFFFFFFh
0x8D3BF4: cmp     eax, ecx
0x8D3BF6: jnz     short loc_8D3C03
0x8D3BF8: push    4
0x8D3BFA: push    esi
0x8D3BFB: call    sub_8A6EE0
0x8D3C00: add     esp, 8
0x8D3C03: mov     edx, [esi+4]
0x8D3C06: mov     eax, [esi]
0x8D3C08: mov     [eax+edx*4], ebx
0x8D3C0B: mov     eax, [esi+4]
0x8D3C0E: mov     ebx, [esp+440h+var_42C]
0x8D3C12: inc     eax
0x8D3C13: mov     [esi+4], eax
0x8D3C16: mov     eax, [ebp+arg_C]
0x8D3C19: mov     ecx, [eax]
0x8D3C1B: lea     edx, [ecx+1]
0x8D3C1E: mov     [eax], edx
0x8D3C20: mov     eax, [ebp+arg_8]
0x8D3C23: mov     edx, [eax]
0x8D3C25: lea     eax, [ebx+edx]
0x8D3C28: lea     ecx, [ecx+ecx*2]
0x8D3C2B: lea     ecx, [edx+ecx*4]
0x8D3C2E: mov     edx, ecx
0x8D3C30: mov     edi, [edx]
0x8D3C32: mov     [esp+440h+var_410], edi
0x8D3C36: mov     edi, [edx+4]
0x8D3C39: mov     edx, [edx+8]
0x8D3C3C: mov     [esp+440h+var_408], edx
0x8D3C40: mov     [esp+440h+var_40C], edi
0x8D3C44: mov     edx, eax
0x8D3C46: mov     edi, [edx]
0x8D3C48: mov     [ecx], edi
0x8D3C4A: mov     edi, [edx+4]
0x8D3C4D: mov     [ecx+4], edi
0x8D3C50: mov     edx, [edx+8]
0x8D3C53: mov     [ecx+8], edx
0x8D3C56: mov     ecx, [esp+440h+var_410]
0x8D3C5A: mov     edx, [esp+440h+var_40C]
0x8D3C5E: mov     [eax], ecx
0x8D3C60: mov     ecx, [esp+440h+var_408]
0x8D3C64: mov     [eax+4], edx
0x8D3C67: mov     [eax+8], ecx
0x8D3C6A: jmp     short loc_8D3C70
0x8D3C6C: mov     ebx, [esp+440h+var_42C]
0x8D3C70: mov     ecx, dword ptr [esp+440h+var_424]
0x8D3C74: mov     eax, [ebp+arg_8]
0x8D3C77: mov     edx, [eax+4]
0x8D3C7A: inc     ecx
0x8D3C7B: add     ebx, 0Ch
0x8D3C7E: cmp     ecx, edx
0x8D3C80: mov     dword ptr [esp+440h+var_424], ecx
0x8D3C84: mov     [esp+440h+var_42C], ebx
0x8D3C88: jl      loc_8D3AF0
0x8D3C8E: mov     edx, [esp+440h+var_428]
0x8D3C92: mov     edi, [ebp+arg_18]
0x8D3C95: mov     eax, [edi+4]
0x8D3C98: xor     esi, esi
0x8D3C9A: test    eax, eax
0x8D3C9C: mov     ecx, edx
0x8D3C9E: jle     short loc_8D3CCD
0x8D3CA0: mov     eax, [edi]
0x8D3CA2: mov     eax, [eax+esi*4]
0x8D3CA5: mov     eax, [eax+50h]
0x8D3CA8: mov     eax, [eax+8]
0x8D3CAB: movaps  xmm0, xmmword ptr [ecx]
0x8D3CAE: mov     ebx, [ebp+arg_0]
0x8D3CB1: add     eax, [ebx+0Ch]
0x8D3CB4: add     ecx, 10h
0x8D3CB7: movaps  xmmword ptr [eax+10h], xmm0
0x8D3CBB: movaps  xmm0, xmmword ptr [ecx]
0x8D3CBE: add     ecx, 10h
0x8D3CC1: movaps  xmmword ptr [eax+20h], xmm0
0x8D3CC5: mov     eax, [edi+4]
0x8D3CC8: inc     esi
0x8D3CC9: cmp     esi, eax
0x8D3CCB: jl      short loc_8D3CA0
0x8D3CCD: mov     ecx, [esp+440h+var_404]
0x8D3CD1: mov     ecx, [ecx+19Ch]
0x8D3CD7: cmp     edx, [ecx+28h]
0x8D3CDA: mov     [ecx+20h], edx
0x8D3CDD: jnz     short loc_8D3CE5
0x8D3CDF: mov     eax, [ecx]
0x8D3CE1: push    edx
0x8D3CE2: call    dword ptr [eax+10h]
0x8D3CE5: pop     edi
0x8D3CE6: pop     esi
0x8D3CE7: pop     ebx
0x8D3CE8: mov     esp, ebp
0x8D3CEA: pop     ebp
0x8D3CEB: retn
