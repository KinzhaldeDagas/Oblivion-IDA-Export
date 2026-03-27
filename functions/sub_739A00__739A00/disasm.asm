0x739A00: sub     esp, 24h
0x739A03: push    ebx
0x739A04: push    esi
0x739A05: mov     esi, [esp+2Ch+arg_0]
0x739A09: mov     ebx, ecx
0x739A0B: push    esi
0x739A0C: mov     [esp+30h+var_10], ebx
0x739A10: call    sub_7201B0
0x739A15: mov     al, [ebx+58h]
0x739A18: push    1
0x739A1A: lea     ecx, [esp+30h+arg_0]
0x739A1E: push    ecx
0x739A1F: mov     [esp+34h+var_21], al
0x739A23: mov     eax, [esi+220h]
0x739A29: push    1
0x739A2B: lea     edx, [esp+38h+var_21]
0x739A2F: push    edx
0x739A30: push    eax
0x739A31: mov     eax, [eax+8]
0x739A34: mov     [esp+40h+arg_0], 1
0x739A3C: call    eax
0x739A3E: movzx   ecx, word ptr [ebx+6Ah]
0x739A42: mov     eax, [esi+220h]
0x739A48: push    1
0x739A4A: lea     edx, [esp+44h+arg_0]
0x739A4E: push    edx
0x739A4F: mov     [esp+48h+var_1C], ecx
0x739A53: mov     edx, [eax+8]
0x739A56: push    4
0x739A58: lea     ecx, [esp+4Ch+var_1C]
0x739A5C: push    ecx
0x739A5D: push    eax
0x739A5E: mov     [esp+54h+arg_0], 4
0x739A66: call    edx
0x739A68: xor     eax, eax
0x739A6A: add     esp, 28h
0x739A6D: cmp     [esp+2Ch+var_1C], eax
0x739A71: mov     [esp+2Ch+var_C], eax
0x739A75: jbe     loc_739C0B
0x739A7B: push    ebp
0x739A7C: push    edi
0x739A7D: lea     ecx, [ecx+0]
0x739A80: mov     ecx, [ebx+64h]
0x739A83: mov     edi, [ecx+eax*4]
0x739A86: test    edi, edi
0x739A88: jz      short loc_739A94
0x739A8A: movzx   edx, word ptr [edi+4]
0x739A8E: mov     [esp+34h+var_20], edx
0x739A92: jmp     short loc_739A9C
0x739A94: mov     [esp+34h+var_20], 0
0x739A9C: mov     eax, [esi+220h]
0x739AA2: push    1
0x739AA4: lea     ecx, [esp+38h+arg_0]
0x739AA8: push    ecx
0x739AA9: push    2
0x739AAB: lea     edx, [esp+40h+var_20]
0x739AAF: push    edx
0x739AB0: push    eax
0x739AB1: mov     eax, [eax+8]
0x739AB4: mov     [esp+48h+arg_0], 2
0x739ABC: call    eax
0x739ABE: add     esp, 14h
0x739AC1: cmp     word ptr [esp+34h+var_20], 0
0x739AC7: jz      loc_739BF4
0x739ACD: mov     ecx, [edi+0Ch]
0x739AD0: mov     edx, [edi+10h]
0x739AD3: mov     ebx, [edi+8]
0x739AD6: movzx   eax, word ptr [edi+6]
0x739ADA: mov     [esp+34h+var_4], edx
0x739ADE: push    1
0x739AE0: mov     [esp+38h+var_18], ecx
0x739AE4: test    ebx, ebx
0x739AE6: setnz   cl
0x739AE9: lea     edx, [esp+38h+var_8]
0x739AED: push    edx
0x739AEE: mov     byte ptr [esp+3Ch+arg_0], cl
0x739AF2: mov     [esp+3Ch+var_14], eax
0x739AF6: mov     eax, [esi+220h]
0x739AFC: mov     edx, [eax+8]
0x739AFF: push    1
0x739B01: lea     ecx, [esp+40h+arg_0]
0x739B05: push    ecx
0x739B06: push    eax
0x739B07: mov     [esp+48h+var_8], 1
0x739B0F: call    edx
0x739B11: add     esp, 14h
0x739B14: cmp     byte ptr [esp+34h+arg_0], 0
0x739B19: jz      short loc_739B3D
0x739B1B: xor     ebp, ebp
0x739B1D: cmp     word ptr [esp+34h+var_20], bp
0x739B22: jbe     short loc_739B3D
0x739B24: mov     edi, ebx
0x739B26: push    esi
0x739B27: mov     ecx, edi
0x739B29: call    sub_714BF0
0x739B2E: movzx   eax, word ptr [esp+34h+var_20]
0x739B33: add     ebp, 1
0x739B36: add     edi, 8
0x739B39: cmp     ebp, eax
0x739B3B: jb      short loc_739B26
0x739B3D: cmp     [esp+34h+var_18], 0
0x739B42: mov     eax, [esi+220h]
0x739B48: push    1
0x739B4A: setnz   cl
0x739B4D: lea     edx, [esp+38h+var_8]
0x739B51: push    edx
0x739B52: mov     [esp+3Ch+var_22], cl
0x739B56: mov     edx, [eax+8]
0x739B59: push    1
0x739B5B: lea     ecx, [esp+40h+var_22]
0x739B5F: push    ecx
0x739B60: push    eax
0x739B61: mov     [esp+48h+var_8], 1
0x739B69: call    edx
0x739B6B: add     esp, 14h
0x739B6E: cmp     [esp+34h+var_22], 0
0x739B73: jz      short loc_739B99
0x739B75: xor     ebp, ebp
0x739B77: cmp     word ptr [esp+34h+var_20], bp
0x739B7C: jbe     short loc_739B99
0x739B7E: mov     edi, [esp+34h+var_18]
0x739B82: push    esi
0x739B83: mov     ecx, edi
0x739B85: call    sub_709510
0x739B8A: movzx   eax, word ptr [esp+34h+var_20]
0x739B8F: add     ebp, 1
0x739B92: add     edi, 10h
0x739B95: cmp     ebp, eax
0x739B97: jb      short loc_739B82
0x739B99: mov     eax, [esi+220h]
0x739B9F: push    1
0x739BA1: lea     ecx, [esp+38h+var_8]
0x739BA5: push    ecx
0x739BA6: push    2
0x739BA8: lea     edx, [esp+40h+var_14]
0x739BAC: push    edx
0x739BAD: push    eax
0x739BAE: mov     eax, [eax+8]
0x739BB1: mov     [esp+48h+var_8], 2
0x739BB9: call    eax
0x739BBB: mov     eax, [esp+48h+var_14]
0x739BBF: add     esp, 14h
0x739BC2: test    ax, ax
0x739BC5: jz      short loc_739BF0
0x739BC7: movzx   ecx, word ptr [esp+34h+var_20]
0x739BCC: movzx   eax, ax
0x739BCF: imul    eax, ecx
0x739BD2: test    eax, eax
0x739BD4: jbe     short loc_739BF0
0x739BD6: mov     edi, [esp+34h+var_4]
0x739BDA: mov     ebx, eax
0x739BDC: lea     esp, [esp+0]
0x739BE0: push    esi
0x739BE1: mov     ecx, edi
0x739BE3: call    sub_714BF0
0x739BE8: add     edi, 8
0x739BEB: sub     ebx, 1
0x739BEE: jnz     short loc_739BE0
0x739BF0: mov     ebx, [esp+34h+var_10]
0x739BF4: mov     eax, [esp+34h+var_C]
0x739BF8: add     eax, 1
0x739BFB: cmp     eax, [esp+34h+var_1C]
0x739BFF: mov     [esp+34h+var_C], eax
0x739C03: jb      loc_739A80
0x739C09: pop     edi
0x739C0A: pop     ebp
0x739C0B: pop     esi
0x739C0C: pop     ebx
0x739C0D: add     esp, 24h
0x739C10: retn    4
