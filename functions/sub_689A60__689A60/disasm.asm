0x689A60: push    0FFFFFFFFh
0x689A62: push    offset SEH_6CED50
0x689A67: mov     eax, large fs:0
0x689A6D: push    eax
0x689A6E: sub     esp, 8
0x689A71: push    ebx
0x689A72: push    ebp
0x689A73: push    esi
0x689A74: push    edi
0x689A75: mov     eax, ds:0B30AACh
0x689A7A: xor     eax, esp
0x689A7C: push    eax
0x689A7D: lea     eax, [esp+28h+var_C]
0x689A81: mov     large fs:0, eax
0x689A87: mov     [esp+28h+var_14], ecx
0x689A8B: call    sub_689A00
0x689A90: mov     eax, [esp+28h+arg_0]
0x689A94: xor     ebp, ebp
0x689A96: xor     ebx, ebx
0x689A98: cmp     eax, ebp
0x689A9A: mov     [esp+28h+arg_0], eax
0x689A9E: jz      loc_689B95
0x689AA4: mov     esi, [esp+28h+arg_0]
0x689AA8: cmp     [esi+4], ebp
0x689AAB: jnz     short loc_689AB5
0x689AAD: cmp     [esi], ebp
0x689AAF: jz      loc_689B95
0x689AB5: push    8; Size
0x689AB7: call    FormHeapAlloc
0x689ABC: add     esp, 4
0x689ABF: mov     [esp+28h+var_10], eax
0x689AC3: cmp     eax, ebp
0x689AC5: mov     [esp+28h+var_4], ebp
0x689AC9: jz      short loc_689AD6
0x689ACB: mov     ecx, eax
0x689ACD: call    sub_68B0C0
0x689AD2: mov     edi, eax
0x689AD4: jmp     short loc_689AD8
0x689AD6: xor     edi, edi
0x689AD8: push    ebp
0x689AD9: mov     ecx, edi
0x689ADB: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x689AE3: call    sub_68B1D0
0x689AE8: mov     eax, [esi]
0x689AEA: push    eax
0x689AEB: mov     ecx, edi
0x689AED: call    sub_68B100
0x689AF2: cmp     ebx, ebp
0x689AF4: jz      short loc_689B3E
0x689AF6: cmp     edi, ebp
0x689AF8: jz      short loc_689B39
0x689AFA: cmp     [ebx+4], ebp
0x689AFD: lea     eax, [ebx+4]
0x689B00: mov     esi, ebx
0x689B02: jz      short loc_689B0E
0x689B04: mov     esi, [eax]
0x689B06: cmp     [esi+4], ebp
0x689B09: lea     eax, [esi+4]
0x689B0C: jnz     short loc_689B04
0x689B0E: cmp     [esi], ebp
0x689B10: jz      short loc_689B37
0x689B12: push    8; Size
0x689B14: call    FormHeapAlloc
0x689B19: add     esp, 4
0x689B1C: cmp     eax, ebp
0x689B1E: jz      short loc_689B2D
0x689B20: mov     [eax], edi
0x689B22: mov     [eax+4], ebp
0x689B25: mov     [esi+4], eax
0x689B28: mov     ebx, [ebx+4]
0x689B2B: jmp     short loc_689B82
0x689B2D: xor     eax, eax
0x689B2F: mov     [esi+4], eax
0x689B32: mov     ebx, [ebx+4]
0x689B35: jmp     short loc_689B82
0x689B37: mov     [esi], edi
0x689B39: mov     ebx, [ebx+4]
0x689B3C: jmp     short loc_689B82
0x689B3E: mov     ebx, [esp+28h+var_14]
0x689B42: add     ebx, 4
0x689B45: cmp     edi, ebp
0x689B47: jz      short loc_689B82
0x689B49: cmp     [ebx+4], ebp
0x689B4C: lea     eax, [ebx+4]
0x689B4F: mov     esi, ebx
0x689B51: jz      short loc_689B5D
0x689B53: mov     esi, [eax]
0x689B55: cmp     [esi+4], ebp
0x689B58: lea     eax, [esi+4]
0x689B5B: jnz     short loc_689B53
0x689B5D: cmp     [esi], ebp
0x689B5F: jz      short loc_689B80
0x689B61: push    8; Size
0x689B63: call    FormHeapAlloc
0x689B68: add     esp, 4
0x689B6B: cmp     eax, ebp
0x689B6D: jz      short loc_689B79
0x689B6F: mov     [eax], edi
0x689B71: mov     [eax+4], ebp
0x689B74: mov     [esi+4], eax
0x689B77: jmp     short loc_689B82
0x689B79: xor     eax, eax
0x689B7B: mov     [esi+4], eax
0x689B7E: jmp     short loc_689B82
0x689B80: mov     [esi], edi
0x689B82: mov     ecx, [esp+28h+arg_0]
0x689B86: mov     eax, [ecx+4]
0x689B89: cmp     eax, ebp
0x689B8B: mov     [esp+28h+arg_0], eax
0x689B8F: jnz     loc_689AA4
0x689B95: mov     ecx, [esp+28h+var_C]
0x689B99: mov     large fs:0, ecx
0x689BA0: pop     ecx
0x689BA1: pop     edi
0x689BA2: pop     esi
0x689BA3: pop     ebp
0x689BA4: pop     ebx
0x689BA5: add     esp, 14h
0x689BA8: retn    4
