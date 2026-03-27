0x8E6B20: sub     esp, 8
0x8E6B23: push    ebx
0x8E6B24: push    ebp
0x8E6B25: mov     ebp, [esp+10h+arg_4]
0x8E6B29: movzx   eax, byte ptr [ebp+0]
0x8E6B2D: sub     eax, 2
0x8E6B30: push    esi
0x8E6B31: push    edi
0x8E6B32: jz      short loc_8E6B42
0x8E6B34: sub     eax, 2
0x8E6B37: jz      loc_8E6C06
0x8E6B3D: sub     eax, 2
0x8E6B40: jnz     short loc_8E6B60
0x8E6B42: movzx   edx, byte ptr [ebp+1]
0x8E6B46: mov     eax, [ebp+10h]
0x8E6B49: imul    edx, 34h ; '4'
0x8E6B4C: push    eax
0x8E6B4D: mov     eax, [esp+1Ch+arg_8]
0x8E6B51: lea     ecx, [ebp+20h]
0x8E6B54: push    ecx
0x8E6B55: push    ebp
0x8E6B56: call    dword ptr [edx+eax+1698h]
0x8E6B5D: add     esp, 0Ch
0x8E6B60: lea     ecx, [ebp+0Ch]
0x8E6B63: mov     [esp+18h+var_8], ecx
0x8E6B67: add     ebp, 14h
0x8E6B6A: mov     [esp+18h+var_4], 2
0x8E6B72: mov     esi, [ebp+0]
0x8E6B75: mov     edi, [esi+28h]
0x8E6B78: mov     edx, [esp+18h+var_8]
0x8E6B7C: movzx   ecx, word ptr [edx]
0x8E6B7F: mov     edx, [esi+24h]
0x8E6B82: lea     eax, [esi+24h]
0x8E6B85: dec     edi
0x8E6B86: mov     [eax+4], edi
0x8E6B89: mov     ebx, [edx+edi*8]
0x8E6B8C: mov     [edx+ecx*8], ebx
0x8E6B8F: mov     edi, [edx+edi*8+4]
0x8E6B93: mov     [edx+ecx*8+4], edi
0x8E6B97: cmp     ecx, [esi+28h]
0x8E6B9A: jge     short loc_8E6BB0
0x8E6B9C: mov     edx, [eax]
0x8E6B9E: mov     edi, [edx+ecx*8]
0x8E6BA1: mov     ebx, [edi+14h]
0x8E6BA4: xor     edx, edx
0x8E6BA6: cmp     ebx, esi
0x8E6BA8: setnz   dl
0x8E6BAB: mov     [edi+edx*2+0Ch], cx
0x8E6BB0: mov     ecx, [eax+4]
0x8E6BB3: lea     edx, [ecx+ecx+8]
0x8E6BB7: mov     ecx, [eax+8]
0x8E6BBA: and     ecx, 3FFFFFFFh
0x8E6BC0: cmp     edx, ecx
0x8E6BC2: jg      short loc_8E6BD3
0x8E6BC4: push    0
0x8E6BC6: push    0
0x8E6BC8: push    8
0x8E6BCA: push    eax
0x8E6BCB: call    sub_8A6F90
0x8E6BD0: add     esp, 10h
0x8E6BD3: mov     ecx, [esp+18h+var_8]
0x8E6BD7: mov     eax, [esp+18h+var_4]
0x8E6BDB: add     ecx, 2
0x8E6BDE: add     ebp, 4
0x8E6BE1: dec     eax
0x8E6BE2: mov     [esp+18h+var_8], ecx
0x8E6BE6: mov     [esp+18h+var_4], eax
0x8E6BEA: jnz     short loc_8E6B72
0x8E6BEC: mov     edx, [esp+18h+arg_4]
0x8E6BF0: mov     eax, [esp+18h+arg_0]
0x8E6BF4: push    edx
0x8E6BF5: push    eax
0x8E6BF6: call    sub_8E67F0
0x8E6BFB: add     esp, 8
0x8E6BFE: pop     edi
0x8E6BFF: pop     esi
0x8E6C00: pop     ebp
0x8E6C01: pop     ebx
0x8E6C02: add     esp, 8
0x8E6C05: retn
0x8E6C06: movzx   eax, byte ptr [ebp+1]
0x8E6C0A: mov     ecx, [ebp+10h]
0x8E6C0D: imul    eax, 34h ; '4'
0x8E6C10: push    ecx
0x8E6C11: mov     ecx, [esp+1Ch+arg_8]
0x8E6C15: lea     edx, [ebp+30h]
0x8E6C18: push    edx
0x8E6C19: push    ebp
0x8E6C1A: call    dword ptr [eax+ecx+1698h]
0x8E6C21: jmp     loc_8E6B5D
