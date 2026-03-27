0x703EC0: sub     esp, 8
0x703EC3: push    ebx
0x703EC4: push    ebp
0x703EC5: push    esi
0x703EC6: mov     esi, [esp+14h+arg_0]
0x703ECA: push    edi
0x703ECB: push    esi
0x703ECC: mov     edi, ecx
0x703ECE: call    sub_6D7DF0
0x703ED3: mov     ecx, esi
0x703ED5: call    sub_7124D0
0x703EDA: and     word ptr [edi+18h], 0F00Fh
0x703EE0: xor     ebx, ebx
0x703EE2: test    eax, eax
0x703EE4: mov     [esp+18h+var_4], eax
0x703EE8: mov     [esp+18h+var_8], ebx
0x703EEC: jbe     loc_703F88
0x703EF2: mov     ecx, esi
0x703EF4: call    sub_7124D0
0x703EF9: test    eax, eax
0x703EFB: jz      short loc_703F73
0x703EFD: mov     eax, [edi+20h]
0x703F00: mov     ecx, esi
0x703F02: lea     ebx, [eax+ebx*4]
0x703F05: call    sub_7124A0
0x703F0A: mov     esi, [ebx]
0x703F0C: mov     ebx, [esi+8]
0x703F0F: add     esi, 8
0x703F12: mov     ebp, eax
0x703F14: cmp     ebx, ebp
0x703F16: jz      short loc_703F48
0x703F18: test    ebx, ebx
0x703F1A: jz      short loc_703F38
0x703F1C: lea     ecx, [ebx+4]
0x703F1F: push    ecx; lpAddend
0x703F20: call    dword ptr ds:0A2807Ch
0x703F26: test    eax, eax
0x703F28: jnz     short loc_703F38
0x703F2A: test    ebx, ebx
0x703F2C: jz      short loc_703F38
0x703F2E: mov     edx, [ebx]
0x703F30: mov     eax, [edx]
0x703F32: push    1
0x703F34: mov     ecx, ebx
0x703F36: call    eax
0x703F38: test    ebp, ebp
0x703F3A: mov     [esi], ebp
0x703F3C: jz      short loc_703F48
0x703F3E: add     ebp, 4
0x703F41: push    ebp; lpAddend
0x703F42: call    dword ptr ds:0A28078h
0x703F48: cmp     [esp+18h+var_8], 6
0x703F4D: mov     esi, [esp+18h+arg_0]
0x703F51: jb      short loc_703F73
0x703F53: movzx   eax, word ptr [edi+18h]
0x703F57: mov     ecx, eax
0x703F59: shr     ecx, 4
0x703F5C: and     ecx, 0FFh
0x703F62: add     ecx, 1
0x703F65: shl     ecx, 4
0x703F68: and     eax, 0F00Fh
0x703F6D: or      ecx, eax
0x703F6F: mov     [edi+18h], cx
0x703F73: mov     ebx, [esp+18h+var_8]
0x703F77: add     ebx, 1
0x703F7A: cmp     ebx, [esp+18h+var_4]
0x703F7E: mov     [esp+18h+var_8], ebx
0x703F82: jb      loc_703EF2
0x703F88: cmp     dword ptr [esi+0D8h], 5000011h
0x703F92: jb      loc_70401E
0x703F98: mov     ecx, esi
0x703F9A: call    sub_7124D0
0x703F9F: xor     ebx, ebx
0x703FA1: test    eax, eax
0x703FA3: mov     [esp+18h+var_4], eax
0x703FA7: mov     [esp+18h+var_8], ebx
0x703FAB: jbe     short loc_70401E
0x703FAD: lea     ecx, [ecx+0]
0x703FB0: mov     ecx, esi
0x703FB2: call    sub_7124D0
0x703FB7: test    eax, eax
0x703FB9: jz      short loc_70400D
0x703FBB: mov     edx, [edi+2Ch]
0x703FBE: mov     eax, [edx+4]
0x703FC1: mov     ecx, esi
0x703FC3: lea     ebx, [eax+ebx*4]
0x703FC6: call    sub_7124A0
0x703FCB: mov     esi, [ebx]
0x703FCD: mov     ebx, [esi+8]
0x703FD0: add     esi, 8
0x703FD3: mov     ebp, eax
0x703FD5: cmp     ebx, ebp
0x703FD7: jz      short loc_704009
0x703FD9: test    ebx, ebx
0x703FDB: jz      short loc_703FF9
0x703FDD: lea     ecx, [ebx+4]
0x703FE0: push    ecx; lpAddend
0x703FE1: call    dword ptr ds:0A2807Ch
0x703FE7: test    eax, eax
0x703FE9: jnz     short loc_703FF9
0x703FEB: test    ebx, ebx
0x703FED: jz      short loc_703FF9
0x703FEF: mov     edx, [ebx]
0x703FF1: mov     eax, [edx]
0x703FF3: push    1
0x703FF5: mov     ecx, ebx
0x703FF7: call    eax
0x703FF9: test    ebp, ebp
0x703FFB: mov     [esi], ebp
0x703FFD: jz      short loc_704009
0x703FFF: add     ebp, 4
0x704002: push    ebp; lpAddend
0x704003: call    dword ptr ds:0A28078h
0x704009: mov     esi, [esp+18h+arg_0]
0x70400D: mov     ebx, [esp+18h+var_8]
0x704011: add     ebx, 1
0x704014: cmp     ebx, [esp+18h+var_4]
0x704018: mov     [esp+18h+var_8], ebx
0x70401C: jb      short loc_703FB0
0x70401E: pop     edi
0x70401F: pop     esi
0x704020: pop     ebp
0x704021: pop     ebx
0x704022: add     esp, 8
0x704025: retn    4
