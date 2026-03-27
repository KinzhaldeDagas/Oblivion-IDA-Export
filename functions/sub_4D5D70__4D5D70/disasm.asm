0x4D5D70: sub     esp, 10h
0x4D5D73: push    ebx
0x4D5D74: mov     ebx, ecx
0x4D5D76: mov     dl, [ebx+24h]
0x4D5D79: and     dl, 1
0x4D5D7C: push    esi
0x4D5D7D: push    edi
0x4D5D7E: jnz     short loc_4D5D8C
0x4D5D80: mov     eax, [ebx+3Ch]
0x4D5D83: test    eax, eax
0x4D5D85: jz      short loc_4D5D8C
0x4D5D87: mov     ecx, [eax+4]
0x4D5D8A: jmp     short loc_4D5D8E
0x4D5D8C: xor     ecx, ecx
0x4D5D8E: test    dl, dl
0x4D5D90: jnz     short loc_4D5D9D
0x4D5D92: mov     eax, [ebx+3Ch]
0x4D5D95: test    eax, eax
0x4D5D97: jz      short loc_4D5D9D
0x4D5D99: mov     eax, [eax]
0x4D5D9B: jmp     short loc_4D5D9F
0x4D5D9D: xor     eax, eax
0x4D5D9F: mov     esi, [esp+1Ch+arg_0]
0x4D5DA3: mov     edi, [esp+1Ch+arg_4]
0x4D5DA7: shl     eax, 0Ch
0x4D5DAA: add     eax, 800h
0x4D5DAF: mov     [esp+1Ch+var_10], eax
0x4D5DB3: fild    [esp+1Ch+var_10]
0x4D5DB7: shl     ecx, 0Ch
0x4D5DBA: add     ecx, 800h
0x4D5DC0: mov     [esp+1Ch+var_10], ecx
0x4D5DC4: fstp    [esp+1Ch+var_C]
0x4D5DC8: mov     eax, [esp+1Ch+var_C]
0x4D5DCC: fild    [esp+1Ch+var_10]
0x4D5DD0: mov     [esi], eax
0x4D5DD2: fstp    [esp+1Ch+var_8]
0x4D5DD6: mov     ecx, [esp+1Ch+var_8]
0x4D5DDA: fldz
0x4D5DDC: mov     [esi+4], ecx
0x4D5DDF: fstp    [esp+1Ch+var_4]
0x4D5DE3: mov     edx, [esp+1Ch+var_4]
0x4D5DE7: mov     [esi+8], edx
0x4D5DEA: mov     eax, ds:0B3F9A8h
0x4D5DEF: mov     [edi], eax
0x4D5DF1: mov     ecx, ds:0B3F9ACh
0x4D5DF7: mov     [edi+4], ecx
0x4D5DFA: mov     edx, ds:0B3F9B0h
0x4D5E00: mov     [edi+8], edx
0x4D5E03: cmp     byte ptr ds:0B097E0h, 0
0x4D5E0A: jz      short loc_4D5E12
0x4D5E0C: test    byte ptr [ebx+24h], 1
0x4D5E10: jz      short loc_4D5E22
0x4D5E12: mov     ecx, ebx
0x4D5E14: call    sub_4D4310
0x4D5E19: push    edi
0x4D5E1A: push    esi
0x4D5E1B: mov     ecx, ebx
0x4D5E1D: call    sub_4CEE90
0x4D5E22: pop     edi
0x4D5E23: pop     esi
0x4D5E24: pop     ebx
0x4D5E25: add     esp, 10h
0x4D5E28: retn    8
