0x56BA20: push    0FFFFFFFFh
0x56BA22: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x56BA27: mov     eax, large fs:0
0x56BA2D: push    eax
0x56BA2E: push    ecx
0x56BA2F: push    ebx
0x56BA30: push    ebp
0x56BA31: push    esi
0x56BA32: push    edi
0x56BA33: mov     eax, ds:0B30AACh
0x56BA38: xor     eax, esp
0x56BA3A: push    eax
0x56BA3B: lea     eax, [esp+24h+var_C]
0x56BA3F: mov     large fs:0, eax
0x56BA45: mov     esi, ecx
0x56BA47: push    0Ch; Size
0x56BA49: call    FormHeapAlloc
0x56BA4E: add     esp, 4
0x56BA51: mov     [esp+24h+var_10], eax
0x56BA55: xor     ebx, ebx
0x56BA57: cmp     eax, ebx
0x56BA59: mov     [esp+24h+var_4], ebx
0x56BA5D: jz      short loc_56BA73
0x56BA5F: mov     ecx, [esp+24h+arg_0]
0x56BA63: push    ecx
0x56BA64: mov     ecx, eax
0x56BA66: call    sub_56B920
0x56BA6B: mov     ecx, eax
0x56BA6D: mov     [esp+24h+var_10], ecx
0x56BA71: jmp     short loc_56BA79
0x56BA73: mov     [esp+24h+var_10], ebx
0x56BA77: mov     ecx, ebx
0x56BA79: cmp     [esp+24h+arg_0], ebx
0x56BA7D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x56BA85: jbe     short loc_56BACF
0x56BA87: xor     ebp, ebp
0x56BA89: cmp     ebx, [ecx+4]
0x56BA8C: jb      short loc_56BA92
0x56BA8E: xor     edi, edi
0x56BA90: jmp     short loc_56BA96
0x56BA92: mov     edi, [ecx]
0x56BA94: add     edi, ebp
0x56BA96: mov     eax, [esi+4]
0x56BA99: cmp     [esi+8], eax
0x56BA9C: jnz     short loc_56BAB7
0x56BA9E: test    eax, eax
0x56BAA0: jbe     short loc_56BAA6
0x56BAA2: add     eax, eax
0x56BAA4: jmp     short loc_56BAAB
0x56BAA6: mov     eax, 1
0x56BAAB: push    eax
0x56BAAC: mov     ecx, esi
0x56BAAE: call    sub_6E8CA0
0x56BAB3: mov     ecx, [esp+24h+var_10]
0x56BAB7: mov     edx, [esi+8]
0x56BABA: mov     eax, [esi]
0x56BABC: mov     [eax+edx*4], edi
0x56BABF: add     dword ptr [esi+8], 1
0x56BAC3: add     ebx, 1
0x56BAC6: add     ebp, 10h
0x56BAC9: cmp     ebx, [esp+24h+arg_0]
0x56BACD: jb      short loc_56BA89
0x56BACF: mov     edx, [esi+14h]
0x56BAD2: mov     [ecx+8], edx
0x56BAD5: mov     [esi+14h], ecx
0x56BAD8: mov     ecx, [esp+24h+var_C]
0x56BADC: mov     large fs:0, ecx
0x56BAE3: pop     ecx
0x56BAE4: pop     edi
0x56BAE5: pop     esi
0x56BAE6: pop     ebp
0x56BAE7: pop     ebx
0x56BAE8: add     esp, 10h
0x56BAEB: retn    4
