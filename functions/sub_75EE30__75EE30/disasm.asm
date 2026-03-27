0x75EE30: push    ebx
0x75EE31: push    esi
0x75EE32: push    edi
0x75EE33: mov     edi, [esp+0Ch+arg_0]
0x75EE37: push    edi
0x75EE38: mov     esi, ecx
0x75EE3A: call    nullsub_returnvVoid_1arg
0x75EE3F: mov     ecx, edi
0x75EE41: call    sub_7124A0
0x75EE46: mov     ecx, edi
0x75EE48: mov     [esi+10h], eax
0x75EE4B: call    sub_7124A0
0x75EE50: mov     ecx, edi
0x75EE52: mov     [esi+24h], eax
0x75EE55: call    sub_7124A0
0x75EE5A: mov     edi, [esi+28h]
0x75EE5D: mov     ebx, eax
0x75EE5F: cmp     edi, ebx
0x75EE61: jz      short loc_75EE94
0x75EE63: test    edi, edi
0x75EE65: jz      short loc_75EE83
0x75EE67: lea     eax, [edi+4]
0x75EE6A: push    eax; lpAddend
0x75EE6B: call    dword ptr ds:0A2807Ch
0x75EE71: test    eax, eax
0x75EE73: jnz     short loc_75EE83
0x75EE75: test    edi, edi
0x75EE77: jz      short loc_75EE83
0x75EE79: mov     edx, [edi]
0x75EE7B: mov     eax, [edx]
0x75EE7D: push    1
0x75EE7F: mov     ecx, edi
0x75EE81: call    eax
0x75EE83: test    ebx, ebx
0x75EE85: mov     [esi+28h], ebx
0x75EE88: jz      short loc_75EE94
0x75EE8A: add     ebx, 4
0x75EE8D: push    ebx; lpAddend
0x75EE8E: call    dword ptr ds:0A28078h
0x75EE94: pop     edi
0x75EE95: pop     esi
0x75EE96: pop     ebx
0x75EE97: retn    4
