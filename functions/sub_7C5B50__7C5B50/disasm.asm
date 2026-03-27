0x7C5B50: sub     esp, 8
0x7C5B53: push    ebx
0x7C5B54: xor     ebx, ebx
0x7C5B56: push    edi
0x7C5B57: mov     edi, ecx
0x7C5B59: xor     eax, eax
0x7C5B5B: mov     [esp+10h+var_4], ebx
0x7C5B5F: cmp     [edi+104h], eax
0x7C5B65: jz      short loc_7C5BD9
0x7C5B67: push    ebp
0x7C5B68: push    esi
0x7C5B69: mov     eax, [edi+104h]
0x7C5B6F: mov     ecx, [eax]
0x7C5B71: test    ecx, ecx
0x7C5B73: mov     [edi+104h], ecx
0x7C5B79: mov     ebp, [eax+8]
0x7C5B7C: jz      short loc_7C5B9D
0x7C5B7E: test    ebp, ebp
0x7C5B80: jz      short loc_7C5B96
0x7C5B82: lea     edx, [esp+18h+var_4]
0x7C5B86: push    edx
0x7C5B87: mov     ecx, ebp
0x7C5B89: call    sub_405AD0
0x7C5B8E: or      ebx, 1
0x7C5B91: cmp     dword ptr [eax], 0
0x7C5B94: jnz     short loc_7C5B9D
0x7C5B96: mov     [esp+18h+var_5], 1
0x7C5B9B: jmp     short loc_7C5BA2
0x7C5B9D: mov     [esp+18h+var_5], 0
0x7C5BA2: test    bl, 1
0x7C5BA5: jz      short loc_7C5BCE
0x7C5BA7: mov     esi, [esp+18h+var_4]
0x7C5BAB: and     ebx, 0FFFFFFFEh
0x7C5BAE: test    esi, esi
0x7C5BB0: jz      short loc_7C5BCE
0x7C5BB2: lea     eax, [esi+4]
0x7C5BB5: push    eax; lpAddend
0x7C5BB6: call    dword ptr ds:0A2807Ch
0x7C5BBC: test    eax, eax
0x7C5BBE: jnz     short loc_7C5BCE
0x7C5BC0: test    esi, esi
0x7C5BC2: jz      short loc_7C5BCE
0x7C5BC4: mov     edx, [esi]
0x7C5BC6: mov     eax, [edx]
0x7C5BC8: push    1
0x7C5BCA: mov     ecx, esi
0x7C5BCC: call    eax
0x7C5BCE: cmp     [esp+18h+var_5], 0
0x7C5BD3: jnz     short loc_7C5B69
0x7C5BD5: pop     esi
0x7C5BD6: mov     eax, ebp
0x7C5BD8: pop     ebp
0x7C5BD9: pop     edi
0x7C5BDA: pop     ebx
0x7C5BDB: add     esp, 8
0x7C5BDE: retn
