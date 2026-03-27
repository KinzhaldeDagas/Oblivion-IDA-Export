0x98296B: push    ebp
0x98296C: mov     ebp, esp
0x98296E: sub     esp, 14h
0x982971: push    esi
0x982972: push    edi
0x982973: push    [ebp+arg_0]; struct localeinfo_struct *
0x982976: lea     ecx, [ebp+Locale]; this
0x982979: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x98297E: mov     eax, [ebp+arg_8]
0x982981: mov     esi, [ebp+arg_4]
0x982984: xor     edi, edi
0x982986: cmp     eax, edi
0x982988: jz      short loc_98298C
0x98298A: mov     [eax], esi
0x98298C: cmp     esi, edi
0x98298E: jnz     short loc_9829BC
0x982990: call    __errno
0x982995: push    edi
0x982996: push    edi
0x982997: push    edi
0x982998: push    edi
0x982999: push    edi
0x98299A: mov     dword ptr [eax], 16h
0x9829A0: call    __invalid_parameter
0x9829A5: add     esp, 14h
0x9829A8: cmp     [ebp+var_8], 0
0x9829AC: jz      short loc_9829B5
0x9829AE: mov     eax, [ebp+var_C]
0x9829B1: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9829B5: xor     eax, eax
0x9829B7: jmp     loc_982B92
0x9829BC: cmp     [ebp+arg_C], edi
0x9829BF: jz      short loc_9829CD
0x9829C1: cmp     [ebp+arg_C], 2
0x9829C5: jl      short loc_982990
0x9829C7: cmp     [ebp+arg_C], 24h ; '$'
0x9829CB: jg      short loc_982990
0x9829CD: mov     ecx, [ebp+Locale.locinfo]
0x9829D0: push    ebx
0x9829D1: mov     bl, [esi]
0x9829D3: mov     [ebp+var_4], edi
0x9829D6: lea     edi, [esi+1]
0x9829D9: cmp     dword ptr [ecx+0ACh], 1
0x9829E0: jle     short loc_9829F9
0x9829E2: lea     eax, [ebp+Locale]
0x9829E5: push    eax; Locale
0x9829E6: movzx   eax, bl
0x9829E9: push    8; Type
0x9829EB: push    eax; C
0x9829EC: call    __isctype_l
0x9829F1: mov     ecx, [ebp+Locale.locinfo]
0x9829F4: add     esp, 0Ch
0x9829F7: jmp     short loc_982A09
0x9829F9: mov     edx, [ecx+0C8h]
0x9829FF: movzx   eax, bl
0x982A02: movzx   eax, byte ptr [edx+eax*2]
0x982A06: and     eax, 8
0x982A09: test    eax, eax
0x982A0B: jz      short loc_982A12
0x982A0D: mov     bl, [edi]
0x982A0F: inc     edi
0x982A10: jmp     short loc_9829D9
0x982A12: cmp     bl, 2Dh ; '-'
0x982A15: jnz     short loc_982A1D
0x982A17: or      [ebp+arg_10], 2
0x982A1B: jmp     short loc_982A22
0x982A1D: cmp     bl, 2Bh ; '+'
0x982A20: jnz     short loc_982A25
0x982A22: mov     bl, [edi]
0x982A24: inc     edi
0x982A25: mov     eax, [ebp+arg_C]
0x982A28: test    eax, eax
0x982A2A: jl      loc_982B79
0x982A30: cmp     eax, 1
0x982A33: jz      loc_982B79
0x982A39: cmp     eax, 24h ; '$'
0x982A3C: jg      loc_982B79
0x982A42: test    eax, eax
0x982A44: jnz     short loc_982A70
0x982A46: cmp     bl, 30h ; '0'
0x982A49: jz      short loc_982A54
0x982A4B: mov     [ebp+arg_C], 0Ah
0x982A52: jmp     short loc_982A88
0x982A54: mov     al, [edi]
0x982A56: cmp     al, 78h ; 'x'
0x982A58: jz      short loc_982A67
0x982A5A: cmp     al, 58h ; 'X'
0x982A5C: jz      short loc_982A67
0x982A5E: mov     [ebp+arg_C], 8
0x982A65: jmp     short loc_982A88
0x982A67: mov     [ebp+arg_C], 10h
0x982A6E: jmp     short loc_982A7A
0x982A70: cmp     eax, 10h
0x982A73: jnz     short loc_982A88
0x982A75: cmp     bl, 30h ; '0'
0x982A78: jnz     short loc_982A88
0x982A7A: mov     al, [edi]
0x982A7C: cmp     al, 78h ; 'x'
0x982A7E: jz      short loc_982A84
0x982A80: cmp     al, 58h ; 'X'
0x982A82: jnz     short loc_982A88
0x982A84: inc     edi
0x982A85: mov     bl, [edi]
0x982A87: inc     edi
0x982A88: mov     esi, [ecx+0C8h]
0x982A8E: or      eax, 0FFFFFFFFh
0x982A91: xor     edx, edx
0x982A93: div     [ebp+arg_C]
0x982A96: movzx   ecx, bl
0x982A99: movzx   ecx, word ptr [esi+ecx*2]
0x982A9D: test    cl, 4
0x982AA0: jz      short loc_982AAA
0x982AA2: movsx   ecx, bl
0x982AA5: sub     ecx, 30h ; '0'
0x982AA8: jmp     short loc_982AC4
0x982AAA: test    cx, 103h
0x982AAF: jz      short loc_982AE2
0x982AB1: mov     cl, bl
0x982AB3: sub     cl, 61h ; 'a'
0x982AB6: cmp     cl, 19h
0x982AB9: movsx   ecx, bl
0x982ABC: ja      short loc_982AC1
0x982ABE: sub     ecx, 20h ; ' '
0x982AC1: add     ecx, 0FFFFFFC9h
0x982AC4: cmp     ecx, [ebp+arg_C]
0x982AC7: jnb     short loc_982AE2
0x982AC9: or      [ebp+arg_10], 8
0x982ACD: cmp     [ebp+var_4], eax
0x982AD0: jb      short loc_982AF9
0x982AD2: jnz     short loc_982AD8
0x982AD4: cmp     ecx, edx
0x982AD6: jbe     short loc_982AF9
0x982AD8: or      [ebp+arg_10], 4
0x982ADC: cmp     [ebp+arg_8], 0
0x982AE0: jnz     short loc_982B05
0x982AE2: mov     eax, [ebp+arg_10]
0x982AE5: dec     edi
0x982AE6: test    al, 8
0x982AE8: jnz     short loc_982B0A
0x982AEA: cmp     [ebp+arg_8], 0
0x982AEE: jz      short loc_982AF3
0x982AF0: mov     edi, [ebp+arg_4]
0x982AF3: and     [ebp+var_4], 0
0x982AF7: jmp     short loc_982B55
0x982AF9: mov     ebx, [ebp+var_4]
0x982AFC: imul    ebx, [ebp+arg_C]
0x982B00: add     ebx, ecx
0x982B02: mov     [ebp+var_4], ebx
0x982B05: mov     bl, [edi]
0x982B07: inc     edi
0x982B08: jmp     short loc_982A96
0x982B0A: test    al, 4
0x982B0C: mov     esi, 7FFFFFFFh
0x982B11: jnz     short loc_982B2E
0x982B13: test    al, 1
0x982B15: jnz     short loc_982B55
0x982B17: and     eax, 2
0x982B1A: jz      short loc_982B25
0x982B1C: cmp     [ebp+var_4], 80000000h
0x982B23: ja      short loc_982B2E
0x982B25: test    eax, eax
0x982B27: jnz     short loc_982B55
0x982B29: cmp     [ebp+var_4], esi
0x982B2C: jbe     short loc_982B55
0x982B2E: call    __errno
0x982B33: test    byte ptr [ebp+arg_10], 1
0x982B37: mov     dword ptr [eax], 22h ; '"'
0x982B3D: jz      short loc_982B45
0x982B3F: or      [ebp+var_4], 0FFFFFFFFh
0x982B43: jmp     short loc_982B55
0x982B45: mov     al, byte ptr [ebp+arg_10]
0x982B48: and     al, 2
0x982B4A: neg     al
0x982B4C: sbb     eax, eax
0x982B4E: neg     eax
0x982B50: add     eax, esi
0x982B52: mov     [ebp+var_4], eax
0x982B55: mov     eax, [ebp+arg_8]
0x982B58: test    eax, eax
0x982B5A: jz      short loc_982B5E
0x982B5C: mov     [eax], edi
0x982B5E: test    byte ptr [ebp+arg_10], 2
0x982B62: jz      short loc_982B67
0x982B64: neg     [ebp+var_4]
0x982B67: cmp     [ebp+var_8], 0
0x982B6B: jz      short loc_982B74
0x982B6D: mov     eax, [ebp+var_C]
0x982B70: and     dword ptr [eax+70h], 0FFFFFFFDh
0x982B74: mov     eax, [ebp+var_4]
0x982B77: jmp     short loc_982B91
0x982B79: mov     eax, [ebp+arg_8]
0x982B7C: test    eax, eax
0x982B7E: jz      short loc_982B82
0x982B80: mov     [eax], esi
0x982B82: cmp     [ebp+var_8], 0
0x982B86: jz      short loc_982B8F
0x982B88: mov     eax, [ebp+var_C]
0x982B8B: and     dword ptr [eax+70h], 0FFFFFFFDh
0x982B8F: xor     eax, eax
0x982B91: pop     ebx
0x982B92: pop     edi
0x982B93: pop     esi
0x982B94: leave
0x982B95: retn
