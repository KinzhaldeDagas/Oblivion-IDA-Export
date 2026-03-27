0x6C7E90: push    ebx
0x6C7E91: push    ebp
0x6C7E92: push    esi
0x6C7E93: mov     ebx, 1
0x6C7E98: test    ds:0B3CB00h, bl
0x6C7E9E: push    edi
0x6C7E9F: mov     esi, ecx
0x6C7EA1: jnz     short loc_6C7EC0
0x6C7EA3: or      ds:0B3CB00h, ebx
0x6C7EA9: push    offset sub_A26800; void (__cdecl *)()
0x6C7EAE: mov     dword ptr ds:0B3CAFCh, 0
0x6C7EB8: call    _atexit
0x6C7EBD: add     esp, 4
0x6C7EC0: movzx   ecx, word ptr [esi+0Ah]
0x6C7EC4: mov     eax, [esp+10h+arg_0]
0x6C7EC8: cmp     eax, ecx
0x6C7ECA: mov     ebp, [esp+10h+arg_4]
0x6C7ECE: jb      short loc_6C7EE8
0x6C7ED0: lea     edx, [eax+1]
0x6C7ED3: mov     [esi+0Ah], dx
0x6C7ED7: mov     ecx, [ebp+0]
0x6C7EDA: cmp     ecx, ds:0B3CAFCh
0x6C7EE0: jz      short loc_6C7F0C
0x6C7EE2: add     [esi+0Ch], bx
0x6C7EE6: jmp     short loc_6C7F0C
0x6C7EE8: mov     ecx, ds:0B3CAFCh
0x6C7EEE: cmp     [ebp+0], ecx
0x6C7EF1: mov     edx, [esi+4]
0x6C7EF4: jz      short loc_6C7F01
0x6C7EF6: cmp     [edx+eax*4], ecx
0x6C7EF9: jnz     short loc_6C7F0C
0x6C7EFB: add     [esi+0Ch], bx
0x6C7EFF: jmp     short loc_6C7F0C
0x6C7F01: cmp     [edx+eax*4], ecx
0x6C7F04: jz      short loc_6C7F0C
0x6C7F06: add     word ptr [esi+0Ch], 0FFFFh
0x6C7F0C: mov     ecx, [esi+4]
0x6C7F0F: mov     esi, [ecx+eax*4]
0x6C7F12: cmp     esi, [ebp+0]
0x6C7F15: lea     edi, [ecx+eax*4]
0x6C7F18: jz      short loc_6C7F4C
0x6C7F1A: test    esi, esi
0x6C7F1C: jz      short loc_6C7F39
0x6C7F1E: lea     edx, [esi+4]
0x6C7F21: push    edx; lpAddend
0x6C7F22: call    dword ptr ds:0A2807Ch
0x6C7F28: test    eax, eax
0x6C7F2A: jnz     short loc_6C7F39
0x6C7F2C: test    esi, esi
0x6C7F2E: jz      short loc_6C7F39
0x6C7F30: mov     eax, [esi]
0x6C7F32: mov     edx, [eax]
0x6C7F34: push    ebx
0x6C7F35: mov     ecx, esi
0x6C7F37: call    edx
0x6C7F39: mov     eax, [ebp+0]
0x6C7F3C: test    eax, eax
0x6C7F3E: mov     [edi], eax
0x6C7F40: jz      short loc_6C7F4C
0x6C7F42: add     eax, 4
0x6C7F45: push    eax; lpAddend
0x6C7F46: call    dword ptr ds:0A28078h
0x6C7F4C: pop     edi
0x6C7F4D: pop     esi
0x6C7F4E: pop     ebp
0x6C7F4F: pop     ebx
0x6C7F50: retn    8
