0x738B50: sub     esp, 34h
0x738B53: push    esi
0x738B54: push    edi
0x738B55: mov     edi, [esp+3Ch+arg_0]
0x738B59: push    edi
0x738B5A: mov     esi, ecx
0x738B5C: call    sub_71FDE0
0x738B61: test    al, al
0x738B63: jnz     short loc_738B6F
0x738B65: pop     edi
0x738B66: xor     al, al
0x738B68: pop     esi
0x738B69: add     esp, 34h
0x738B6C: retn    4
0x738B6F: mov     al, [edi+58h]
0x738B72: cmp     al, [esi+58h]
0x738B75: jnz     short loc_738B65
0x738B77: movzx   eax, word ptr [edi+6Ch]
0x738B7B: movzx   ecx, word ptr [esi+6Ch]
0x738B7F: cmp     eax, ecx
0x738B81: mov     [esp+3Ch+var_4], eax
0x738B85: jnz     short loc_738B65
0x738B87: mov     dx, [edi+6Ah]
0x738B8B: cmp     dx, [esi+6Ah]
0x738B8F: jnz     short loc_738B65
0x738B91: test    eax, eax
0x738B93: push    ebx
0x738B94: push    ebp
0x738B95: mov     [esp+44h+var_28], 0
0x738B9D: jbe     loc_738CF4
0x738BA3: mov     edx, [esi+64h]
0x738BA6: mov     edi, [edi+64h]
0x738BA9: sub     edi, edx
0x738BAB: mov     [esp+44h+var_30], edx
0x738BAF: mov     [esp+44h+var_24], edi
0x738BB3: jmp     short loc_738BB9
0x738BB5: mov     edi, [esp+44h+var_24]
0x738BB9: mov     eax, [edi+edx]
0x738BBC: test    eax, eax
0x738BBE: mov     ecx, [edx]
0x738BC0: jz      loc_738D00
0x738BC6: test    ecx, ecx
0x738BC8: jz      loc_738D04
0x738BCE: movzx   ebp, word ptr [eax+4]
0x738BD2: movzx   esi, word ptr [ecx+4]
0x738BD6: cmp     ebp, esi
0x738BD8: movzx   edx, word ptr [eax+6]
0x738BDC: mov     [esp+44h+var_8], ebp
0x738BE0: mov     [esp+44h+var_18], edx
0x738BE4: jnz     loc_738D04
0x738BEA: movzx   esi, word ptr [ecx+6]
0x738BEE: cmp     edx, esi
0x738BF0: jnz     loc_738D04
0x738BF6: test    ebp, ebp
0x738BF8: mov     edx, [eax+8]
0x738BFB: mov     edi, [ecx+8]
0x738BFE: mov     esi, [eax+0Ch]
0x738C01: mov     ebx, [ecx+0Ch]
0x738C04: mov     eax, [eax+10h]
0x738C07: mov     ecx, [ecx+10h]
0x738C0A: mov     [esp+44h+var_10], eax
0x738C0E: mov     [esp+44h+var_14], ecx
0x738C12: mov     [esp+44h+var_2C], 0
0x738C1A: jbe     loc_738CD4
0x738C20: sub     edi, edx
0x738C22: mov     ecx, edx
0x738C24: sub     ebx, esi
0x738C26: mov     [esp+44h+var_34], esi
0x738C2A: mov     [esp+44h+arg_0], ecx
0x738C2E: mov     ebp, eax
0x738C30: mov     [esp+44h+var_20], edi
0x738C34: mov     [esp+44h+var_1C], ebx
0x738C38: jmp     short loc_738C4C
0x738C3A: align 10h
0x738C40: mov     ecx, [esp+44h+arg_0]
0x738C44: mov     edi, [esp+44h+var_20]
0x738C48: mov     ebx, [esp+44h+var_1C]
0x738C4C: add     edi, ecx
0x738C4E: push    edi
0x738C4F: call    sub_4B9D10
0x738C54: test    al, al
0x738C56: jnz     loc_738D04
0x738C5C: mov     ecx, [esp+44h+var_34]
0x738C60: add     ebx, ecx
0x738C62: push    ebx
0x738C63: call    sub_632310
0x738C68: test    al, al
0x738C6A: jnz     loc_738D04
0x738C70: mov     ebx, [esp+44h+var_18]
0x738C74: xor     edi, edi
0x738C76: test    ebx, ebx
0x738C78: jbe     short loc_738CAC
0x738C7A: mov     eax, [esp+44h+var_14]
0x738C7E: sub     eax, [esp+44h+var_10]
0x738C82: mov     esi, ebp
0x738C84: mov     [esp+44h+var_C], eax
0x738C88: jmp     short loc_738C94
0x738C8A: align 10h
0x738C90: mov     eax, [esp+44h+var_C]
0x738C94: add     eax, esi
0x738C96: push    eax
0x738C97: mov     ecx, esi
0x738C99: call    sub_4B9D10
0x738C9E: test    al, al
0x738CA0: jnz     short loc_738D04
0x738CA2: add     edi, 1
0x738CA5: add     esi, 8
0x738CA8: cmp     edi, ebx
0x738CAA: jb      short loc_738C90
0x738CAC: mov     eax, [esp+44h+var_2C]
0x738CB0: add     [esp+44h+arg_0], 8
0x738CB5: add     [esp+44h+var_34], 10h
0x738CBA: add     eax, 1
0x738CBD: lea     ecx, ds:0[ebx*8]
0x738CC4: add     ebp, ecx
0x738CC6: cmp     eax, [esp+44h+var_8]
0x738CCA: mov     [esp+44h+var_2C], eax
0x738CCE: jb      loc_738C40
0x738CD4: mov     edx, [esp+44h+var_30]
0x738CD8: mov     eax, [esp+44h+var_28]
0x738CDC: add     eax, 1
0x738CDF: add     edx, 4
0x738CE2: cmp     eax, [esp+44h+var_4]
0x738CE6: mov     [esp+44h+var_28], eax
0x738CEA: mov     [esp+44h+var_30], edx
0x738CEE: jb      loc_738BB5
0x738CF4: pop     ebp
0x738CF5: pop     ebx
0x738CF6: pop     edi
0x738CF7: mov     al, 1
0x738CF9: pop     esi
0x738CFA: add     esp, 34h
0x738CFD: retn    4
0x738D00: test    ecx, ecx
0x738D02: jz      short loc_738CD8
0x738D04: pop     ebp
0x738D05: pop     ebx
0x738D06: pop     edi
0x738D07: xor     al, al
0x738D09: pop     esi
0x738D0A: add     esp, 34h
0x738D0D: retn    4
