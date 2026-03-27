0x898F10: push    ebx
0x898F11: push    ebp
0x898F12: mov     ebp, [esp+8+arg_0]
0x898F16: push    esi
0x898F17: mov     esi, [ebp+30h]
0x898F1A: test    esi, esi
0x898F1C: push    edi
0x898F1D: jz      short loc_898F50
0x898F1F: mov     eax, [esi+38h]
0x898F22: xor     edi, edi
0x898F24: test    eax, eax
0x898F26: jle     short loc_898F50
0x898F28: test    edi, edi
0x898F2A: jnz     short loc_898F38
0x898F2C: mov     eax, [esi+34h]
0x898F2F: mov     ecx, [eax]
0x898F31: mov     eax, [ecx+14h]
0x898F34: test    eax, eax
0x898F36: jz      short loc_898F48
0x898F38: mov     edx, [esi+34h]
0x898F3B: mov     eax, [edx+edi*4]
0x898F3E: mov     ecx, [esp+10h+arg_4]
0x898F42: push    eax
0x898F43: call    sub_8DA080
0x898F48: mov     eax, [esi+38h]
0x898F4B: inc     edi
0x898F4C: cmp     edi, eax
0x898F4E: jl      short loc_898F28
0x898F50: mov     ebx, [ebp+38h]
0x898F53: mov     ecx, [ebp+3Ch]
0x898F56: lea     edx, [ebx+ecx*4]
0x898F59: cmp     ebx, edx
0x898F5B: jz      short loc_898F97
0x898F5D: lea     ecx, [ecx+0]
0x898F60: mov     esi, [ebx]
0x898F62: mov     eax, [esi+38h]
0x898F65: add     esi, 34h ; '4'
0x898F68: xor     edi, edi
0x898F6A: test    eax, eax
0x898F6C: jle     short loc_898F87
0x898F6E: mov     edi, edi
0x898F70: mov     eax, [esi]
0x898F72: mov     ecx, [eax+edi*4]
0x898F75: push    ecx
0x898F76: mov     ecx, [esp+14h+arg_4]
0x898F7A: call    sub_8DA080
0x898F7F: mov     eax, [esi+4]
0x898F82: inc     edi
0x898F83: cmp     edi, eax
0x898F85: jl      short loc_898F70
0x898F87: mov     edx, [ebp+3Ch]
0x898F8A: mov     eax, [ebp+38h]
0x898F8D: add     ebx, 4
0x898F90: lea     ecx, [eax+edx*4]
0x898F93: cmp     ebx, ecx
0x898F95: jnz     short loc_898F60
0x898F97: mov     ebx, [ebp+44h]
0x898F9A: mov     edx, [ebp+48h]
0x898F9D: lea     eax, [ebx+edx*4]
0x898FA0: cmp     ebx, eax
0x898FA2: jz      short loc_898FD9
0x898FA4: mov     esi, [ebx]
0x898FA6: mov     eax, [esi+38h]
0x898FA9: add     esi, 34h ; '4'
0x898FAC: xor     edi, edi
0x898FAE: test    eax, eax
0x898FB0: jle     short loc_898FC9
0x898FB2: mov     ecx, [esi]
0x898FB4: mov     edx, [ecx+edi*4]
0x898FB7: mov     ecx, [esp+10h+arg_4]
0x898FBB: push    edx
0x898FBC: call    sub_8DA080
0x898FC1: mov     eax, [esi+4]
0x898FC4: inc     edi
0x898FC5: cmp     edi, eax
0x898FC7: jl      short loc_898FB2
0x898FC9: mov     eax, [ebp+48h]
0x898FCC: mov     ecx, [ebp+44h]
0x898FCF: add     ebx, 4
0x898FD2: lea     edx, [ecx+eax*4]
0x898FD5: cmp     ebx, edx
0x898FD7: jnz     short loc_898FA4
0x898FD9: pop     edi
0x898FDA: pop     esi
0x898FDB: pop     ebp
0x898FDC: pop     ebx
0x898FDD: retn
