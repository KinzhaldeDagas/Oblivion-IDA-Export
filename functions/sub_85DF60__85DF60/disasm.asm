0x85DF60: push    0FFFFFFFFh
0x85DF62: push    offset SEH_85DE70
0x85DF67: mov     eax, large fs:0
0x85DF6D: push    eax
0x85DF6E: push    ecx
0x85DF6F: push    ebx
0x85DF70: push    ebp
0x85DF71: push    esi
0x85DF72: push    edi
0x85DF73: mov     eax, ds:0B30AACh
0x85DF78: xor     eax, esp
0x85DF7A: push    eax
0x85DF7B: lea     eax, [esp+24h+var_C]
0x85DF7F: mov     large fs:0, eax
0x85DF85: mov     edi, ecx
0x85DF87: mov     esi, ds:0B477ECh
0x85DF8D: mov     eax, [esi+24h]
0x85DF90: mov     ecx, [esp+24h+arg_C]
0x85DF94: mov     ebx, [eax]
0x85DF96: push    0
0x85DF98: push    ecx
0x85DF99: mov     ecx, edi
0x85DF9B: mov     [esp+2Ch+var_10], ebx
0x85DF9F: call    sub_848FD0
0x85DFA4: mov     ebx, [ebx+4]
0x85DFA7: mov     ebp, eax
0x85DFA9: cmp     ebx, ebp
0x85DFAB: jz      short loc_85DFE2
0x85DFAD: test    ebx, ebx
0x85DFAF: jz      short loc_85DFCD
0x85DFB1: lea     edx, [ebx+4]
0x85DFB4: push    edx; lpAddend
0x85DFB5: call    dword ptr ds:0A2807Ch
0x85DFBB: test    eax, eax
0x85DFBD: jnz     short loc_85DFCD
0x85DFBF: test    ebx, ebx
0x85DFC1: jz      short loc_85DFCD
0x85DFC3: mov     eax, [ebx]
0x85DFC5: mov     edx, [eax]
0x85DFC7: push    1
0x85DFC9: mov     ecx, ebx
0x85DFCB: call    edx
0x85DFCD: test    ebp, ebp
0x85DFCF: mov     eax, [esp+24h+var_10]
0x85DFD3: mov     [eax+4], ebp
0x85DFD6: jz      short loc_85DFE2
0x85DFD8: add     ebp, 4
0x85DFDB: push    ebp; lpAddend
0x85DFDC: call    dword ptr ds:0A28078h
0x85DFE2: mov     ecx, [esp+24h+arg_C]
0x85DFE6: mov     edx, [esp+24h+var_10]
0x85DFEA: push    ecx
0x85DFEB: push    edx
0x85DFEC: mov     ecx, edi
0x85DFEE: call    sub_848FA0
0x85DFF3: cmp     byte ptr [esp+24h+arg_10], 0
0x85DFF8: jnz     short loc_85E035
0x85DFFA: mov     ebx, 1
0x85DFFF: add     [esi+60h], ebx
0x85E002: mov     [esp+24h+arg_10], esi
0x85E006: mov     ecx, [edi+38h]
0x85E009: lea     eax, [esp+24h+arg_10]
0x85E00D: push    eax
0x85E00E: push    ecx
0x85E00F: lea     ecx, [edi+40h]
0x85E012: mov     [esp+2Ch+var_4], 0
0x85E01A: call    sub_76CE40
0x85E01F: or      eax, 0FFFFFFFFh
0x85E022: add     [esi+60h], eax
0x85E025: mov     [esp+24h+var_4], eax
0x85E029: jnz     short loc_85E032
0x85E02B: mov     ecx, esi
0x85E02D: call    sub_7604D0
0x85E032: add     [edi+38h], ebx
0x85E035: mov     ecx, dword ptr [esp+24h+var_C]
0x85E039: mov     large fs:0, ecx
0x85E040: pop     ecx
0x85E041: pop     edi
0x85E042: pop     esi
0x85E043: pop     ebp
0x85E044: pop     ebx
0x85E045: add     esp, 10h
0x85E048: retn    14h
