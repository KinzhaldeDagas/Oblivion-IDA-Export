0x442A30: sub     esp, 0Ch
0x442A33: push    ebx
0x442A34: mov     bl, [esp+10h+arg_4]
0x442A38: test    bl, bl
0x442A3A: mov     [esp+10h+var_8], ecx
0x442A3E: mov     ecx, [esp+10h+arg_0]
0x442A42: jnz     short loc_442A53
0x442A44: mov     eax, 1
0x442A49: shl     eax, cl
0x442A4B: or      ds:0B35C00h, eax
0x442A51: jmp     short loc_442A62
0x442A53: mov     edx, 1
0x442A58: shl     edx, cl
0x442A5A: not     edx
0x442A5C: and     ds:0B35C00h, edx
0x442A62: cmp     ecx, 3
0x442A65: jnz     short loc_442AA4
0x442A67: mov     eax, ds:0B333A0h
0x442A6C: mov     eax, [eax+34h]
0x442A6F: test    eax, eax
0x442A71: jz      short loc_442A82
0x442A73: movzx   ecx, byte ptr [eax+24h]
0x442A77: shr     ecx, 1
0x442A79: test    cl, 1
0x442A7C: jnz     loc_442E18
0x442A82: call    sub_49A140
0x442A87: test    bl, bl
0x442A89: jnz     short loc_442A97
0x442A8B: or      word ptr [eax+18h], 1
0x442A90: pop     ebx
0x442A91: add     esp, 0Ch
0x442A94: retn    0Ch
0x442A97: and     word ptr [eax+18h], 0FFFEh
0x442A9D: pop     ebx
0x442A9E: add     esp, 0Ch
0x442AA1: retn    0Ch
0x442AA4: mov     al, byte ptr [esp+10h+arg_8]
0x442AA8: neg     al
0x442AAA: push    ebp
0x442AAB: push    esi
0x442AAC: push    edi
0x442AAD: mov     [esp+1Ch+var_C], 0FFFFFFFFh
0x442AB5: sbb     eax, eax
0x442AB7: not     eax
0x442AB9: and     eax, ds:0B051D4h
0x442ABF: cmp     eax, 0FFFFFFFFh
0x442AC2: mov     [esp+1Ch+var_4], eax
0x442AC6: jle     loc_442BD6
0x442ACC: lea     esp, [esp+0]
0x442AD0: mov     eax, [esp+1Ch+var_C]
0x442AD4: cmp     eax, 0FFFFFFFFh
0x442AD7: jnz     short loc_442AE2
0x442AD9: mov     edx, [esp+1Ch+var_8]
0x442ADD: mov     ebx, [edx+34h]
0x442AE0: jmp     short loc_442AEC
0x442AE2: mov     ecx, [esp+1Ch+var_8]
0x442AE6: mov     edx, [ecx+38h]
0x442AE9: mov     ebx, [edx+eax*4]
0x442AEC: test    ebx, ebx
0x442AEE: jz      def_442B03; jumptable 00442B03 default case, case 3
0x442AF4: cmp     [esp+1Ch+arg_0], 5; switch 6 cases
0x442AF9: ja      def_442B03; jumptable 00442B03 default case, case 3
0x442AFF: mov     eax, [esp+1Ch+arg_0]
0x442B03: jmp     ds:jpt_442B03[eax*4]; switch jump
0x442B0A: mov     ecx, ebx; jumptable 00442B03 cases 0,1
0x442B0C: call    TESObjectCELL_GetNiNode?
0x442B11: test    eax, eax
0x442B13: jz      short loc_442B2F
0x442B15: movzx   edx, word ptr [eax+0B6h]
0x442B1C: mov     ecx, [esp+1Ch+arg_0]
0x442B20: cmp     edx, ecx
0x442B22: jbe     short loc_442B2F
0x442B24: mov     eax, [eax+0B0h]
0x442B2A: mov     eax, [eax+ecx*4]
0x442B2D: jmp     short loc_442B31
0x442B2F: xor     eax, eax
0x442B31: test    eax, eax
0x442B33: jz      def_442B03; jumptable 00442B03 default case, case 3
0x442B39: cmp     [esp+1Ch+arg_4], 0
0x442B3E: jnz     short loc_442B47
0x442B40: or      word ptr [eax+18h], 1
0x442B45: jmp     short def_442B03; jumptable 00442B03 default case, case 3
0x442B47: and     word ptr [eax+18h], 0FFFEh
0x442B4D: jmp     short def_442B03; jumptable 00442B03 default case, case 3
0x442B4F: mov     ebp, eax; jumptable 00442B03 cases 2,4,5
0x442B51: add     ebp, 0FFFFFFFEh
0x442B54: xor     edi, edi
0x442B56: mov     esi, 8
0x442B5B: jmp     short loc_442B60
0x442B5D: align 10h
0x442B60: mov     ecx, ebx; this
0x442B62: call    TESObjectCELL_GetNiNode?
0x442B67: test    eax, eax
0x442B69: jz      short loc_442B9C
0x442B6B: movzx   ecx, word ptr [eax+0B6h]
0x442B72: lea     edx, [edi+2]
0x442B75: cmp     ecx, edx
0x442B77: jbe     short loc_442B9C
0x442B79: mov     eax, [eax+0B0h]
0x442B7F: mov     eax, [esi+eax]
0x442B82: test    eax, eax
0x442B84: jz      short loc_442B9C
0x442B86: movzx   ecx, word ptr [eax+0B6h]
0x442B8D: cmp     ecx, ebp
0x442B8F: jbe     short loc_442B9C
0x442B91: mov     edx, [eax+0B0h]
0x442B97: mov     eax, [edx+ebp*4]
0x442B9A: jmp     short loc_442B9E
0x442B9C: xor     eax, eax
0x442B9E: test    eax, eax
0x442BA0: jz      short loc_442BB6
0x442BA2: cmp     [esp+1Ch+arg_4], 0
0x442BA7: jnz     short loc_442BB0
0x442BA9: or      word ptr [eax+18h], 1
0x442BAE: jmp     short loc_442BB6
0x442BB0: and     word ptr [eax+18h], 0FFFEh
0x442BB6: add     esi, 4
0x442BB9: add     edi, 1
0x442BBC: cmp     esi, 18h
0x442BBF: jl      short loc_442B60
0x442BC1: mov     eax, [esp+1Ch+var_C]; jumptable 00442B03 default case, case 3
0x442BC5: add     eax, 1
0x442BC8: cmp     eax, [esp+1Ch+var_4]
0x442BCC: mov     [esp+1Ch+var_C], eax
0x442BD0: jl      loc_442AD0
0x442BD6: cmp     byte ptr [esp+1Ch+arg_8], 0
0x442BDB: jnz     loc_442CEB
0x442BE1: mov     [esp+1Ch+arg_8], 0
0x442BE9: lea     esp, [esp+0]
0x442BF0: mov     eax, [esp+1Ch+arg_8]
0x442BF4: cmp     eax, ds:0B051DCh
0x442BFA: jge     loc_442E15
0x442C00: mov     ecx, [esp+1Ch+var_8]
0x442C04: mov     edx, [ecx+3Ch]
0x442C07: mov     ebx, [edx+eax*4]
0x442C0A: test    ebx, ebx
0x442C0C: jz      def_442C1F; jumptable 00442C1F default case, case 3
0x442C12: mov     esi, [esp+1Ch+arg_0]
0x442C16: cmp     esi, 5; switch 6 cases
0x442C19: ja      def_442C1F; jumptable 00442C1F default case, case 3
0x442C1F: jmp     ds:jpt_442C1F[esi*4]; switch jump
0x442C26: mov     ecx, ebx; jumptable 00442C1F cases 0,1
0x442C28: call    TESObjectCELL_GetNiNode?
0x442C2D: test    eax, eax
0x442C2F: jz      short loc_442C47
0x442C31: movzx   ecx, word ptr [eax+0B6h]
0x442C38: cmp     ecx, esi
0x442C3A: jbe     short loc_442C47
0x442C3C: mov     edx, [eax+0B0h]
0x442C42: mov     eax, [edx+esi*4]
0x442C45: jmp     short loc_442C49
0x442C47: xor     eax, eax
0x442C49: test    eax, eax
0x442C4B: jz      def_442C1F; jumptable 00442C1F default case, case 3
0x442C51: cmp     [esp+1Ch+arg_4], 0
0x442C56: jnz     short loc_442C64
0x442C58: or      word ptr [eax+18h], 1
0x442C5D: add     [esp+1Ch+arg_8], 1
0x442C62: jmp     short loc_442BF0
0x442C64: and     word ptr [eax+18h], 0FFFEh
0x442C6A: add     [esp+1Ch+arg_8], 1
0x442C6F: jmp     loc_442BF0
0x442C74: mov     ebp, esi; jumptable 00442C1F cases 2,4,5
0x442C76: add     ebp, 0FFFFFFFEh
0x442C79: xor     edi, edi
0x442C7B: mov     esi, 8
0x442C80: mov     ecx, ebx; this
0x442C82: call    TESObjectCELL_GetNiNode?
0x442C87: test    eax, eax
0x442C89: jz      short loc_442CBC
0x442C8B: movzx   ecx, word ptr [eax+0B6h]
0x442C92: lea     edx, [edi+2]
0x442C95: cmp     ecx, edx
0x442C97: jbe     short loc_442CBC
0x442C99: mov     eax, [eax+0B0h]
0x442C9F: mov     eax, [esi+eax]
0x442CA2: test    eax, eax
0x442CA4: jz      short loc_442CBC
0x442CA6: movzx   ecx, word ptr [eax+0B6h]
0x442CAD: cmp     ecx, ebp
0x442CAF: jbe     short loc_442CBC
0x442CB1: mov     edx, [eax+0B0h]
0x442CB7: mov     eax, [edx+ebp*4]
0x442CBA: jmp     short loc_442CBE
0x442CBC: xor     eax, eax
0x442CBE: test    eax, eax
0x442CC0: jz      short loc_442CD6
0x442CC2: cmp     [esp+1Ch+arg_4], 0
0x442CC7: jnz     short loc_442CD0
0x442CC9: or      word ptr [eax+18h], 1
0x442CCE: jmp     short loc_442CD6
0x442CD0: and     word ptr [eax+18h], 0FFFEh
0x442CD6: add     esi, 4
0x442CD9: add     edi, 1
0x442CDC: cmp     esi, 18h
0x442CDF: jl      short loc_442C80
0x442CE1: add     [esp+1Ch+arg_8], 1; jumptable 00442C1F default case, case 3
0x442CE6: jmp     loc_442BF0
0x442CEB: mov     eax, ds:0B06A2Ch
0x442CF0: xor     ebp, ebp
0x442CF2: cmp     ebp, eax
0x442CF4: mov     [esp+1Ch+var_8], ebp
0x442CF8: jnb     loc_442E15
0x442CFE: xor     edi, edi
0x442D00: cmp     edi, eax
0x442D02: mov     [esp+1Ch+arg_8], edi
0x442D06: jnb     loc_442E0D
0x442D0C: mov     eax, ds:0B333A0h
0x442D11: mov     ecx, [eax+8]
0x442D14: push    edi
0x442D15: push    ebp
0x442D16: call    GetGridEntry
0x442D1B: mov     ebx, [eax]
0x442D1D: test    ebx, ebx
0x442D1F: jz      def_442D32; jumptable 00442D32 default case, case 3
0x442D25: mov     esi, [esp+1Ch+arg_0]
0x442D29: cmp     esi, 5; switch 6 cases
0x442D2C: ja      def_442D32; jumptable 00442D32 default case, case 3
0x442D32: jmp     ds:jpt_442D32[esi*4]; switch jump
0x442D39: mov     ecx, ebx; jumptable 00442D32 cases 0,1
0x442D3B: call    TESObjectCELL_GetNiNode?
0x442D40: test    eax, eax
0x442D42: jz      short loc_442D5A
0x442D44: movzx   ecx, word ptr [eax+0B6h]
0x442D4B: cmp     ecx, esi
0x442D4D: jbe     short loc_442D5A
0x442D4F: mov     edx, [eax+0B0h]
0x442D55: mov     eax, [edx+esi*4]
0x442D58: jmp     short loc_442D5C
0x442D5A: xor     eax, eax
0x442D5C: test    eax, eax
0x442D5E: jz      def_442D32; jumptable 00442D32 default case, case 3
0x442D64: cmp     [esp+1Ch+arg_4], 0
0x442D69: jnz     short loc_442D7A
0x442D6B: or      word ptr [eax+18h], 1
0x442D70: mov     eax, ds:0B06A2Ch
0x442D75: add     edi, 1
0x442D78: jmp     short loc_442D00
0x442D7A: and     word ptr [eax+18h], 0FFFEh
0x442D80: mov     eax, ds:0B06A2Ch
0x442D85: add     edi, 1
0x442D88: jmp     loc_442D00
0x442D8D: lea     ebp, [esi-2]; jumptable 00442D32 cases 2,4,5
0x442D90: xor     edi, edi
0x442D92: mov     esi, 8
0x442D97: mov     ecx, ebx; this
0x442D99: call    TESObjectCELL_GetNiNode?
0x442D9E: test    eax, eax
0x442DA0: jz      short loc_442DD3
0x442DA2: movzx   ecx, word ptr [eax+0B6h]
0x442DA9: lea     edx, [edi+2]
0x442DAC: cmp     ecx, edx
0x442DAE: jbe     short loc_442DD3
0x442DB0: mov     eax, [eax+0B0h]
0x442DB6: mov     eax, [esi+eax]
0x442DB9: test    eax, eax
0x442DBB: jz      short loc_442DD3
0x442DBD: movzx   ecx, word ptr [eax+0B6h]
0x442DC4: cmp     ecx, ebp
0x442DC6: jbe     short loc_442DD3
0x442DC8: mov     edx, [eax+0B0h]
0x442DCE: mov     eax, [edx+ebp*4]
0x442DD1: jmp     short loc_442DD5
0x442DD3: xor     eax, eax
0x442DD5: test    eax, eax
0x442DD7: jz      short loc_442DED
0x442DD9: cmp     [esp+1Ch+arg_4], 0
0x442DDE: jnz     short loc_442DE7
0x442DE0: or      word ptr [eax+18h], 1
0x442DE5: jmp     short loc_442DED
0x442DE7: and     word ptr [eax+18h], 0FFFEh
0x442DED: add     esi, 4
0x442DF0: add     edi, 1
0x442DF3: cmp     esi, 18h
0x442DF6: jl      short loc_442D97
0x442DF8: mov     edi, [esp+1Ch+arg_8]
0x442DFC: mov     ebp, [esp+1Ch+var_8]
0x442E00: mov     eax, ds:0B06A2Ch; jumptable 00442D32 default case, case 3
0x442E05: add     edi, 1
0x442E08: jmp     loc_442D00
0x442E0D: add     ebp, 1
0x442E10: jmp     loc_442CF2
0x442E15: pop     edi
0x442E16: pop     esi
0x442E17: pop     ebp
0x442E18: pop     ebx
0x442E19: add     esp, 0Ch
0x442E1C: retn    0Ch
