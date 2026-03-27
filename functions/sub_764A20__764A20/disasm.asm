0x764A20: sub     esp, 28h
0x764A23: push    ebp
0x764A24: mov     ebp, [esp+2Ch+arg_0]
0x764A28: mov     eax, [ebp+0]
0x764A2B: mov     edx, [eax+64h]
0x764A2E: push    esi
0x764A2F: mov     esi, ecx
0x764A31: push    edi
0x764A32: mov     ecx, ebp
0x764A34: mov     [esp+34h+var_28], esi
0x764A38: call    edx
0x764A3A: mov     edi, eax
0x764A3C: mov     eax, [esi]
0x764A3E: mov     edx, [eax+9Ch]
0x764A44: mov     ecx, esi
0x764A46: mov     [esp+34h+var_24], edi
0x764A4A: call    edx
0x764A4C: cmp     edi, eax
0x764A4E: jbe     short loc_764A5B
0x764A50: pop     edi
0x764A51: pop     esi
0x764A52: xor     al, al
0x764A54: pop     ebp
0x764A55: add     esp, 28h
0x764A58: retn    4
0x764A5B: push    ebx
0x764A5C: xor     ebx, ebx
0x764A5E: test    edi, edi
0x764A60: mov     [esp+38h+arg_0], ebx
0x764A64: jbe     loc_764B4A
0x764A6A: lea     ebx, [ebx+0]
0x764A70: mov     eax, [ebp+0]
0x764A73: mov     edx, [eax+80h]
0x764A79: push    ebx
0x764A7A: mov     ecx, ebp
0x764A7C: call    edx
0x764A7E: mov     esi, eax
0x764A80: test    esi, esi
0x764A82: jz      loc_764B8E
0x764A88: cmp     dword ptr [esi+0Ch], 0
0x764A8C: jz      loc_764B8E
0x764A92: xor     edi, edi
0x764A94: test    ebx, ebx
0x764A96: jbe     loc_764B39
0x764A9C: lea     esp, [esp+0]
0x764AA0: mov     eax, [ebp+0]
0x764AA3: mov     edx, [eax+80h]
0x764AA9: push    edi
0x764AAA: mov     ecx, ebp
0x764AAC: call    edx
0x764AAE: mov     eax, [eax+0Ch]
0x764AB1: mov     ecx, [eax]
0x764AB3: lea     edx, [esp+38h+var_20]
0x764AB7: push    edx
0x764AB8: push    eax
0x764AB9: mov     eax, [ecx+30h]
0x764ABC: call    eax
0x764ABE: test    eax, eax
0x764AC0: jl      loc_764B8E
0x764AC6: cmp     [esp+38h+var_10], 0
0x764ACB: jnz     loc_764B8E
0x764AD1: mov     edx, [esi]
0x764AD3: mov     eax, [edx+4]
0x764AD6: mov     ecx, esi
0x764AD8: call    eax
0x764ADA: cmp     eax, [esp+38h+var_8]
0x764ADE: jnz     loc_764B8E
0x764AE4: mov     edx, [esi]
0x764AE6: mov     eax, [edx+8]
0x764AE9: mov     ecx, esi
0x764AEB: call    eax
0x764AED: cmp     eax, [esp+38h+var_4]
0x764AF1: jnz     loc_764B8E
0x764AF7: mov     ecx, [esp+38h+var_28]
0x764AFB: mov     edx, [ecx]
0x764AFD: mov     eax, [edx+0A0h]
0x764B03: call    eax
0x764B05: test    al, al
0x764B07: jnz     short loc_764B2E
0x764B09: mov     eax, [esp+38h+var_20]
0x764B0D: cmp     eax, 76h ; 'v'
0x764B10: jb      short loc_764B16
0x764B12: xor     bl, bl
0x764B14: jmp     short loc_764B1C
0x764B16: mov     bl, ds:byte_B42070[eax]
0x764B1C: mov     edx, [esi]
0x764B1E: mov     eax, [edx+0Ch]
0x764B21: mov     ecx, esi
0x764B23: call    eax
0x764B25: cmp     bl, [eax+1]
0x764B28: jnz     short loc_764B8E
0x764B2A: mov     ebx, [esp+38h+arg_0]
0x764B2E: add     edi, 1
0x764B31: cmp     edi, ebx
0x764B33: jb      loc_764AA0
0x764B39: add     ebx, 1
0x764B3C: cmp     ebx, [esp+38h+var_24]
0x764B40: mov     [esp+38h+arg_0], ebx
0x764B44: jb      loc_764A70
0x764B4A: mov     edx, [ebp+0]
0x764B4D: mov     eax, [edx+84h]
0x764B53: mov     ecx, ebp
0x764B55: call    eax
0x764B57: mov     esi, eax
0x764B59: test    esi, esi
0x764B5B: jz      short loc_764B9E
0x764B5D: mov     edx, [esi]
0x764B5F: mov     eax, [edx+10h]
0x764B62: mov     ecx, esi
0x764B64: call    eax
0x764B66: test    eax, eax
0x764B68: jz      short loc_764B7E
0x764B6A: lea     ebx, [ebx+0]
0x764B70: cmp     eax, offset unk_B4263C
0x764B75: jz      short loc_764B9A
0x764B77: mov     eax, [eax+4]
0x764B7A: test    eax, eax
0x764B7C: jnz     short loc_764B70
0x764B7E: xor     al, al
0x764B80: neg     al
0x764B82: sbb     eax, eax
0x764B84: and     eax, esi
0x764B86: jz      short loc_764B9E
0x764B88: cmp     dword ptr [eax+0Ch], 0
0x764B8C: jnz     short loc_764B9E
0x764B8E: pop     ebx
0x764B8F: pop     edi
0x764B90: pop     esi
0x764B91: xor     al, al
0x764B93: pop     ebp
0x764B94: add     esp, 28h
0x764B97: retn    4
0x764B9A: mov     al, 1
0x764B9C: jmp     short loc_764B80
0x764B9E: pop     ebx
0x764B9F: pop     edi
0x764BA0: pop     esi
0x764BA1: mov     al, 1
0x764BA3: pop     ebp
0x764BA4: add     esp, 28h
0x764BA7: retn    4
