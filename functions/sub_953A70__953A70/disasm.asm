0x953A70: sub     esp, 24Ch
0x953A76: push    ebx
0x953A77: mov     ebx, [esp+250h+arg_8]
0x953A7E: push    ebp
0x953A7F: push    esi
0x953A80: mov     [esp+258h+var_248], ecx
0x953A84: push    edi
0x953A85: mov     ecx, ebx
0x953A87: call    sub_953130
0x953A8C: mov     ebp, eax
0x953A8E: mov     eax, [ebp+0]
0x953A91: mov     ecx, ebp
0x953A93: mov     [esp+25Ch+var_238], ebp
0x953A97: call    dword ptr [eax+1Ch]
0x953A9A: mov     ecx, [esp+25Ch+arg_C]
0x953AA1: mov     edi, eax
0x953AA3: mov     [esp+25Ch+var_23C], edi
0x953AA7: mov     [esp+25Ch+var_244], 0
0x953AAF: call    sub_90D240
0x953AB4: test    eax, eax
0x953AB6: jle     loc_953CF1
0x953ABC: jmp     short loc_953AC2
0x953ABE: mov     ebp, [esp+25Ch+var_238]
0x953AC2: mov     ecx, [esp+25Ch+var_244]
0x953AC6: push    ecx
0x953AC7: mov     ecx, [esp+260h+arg_C]
0x953ACE: call    sub_90D260
0x953AD3: mov     edx, [ebp+0]
0x953AD6: mov     esi, eax
0x953AD8: movzx   eax, word ptr [esi+12h]
0x953ADC: push    0
0x953ADE: add     eax, edi
0x953AE0: push    eax
0x953AE1: mov     ecx, ebp
0x953AE3: call    dword ptr [edx+18h]
0x953AE6: mov     eax, [esi]
0x953AE8: mov     ecx, [esp+25Ch+arg_4]
0x953AEF: push    eax
0x953AF0: call    sub_90D2E0
0x953AF5: mov     edi, eax
0x953AF7: test    edi, edi
0x953AF9: jz      loc_953DC5
0x953AFF: mov     cl, [esi+0Ch]
0x953B02: cmp     [edi+0Ch], cl
0x953B05: jnz     loc_953DC5
0x953B0B: mov     dl, [edi+0Dh]
0x953B0E: cmp     dl, [esi+0Dh]
0x953B11: jnz     loc_953DC5
0x953B17: movzx   ebp, word ptr [edi+12h]
0x953B1B: add     ebp, [esp+25Ch+arg_0]
0x953B22: movzx   eax, cl
0x953B25: dec     eax; switch 28 cases
0x953B26: cmp     eax, 1Bh
0x953B29: ja      def_953B36
0x953B2F: movzx   eax, ds:byte_953DF4[eax]
0x953B36: jmp     ds:jpt_953B36[eax*4]; switch jump
0x953B3D: mov     ecx, edi; jumptable 00953B36 cases 1-18,24
0x953B3F: call    sub_940B70
0x953B44: test    eax, eax
0x953B46: jz      short loc_953B55
0x953B48: mov     ecx, edi
0x953B4A: call    sub_940B70
0x953B4F: mov     [esp+25Ch+var_24C], eax
0x953B53: jmp     short loc_953B5D
0x953B55: mov     [esp+25Ch+var_24C], 1
0x953B5D: mov     ecx, esi
0x953B5F: call    sub_940B70
0x953B64: test    eax, eax
0x953B66: jz      short loc_953B73
0x953B68: mov     ecx, esi
0x953B6A: call    sub_940B70
0x953B6F: mov     edi, eax
0x953B71: jmp     short loc_953B78
0x953B73: mov     edi, 1
0x953B78: mov     eax, [esp+25Ch+var_24C]
0x953B7C: cmp     eax, edi
0x953B7E: mov     [esp+25Ch+var_24C], eax
0x953B82: jl      short loc_953B88
0x953B84: mov     [esp+25Ch+var_24C], edi
0x953B88: movzx   ecx, byte ptr [esi+0Ch]
0x953B8C: mov     [esp+25Ch+var_240], ecx
0x953B90: push    ebp
0x953B91: mov     ecx, esi
0x953B93: call    sub_940B80
0x953B98: cdq
0x953B99: idiv    edi
0x953B9B: mov     ecx, [esp+260h+var_24C]
0x953B9F: push    ebx
0x953BA0: mov     edx, eax
0x953BA2: mov     eax, [esp+264h+var_240]
0x953BA6: call    sub_9535B0
0x953BAB: add     esp, 8
0x953BAE: jmp     loc_953CD0
0x953BB3: mov     ecx, [esp+25Ch+var_248]; jumptable 00953B36 case 19
0x953BB7: push    esi
0x953BB8: push    ebx
0x953BB9: call    sub_9537F0
0x953BBE: jmp     loc_953CD0
0x953BC3: call    sub_953560; jumptable 00953B36 cases 20,21
0x953BC8: xor     ecx, ecx
0x953BCA: cmp     eax, ecx
0x953BCC: mov     [esp+25Ch+var_224], ecx
0x953BD0: mov     [esp+25Ch+var_220], ecx
0x953BD4: jle     loc_953CD0
0x953BDA: mov     esi, eax
0x953BDC: lea     esp, [esp+0]
0x953BE0: mov     edx, [esp+25Ch+var_248]
0x953BE4: movzx   eax, byte ptr [edx+0Ch]
0x953BE8: push    eax
0x953BE9: lea     ecx, [esp+260h+var_224]
0x953BED: push    ecx
0x953BEE: mov     ecx, ebx
0x953BF0: call    sub_918390
0x953BF5: dec     esi
0x953BF6: jnz     short loc_953BE0
0x953BF8: jmp     loc_953CD0
0x953BFD: xor     edi, edi; jumptable 00953B36 cases 22,23,26,27
0x953BFF: cmp     cl, 1Bh
0x953C02: jnz     short loc_953C28
0x953C04: mov     edx, [esp+25Ch+var_248]
0x953C08: movzx   eax, byte ptr [edx+0Ch]
0x953C0C: push    1
0x953C0E: push    eax
0x953C0F: lea     ecx, [esp+264h+var_234]
0x953C13: push    ecx
0x953C14: mov     ecx, ebx
0x953C16: mov     [esp+268h+var_234], edi
0x953C1A: mov     [esp+268h+var_230], edi
0x953C1E: call    sub_9181D0
0x953C23: mov     ebp, [ebp+8]
0x953C26: jmp     short loc_953C2B
0x953C28: mov     ebp, [ebp+4]
0x953C2B: mov     edx, [esp+25Ch+var_248]
0x953C2F: movzx   eax, byte ptr [edx+0Ch]
0x953C33: push    1
0x953C35: push    eax
0x953C36: lea     ecx, [esp+264h+var_22C]
0x953C3A: push    ecx
0x953C3B: mov     ecx, ebx
0x953C3D: mov     [esp+268h+var_22C], edi
0x953C41: mov     [esp+268h+var_228], edi
0x953C45: call    sub_9181D0
0x953C4A: push    ebp
0x953C4B: mov     ecx, ebx
0x953C4D: call    sub_918440
0x953C52: cmp     byte ptr [esi+0Ch], 16h
0x953C56: jnz     short loc_953CD0
0x953C58: or      ebp, 0C0000000h
0x953C5E: push    ebp
0x953C5F: mov     ecx, ebx
0x953C61: call    sub_918440
0x953C66: jmp     short loc_953CD0
0x953C68: mov     ecx, edi; jumptable 00953B36 case 25
0x953C6A: call    sub_90D1F0
0x953C6F: mov     ecx, esi
0x953C71: mov     ebx, eax
0x953C73: call    sub_90D1F0
0x953C78: mov     [esp+25Ch+var_24C], eax
0x953C7C: call    sub_953560
0x953C81: mov     esi, edi
0x953C83: mov     [esp+25Ch+var_240], eax
0x953C87: call    sub_953560
0x953C8C: mov     edi, [esp+25Ch+var_240]
0x953C90: cmp     eax, edi
0x953C92: jge     short loc_953C96
0x953C94: mov     edi, eax
0x953C96: xor     esi, esi
0x953C98: test    edi, edi
0x953C9A: jle     short loc_953CC9
0x953C9C: lea     esp, [esp+0]
0x953CA0: mov     ecx, ebx
0x953CA2: call    sub_953130
0x953CA7: imul    eax, esi
0x953CAA: mov     edx, [esp+25Ch+var_24C]
0x953CAE: mov     ecx, [esp+25Ch+arg_8]
0x953CB5: push    edx
0x953CB6: push    ecx
0x953CB7: mov     ecx, [esp+264h+var_248]
0x953CBB: add     eax, ebp
0x953CBD: push    ebx
0x953CBE: push    eax
0x953CBF: call    sub_953A70
0x953CC4: inc     esi
0x953CC5: cmp     esi, edi
0x953CC7: jl      short loc_953CA0
0x953CC9: mov     ebx, [esp+25Ch+arg_8]
0x953CD0: mov     esi, [esp+25Ch+var_244]
0x953CD4: mov     ecx, [esp+25Ch+arg_C]
0x953CDB: inc     esi
0x953CDC: mov     [esp+25Ch+var_244], esi
0x953CE0: call    sub_90D240
0x953CE5: cmp     esi, eax
0x953CE7: mov     edi, [esp+25Ch+var_23C]
0x953CEB: jl      loc_953ABE
0x953CF1: mov     ecx, ebx
0x953CF3: call    sub_953130
0x953CF8: mov     ecx, [esp+25Ch+arg_C]
0x953CFF: mov     esi, eax
0x953D01: mov     ebx, [esi]
0x953D03: push    0
0x953D05: call    sub_953130
0x953D0A: add     eax, edi
0x953D0C: push    eax
0x953D0D: mov     ecx, esi
0x953D0F: call    dword ptr [ebx+18h]
0x953D12: mov     eax, edi
0x953D14: pop     edi
0x953D15: pop     esi
0x953D16: pop     ebp
0x953D17: pop     ebx
0x953D18: add     esp, 24Ch
0x953D1E: retn    10h
0x953D21: xor     eax, eax; jumptable 00953B36 case 28
0x953D23: mov     [esp+25Ch+var_21C], eax
0x953D27: mov     [esp+25Ch+var_218], eax
0x953D2B: mov     [esp+25Ch+var_214], eax
0x953D2F: mov     [esp+25Ch+var_210], eax
0x953D33: call    sub_953560
0x953D38: mov     esi, edi
0x953D3A: mov     ebp, eax
0x953D3C: call    sub_953560
0x953D41: cmp     eax, ebp
0x953D43: jl      short loc_953D47
0x953D45: mov     eax, ebp
0x953D47: test    eax, eax
0x953D49: jle     short loc_953CD0
0x953D4B: mov     esi, eax
0x953D4D: lea     ecx, [ecx+0]
0x953D50: mov     edx, [esp+25Ch+var_248]
0x953D54: movzx   eax, byte ptr [edx+0Ch]
0x953D58: push    2
0x953D5A: push    eax
0x953D5B: lea     ecx, [esp+264h+var_21C]
0x953D5F: push    ecx
0x953D60: mov     ecx, ebx
0x953D62: call    sub_9181D0
0x953D67: dec     esi
0x953D68: jnz     short loc_953D50
0x953D6A: jmp     loc_953CD0
