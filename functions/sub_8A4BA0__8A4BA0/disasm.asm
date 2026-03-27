0x8A4BA0: push    0FFFFFFFFh
0x8A4BA2: push    offset SEH_8A4BA0
0x8A4BA7: mov     eax, large fs:0
0x8A4BAD: push    eax
0x8A4BAE: sub     esp, 1Ch
0x8A4BB1: push    ebx
0x8A4BB2: push    ebp
0x8A4BB3: push    esi
0x8A4BB4: push    edi
0x8A4BB5: mov     eax, ds:0B30AACh
0x8A4BBA: xor     eax, esp
0x8A4BBC: push    eax
0x8A4BBD: lea     eax, [esp+3Ch+var_C]
0x8A4BC1: mov     large fs:0, eax
0x8A4BC7: mov     edi, ecx
0x8A4BC9: mov     [esp+3Ch+var_1C], edi
0x8A4BCD: mov     eax, [edi+18h]
0x8A4BD0: xor     ebp, ebp
0x8A4BD2: shr     eax, 2
0x8A4BD5: test    al, 1
0x8A4BD7: mov     [esp+3Ch+var_28], ebp
0x8A4BDB: jnz     loc_8A4D85
0x8A4BE1: mov     edx, [edi]
0x8A4BE3: mov     eax, [edx+58h]
0x8A4BE6: call    eax
0x8A4BE8: cmp     eax, ebp
0x8A4BEA: jz      short loc_8A4BF8
0x8A4BEC: mov     ecx, [eax+2B0h]
0x8A4BF2: mov     [esp+3Ch+var_20], ecx
0x8A4BF6: jmp     short loc_8A4BFC
0x8A4BF8: mov     [esp+3Ch+var_20], ebp
0x8A4BFC: cmp     [esp+3Ch+var_20], ebp
0x8A4C00: jz      loc_8A4D85
0x8A4C06: add     edi, 10h
0x8A4C09: mov     [esp+3Ch+var_24], edi
0x8A4C0D: jmp     short loc_8A4C14
0x8A4C0F: align 10h
0x8A4C10: mov     edi, [esp+3Ch+var_24]
0x8A4C14: cmp     edi, ebp
0x8A4C16: jz      short loc_8A4C31
0x8A4C18: lea     edx, [esp+3Ch+var_14]
0x8A4C1C: push    edx
0x8A4C1D: mov     ecx, edi
0x8A4C1F: call    sub_677C70
0x8A4C24: or      [esp+3Ch+var_28], 1
0x8A4C29: cmp     [eax], ebp
0x8A4C2B: jz      short loc_8A4C31
0x8A4C2D: mov     bl, 1
0x8A4C2F: jmp     short loc_8A4C33
0x8A4C31: xor     bl, bl
0x8A4C33: test    byte ptr [esp+3Ch+var_28], 1
0x8A4C38: jz      short loc_8A4C63
0x8A4C3A: mov     esi, [esp+3Ch+var_14]
0x8A4C3E: and     [esp+3Ch+var_28], 0FFFFFFFEh
0x8A4C43: cmp     esi, ebp
0x8A4C45: jz      short loc_8A4C63
0x8A4C47: lea     eax, [esi+4]
0x8A4C4A: push    eax; lpAddend
0x8A4C4B: call    dword ptr ds:0A2807Ch
0x8A4C51: test    eax, eax
0x8A4C53: jnz     short loc_8A4C63
0x8A4C55: cmp     esi, ebp
0x8A4C57: jz      short loc_8A4C63
0x8A4C59: mov     edx, [esi]
0x8A4C5B: mov     eax, [edx]
0x8A4C5D: push    1
0x8A4C5F: mov     ecx, esi
0x8A4C61: call    eax
0x8A4C63: test    bl, bl
0x8A4C65: jz      loc_8A4D7D
0x8A4C6B: lea     ecx, [esp+3Ch+var_10]
0x8A4C6F: push    ecx
0x8A4C70: mov     ecx, edi
0x8A4C72: call    sub_677C70
0x8A4C77: mov     esi, [eax]
0x8A4C79: cmp     esi, ebp
0x8A4C7B: mov     [esp+3Ch+var_4], ebp
0x8A4C7F: jnz     short loc_8A4C85
0x8A4C81: xor     edi, edi
0x8A4C83: jmp     short loc_8A4CAA
0x8A4C85: mov     edx, [esi]
0x8A4C87: mov     eax, [edx+4]
0x8A4C8A: mov     ecx, esi
0x8A4C8C: call    eax
0x8A4C8E: cmp     eax, ebp
0x8A4C90: jz      short loc_8A4CA0
0x8A4C92: cmp     eax, offset stru_BA7D50
0x8A4C97: jz      short loc_8A4D06
0x8A4C99: mov     eax, [eax+4]
0x8A4C9C: cmp     eax, ebp
0x8A4C9E: jnz     short loc_8A4C92
0x8A4CA0: xor     al, al
0x8A4CA2: neg     al
0x8A4CA4: sbb     eax, eax
0x8A4CA6: and     eax, esi
0x8A4CA8: mov     edi, eax
0x8A4CAA: mov     esi, [esp+3Ch+var_10]
0x8A4CAE: cmp     esi, ebp
0x8A4CB0: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x8A4CB8: jz      short loc_8A4CD6
0x8A4CBA: lea     ecx, [esi+4]
0x8A4CBD: push    ecx; lpAddend
0x8A4CBE: call    dword ptr ds:0A2807Ch
0x8A4CC4: test    eax, eax
0x8A4CC6: jnz     short loc_8A4CD6
0x8A4CC8: cmp     esi, ebp
0x8A4CCA: jz      short loc_8A4CD6
0x8A4CCC: mov     edx, [esi]
0x8A4CCE: mov     eax, [edx]
0x8A4CD0: push    1
0x8A4CD2: mov     ecx, esi
0x8A4CD4: call    eax
0x8A4CD6: cmp     edi, ebp
0x8A4CD8: mov     ecx, [esp+3Ch+var_24]
0x8A4CDC: mov     edx, [ecx+4]
0x8A4CDF: mov     [esp+3Ch+var_24], edx
0x8A4CE3: jz      loc_8A4C10
0x8A4CE9: mov     eax, [esp+3Ch+var_1C]
0x8A4CED: fld1
0x8A4CEF: mov     eax, [eax+8]
0x8A4CF2: fstp    [esp+3Ch+var_18]
0x8A4CF6: cmp     eax, ebp
0x8A4CF8: jz      short loc_8A4D0A
0x8A4CFA: add     eax, 14h
0x8A4CFD: cmp     eax, ebp
0x8A4CFF: jz      short loc_8A4D0A
0x8A4D01: mov     eax, [eax+1Ch]
0x8A4D04: jmp     short loc_8A4D0C
0x8A4D06: mov     al, 1
0x8A4D08: jmp     short loc_8A4CA2
0x8A4D0A: xor     eax, eax
0x8A4D0C: mov     ecx, eax
0x8A4D0E: and     cl, 3Fh
0x8A4D11: cmp     cl, 8
0x8A4D14: jnz     short def_8A4D2B; jumptable 008A4D2B default case, cases 19-22
0x8A4D16: shr     eax, 8
0x8A4D19: and     eax, 1Fh
0x8A4D1C: add     eax, 0FFFFFFEFh; switch 8 cases
0x8A4D1F: cmp     eax, 7
0x8A4D22: ja      short def_8A4D2B; jumptable 008A4D2B default case, cases 19-22
0x8A4D24: movzx   edx, ds:byte_8A4DA4[eax]
0x8A4D2B: jmp     ds:jpt_8A4D2B[edx*4]; switch jump
0x8A4D32: fld     dword ptr ds:0A3744Ch; jumptable 008A4D2B cases 17,18,23,24
0x8A4D38: fstp    [esp+3Ch+var_18]
0x8A4D3C: fld     [esp+3Ch+var_18]; jumptable 008A4D2B default case, cases 19-22
0x8A4D40: push    ecx
0x8A4D41: fstp    [esp+40h+var_40]; float
0x8A4D44: push    edi; int
0x8A4D45: call    sub_8C22F0
0x8A4D4A: mov     esi, eax
0x8A4D4C: add     esp, 8
0x8A4D4F: cmp     esi, ebp
0x8A4D51: jz      loc_8A4C10
0x8A4D57: mov     ecx, [esp+3Ch+var_1C]
0x8A4D5B: push    esi
0x8A4D5C: call    sub_8A46C0
0x8A4D61: mov     eax, [edi]
0x8A4D63: mov     edx, [eax+60h]
0x8A4D66: mov     ecx, edi
0x8A4D68: call    edx
0x8A4D6A: mov     ecx, [esp+3Ch+var_20]
0x8A4D6E: mov     eax, [esi]
0x8A4D70: mov     edx, [eax+5Ch]
0x8A4D73: push    ecx
0x8A4D74: mov     ecx, esi
0x8A4D76: call    edx
0x8A4D78: jmp     loc_8A4C10
0x8A4D7D: mov     eax, [esp+3Ch+var_1C]
0x8A4D81: or      dword ptr [eax+18h], 4
0x8A4D85: mov     ecx, dword ptr [esp+3Ch+var_C]
0x8A4D89: mov     large fs:0, ecx
0x8A4D90: pop     ecx
0x8A4D91: pop     edi
0x8A4D92: pop     esi
0x8A4D93: pop     ebp
0x8A4D94: pop     ebx
0x8A4D95: add     esp, 28h
0x8A4D98: retn
