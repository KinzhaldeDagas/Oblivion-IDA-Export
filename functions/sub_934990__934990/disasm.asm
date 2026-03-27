0x934990: push    ebp
0x934991: mov     ebp, esp
0x934993: and     esp, 0FFFFFFF0h
0x934996: sub     esp, 254h
0x93499C: mov     eax, [ebp+arg_4]
0x93499F: mov     eax, [eax+4]
0x9349A2: mov     edx, [ebp+arg_0]
0x9349A5: mov     [esp+254h+var_21C], eax
0x9349A9: mov     ecx, [eax+8]
0x9349AC: mov     eax, [edx]
0x9349AE: mov     [esp+254h+var_220], ecx
0x9349B2: mov     eax, [eax]
0x9349B4: mov     ecx, [eax]
0x9349B6: push    ebx
0x9349B7: lea     edx, [ecx+eax+10h]
0x9349BB: mov     ecx, large fs:2Ch
0x9349C2: push    esi
0x9349C3: mov     [esp+25Ch+var_238], eax
0x9349C7: push    edi
0x9349C8: lea     edi, [eax+10h]
0x9349CB: mov     eax, ds:0BA9DE4h
0x9349D0: mov     eax, [ecx+eax*4]
0x9349D3: mov     [esp+260h+var_230], eax
0x9349D7: mov     eax, [eax+19Ch]
0x9349DD: mov     ecx, [eax+64h]
0x9349E0: xor     esi, esi
0x9349E2: cmp     ecx, esi
0x9349E4: mov     [esp+260h+var_22C], edx
0x9349E8: mov     [esp+260h+var_240], 1
0x9349F0: mov     [esp+260h+var_244], esi
0x9349F4: mov     [esp+260h+var_23C], esi
0x9349F8: jz      short loc_934A09
0x9349FA: dec     dword ptr [eax+0A8h]
0x934A00: mov     edx, [ecx]
0x934A02: mov     [eax+64h], edx
0x934A05: mov     eax, ecx
0x934A07: jmp     short loc_934A18
0x934A09: mov     ecx, ds:0BA7D98h
0x934A0F: mov     eax, [ecx]
0x934A11: push    1Ch
0x934A13: push    0Ch
0x934A15: call    dword ptr [eax+18h]
0x934A18: cmp     eax, esi
0x934A1A: jz      short loc_934A29
0x934A1C: mov     [eax], esi
0x934A1E: mov     esi, eax
0x934A20: mov     [esp+260h+var_24C], eax
0x934A24: add     esi, 10h
0x934A27: jmp     short loc_934A36
0x934A29: mov     [esp+260h+var_24C], esi
0x934A2D: add     esi, 10h
0x934A30: jmp     short loc_934A36
0x934A32: mov     edi, [esp+260h+var_248]
0x934A36: movzx   ebx, byte ptr [edi+3]
0x934A3A: shr     ebx, 4
0x934A3D: dec     ebx
0x934A3E: mov     [esp+260h+var_234], edi
0x934A42: js      short loc_934A7A
0x934A44: mov     edx, edi
0x934A46: sub     edx, esi
0x934A48: inc     ebx
0x934A49: lea     ecx, [edi+0Ch]
0x934A4C: lea     eax, [esi+8]
0x934A4F: mov     [esp+260h+var_248], ebx
0x934A53: mov     ebx, [ecx-0Ch]
0x934A56: mov     [eax-8], ebx
0x934A59: mov     ebx, [ecx-8]
0x934A5C: mov     [eax-4], ebx
0x934A5F: mov     ebx, [edx+eax]
0x934A62: mov     [eax], ebx
0x934A64: mov     ebx, [ecx]
0x934A66: mov     [eax+4], ebx
0x934A69: mov     ebx, [esp+260h+var_248]
0x934A6D: add     ecx, 10h
0x934A70: add     eax, 10h
0x934A73: dec     ebx
0x934A74: mov     [esp+260h+var_248], ebx
0x934A78: jnz     short loc_934A53
0x934A7A: movzx   ecx, byte ptr [edi+3]
0x934A7E: mov     edx, [esp+260h+var_234]
0x934A82: mov     eax, [ebp+arg_4]
0x934A85: add     edi, ecx
0x934A87: mov     ecx, [eax]
0x934A89: mov     [esp+260h+var_248], edi
0x934A8D: mov     edi, [edx+8]
0x934A90: mov     edx, [eax+4]
0x934A93: mov     [esp+260h+var_218], ecx
0x934A97: mov     ecx, [eax+8]
0x934A9A: mov     [esp+260h+var_214], edx
0x934A9E: mov     edx, [eax+0Ch]
0x934AA1: mov     [esp+260h+var_210], ecx
0x934AA5: mov     ecx, [eax+10h]
0x934AA8: mov     [esp+260h+var_20C], edx
0x934AAC: mov     edx, [eax+14h]
0x934AAF: mov     [esp+260h+var_208], ecx
0x934AB3: mov     [esp+260h+var_204], edx
0x934AB7: movzx   eax, byte ptr [esi]
0x934ABA: cmp     eax, 6; switch 7 cases
0x934ABD: mov     ebx, 10h
0x934AC2: ja      def_934AC8
0x934AC8: jmp     ds:jpt_934AC8[eax*4]; switch jump
0x934ACF: mov     ebx, 20h ; ' '; jumptable 00934AC8 case 5
0x934AD4: mov     eax, [ebp+arg_4]; jumptable 00934AC8 case 3
0x934AD7: mov     ecx, [eax+8]
0x934ADA: mov     edx, [ecx]
0x934ADC: lea     eax, [esp+260h+var_200]
0x934AE0: push    eax
0x934AE1: push    edi
0x934AE2: call    dword ptr [edx+28h]
0x934AE5: mov     ecx, [ebp+arg_4]
0x934AE8: mov     edx, [ecx]
0x934AEA: add     ebx, esi
0x934AEC: push    ebx
0x934AED: mov     [esp+26Ch+var_230], eax
0x934AF1: lea     ecx, [esp+26Ch+var_220]
0x934AF5: lea     eax, [esp+26Ch+var_230]
0x934AF9: push    esi
0x934AFA: push    ecx
0x934AFB: mov     [esp+274h+var_22C], edi
0x934AFF: mov     [esp+274h+var_21C], edx
0x934B03: mov     [esp+274h+var_220], eax
0x934B07: call    [ebp+arg_8]
0x934B0A: add     esp, 0Ch
0x934B0D: mov     esi, eax
0x934B0F: jmp     short def_934AC8
0x934B11: mov     ebx, 20h ; ' '; jumptable 00934AC8 case 4
0x934B16: mov     edx, [ebp+arg_4]; jumptable 00934AC8 cases 2,6
0x934B19: mov     ecx, [edx+8]
0x934B1C: mov     eax, [ecx]
0x934B1E: lea     edx, [esp+260h+var_200]
0x934B22: push    edx
0x934B23: push    edi
0x934B24: call    dword ptr [eax+28h]
0x934B27: mov     [esp+268h+var_230], eax
0x934B2B: mov     [esp+268h+var_22C], edi
0x934B2F: mov     eax, [ebp+arg_4]; jumptable 00934AC8 case 0
0x934B32: mov     ecx, [eax]
0x934B34: add     ebx, esi
0x934B36: push    ebx
0x934B37: lea     eax, [esp+26Ch+var_220]
0x934B3B: lea     edx, [esp+26Ch+var_230]
0x934B3F: push    esi
0x934B40: push    eax
0x934B41: mov     [esp+274h+var_220], ecx
0x934B45: mov     [esp+274h+var_21C], edx
0x934B49: call    [ebp+arg_8]
0x934B4C: add     esp, 0Ch
0x934B4F: mov     esi, eax
0x934B51: jmp     short def_934AC8
0x934B53: add     esi, 10h; jumptable 00934AC8 case 1
