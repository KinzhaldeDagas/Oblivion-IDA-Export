0x770CB0: sub     esp, 0Ch
0x770CB3: push    ebx
0x770CB4: push    ebp
0x770CB5: push    esi
0x770CB6: mov     esi, [esp+18h+arg_0]
0x770CBA: mov     ebx, [esi+10h]
0x770CBD: xor     ebp, ebp
0x770CBF: cmp     ebx, ebp
0x770CC1: push    edi
0x770CC2: mov     edi, [esi+24h]
0x770CC5: mov     [esp+1Ch+var_C], ebp
0x770CC9: jnz     short loc_770D03
0x770CCB: cmp     [esi+8], bp
0x770CCF: jbe     loc_770D9D
0x770CD5: mov     eax, [esi+1Ch]
0x770CD8: push    eax
0x770CD9: push    0
0x770CDB: push    edi
0x770CDC: call    __memset
0x770CE1: mov     eax, [esi+1Ch]
0x770CE4: add     edi, [esi+20h]
0x770CE7: add     [esp+28h+var_C], eax
0x770CEB: add     ebp, 1
0x770CEE: add     esp, 0Ch
0x770CF1: cmp     bp, [esi+8]
0x770CF5: jb      short loc_770CD8
0x770CF7: mov     eax, [esp+1Ch+var_C]
0x770CFB: pop     edi
0x770CFC: pop     esi
0x770CFD: pop     ebp
0x770CFE: pop     ebx
0x770CFF: add     esp, 0Ch
0x770D02: retn
0x770D03: mov     ax, [esi+4]
0x770D07: sub     ax, 0Ch
0x770D0B: movzx   eax, ax
0x770D0E: lea     ecx, [eax-4]
0x770D11: test    cx, cx
0x770D14: jle     short loc_770D20
0x770D16: mov     [esp+1Ch+arg_0], 4
0x770D1E: jmp     short loc_770D27
0x770D20: movzx   edx, ax
0x770D23: mov     [esp+1Ch+arg_0], edx
0x770D27: cmp     [esi+8], bp
0x770D2B: mov     [esp+1Ch+var_8], ebp
0x770D2F: jbe     short loc_770D9D
0x770D31: mov     ebp, [esp+1Ch+arg_0]
0x770D35: xor     edx, edx
0x770D37: test    bp, bp
0x770D3A: mov     ecx, ebx
0x770D3C: mov     eax, edi
0x770D3E: jbe     short loc_770D69
0x770D40: movzx   ebp, bp
0x770D43: movzx   edx, bp
0x770D46: mov     [esp+1Ch+var_4], edx
0x770D4A: lea     ebx, [ebx+0]
0x770D50: mov     dl, [ecx]
0x770D52: mov     [eax], dl
0x770D54: add     eax, 1
0x770D57: add     ecx, 2
0x770D5A: sub     ebp, 1
0x770D5D: jnz     short loc_770D50
0x770D5F: mov     edx, [esp+1Ch+var_4]
0x770D63: cmp     dx, 4
0x770D67: jnb     short loc_770D7F
0x770D69: mov     ecx, 4
0x770D6E: sub     ecx, edx
0x770D70: movzx   edx, cx
0x770D73: push    edx
0x770D74: push    0
0x770D76: push    eax
0x770D77: call    __memset
0x770D7C: add     esp, 0Ch
0x770D7F: mov     eax, [esi+1Ch]
0x770D82: add     [esp+1Ch+var_C], eax
0x770D86: mov     eax, [esp+1Ch+var_8]
0x770D8A: add     ebx, [esi+18h]
0x770D8D: add     edi, [esi+20h]
0x770D90: add     eax, 1
0x770D93: cmp     ax, [esi+8]
0x770D97: mov     [esp+1Ch+var_8], eax
0x770D9B: jb      short loc_770D31
0x770D9D: mov     eax, [esp+1Ch+var_C]
0x770DA1: pop     edi
0x770DA2: pop     esi
0x770DA3: pop     ebp
0x770DA4: pop     ebx
0x770DA5: add     esp, 0Ch
0x770DA8: retn
