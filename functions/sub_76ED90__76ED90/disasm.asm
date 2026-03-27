0x76ED90: sub     esp, 14h
0x76ED93: push    ebx
0x76ED94: push    ebp
0x76ED95: push    esi
0x76ED96: mov     esi, [esp+20h+arg_0]
0x76ED9A: mov     edx, [esi+10h]
0x76ED9D: mov     ebx, [esi+24h]
0x76EDA0: xor     ebp, ebp
0x76EDA2: test    edx, edx
0x76EDA4: push    edi
0x76EDA5: mov     [esp+24h+var_10], ebp
0x76EDA9: jnz     short loc_76EDE7
0x76EDAB: xor     edi, edi
0x76EDAD: cmp     [esi+8], di
0x76EDB1: jbe     loc_76EE9D
0x76EDB7: mov     eax, [esi+1Ch]
0x76EDBA: lea     ebx, [ebx+0]
0x76EDC0: push    eax
0x76EDC1: push    0
0x76EDC3: push    ebx
0x76EDC4: call    __memset
0x76EDC9: mov     eax, [esi+1Ch]
0x76EDCC: add     ebx, [esi+20h]
0x76EDCF: add     edi, 1
0x76EDD2: add     esp, 0Ch
0x76EDD5: add     ebp, eax
0x76EDD7: cmp     di, [esi+8]
0x76EDDB: jb      short loc_76EDC0
0x76EDDD: pop     edi
0x76EDDE: pop     esi
0x76EDDF: mov     eax, ebp
0x76EDE1: pop     ebp
0x76EDE2: pop     ebx
0x76EDE3: add     esp, 14h
0x76EDE6: retn
0x76EDE7: mov     ax, [esi+4]
0x76EDEB: mov     cx, [esi]
0x76EDEE: sub     ax, 18h
0x76EDF2: add     cx, 1
0x76EDF6: movzx   eax, ax
0x76EDF9: movzx   ecx, cx
0x76EDFC: mov     edi, eax
0x76EDFE: sub     edi, ecx
0x76EE00: test    di, di
0x76EE03: mov     [esp+24h+var_4], ecx
0x76EE07: jle     short loc_76EE12
0x76EE09: movzx   eax, cx
0x76EE0C: mov     [esp+24h+arg_0], eax
0x76EE10: jmp     short loc_76EE19
0x76EE12: movzx   ecx, ax
0x76EE15: mov     [esp+24h+arg_0], ecx
0x76EE19: cmp     [esi+8], bp
0x76EE1D: mov     [esp+24h+var_C], ebp
0x76EE21: jbe     short loc_76EE9D
0x76EE23: fld     qword ptr ds:0A3DDD8h
0x76EE29: mov     ecx, [esp+24h+arg_0]
0x76EE2D: test    cx, cx
0x76EE30: mov     eax, edx
0x76EE32: mov     edi, ebx
0x76EE34: mov     [esp+24h+var_14], 0
0x76EE3C: jbe     short loc_76EE67
0x76EE3E: movzx   ecx, cx
0x76EE41: movzx   ebp, cx
0x76EE44: mov     [esp+24h+var_14], ebp
0x76EE48: movzx   ebp, byte ptr [eax]
0x76EE4B: mov     [esp+24h+var_8], ebp
0x76EE4F: add     edi, 4
0x76EE52: add     eax, 1
0x76EE55: sub     ecx, 1
0x76EE58: fild    [esp+24h+var_8]
0x76EE5C: fdiv    st, st(1)
0x76EE5E: fstp    dword ptr [edi-4]
0x76EE61: jnz     short loc_76EE48
0x76EE63: mov     ebp, [esp+24h+var_10]
0x76EE67: mov     eax, [esp+24h+var_4]
0x76EE6B: mov     ecx, [esp+24h+var_14]
0x76EE6F: cmp     cx, ax
0x76EE72: jnb     short loc_76EE7D
0x76EE74: sub     eax, ecx
0x76EE76: movzx   ecx, ax
0x76EE79: xor     eax, eax
0x76EE7B: rep stosd
0x76EE7D: mov     eax, [esp+24h+var_C]
0x76EE81: add     ebp, [esi+1Ch]
0x76EE84: add     edx, [esi+18h]
0x76EE87: add     ebx, [esi+20h]
0x76EE8A: add     eax, 1
0x76EE8D: cmp     ax, [esi+8]
0x76EE91: mov     [esp+24h+var_10], ebp
0x76EE95: mov     [esp+24h+var_C], eax
0x76EE99: jb      short loc_76EE29
0x76EE9B: fstp    st
0x76EE9D: pop     edi
0x76EE9E: pop     esi
0x76EE9F: mov     eax, ebp
0x76EEA1: pop     ebp
0x76EEA2: pop     ebx
0x76EEA3: add     esp, 14h
0x76EEA6: retn
