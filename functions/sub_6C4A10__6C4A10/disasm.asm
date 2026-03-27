0x6C4A10: push    0FFFFFFFFh
0x6C4A12: push    offset SEH_8A4E30
0x6C4A17: mov     eax, large fs:0
0x6C4A1D: push    eax
0x6C4A1E: sub     esp, 10h
0x6C4A21: push    ebx
0x6C4A22: push    ebp
0x6C4A23: push    esi
0x6C4A24: push    edi
0x6C4A25: mov     eax, ds:0B30AACh
0x6C4A2A: xor     eax, esp
0x6C4A2C: push    eax
0x6C4A2D: lea     eax, [esp+30h+var_C]
0x6C4A31: mov     large fs:0, eax
0x6C4A37: mov     edi, ecx
0x6C4A39: movzx   ecx, word ptr [edi+46h]
0x6C4A3D: xor     ebx, ebx
0x6C4A3F: xor     esi, esi
0x6C4A41: cmp     ecx, ebx
0x6C4A43: mov     [esp+30h+var_14], ebx
0x6C4A47: jbe     short loc_6C4A66
0x6C4A49: mov     eax, [edi+40h]
0x6C4A4C: lea     esp, [esp+0]
0x6C4A50: mov     ebp, [eax]
0x6C4A52: cmp     ebp, [esp+30h+arg_4]
0x6C4A56: mov     [esp+30h+var_1C], ebp
0x6C4A5A: jz      short loc_6C4A82
0x6C4A5C: add     esi, 1
0x6C4A5F: add     eax, 4
0x6C4A62: cmp     esi, ecx
0x6C4A64: jb      short loc_6C4A50
0x6C4A66: mov     eax, [esp+30h+arg_0]
0x6C4A6A: mov     [eax], ebx
0x6C4A6C: mov     ecx, [esp+30h+var_C]
0x6C4A70: mov     large fs:0, ecx
0x6C4A77: pop     ecx
0x6C4A78: pop     edi
0x6C4A79: pop     esi
0x6C4A7A: pop     ebp
0x6C4A7B: pop     ebx
0x6C4A7C: add     esp, 1Ch
0x6C4A7F: retn    8
0x6C4A82: cmp     ebp, ebx
0x6C4A84: mov     [esp+30h+var_10], ebp
0x6C4A88: jz      short loc_6C4A94
0x6C4A8A: lea     eax, [ebp+4]
0x6C4A8D: push    eax; lpAddend
0x6C4A8E: call    dword ptr ds:0A28078h
0x6C4A94: push    esi
0x6C4A95: lea     ecx, [esp+34h+var_18]
0x6C4A99: push    ecx
0x6C4A9A: lea     ecx, [edi+3Ch]
0x6C4A9D: mov     [esp+38h+var_4], ebx
0x6C4AA1: call    sub_6D7F60
0x6C4AA6: mov     eax, [esp+30h+var_18]
0x6C4AAA: cmp     eax, ebx
0x6C4AAC: jz      short loc_6C4ACC
0x6C4AAE: mov     esi, eax
0x6C4AB0: add     eax, 4
0x6C4AB3: push    eax; lpAddend
0x6C4AB4: call    dword ptr ds:0A2807Ch
0x6C4ABA: test    eax, eax
0x6C4ABC: jnz     short loc_6C4ACC
0x6C4ABE: cmp     esi, ebx
0x6C4AC0: jz      short loc_6C4ACC
0x6C4AC2: mov     edx, [esi]
0x6C4AC4: mov     eax, [edx]
0x6C4AC6: push    1
0x6C4AC8: mov     ecx, esi
0x6C4ACA: call    eax
0x6C4ACC: mov     edx, [edi+5Ch]
0x6C4ACF: lea     ebx, [edi+58h]
0x6C4AD2: xor     eax, eax
0x6C4AD4: test    edx, edx
0x6C4AD6: jbe     short loc_6C4AEF
0x6C4AD8: mov     esi, [ebx+8]
0x6C4ADB: mov     ecx, esi
0x6C4ADD: lea     ecx, [ecx+0]
0x6C4AE0: cmp     dword ptr [ecx], 0
0x6C4AE3: jnz     short loc_6C4B42
0x6C4AE5: add     eax, 1
0x6C4AE8: add     ecx, 4
0x6C4AEB: cmp     eax, edx
0x6C4AED: jb      short loc_6C4AE0
0x6C4AEF: xor     eax, eax
0x6C4AF1: test    eax, eax
0x6C4AF3: jz      short loc_6C4B57
0x6C4AF5: mov     ecx, [eax+8]
0x6C4AF8: mov     ebp, [eax+4]
0x6C4AFB: mov     eax, [eax]
0x6C4AFD: test    eax, eax
0x6C4AFF: mov     [esp+30h+var_14], ecx
0x6C4B03: jnz     short loc_6C4B32
0x6C4B05: mov     edx, [ebx]
0x6C4B07: mov     eax, [edx+4]
0x6C4B0A: push    ebp
0x6C4B0B: mov     ecx, ebx
0x6C4B0D: call    eax
0x6C4B0F: mov     edx, [ebx+4]
0x6C4B12: add     eax, 1
0x6C4B15: cmp     eax, edx
0x6C4B17: jnb     short loc_6C4B30
0x6C4B19: mov     ecx, [ebx+8]
0x6C4B1C: lea     ecx, [ecx+eax*4]
0x6C4B1F: nop
0x6C4B20: mov     esi, [ecx]
0x6C4B22: test    esi, esi
0x6C4B24: jnz     short loc_6C4B47
0x6C4B26: add     eax, 1
0x6C4B29: add     ecx, 4
0x6C4B2C: cmp     eax, edx
0x6C4B2E: jb      short loc_6C4B20
0x6C4B30: xor     eax, eax
0x6C4B32: mov     edx, [esp+30h+var_14]
0x6C4B36: cmp     edx, [esp+30h+arg_4]
0x6C4B3A: jz      short loc_6C4B4B
0x6C4B3C: test    eax, eax
0x6C4B3E: jnz     short loc_6C4AF5
0x6C4B40: jmp     short loc_6C4B53
0x6C4B42: mov     eax, [esi+eax*4]
0x6C4B45: jmp     short loc_6C4AF1
0x6C4B47: mov     eax, esi
0x6C4B49: jmp     short loc_6C4B32
0x6C4B4B: push    ebp
0x6C4B4C: mov     ecx, ebx
0x6C4B4E: call    NiTMap_RemoveAt
0x6C4B53: mov     ebp, [esp+30h+var_1C]
0x6C4B57: mov     ecx, [edi+54h]
0x6C4B5A: xor     eax, eax
0x6C4B5C: or      ebx, 0FFFFFFFFh
0x6C4B5F: test    ecx, ecx
0x6C4B61: jbe     short loc_6C4B86
0x6C4B63: mov     ecx, [edi+4Ch]
0x6C4B66: mov     edx, [esp+30h+arg_4]
0x6C4B6A: cmp     [ecx+eax*4], edx
0x6C4B6D: jnz     short loc_6C4B7E
0x6C4B6F: add     [edi+54h], ebx
0x6C4B72: mov     edx, [edi+54h]
0x6C4B75: mov     ecx, [edi+4Ch]
0x6C4B78: mov     edx, [ecx+edx*4]
0x6C4B7B: mov     [ecx+eax*4], edx
0x6C4B7E: add     eax, 1
0x6C4B81: cmp     eax, [edi+54h]
0x6C4B84: jb      short loc_6C4B63
0x6C4B86: mov     ecx, ebp
0x6C4B88: call    sub_6CAC60
0x6C4B8D: mov     edi, [esp+30h+arg_0]
0x6C4B91: lea     esi, [ebp+4]
0x6C4B94: push    esi; lpAddend
0x6C4B95: mov     dword ptr [ebp+40h], 0
0x6C4B9C: mov     [edi], ebp
0x6C4B9E: call    dword ptr ds:0A28078h
0x6C4BA4: push    esi; lpAddend
0x6C4BA5: mov     [esp+34h+var_4], ebx
0x6C4BA9: call    dword ptr ds:0A2807Ch
0x6C4BAF: test    eax, eax
0x6C4BB1: jnz     short loc_6C4BBE
0x6C4BB3: mov     eax, [ebp+0]
0x6C4BB6: mov     edx, [eax]
0x6C4BB8: push    1
0x6C4BBA: mov     ecx, ebp
0x6C4BBC: call    edx
0x6C4BBE: mov     eax, edi
0x6C4BC0: jmp     loc_6C4A6C
