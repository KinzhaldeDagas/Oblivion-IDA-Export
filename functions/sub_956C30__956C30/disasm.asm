0x956C30: sub     esp, 14h
0x956C33: mov     eax, [ecx+8]
0x956C36: push    ebx
0x956C37: push    ebp
0x956C38: mov     ebp, [ecx+20h]
0x956C3B: mov     edx, [ebp+0]
0x956C3E: push    esi
0x956C3F: mov     esi, [eax+0Ch]
0x956C42: mov     eax, [eax+10h]
0x956C45: push    edi
0x956C46: mov     edi, [esp+24h+arg_C]
0x956C4A: mov     [esp+24h+var_14], ecx
0x956C4E: push    edi
0x956C4F: mov     ecx, ebp
0x956C51: mov     [esp+28h+var_8], eax
0x956C55: call    dword ptr [edx+8]
0x956C58: fstp    [esp+24h+var_10]
0x956C5C: mov     eax, [esp+24h+var_14]
0x956C60: mov     eax, [eax+0Ch]
0x956C63: mov     ecx, [eax]
0x956C65: sar     esi, 1
0x956C67: xor     ebx, ebx
0x956C69: test    ecx, ecx
0x956C6B: mov     edx, esi
0x956C6D: mov     esi, [esp+24h+arg_4]
0x956C71: mov     [esp+24h+var_C], 4B189680h
0x956C79: mov     [esp+24h+arg_C], ebx
0x956C7D: mov     [esp+24h+var_4], edx
0x956C81: jnz     short loc_956C96
0x956C83: mov     eax, [eax+0Ch]
0x956C86: test    eax, eax
0x956C88: jz      loc_956DA3
0x956C8E: mov     ecx, [eax+0Ch]
0x956C91: mov     [edi+38h], ecx
0x956C94: jmp     short loc_956CFE
0x956C96: fld     [esp+24h+var_10]
0x956C9A: fcomp   dword ptr [esi+0C4h]
0x956CA0: fnstsw  ax
0x956CA2: test    ah, 41h
0x956CA5: jz      loc_956DA3
0x956CAB: mov     eax, [esp+24h+var_8]
0x956CAF: test    eax, eax
0x956CB1: jle     short loc_956CD4
0x956CB3: mov     eax, [esp+24h+arg_8]
0x956CB7: mov     eax, [eax]
0x956CB9: lea     ebx, [eax+edx]
0x956CBC: cmp     ebx, ecx
0x956CBE: jle     short loc_956CC2
0x956CC0: mov     ebx, ecx
0x956CC2: sub     eax, edx
0x956CC4: mov     [esp+24h+arg_C], eax
0x956CC8: jns     short loc_956CD6
0x956CCA: mov     [esp+24h+arg_C], 0
0x956CD2: jmp     short loc_956CD6
0x956CD4: mov     ebx, ecx
0x956CD6: mov     eax, [esp+24h+arg_C]
0x956CDA: dec     ebx
0x956CDB: cmp     ebx, eax
0x956CDD: jl      loc_956D9D
0x956CE3: mov     ecx, [esp+24h+var_14]
0x956CE7: mov     eax, [ecx+0Ch]
0x956CEA: cmp     ebx, [eax]
0x956CEC: jg      short loc_956CF6
0x956CEE: mov     edx, [eax+8]
0x956CF1: mov     eax, [edx+ebx*4]
0x956CF4: jmp     short loc_956CF8
0x956CF6: xor     eax, eax
0x956CF8: mov     eax, [eax+0Ch]
0x956CFB: mov     [edi+38h], eax
0x956CFE: mov     ecx, [esp+24h+arg_10]
0x956D02: mov     [edi+30h], ebx
0x956D05: mov     edx, [ecx+4]
0x956D08: sub     edx, [esp+24h+arg_0]
0x956D0C: add     edx, ebx
0x956D0E: mov     [edi+34h], edx
0x956D11: mov     eax, [ebp+0]
0x956D14: push    edi
0x956D15: mov     ecx, ebp
0x956D17: call    dword ptr [eax+0Ch]
0x956D1A: fadd    [esp+24h+var_10]
0x956D1E: fcom    [esp+24h+var_C]
0x956D22: fnstsw  ax
0x956D24: test    ah, 5
0x956D27: jp      short loc_956D96
0x956D29: mov     ecx, [esp+24h+arg_8]
0x956D2D: fst     [esp+24h+var_C]
0x956D31: mov     [ecx], ebx
0x956D33: fcom    dword ptr [esi+0C4h]
0x956D39: fnstsw  ax
0x956D3B: test    ah, 5
0x956D3E: jp      short loc_956D96
0x956D40: fstp    dword ptr [esi+0C4h]
0x956D46: mov     edx, [edi+24h]
0x956D49: mov     [esi+0B8h], edx
0x956D4F: mov     eax, [edi+20h]
0x956D52: mov     edx, [esp+24h+var_4]
0x956D56: mov     [esi+0BCh], eax
0x956D5C: mov     ecx, [edi+38h]
0x956D5F: mov     eax, ebx
0x956D61: mov     [esi+0C0h], ecx
0x956D67: mov     ecx, [esp+24h+arg_C]
0x956D6B: sub     eax, edx
0x956D6D: cmp     eax, ecx
0x956D6F: jge     short loc_956D81
0x956D71: test    eax, eax
0x956D73: mov     [esp+24h+arg_C], eax
0x956D77: jge     short loc_956D81
0x956D79: mov     [esp+24h+arg_C], 0
0x956D81: mov     edx, [ebp+0]
0x956D84: lea     eax, [esi+0C8h]
0x956D8A: push    eax
0x956D8B: push    edi
0x956D8C: mov     ecx, ebp
0x956D8E: call    dword ptr [edx+14h]
0x956D91: jmp     loc_956CD6
0x956D96: fstp    st
0x956D98: jmp     loc_956CD6
0x956D9D: mov     eax, [esp+24h+arg_8]
0x956DA1: dec     dword ptr [eax]
0x956DA3: mov     ecx, [esp+24h+arg_10]
0x956DA7: mov     edx, [ecx]
0x956DA9: mov     eax, [esp+24h+arg_0]
0x956DAD: shl     eax, 4
0x956DB0: add     eax, edx
0x956DB2: mov     edx, [esp+24h+var_14]
0x956DB6: mov     ecx, [edx+0Ch]
0x956DB9: push    eax
0x956DBA: call    sub_9569F0
0x956DBF: pop     edi
0x956DC0: pop     esi
0x956DC1: pop     ebp
0x956DC2: pop     ebx
0x956DC3: add     esp, 14h
0x956DC6: retn    14h
