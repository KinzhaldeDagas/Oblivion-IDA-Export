0x6F9B20: sub     esp, 8
0x6F9B23: push    ebp
0x6F9B24: push    esi
0x6F9B25: mov     esi, ecx
0x6F9B27: xor     ebp, ebp
0x6F9B29: cmp     [esi+488h], ebp
0x6F9B2F: jz      loc_6F9D7C
0x6F9B35: mov     eax, [esi]
0x6F9B37: mov     edx, [eax+34h]
0x6F9B3A: call    edx
0x6F9B3C: test    al, al
0x6F9B3E: jnz     short loc_6F9B46
0x6F9B40: pop     esi
0x6F9B41: pop     ebp
0x6F9B42: add     esp, 8
0x6F9B45: retn
0x6F9B46: push    ebx
0x6F9B47: push    edi
0x6F9B48: mov     ecx, esi
0x6F9B4A: mov     [esi+270h], ebp
0x6F9B50: mov     [esi+26Ch], ebp
0x6F9B56: mov     [esi+268h], ebp
0x6F9B5C: call    sub_712930
0x6F9B61: mov     edi, [esi+0D8h]
0x6F9B67: push    offset a5_0_0_1; "5.0.0.1"
0x6F9B6C: call    sub_712290
0x6F9B71: add     esp, 4
0x6F9B74: cmp     edi, eax
0x6F9B76: setnb   bl
0x6F9B79: test    bl, bl
0x6F9B7B: jz      short loc_6F9B8C
0x6F9B7D: mov     ecx, esi
0x6F9B7F: call    sub_713FF0
0x6F9B84: test    al, al
0x6F9B86: jz      loc_6F9D72
0x6F9B8C: mov     edi, [esi+0D8h]
0x6F9B92: push    offset a5_0_0_6; "5.0.0.6"
0x6F9B97: call    sub_712290
0x6F9B9C: add     esp, 4
0x6F9B9F: cmp     edi, eax
0x6F9BA1: jb      short loc_6F9BAA
0x6F9BA3: mov     ecx, esi
0x6F9BA5: call    sub_713030
0x6F9BAA: mov     edi, [esi+1F4h]
0x6F9BB0: cmp     [esi+268h], edi
0x6F9BB6: mov     [esp+18h+var_8], edi
0x6F9BBA: jnb     short loc_6F9C0A
0x6F9BBC: lea     esp, [esp+0]
0x6F9BC0: cmp     dword ptr [esi+260h], 2
0x6F9BC7: jz      loc_6F9D72
0x6F9BCD: test    bl, bl
0x6F9BCF: jz      short loc_6F9BEA
0x6F9BD1: mov     eax, [esi+268h]
0x6F9BD7: mov     ecx, [esi+1F0h]
0x6F9BDD: mov     ecx, [ecx+eax*4]
0x6F9BE0: mov     edx, [ecx]
0x6F9BE2: mov     eax, [edx+1Ch]
0x6F9BE5: push    esi
0x6F9BE6: call    eax
0x6F9BE8: jmp     short loc_6F9BFB
0x6F9BEA: mov     edx, [esi]
0x6F9BEC: mov     eax, [edx+50h]
0x6F9BEF: mov     ecx, esi
0x6F9BF1: call    eax
0x6F9BF3: test    al, al
0x6F9BF5: jz      loc_6F9D72
0x6F9BFB: add     dword ptr [esi+268h], 1
0x6F9C02: cmp     [esi+268h], edi
0x6F9C08: jb      short loc_6F9BC0
0x6F9C0A: mov     edx, [esi]
0x6F9C0C: mov     eax, [edx+48h]
0x6F9C0F: mov     ecx, esi
0x6F9C11: call    eax
0x6F9C13: cmp     [esi+26Ch], edi
0x6F9C19: jnb     loc_6F9CB5
0x6F9C1F: nop
0x6F9C20: cmp     dword ptr [esi+260h], 2
0x6F9C27: jz      loc_6F9D72
0x6F9C2D: mov     ecx, [esi+26Ch]
0x6F9C33: mov     edx, [esi+1F0h]
0x6F9C39: mov     edi, [edx+ecx*4]
0x6F9C3C: cmp     edi, ebp
0x6F9C3E: jz      short loc_6F9C92
0x6F9C40: mov     eax, [edi]
0x6F9C42: mov     edx, [eax+4]
0x6F9C45: mov     ecx, edi
0x6F9C47: call    edx
0x6F9C49: cmp     eax, ebp
0x6F9C4B: jz      short loc_6F9C62
0x6F9C4D: lea     ecx, [ecx+0]
0x6F9C50: cmp     eax, offset dword_B3F584
0x6F9C55: jz      loc_6F9D67
0x6F9C5B: mov     eax, [eax+4]
0x6F9C5E: cmp     eax, ebp
0x6F9C60: jnz     short loc_6F9C50
0x6F9C62: xor     al, al
0x6F9C64: neg     al
0x6F9C66: sbb     eax, eax
0x6F9C68: and     eax, edi
0x6F9C6A: jz      short loc_6F9C92
0x6F9C6C: mov     ecx, [esi+488h]
0x6F9C72: cmp     ecx, ebp
0x6F9C74: mov     eax, [eax+8]
0x6F9C77: mov     [esp+18h+var_4], ebp
0x6F9C7B: jz      short loc_6F9C92
0x6F9C7D: cmp     eax, ebp
0x6F9C7F: jz      short loc_6F9C92
0x6F9C81: lea     edx, [esp+18h+var_4]
0x6F9C85: push    edx
0x6F9C86: push    eax
0x6F9C87: call    NiTMap_GetAt
0x6F9C8C: cmp     [esp+18h+var_4], ebp
0x6F9C90: jnz     short loc_6F9C9C
0x6F9C92: mov     eax, [edi]
0x6F9C94: mov     edx, [eax+20h]
0x6F9C97: push    esi
0x6F9C98: mov     ecx, edi
0x6F9C9A: call    edx
0x6F9C9C: mov     eax, [esp+18h+var_8]
0x6F9CA0: add     dword ptr [esi+26Ch], 1
0x6F9CA7: cmp     [esi+26Ch], eax
0x6F9CAD: jb      loc_6F9C20
0x6F9CB3: mov     edi, eax
0x6F9CB5: cmp     [esi+270h], edi
0x6F9CBB: jnb     loc_6F9D4F
0x6F9CC1: cmp     dword ptr [esi+260h], 2
0x6F9CC8: jz      loc_6F9D72
0x6F9CCE: mov     ecx, [esi+270h]
0x6F9CD4: mov     edx, [esi+1F0h]
0x6F9CDA: mov     edi, [edx+ecx*4]
0x6F9CDD: cmp     edi, ebp
0x6F9CDF: jz      short loc_6F9D2E
0x6F9CE1: mov     eax, [edi]
0x6F9CE3: mov     edx, [eax+4]
0x6F9CE6: mov     ecx, edi
0x6F9CE8: call    edx
0x6F9CEA: cmp     eax, ebp
0x6F9CEC: jz      short loc_6F9CFE
0x6F9CEE: mov     edi, edi
0x6F9CF0: cmp     eax, offset dword_B3F584
0x6F9CF5: jz      short loc_6F9D6E
0x6F9CF7: mov     eax, [eax+4]
0x6F9CFA: cmp     eax, ebp
0x6F9CFC: jnz     short loc_6F9CF0
0x6F9CFE: xor     al, al
0x6F9D00: neg     al
0x6F9D02: sbb     eax, eax
0x6F9D04: and     eax, edi
0x6F9D06: jz      short loc_6F9D2E
0x6F9D08: mov     ecx, [esi+488h]
0x6F9D0E: cmp     ecx, ebp
0x6F9D10: mov     eax, [eax+8]
0x6F9D13: mov     [esp+18h+var_4], ebp
0x6F9D17: jz      short loc_6F9D2E
0x6F9D19: cmp     eax, ebp
0x6F9D1B: jz      short loc_6F9D2E
0x6F9D1D: lea     edx, [esp+18h+var_4]
0x6F9D21: push    edx
0x6F9D22: push    eax
0x6F9D23: call    NiTMap_GetAt
0x6F9D28: cmp     [esp+18h+var_4], ebp
0x6F9D2C: jnz     short loc_6F9D38
0x6F9D2E: mov     eax, [edi]
0x6F9D30: mov     edx, [eax+3Ch]
0x6F9D33: push    esi
0x6F9D34: mov     ecx, edi
0x6F9D36: call    edx
0x6F9D38: mov     eax, [esp+18h+var_8]
0x6F9D3C: add     dword ptr [esi+270h], 1
0x6F9D43: cmp     [esi+270h], eax
0x6F9D49: jb      loc_6F9CC1
0x6F9D4F: mov     ecx, esi
0x6F9D51: call    sub_7126A0
0x6F9D56: mov     ecx, esi
0x6F9D58: call    sub_7135C0
0x6F9D5D: pop     edi
0x6F9D5E: pop     ebx
0x6F9D5F: pop     esi
0x6F9D60: mov     al, 1
0x6F9D62: pop     ebp
0x6F9D63: add     esp, 8
0x6F9D66: retn
0x6F9D67: mov     al, 1
0x6F9D69: jmp     loc_6F9C64
0x6F9D6E: mov     al, 1
0x6F9D70: jmp     short loc_6F9D00
0x6F9D72: pop     edi
0x6F9D73: pop     ebx
0x6F9D74: pop     esi
0x6F9D75: xor     al, al
0x6F9D77: pop     ebp
0x6F9D78: add     esp, 8
0x6F9D7B: retn
0x6F9D7C: pop     esi
0x6F9D7D: pop     ebp
0x6F9D7E: add     esp, 8
0x6F9D81: jmp     sub_714390
