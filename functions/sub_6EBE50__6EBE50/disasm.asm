0x6EBE50: push    0FFFFFFFFh
0x6EBE52: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x6EBE57: mov     eax, large fs:0
0x6EBE5D: push    eax
0x6EBE5E: push    ecx
0x6EBE5F: push    ebx
0x6EBE60: push    ebp
0x6EBE61: push    esi
0x6EBE62: push    edi
0x6EBE63: mov     eax, ds:0B30AACh
0x6EBE68: xor     eax, esp
0x6EBE6A: push    eax
0x6EBE6B: lea     eax, [esp+24h+var_C]
0x6EBE6F: mov     large fs:0, eax
0x6EBE75: mov     esi, ecx
0x6EBE77: push    0Ch; Size
0x6EBE79: call    FormHeapAlloc
0x6EBE7E: add     esp, 4
0x6EBE81: mov     [esp+24h+var_10], eax
0x6EBE85: xor     ebx, ebx
0x6EBE87: cmp     eax, ebx
0x6EBE89: mov     [esp+24h+var_4], ebx
0x6EBE8D: jz      short loc_6EBEA3
0x6EBE8F: mov     ecx, [esp+24h+arg_0]
0x6EBE93: push    ecx
0x6EBE94: mov     ecx, eax
0x6EBE96: call    sub_6EBD50
0x6EBE9B: mov     ecx, eax
0x6EBE9D: mov     [esp+24h+var_10], ecx
0x6EBEA1: jmp     short loc_6EBEA9
0x6EBEA3: mov     [esp+24h+var_10], ebx
0x6EBEA7: mov     ecx, ebx
0x6EBEA9: cmp     [esp+24h+arg_0], ebx
0x6EBEAD: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6EBEB5: jbe     short loc_6EBEFF
0x6EBEB7: xor     ebp, ebp
0x6EBEB9: cmp     ebx, [ecx+4]
0x6EBEBC: jb      short loc_6EBEC2
0x6EBEBE: xor     edi, edi
0x6EBEC0: jmp     short loc_6EBEC6
0x6EBEC2: mov     edi, [ecx]
0x6EBEC4: add     edi, ebp
0x6EBEC6: mov     eax, [esi+4]
0x6EBEC9: cmp     [esi+8], eax
0x6EBECC: jnz     short loc_6EBEE7
0x6EBECE: test    eax, eax
0x6EBED0: jbe     short loc_6EBED6
0x6EBED2: add     eax, eax
0x6EBED4: jmp     short loc_6EBEDB
0x6EBED6: mov     eax, 1
0x6EBEDB: push    eax
0x6EBEDC: mov     ecx, esi
0x6EBEDE: call    sub_6E8CA0
0x6EBEE3: mov     ecx, [esp+24h+var_10]
0x6EBEE7: mov     edx, [esi+8]
0x6EBEEA: mov     eax, [esi]
0x6EBEEC: mov     [eax+edx*4], edi
0x6EBEEF: add     dword ptr [esi+8], 1
0x6EBEF3: add     ebx, 1
0x6EBEF6: add     ebp, 14h
0x6EBEF9: cmp     ebx, [esp+24h+arg_0]
0x6EBEFD: jb      short loc_6EBEB9
0x6EBEFF: mov     edx, [esi+14h]
0x6EBF02: mov     [ecx+8], edx
0x6EBF05: mov     [esi+14h], ecx
0x6EBF08: mov     ecx, [esp+24h+var_C]
0x6EBF0C: mov     large fs:0, ecx
0x6EBF13: pop     ecx
0x6EBF14: pop     edi
0x6EBF15: pop     esi
0x6EBF16: pop     ebp
0x6EBF17: pop     ebx
0x6EBF18: add     esp, 10h
0x6EBF1B: retn    4
