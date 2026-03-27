0x76EC60: sub     esp, 14h
0x76EC63: push    ebx
0x76EC64: push    ebp
0x76EC65: push    esi
0x76EC66: mov     esi, [esp+20h+arg_0]
0x76EC6A: mov     edx, [esi+10h]
0x76EC6D: mov     ebx, [esi+24h]
0x76EC70: xor     ebp, ebp
0x76EC72: test    edx, edx
0x76EC74: push    edi
0x76EC75: mov     [esp+24h+var_10], ebp
0x76EC79: jnz     short loc_76ECB7
0x76EC7B: xor     edi, edi
0x76EC7D: cmp     [esi+8], di
0x76EC81: jbe     loc_76ED77
0x76EC87: mov     eax, [esi+1Ch]
0x76EC8A: lea     ebx, [ebx+0]
0x76EC90: push    eax
0x76EC91: push    0
0x76EC93: push    ebx
0x76EC94: call    __memset
0x76EC99: mov     eax, [esi+1Ch]
0x76EC9C: add     ebx, [esi+20h]
0x76EC9F: add     edi, 1
0x76ECA2: add     esp, 0Ch
0x76ECA5: add     ebp, eax
0x76ECA7: cmp     di, [esi+8]
0x76ECAB: jb      short loc_76EC90
0x76ECAD: pop     edi
0x76ECAE: pop     esi
0x76ECAF: mov     eax, ebp
0x76ECB1: pop     ebp
0x76ECB2: pop     ebx
0x76ECB3: add     esp, 14h
0x76ECB6: retn
0x76ECB7: mov     ax, [esi+4]
0x76ECBB: mov     cx, [esi]
0x76ECBE: sub     ax, 14h
0x76ECC2: add     cx, 1
0x76ECC6: movzx   eax, ax
0x76ECC9: movzx   ecx, cx
0x76ECCC: mov     edi, eax
0x76ECCE: sub     edi, ecx
0x76ECD0: test    di, di
0x76ECD3: mov     [esp+24h+var_4], ecx
0x76ECD7: jle     short loc_76ECE2
0x76ECD9: movzx   eax, cx
0x76ECDC: mov     [esp+24h+arg_0], eax
0x76ECE0: jmp     short loc_76ECE9
0x76ECE2: movzx   ecx, ax
0x76ECE5: mov     [esp+24h+arg_0], ecx
0x76ECE9: cmp     [esi+8], bp
0x76ECED: mov     [esp+24h+var_C], ebp
0x76ECF1: jbe     loc_76ED77
0x76ECF7: fld     qword ptr ds:0A46298h
0x76ECFD: fld1
0x76ECFF: mov     ecx, [esp+24h+arg_0]
0x76ED03: test    cx, cx
0x76ED06: mov     eax, edx
0x76ED08: mov     edi, ebx
0x76ED0A: mov     [esp+24h+var_14], 0
0x76ED12: jbe     short loc_76ED3F
0x76ED14: movzx   ecx, cx
0x76ED17: movzx   ebp, cx
0x76ED1A: mov     [esp+24h+var_14], ebp
0x76ED1E: movzx   ebp, byte ptr [eax]
0x76ED21: mov     [esp+24h+var_8], ebp
0x76ED25: add     edi, 4
0x76ED28: add     eax, 1
0x76ED2B: sub     ecx, 1
0x76ED2E: fild    [esp+24h+var_8]
0x76ED32: fdiv    st, st(2)
0x76ED34: fsub    st, st(1)
0x76ED36: fstp    dword ptr [edi-4]
0x76ED39: jnz     short loc_76ED1E
0x76ED3B: mov     ebp, [esp+24h+var_10]
0x76ED3F: mov     eax, [esp+24h+var_4]
0x76ED43: mov     ecx, [esp+24h+var_14]
0x76ED47: cmp     cx, ax
0x76ED4A: jnb     short loc_76ED55
0x76ED4C: sub     eax, ecx
0x76ED4E: movzx   ecx, ax
0x76ED51: xor     eax, eax
0x76ED53: rep stosd
0x76ED55: mov     eax, [esp+24h+var_C]
0x76ED59: add     ebp, [esi+1Ch]
0x76ED5C: add     edx, [esi+18h]
0x76ED5F: add     ebx, [esi+20h]
0x76ED62: add     eax, 1
0x76ED65: cmp     ax, [esi+8]
0x76ED69: mov     [esp+24h+var_10], ebp
0x76ED6D: mov     [esp+24h+var_C], eax
0x76ED71: jb      short loc_76ECFF
0x76ED73: fstp    st(1)
0x76ED75: fstp    st
0x76ED77: pop     edi
0x76ED78: pop     esi
0x76ED79: mov     eax, ebp
0x76ED7B: pop     ebp
0x76ED7C: pop     ebx
0x76ED7D: add     esp, 14h
0x76ED80: retn
