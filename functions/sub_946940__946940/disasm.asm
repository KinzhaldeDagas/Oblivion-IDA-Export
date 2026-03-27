0x946940: movzx   eax, byte ptr [esp+arg_0]
0x946945: sub     esp, 28h
0x946948: sub     eax, 23h ; '#'
0x94694B: push    ebx
0x94694C: push    ebp
0x94694D: push    esi
0x94694E: push    edi
0x94694F: mov     esi, ecx
0x946951: jz      loc_946B5B
0x946957: sub     eax, 2
0x94695A: jnz     loc_946CA4
0x946960: mov     ecx, [esi+8]
0x946963: push    1
0x946965: push    8
0x946967: lea     eax, [esp+40h+var_28]
0x94696B: push    eax
0x94696C: call    sub_947910
0x946971: push    1
0x946973: push    8
0x946975: lea     ecx, [esp+40h+var_20]
0x946979: push    ecx
0x94697A: mov     ecx, [esi+8]
0x94697D: call    sub_947910
0x946982: mov     ecx, [esi+8]
0x946985: push    1
0x946987: push    2
0x946989: lea     edx, [esp+40h+arg_0]
0x94698D: push    edx
0x94698E: call    sub_947910
0x946993: mov     eax, ds:0BA9DE4h
0x946998: mov     ecx, large fs:2Ch
0x94699F: mov     ebp, [ecx+eax*4]
0x9469A2: mov     eax, [ebp+19Ch]
0x9469A8: test    eax, eax
0x9469AA: movzx   edi, word ptr [esp+38h+arg_0]
0x9469AF: jnz     short loc_9469B6
0x9469B1: mov     eax, ds:0BA7D9Ch
0x9469B6: push    14h
0x9469B8: lea     edx, [edi+edi]
0x9469BB: push    edx
0x9469BC: mov     ecx, eax
0x9469BE: call    sub_8A7560
0x9469C3: mov     [esp+38h+var_18], eax
0x9469C7: mov     eax, edi
0x9469C9: and     eax, 3FFFFFFFh
0x9469CE: cmp     eax, edi
0x9469D0: mov     [esp+38h+var_14], edi
0x9469D4: mov     [esp+38h+var_10], edi
0x9469D8: jge     short loc_9469F2
0x9469DA: add     eax, eax
0x9469DC: cmp     edi, eax
0x9469DE: jl      short loc_9469E2
0x9469E0: mov     eax, edi
0x9469E2: push    2
0x9469E4: push    eax
0x9469E5: lea     eax, [esp+40h+var_18]
0x9469E9: push    eax
0x9469EA: call    sub_8A6E40
0x9469EF: add     esp, 0Ch
0x9469F2: xor     ebx, ebx
0x9469F4: test    edi, edi
0x9469F6: mov     [esp+38h+var_14], edi
0x9469FA: jle     short loc_946A23
0x9469FC: lea     esp, [esp+0]
0x946A00: push    1
0x946A02: push    2
0x946A04: lea     ecx, [esp+40h+arg_0]
0x946A08: push    ecx
0x946A09: mov     ecx, [esi+8]
0x946A0C: call    sub_947910
0x946A11: mov     edx, [esp+38h+var_18]
0x946A15: mov     ax, word ptr [esp+38h+arg_0]
0x946A1A: mov     [edx+ebx*2], ax
0x946A1E: inc     ebx
0x946A1F: cmp     ebx, edi
0x946A21: jl      short loc_946A00
0x946A23: push    1
0x946A25: push    4
0x946A27: lea     ecx, [esp+40h+arg_0]
0x946A2B: push    ecx
0x946A2C: mov     ecx, [esi+8]
0x946A2F: call    sub_947910
0x946A34: mov     eax, [ebp+19Ch]
0x946A3A: test    eax, eax
0x946A3C: jnz     short loc_946A43
0x946A3E: mov     eax, ds:0BA7D9Ch
0x946A43: mov     edi, [esp+38h+arg_0]
0x946A47: push    14h
0x946A49: push    edi
0x946A4A: mov     ecx, eax
0x946A4C: call    sub_8A7560
0x946A51: mov     [esp+38h+var_C], eax
0x946A55: mov     eax, edi
0x946A57: and     eax, 3FFFFFFFh
0x946A5C: cmp     eax, edi
0x946A5E: mov     [esp+38h+var_8], edi
0x946A62: mov     [esp+38h+var_4], edi
0x946A66: jge     short loc_946A80
0x946A68: add     eax, eax
0x946A6A: cmp     edi, eax
0x946A6C: jl      short loc_946A70
0x946A6E: mov     eax, edi
0x946A70: push    1
0x946A72: push    eax
0x946A73: lea     edx, [esp+40h+var_C]
0x946A77: push    edx
0x946A78: call    sub_8A6E40
0x946A7D: add     esp, 0Ch
0x946A80: mov     eax, [esp+38h+var_C]
0x946A84: mov     ecx, [esi+8]
0x946A87: push    edi
0x946A88: push    eax
0x946A89: mov     [esp+40h+var_8], edi
0x946A8D: call    sub_918390
0x946A92: mov     eax, dword ptr [esp+38h+var_28+4]
0x946A96: test    eax, eax
0x946A98: mov     esi, dword ptr [esp+38h+var_28]
0x946A9C: ja      short loc_946AA2
0x946A9E: test    esi, esi
0x946AA0: jbe     short loc_946AF7
0x946AA2: mov     eax, dword ptr [esp+38h+var_20+4]
0x946AA6: test    eax, eax
0x946AA8: mov     ecx, dword ptr [esp+38h+var_20]
0x946AAC: ja      short loc_946AB2
0x946AAE: test    ecx, ecx
0x946AB0: jbe     short loc_946AF7
0x946AB2: mov     eax, [esp+38h+var_14]
0x946AB6: test    eax, eax
0x946AB8: jle     short loc_946AF7
0x946ABA: test    edi, edi
0x946ABC: jbe     short loc_946AF7
0x946ABE: mov     edx, [esp+38h+var_18]
0x946AC2: movzx   eax, word ptr [edx]
0x946AC5: push    eax
0x946AC6: call    sub_90D2B0
0x946ACB: movzx   ecx, byte ptr [eax+0Ch]
0x946ACF: lea     edx, [esp+38h+var_18]
0x946AD3: push    0
0x946AD5: push    edx
0x946AD6: movzx   edx, word ptr [eax+12h]
0x946ADA: add     edx, esi
0x946ADC: call    sub_946250
0x946AE1: add     esp, 8
0x946AE4: test    eax, eax
0x946AE6: jz      short loc_946AF7
0x946AE8: mov     ecx, [esp+38h+var_C]
0x946AEC: push    edi
0x946AED: push    ecx
0x946AEE: push    eax
0x946AEF: call    sub_8B1890
0x946AF4: add     esp, 0Ch
0x946AF7: mov     eax, [esp+38h+var_4]
0x946AFB: test    eax, eax
0x946AFD: js      short loc_946B21
0x946AFF: mov     ecx, [ebp+19Ch]
0x946B05: test    ecx, ecx
0x946B07: jnz     short loc_946B0F
0x946B09: mov     ecx, ds:0BA7D9Ch
0x946B0F: mov     edx, [esp+38h+var_C]
0x946B13: push    14h
0x946B15: and     eax, 3FFFFFFFh
0x946B1A: push    eax
0x946B1B: push    edx
0x946B1C: call    sub_8A75D0
0x946B21: mov     eax, [esp+38h+var_10]
0x946B25: test    eax, eax
0x946B27: js      loc_946CA4
0x946B2D: mov     ecx, [ebp+19Ch]
0x946B33: test    ecx, ecx
0x946B35: jnz     short loc_946B3D
0x946B37: mov     ecx, ds:0BA7D9Ch
0x946B3D: and     eax, 3FFFFFFFh
0x946B42: push    14h
0x946B44: shl     eax, 1
0x946B46: push    eax
0x946B47: mov     eax, [esp+40h+var_18]
0x946B4B: push    eax
0x946B4C: call    sub_8A75D0
0x946B51: pop     edi
0x946B52: pop     esi
0x946B53: pop     ebp
0x946B54: pop     ebx
0x946B55: add     esp, 28h
0x946B58: retn    4
0x946B5B: mov     ecx, [esi+8]
0x946B5E: push    1
0x946B60: push    8
0x946B62: lea     edx, [esp+40h+var_20]
0x946B66: push    edx
0x946B67: call    sub_947910
0x946B6C: mov     ecx, [esi+8]
0x946B6F: push    1
0x946B71: push    8
0x946B73: lea     eax, [esp+40h+var_28]
0x946B77: push    eax
0x946B78: call    sub_947910
0x946B7D: mov     ecx, [esi+8]
0x946B80: push    1
0x946B82: push    1
0x946B84: lea     edx, [esp+40h+arg_0]
0x946B88: push    edx
0x946B89: call    sub_947910
0x946B8E: mov     ecx, dword ptr [esp+38h+var_20+4]
0x946B92: mov     ebp, dword ptr [esp+38h+var_20]
0x946B96: xor     eax, eax
0x946B98: cmp     ecx, eax
0x946B9A: ja      short loc_946BA4
0x946B9C: cmp     ebp, eax
0x946B9E: jbe     loc_946CA4
0x946BA4: cmp     dword ptr [esp+38h+var_28+4], eax
0x946BA8: mov     edi, dword ptr [esp+38h+var_28]
0x946BAC: ja      short loc_946BB6
0x946BAE: cmp     edi, eax
0x946BB0: jbe     loc_946CA4
0x946BB6: cmp     edi, offset dword_BA8788
0x946BBC: mov     bl, byte ptr [esp+38h+arg_0]
0x946BC0: mov     [esp+38h+var_C], eax
0x946BC4: mov     [esp+38h+var_8], eax
0x946BC8: mov     [esp+38h+var_4], 80000000h
0x946BD0: jz      short loc_946BDB
0x946BD2: test    bl, 2
0x946BD5: jnz     short loc_946BDB
0x946BD7: xor     cl, cl
0x946BD9: jmp     short loc_946BDD
0x946BDB: mov     cl, 1
0x946BDD: lea     eax, [esp+38h+var_C]
0x946BE1: push    eax
0x946BE2: push    ecx
0x946BE3: mov     eax, esp
0x946BE5: push    edi
0x946BE6: mov     [eax], cl
0x946BE8: push    ebp
0x946BE9: lea     ecx, [esi-8]
0x946BEC: call    sub_9465A0
0x946BF1: mov     ecx, [esi+1Ch]
0x946BF4: xor     eax, eax
0x946BF6: test    ecx, ecx
0x946BF8: jle     short loc_946C0C
0x946BFA: mov     edx, [esi+18h]
0x946BFD: lea     ecx, [ecx+0]
0x946C00: cmp     [edx], ebp
0x946C02: jz      short loc_946C0C
0x946C04: inc     eax
0x946C05: add     edx, 8
0x946C08: cmp     eax, ecx
0x946C0A: jl      short loc_946C00
0x946C0C: cmp     eax, ecx
0x946C0E: setnz   cl
0x946C11: test    bl, 1
0x946C14: jz      short loc_946C4B
0x946C16: test    cl, cl
0x946C18: jnz     short loc_946C67
0x946C1A: mov     ecx, [esi+20h]
0x946C1D: mov     eax, [esi+1Ch]
0x946C20: add     esi, 18h
0x946C23: and     ecx, 3FFFFFFFh
0x946C29: cmp     eax, ecx
0x946C2B: jnz     short loc_946C38
0x946C2D: push    8
0x946C2F: push    esi
0x946C30: call    sub_8A6EE0
0x946C35: add     esp, 8
0x946C38: mov     eax, [esi+4]
0x946C3B: mov     edx, [esi]
0x946C3D: lea     ecx, [edx+eax*8]
0x946C40: inc     eax
0x946C41: mov     [esi+4], eax
0x946C44: mov     [ecx+4], edi
0x946C47: mov     [ecx], ebp
0x946C49: jmp     short loc_946C67
0x946C4B: test    cl, cl
0x946C4D: jz      short loc_946C67
0x946C4F: mov     ecx, [esi+1Ch]
0x946C52: dec     ecx
0x946C53: mov     [esi+1Ch], ecx
0x946C56: mov     esi, [esi+18h]
0x946C59: mov     edx, [esi+ecx*8]
0x946C5C: mov     [esi+eax*8], edx
0x946C5F: mov     ecx, [esi+ecx*8+4]
0x946C63: mov     [esi+eax*8+4], ecx
0x946C67: mov     eax, [esp+38h+var_4]
0x946C6B: test    eax, eax
0x946C6D: js      short loc_946CA4
0x946C6F: mov     ecx, large fs:2Ch
0x946C76: mov     edx, ds:0BA9DE4h
0x946C7C: mov     edx, [ecx+edx*4]
0x946C7F: mov     ecx, [edx+19Ch]
0x946C85: test    ecx, ecx
0x946C87: jnz     short loc_946C8F
0x946C89: mov     ecx, ds:0BA7D9Ch
0x946C8F: and     eax, 3FFFFFFFh
0x946C94: push    14h
0x946C96: shl     eax, 3
0x946C99: push    eax
0x946C9A: mov     eax, [esp+40h+var_C]
0x946C9E: push    eax
0x946C9F: call    sub_8A75D0
0x946CA4: pop     edi
0x946CA5: pop     esi
0x946CA6: pop     ebp
0x946CA7: pop     ebx
0x946CA8: add     esp, 28h
0x946CAB: retn    4
