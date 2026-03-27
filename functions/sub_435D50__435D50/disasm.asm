0x435D50: push    ecx
0x435D51: mov     eax, [esp+4+arg_0]
0x435D55: push    ebx
0x435D56: push    ebp
0x435D57: mov     ebp, [esp+0Ch+arg_4]
0x435D5B: push    esi
0x435D5C: mov     esi, ecx
0x435D5E: lea     ecx, ds:0[eax*4]
0x435D65: push    edi
0x435D66: mov     [esp+14h+var_4], ecx
0x435D6A: lea     ebx, [ebx+0]
0x435D70: mov     edx, [esi]
0x435D72: mov     eax, [edx+0Ch]
0x435D75: add     eax, [esp+14h+var_4]
0x435D79: mov     [esi+10h], eax
0x435D7C: mov     ecx, eax
0x435D7E: mov     edx, [ecx]
0x435D80: mov     [esi+14h], edx
0x435D83: mov     eax, [esi+14h]
0x435D86: mov     ecx, [esi+8]
0x435D89: and     eax, 0FFFFFFFEh
0x435D8C: mov     [ecx], eax
0x435D8E: mov     eax, [esi+14h]
0x435D91: and     eax, 0FFFFFFFEh
0x435D94: mov     [esp+14h+arg_0], eax
0x435D98: mov     edx, [esp+14h+arg_0]
0x435D9C: mov     eax, [esi+10h]
0x435D9F: mov     eax, [eax]
0x435DA1: and     edx, 0FFFFFFFEh
0x435DA4: mov     [esp+14h+arg_0], edx
0x435DA8: mov     ecx, [esp+14h+arg_0]
0x435DAC: cmp     eax, ecx
0x435DAE: jnz     short loc_435D70
0x435DB0: mov     edx, [esi+14h]
0x435DB3: test    edx, 0FFFFFFFEh
0x435DB9: jz      loc_435E3F
0x435DBF: mov     ecx, [esi]
0x435DC1: mov     eax, [ecx]
0x435DC3: mov     edx, [ebp+0]
0x435DC6: mov     eax, [eax+20h]
0x435DC9: push    edx
0x435DCA: call    eax
0x435DCC: mov     eax, [esi+14h]
0x435DCF: mov     ecx, [esi]
0x435DD1: mov     edx, [ecx]
0x435DD3: mov     edx, [edx+24h]
0x435DD6: and     eax, 0FFFFFFFEh
0x435DD9: mov     eax, [eax]
0x435DDB: push    eax
0x435DDC: call    edx
0x435DDE: mov     [ebp+0], eax
0x435DE1: mov     edi, [esi+14h]
0x435DE4: mov     eax, [esp+14h+arg_8]
0x435DE8: mov     ebx, [eax]
0x435DEA: and     edi, 0FFFFFFFEh
0x435DED: add     edi, 4
0x435DF0: cmp     ebx, [edi]
0x435DF2: jz      short loc_435E2A
0x435DF4: test    ebx, ebx
0x435DF6: jz      short loc_435E14
0x435DF8: lea     ecx, [ebx+8]
0x435DFB: push    ecx; lpAddend
0x435DFC: call    ds:InterlockedDecrement
0x435E02: test    eax, eax
0x435E04: jnz     short loc_435E14
0x435E06: test    ebx, ebx
0x435E08: jz      short loc_435E14
0x435E0A: mov     edx, [ebx]
0x435E0C: mov     eax, [edx]
0x435E0E: push    1
0x435E10: mov     ecx, ebx
0x435E12: call    eax
0x435E14: mov     edi, [edi]
0x435E16: test    edi, edi
0x435E18: mov     ecx, [esp+14h+arg_8]
0x435E1C: mov     [ecx], edi
0x435E1E: jz      short loc_435E2A
0x435E20: add     edi, 8
0x435E23: push    edi; lpAddend
0x435E24: call    ds:InterlockedIncrement
0x435E2A: mov     ecx, [esi+14h]
0x435E2D: and     ecx, 0FFFFFFFEh
0x435E30: mov     edx, [ecx+8]
0x435E33: mov     al, 1
0x435E35: test    al, dl
0x435E37: jnz     loc_435D70
0x435E3D: jmp     short loc_435E41
0x435E3F: xor     al, al
0x435E41: mov     ecx, [esi+4]
0x435E44: mov     dword ptr [ecx], 0
0x435E4A: mov     edx, [esi+8]
0x435E4D: pop     edi
0x435E4E: mov     dword ptr [edx], 0
0x435E54: mov     ecx, [esi+0Ch]
0x435E57: pop     esi
0x435E58: pop     ebp
0x435E59: mov     dword ptr [ecx], 0
0x435E5F: pop     ebx
0x435E60: pop     ecx
0x435E61: retn    0Ch
