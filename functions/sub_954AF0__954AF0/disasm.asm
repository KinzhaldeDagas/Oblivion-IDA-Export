0x954AF0: sub     esp, 8
0x954AF3: push    ebp
0x954AF4: mov     ebp, [esp+0Ch+arg_0]
0x954AF8: mov     edx, [ebp+0B8h]
0x954AFE: push    esi
0x954AFF: push    edi
0x954B00: mov     edi, ecx
0x954B02: mov     ecx, [edi+10h]
0x954B05: mov     eax, [ecx+0Ch]
0x954B08: mov     [esp+14h+var_4], eax
0x954B0C: mov     eax, [edx]
0x954B0E: mov     edx, [esp+14h+arg_8]
0x954B12: sub     eax, [edx+34h]
0x954B15: cmp     eax, 20h ; ' '
0x954B18: mov     [esp+14h+var_8], edi
0x954B1C: push    eax
0x954B1D: jnb     short loc_954B28
0x954B1F: push    30h ; '0'
0x954B21: call    sub_956550
0x954B26: jmp     short loc_954B5F
0x954B28: cmp     eax, 100h
0x954B2D: jnb     short loc_954B38
0x954B2F: push    50h ; 'P'
0x954B31: call    sub_956580
0x954B36: jmp     short loc_954B5F
0x954B38: cmp     eax, 10000h
0x954B3D: jnb     short loc_954B48
0x954B3F: push    51h ; 'Q'
0x954B41: call    sub_9565E0
0x954B46: jmp     short loc_954B5F
0x954B48: cmp     eax, 1000000h
0x954B4D: jnb     short loc_954B58
0x954B4F: push    52h ; 'R'
0x954B51: call    sub_956670
0x954B56: jmp     short loc_954B5F
0x954B58: push    53h ; 'S'
0x954B5A: call    sub_9567C0
0x954B5F: mov     eax, [ebp+2Ch]
0x954B62: xor     esi, esi
0x954B64: test    eax, eax
0x954B66: jle     short loc_954B9C
0x954B68: push    ebx
0x954B69: mov     ebx, [esp+18h+arg_4]
0x954B6D: lea     edi, [ebp+30h]
0x954B70: add     ebx, 44h ; 'D'
0x954B73: mov     eax, [edi]
0x954B75: test    eax, eax
0x954B77: jz      short loc_954B89
0x954B79: cmp     dword ptr [ebx], 0
0x954B7C: jz      short loc_954B89
0x954B7E: mov     ecx, [esp+18h+var_8]
0x954B82: push    eax
0x954B83: push    esi
0x954B84: call    sub_9548D0
0x954B89: mov     eax, [ebp+2Ch]
0x954B8C: inc     esi
0x954B8D: add     ebx, 4
0x954B90: add     edi, 4
0x954B93: cmp     esi, eax
0x954B95: jl      short loc_954B73
0x954B97: mov     edi, [esp+18h+var_8]
0x954B9B: pop     ebx
0x954B9C: mov     eax, [edi+10h]
0x954B9F: mov     eax, [eax+0Ch]
0x954BA2: mov     ecx, [esp+14h+var_4]
0x954BA6: pop     edi
0x954BA7: pop     esi
0x954BA8: sub     eax, ecx
0x954BAA: pop     ebp
0x954BAB: add     esp, 8
0x954BAE: retn    0Ch
