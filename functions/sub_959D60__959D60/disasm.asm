0x959D60: push    ecx
0x959D61: cmp     byte ptr [esp+4+arg_8], 0
0x959D66: push    ebp
0x959D67: mov     ebp, ecx
0x959D69: jnz     short loc_959D70
0x959D6B: call    sub_959CA0
0x959D70: mov     eax, [ebp+14h]
0x959D73: mov     ecx, [esp+8+arg_0]
0x959D77: push    eax
0x959D78: mov     eax, [esp+0Ch+arg_4]
0x959D7C: push    ebp
0x959D7D: push    eax
0x959D7E: push    ecx
0x959D7F: call    sub_95D540
0x959D84: add     esp, 10h
0x959D87: test    al, al
0x959D89: jnz     short loc_959D92
0x959D8B: xor     al, al
0x959D8D: pop     ebp
0x959D8E: pop     ecx
0x959D8F: retn    0Ch
0x959D92: movzx   eax, word ptr [ebp+24h]
0x959D96: test    ax, ax
0x959D99: jz      short loc_959D8B
0x959D9B: push    edi
0x959D9C: mov     edi, 1
0x959DA1: cmp     [ebp+4], edi
0x959DA4: jz      loc_959EAF
0x959DAA: cmp     dword ptr [ebp+8], 0
0x959DAE: jz      loc_959EAF
0x959DB4: cmp     ax, di
0x959DB7: jbe     loc_959EAF
0x959DBD: cmp     dword ptr [ebp+0], 0
0x959DC1: push    ebx
0x959DC2: push    esi
0x959DC3: movzx   esi, word ptr [ebp+22h]
0x959DC7: mov     [esp+14h+var_4], esi
0x959DCB: jnz     loc_959E57
0x959DD1: xor     edx, edx
0x959DD3: test    esi, esi
0x959DD5: mov     [esp+14h+arg_4], edx
0x959DD9: jbe     loc_959EAD
0x959DDF: nop
0x959DE0: mov     eax, [ebp+1Ch]
0x959DE3: mov     ebx, [eax+edx*4]
0x959DE6: test    ebx, ebx
0x959DE8: jz      short loc_959E42
0x959DEA: lea     edi, [edx+1]
0x959DED: cmp     edi, esi
0x959DEF: jnb     short loc_959E42
0x959DF1: mov     ecx, [ebp+1Ch]
0x959DF4: mov     ecx, [ecx+edi*4]
0x959DF7: test    ecx, ecx
0x959DF9: jz      short loc_959E3B
0x959DFB: fld     dword ptr [ecx+14h]
0x959DFE: fld     dword ptr [ebx+14h]
0x959E01: fcompp
0x959E03: fnstsw  ax
0x959E05: test    ah, 41h
0x959E08: jnz     short loc_959E3B
0x959E0A: mov     eax, ebx
0x959E0C: mov     [esp+14h+arg_0], eax
0x959E10: lea     eax, [esp+14h+arg_8]
0x959E14: mov     ebx, ecx
0x959E16: push    eax
0x959E17: lea     esi, [ebp+18h]
0x959E1A: push    edx
0x959E1B: mov     ecx, esi
0x959E1D: mov     [esp+1Ch+arg_8], ebx
0x959E21: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x959E26: lea     ecx, [esp+14h+arg_0]
0x959E2A: push    ecx
0x959E2B: push    edi
0x959E2C: mov     ecx, esi
0x959E2E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x959E33: mov     edx, [esp+14h+arg_4]
0x959E37: mov     esi, [esp+14h+var_4]
0x959E3B: add     edi, 1
0x959E3E: cmp     edi, esi
0x959E40: jb      short loc_959DF1
0x959E42: add     edx, 1
0x959E45: cmp     edx, esi
0x959E47: mov     [esp+14h+arg_4], edx
0x959E4B: jb      short loc_959DE0
0x959E4D: pop     esi
0x959E4E: pop     ebx
0x959E4F: pop     edi
0x959E50: mov     al, 1
0x959E52: pop     ebp
0x959E53: pop     ecx
0x959E54: retn    0Ch
0x959E57: cmp     esi, edi
0x959E59: mov     edx, [ebp+1Ch]
0x959E5C: mov     ebx, [edx]
0x959E5E: mov     [esp+14h+arg_8], ebx
0x959E62: jbe     short loc_959E9E
0x959E64: push    edi
0x959E65: lea     ecx, [ebp+18h]
0x959E68: call    sub_405020
0x959E6D: mov     ecx, eax
0x959E6F: test    ecx, ecx
0x959E71: jz      short loc_959E93
0x959E73: fld     dword ptr [ecx+14h]
0x959E76: fld     dword ptr [ebx+14h]
0x959E79: fcompp
0x959E7B: fnstsw  ax
0x959E7D: test    ah, 41h
0x959E80: jnz     short loc_959E8C
0x959E82: mov     eax, ebx
0x959E84: test    eax, eax
0x959E86: mov     ebx, ecx
0x959E88: jz      short loc_959E93
0x959E8A: mov     ecx, eax
0x959E8C: push    1
0x959E8E: call    sub_959C40
0x959E93: add     edi, 1
0x959E96: cmp     edi, esi
0x959E98: jb      short loc_959E64
0x959E9A: mov     [esp+14h+arg_8], ebx
0x959E9E: lea     eax, [esp+14h+arg_8]
0x959EA2: push    eax
0x959EA3: push    0
0x959EA5: lea     ecx, [ebp+18h]
0x959EA8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x959EAD: pop     esi
0x959EAE: pop     ebx
0x959EAF: pop     edi
0x959EB0: mov     al, 1
0x959EB2: pop     ebp
0x959EB3: pop     ecx
0x959EB4: retn    0Ch
