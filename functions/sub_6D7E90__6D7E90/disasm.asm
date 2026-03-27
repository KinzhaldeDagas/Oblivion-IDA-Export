0x6D7E90: push    ebx
0x6D7E91: push    ebp
0x6D7E92: push    esi
0x6D7E93: mov     ebx, 1
0x6D7E98: test    ds:0B3DAECh, bl
0x6D7E9E: push    edi
0x6D7E9F: mov     esi, ecx
0x6D7EA1: jnz     short loc_6D7EC0
0x6D7EA3: or      ds:0B3DAECh, ebx
0x6D7EA9: push    offset sub_A26860; void (__cdecl *)()
0x6D7EAE: mov     dword ptr ds:0B3DAE8h, 0
0x6D7EB8: call    _atexit
0x6D7EBD: add     esp, 4
0x6D7EC0: movzx   ecx, word ptr [esi+0Ah]
0x6D7EC4: mov     eax, [esp+10h+arg_0]
0x6D7EC8: cmp     eax, ecx
0x6D7ECA: mov     ebp, [esp+10h+arg_4]
0x6D7ECE: jb      short loc_6D7EE8
0x6D7ED0: lea     edx, [eax+1]
0x6D7ED3: mov     [esi+0Ah], dx
0x6D7ED7: mov     ecx, [ebp+0]
0x6D7EDA: cmp     ecx, ds:0B3DAE8h
0x6D7EE0: jz      short loc_6D7F0C
0x6D7EE2: add     [esi+0Ch], bx
0x6D7EE6: jmp     short loc_6D7F0C
0x6D7EE8: mov     ecx, ds:0B3DAE8h
0x6D7EEE: cmp     [ebp+0], ecx
0x6D7EF1: mov     edx, [esi+4]
0x6D7EF4: jz      short loc_6D7F01
0x6D7EF6: cmp     [edx+eax*4], ecx
0x6D7EF9: jnz     short loc_6D7F0C
0x6D7EFB: add     [esi+0Ch], bx
0x6D7EFF: jmp     short loc_6D7F0C
0x6D7F01: cmp     [edx+eax*4], ecx
0x6D7F04: jz      short loc_6D7F0C
0x6D7F06: add     word ptr [esi+0Ch], 0FFFFh
0x6D7F0C: mov     ecx, [esi+4]
0x6D7F0F: mov     esi, [ecx+eax*4]
0x6D7F12: cmp     esi, [ebp+0]
0x6D7F15: lea     edi, [ecx+eax*4]
0x6D7F18: jz      short loc_6D7F4C
0x6D7F1A: test    esi, esi
0x6D7F1C: jz      short loc_6D7F39
0x6D7F1E: lea     edx, [esi+4]
0x6D7F21: push    edx; lpAddend
0x6D7F22: call    dword ptr ds:0A2807Ch
0x6D7F28: test    eax, eax
0x6D7F2A: jnz     short loc_6D7F39
0x6D7F2C: test    esi, esi
0x6D7F2E: jz      short loc_6D7F39
0x6D7F30: mov     eax, [esi]
0x6D7F32: mov     edx, [eax]
0x6D7F34: push    ebx
0x6D7F35: mov     ecx, esi
0x6D7F37: call    edx
0x6D7F39: mov     eax, [ebp+0]
0x6D7F3C: test    eax, eax
0x6D7F3E: mov     [edi], eax
0x6D7F40: jz      short loc_6D7F4C
0x6D7F42: add     eax, 4
0x6D7F45: push    eax; lpAddend
0x6D7F46: call    dword ptr ds:0A28078h
0x6D7F4C: pop     edi
0x6D7F4D: pop     esi
0x6D7F4E: pop     ebp
0x6D7F4F: pop     ebx
0x6D7F50: retn    8
