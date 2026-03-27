0x77EE20: mov     ecx, ds:0B428ACh
0x77EE26: sub     esp, 0Ch
0x77EE29: push    ebx
0x77EE2A: xor     ebx, ebx
0x77EE2C: cmp     ecx, ebx
0x77EE2E: jz      short loc_77EEA3
0x77EE30: push    esi
0x77EE31: mov     esi, [ecx+4]
0x77EE34: xor     eax, eax
0x77EE36: cmp     esi, ebx
0x77EE38: push    edi
0x77EE39: jbe     short loc_77EE4E
0x77EE3B: mov     edi, [ecx+8]
0x77EE3E: mov     edx, edi
0x77EE40: cmp     [edx], ebx
0x77EE42: jnz     short loc_77EE5E
0x77EE44: add     eax, 1
0x77EE47: add     edx, 4
0x77EE4A: cmp     eax, esi
0x77EE4C: jb      short loc_77EE40
0x77EE4E: xor     eax, eax
0x77EE50: cmp     eax, ebx
0x77EE52: mov     [esp+18h+var_4], eax
0x77EE56: jz      short loc_77EEA1
0x77EE58: mov     esi, [esp+18h+arg_0]
0x77EE5C: jmp     short loc_77EE69
0x77EE5E: mov     eax, [edi+eax*4]
0x77EE61: jmp     short loc_77EE50
0x77EE63: mov     ecx, ds:0B428ACh
0x77EE69: lea     eax, [esp+18h+var_C]
0x77EE6D: push    eax
0x77EE6E: lea     edx, [esp+1Ch+var_8]
0x77EE72: push    edx
0x77EE73: lea     eax, [esp+20h+var_4]
0x77EE77: push    eax
0x77EE78: mov     [esp+24h+var_8], ebx
0x77EE7C: mov     [esp+24h+var_C], ebx
0x77EE80: call    sub_452600
0x77EE85: cmp     esi, [esp+18h+var_C]
0x77EE89: jnz     short loc_77EE9B
0x77EE8B: mov     ecx, [esp+18h+var_8]
0x77EE8F: push    ecx
0x77EE90: mov     ecx, ds:0B428ACh
0x77EE96: call    NiTMap_RemoveAt
0x77EE9B: cmp     [esp+18h+var_4], ebx
0x77EE9F: jnz     short loc_77EE63
0x77EEA1: pop     edi
0x77EEA2: pop     esi
0x77EEA3: pop     ebx
0x77EEA4: add     esp, 0Ch
0x77EEA7: retn
