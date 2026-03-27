0x677CF0: push    0FFFFFFFFh
0x677CF2: push    offset SEH_8A4070
0x677CF7: mov     eax, large fs:0
0x677CFD: push    eax
0x677CFE: sub     esp, 8
0x677D01: push    ebx
0x677D02: push    esi
0x677D03: push    edi
0x677D04: mov     eax, ds:0B30AACh
0x677D09: xor     eax, esp
0x677D0B: push    eax
0x677D0C: lea     eax, [esp+24h+var_C]
0x677D10: mov     large fs:0, eax
0x677D16: mov     ebx, [esp+24h+arg_0]
0x677D1A: test    ebx, ebx
0x677D1C: mov     [esp+24h+var_4], 0
0x677D24: jz      loc_677DB0
0x677D2A: cmp     dword ptr [ecx+4], 0
0x677D2E: lea     eax, [ecx+4]
0x677D31: mov     esi, ecx
0x677D33: jz      short loc_677D40
0x677D35: mov     esi, [eax]
0x677D37: cmp     dword ptr [esi+4], 0
0x677D3B: lea     eax, [esi+4]
0x677D3E: jnz     short loc_677D35
0x677D40: cmp     dword ptr [esi], 0
0x677D43: jz      short loc_677D84
0x677D45: push    8; Size
0x677D47: call    FormHeapAlloc
0x677D4C: mov     edi, eax
0x677D4E: add     esp, 4
0x677D51: mov     [esp+24h+var_14], edi
0x677D55: test    edi, edi
0x677D57: mov     byte ptr [esp+24h+var_4], 1
0x677D5C: jz      short loc_677D7D
0x677D5E: push    ecx
0x677D5F: mov     eax, esp
0x677D61: mov     [eax], ebx
0x677D63: lea     eax, [ebx+4]
0x677D66: mov     [esp+28h+var_10], esp
0x677D6A: push    eax; lpAddend
0x677D6B: call    dword ptr ds:0A28078h
0x677D71: mov     ecx, edi
0x677D73: call    sub_532DF0
0x677D78: mov     [esi+4], eax
0x677D7B: jmp     short loc_677D90
0x677D7D: xor     eax, eax
0x677D7F: mov     [esi+4], eax
0x677D82: jmp     short loc_677D90
0x677D84: lea     ecx, [esp+24h+arg_0]
0x677D88: push    ecx
0x677D89: mov     ecx, esi
0x677D8B: call    sub_55E2A0
0x677D90: lea     edx, [ebx+4]
0x677D93: push    edx; lpAddend
0x677D94: mov     [esp+28h+var_4], 0FFFFFFFFh
0x677D9C: call    dword ptr ds:0A2807Ch
0x677DA2: test    eax, eax
0x677DA4: jnz     short loc_677DB0
0x677DA6: mov     eax, [ebx]
0x677DA8: mov     edx, [eax]
0x677DAA: push    1
0x677DAC: mov     ecx, ebx
0x677DAE: call    edx
0x677DB0: mov     ecx, dword ptr [esp+24h+var_C]
0x677DB4: mov     large fs:0, ecx
0x677DBB: pop     ecx
0x677DBC: pop     edi
0x677DBD: pop     esi
0x677DBE: pop     ebx
0x677DBF: add     esp, 14h
0x677DC2: retn    4
