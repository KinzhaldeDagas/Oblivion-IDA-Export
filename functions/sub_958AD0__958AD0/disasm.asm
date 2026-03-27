0x958AD0: sub     esp, 8
0x958AD3: mov     eax, [esp+8+arg_0]
0x958AD7: push    ebx
0x958AD8: push    ebp
0x958AD9: xor     ebp, ebp
0x958ADB: push    esi
0x958ADC: add     eax, 1Ch
0x958ADF: push    edi
0x958AE0: mov     edi, ecx
0x958AE2: mov     [esp+18h+var_4], ebp
0x958AE6: mov     [esp+18h+var_8], eax
0x958AEA: lea     ebx, [ebx+0]
0x958AF0: mov     ecx, [esp+18h+var_8]
0x958AF4: mov     ebx, [ecx]
0x958AF6: mov     esi, [ebx+0Ch]
0x958AF9: mov     eax, [esi+44h]
0x958AFC: test    eax, eax
0x958AFE: jnz     short loc_958B3E
0x958B00: mov     eax, [esp+18h+arg_4]
0x958B04: lea     edx, [edi+4]
0x958B07: push    edx
0x958B08: push    edi
0x958B09: push    eax
0x958B0A: mov     ecx, esi
0x958B0C: call    sub_958A30
0x958B11: cmp     eax, 1
0x958B14: mov     [esi+44h], eax
0x958B17: jnz     short loc_958B39
0x958B19: mov     ecx, [esp+18h+arg_C]
0x958B1D: mov     edx, [esp+18h+arg_8]
0x958B21: mov     eax, [esp+18h+arg_4]
0x958B25: push    ecx
0x958B26: push    edx
0x958B27: push    eax
0x958B28: push    esi
0x958B29: mov     ecx, edi
0x958B2B: call    sub_958AD0
0x958B30: mov     ebp, eax
0x958B32: cmp     ebp, 2
0x958B35: jz      short loc_958B75
0x958B37: jmp     short loc_958B3E
0x958B39: cmp     eax, 4
0x958B3C: jz      short loc_958B70
0x958B3E: cmp     dword ptr [esi+44h], 2
0x958B42: jnz     short loc_958B55
0x958B44: mov     ecx, [ebx]
0x958B46: mov     eax, [esp+18h+arg_8]
0x958B4A: mov     edx, [esp+18h+arg_C]
0x958B4E: mov     [ecx+30h], ebx
0x958B51: inc     dword ptr [eax]
0x958B53: mov     [edx], ebx
0x958B55: mov     eax, [esp+18h+var_4]
0x958B59: mov     edx, [esp+18h+var_8]
0x958B5D: inc     eax
0x958B5E: add     edx, 10h
0x958B61: cmp     eax, 3
0x958B64: mov     [esp+18h+var_4], eax
0x958B68: mov     [esp+18h+var_8], edx
0x958B6C: jl      short loc_958AF0
0x958B6E: jmp     short loc_958B75
0x958B70: mov     ebp, 2
0x958B75: mov     eax, [esp+18h+arg_0]
0x958B79: mov     dword ptr [eax+10h], 7F7FFFFFh
0x958B80: mov     ecx, [edi+0Ch]
0x958B83: mov     [edi+ecx*4+0DE0h], eax
0x958B8A: inc     dword ptr [edi+0Ch]
0x958B8D: pop     edi
0x958B8E: pop     esi
0x958B8F: mov     eax, ebp
0x958B91: pop     ebp
0x958B92: pop     ebx
0x958B93: add     esp, 8
0x958B96: retn    10h
