0x6B8CF0: push    0FFFFFFFFh
0x6B8CF2: push    offset SEH_6B8CF0
0x6B8CF7: mov     eax, large fs:0
0x6B8CFD: push    eax
0x6B8CFE: sub     esp, 10h
0x6B8D01: push    ebx
0x6B8D02: push    ebp
0x6B8D03: push    esi
0x6B8D04: push    edi
0x6B8D05: mov     eax, ds:0B30AACh
0x6B8D0A: xor     eax, esp
0x6B8D0C: push    eax
0x6B8D0D: lea     eax, [esp+30h+var_C]
0x6B8D11: mov     large fs:0, eax
0x6B8D17: mov     ebp, ecx
0x6B8D19: xor     ebx, ebx
0x6B8D1B: mov     [esp+30h+var_14], ebx
0x6B8D1F: mov     [esp+30h+var_10], ebx
0x6B8D23: mov     ecx, [ebp+18h]
0x6B8D26: lea     eax, [esp+30h+var_14]
0x6B8D2A: push    eax
0x6B8D2B: mov     [esp+34h+var_4], ebx
0x6B8D2F: call    sub_531270
0x6B8D34: lea     edi, [esp+30h+var_14]
0x6B8D38: mov     [esp+30h+var_1C], ebx
0x6B8D3C: lea     esp, [esp+0]
0x6B8D40: mov     esi, [edi]
0x6B8D42: cmp     esi, ebx
0x6B8D44: jz      loc_6B8DD0
0x6B8D4A: movzx   eax, word ptr [esi+14h]
0x6B8D4E: cmp     ax, 0FFFFh
0x6B8D52: mov     edi, [edi+4]
0x6B8D55: jnz     short loc_6B8D6D
0x6B8D57: mov     eax, [esi+10h]
0x6B8D5A: lea     edx, [eax+1]
0x6B8D5D: lea     ecx, [ecx+0]
0x6B8D60: mov     cl, [eax]
0x6B8D62: add     eax, 1
0x6B8D65: cmp     cl, bl
0x6B8D67: jnz     short loc_6B8D60
0x6B8D69: sub     eax, edx
0x6B8D6B: jmp     short loc_6B8D70
0x6B8D6D: movzx   eax, ax
0x6B8D70: cmp     eax, ebx
0x6B8D72: jz      short loc_6B8DC8
0x6B8D74: cmp     [ebp+20h], bl
0x6B8D77: jz      short loc_6B8D7F
0x6B8D79: cmp     [esp+30h+var_1C], ebx
0x6B8D7D: jnz     short loc_6B8DC8
0x6B8D7F: push    18h; Size
0x6B8D81: call    FormHeapAlloc
0x6B8D86: add     esp, 4
0x6B8D89: mov     [esp+30h+var_18], eax
0x6B8D8D: cmp     eax, ebx
0x6B8D8F: mov     byte ptr [esp+30h+var_4], 1
0x6B8D94: jz      short loc_6B8DB4
0x6B8D96: mov     ecx, [esp+30h+a5]
0x6B8D9A: mov     edx, [esp+30h+a4]
0x6B8D9E: push    esi; a6
0x6B8D9F: push    ecx; a5
0x6B8DA0: mov     ecx, [esp+38h+a3]
0x6B8DA4: push    edx; a4
0x6B8DA5: mov     edx, [esp+3Ch+a2]
0x6B8DA9: push    ecx; a3
0x6B8DAA: push    edx; a2
0x6B8DAB: mov     ecx, eax; this
0x6B8DAD: call    sub_6B83B0
0x6B8DB2: jmp     short loc_6B8DB6
0x6B8DB4: xor     eax, eax
0x6B8DB6: push    eax
0x6B8DB7: lea     ecx, [ebp+0Ch]
0x6B8DBA: mov     byte ptr [esp+34h+var_4], bl
0x6B8DBE: call    BSSimpleList_PushBack
0x6B8DC3: add     [esp+30h+var_1C], 1
0x6B8DC8: cmp     edi, ebx
0x6B8DCA: jnz     loc_6B8D40
0x6B8DD0: lea     ecx, [esp+30h+var_14]
0x6B8DD4: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6B8DDC: call    sub_5308E0
0x6B8DE1: mov     ecx, [esp+30h+var_C]
0x6B8DE5: mov     large fs:0, ecx
0x6B8DEC: pop     ecx
0x6B8DED: pop     edi
0x6B8DEE: pop     esi
0x6B8DEF: pop     ebp
0x6B8DF0: pop     ebx
0x6B8DF1: add     esp, 1Ch
0x6B8DF4: retn    10h
