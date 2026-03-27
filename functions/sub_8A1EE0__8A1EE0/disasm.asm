0x8A1EE0: push    ebx
0x8A1EE1: mov     ebx, [esp+4+arg_0]
0x8A1EE5: test    bl, bl
0x8A1EE7: push    edi
0x8A1EE8: mov     edi, ecx
0x8A1EEA: jz      short loc_8A1F20
0x8A1EEC: test    edi, edi
0x8A1EEE: jz      short loc_8A1F03
0x8A1EF0: mov     eax, [edi+8]
0x8A1EF3: test    eax, eax
0x8A1EF5: jz      short loc_8A1F03
0x8A1EF7: mov     eax, [eax+0Ch]
0x8A1EFA: test    eax, eax
0x8A1EFC: jz      short loc_8A1F03
0x8A1EFE: mov     eax, [eax+8]
0x8A1F01: jmp     short loc_8A1F05
0x8A1F03: xor     eax, eax
0x8A1F05: test    eax, eax
0x8A1F07: jz      short loc_8A1F57
0x8A1F09: add     eax, 4
0x8A1F0C: push    eax; lpAddend
0x8A1F0D: call    dword ptr ds:0A28078h
0x8A1F13: push    ebx
0x8A1F14: mov     ecx, edi
0x8A1F16: call    sub_8A26C0
0x8A1F1B: pop     edi
0x8A1F1C: pop     ebx
0x8A1F1D: retn    4
0x8A1F20: test    edi, edi
0x8A1F22: push    esi
0x8A1F23: jz      short loc_8A1F38
0x8A1F25: mov     eax, [edi+8]
0x8A1F28: test    eax, eax
0x8A1F2A: jz      short loc_8A1F38
0x8A1F2C: mov     eax, [eax+0Ch]
0x8A1F2F: test    eax, eax
0x8A1F31: jz      short loc_8A1F38
0x8A1F33: mov     esi, [eax+8]
0x8A1F36: jmp     short loc_8A1F3A
0x8A1F38: xor     esi, esi
0x8A1F3A: test    esi, esi
0x8A1F3C: jz      short loc_8A1F56
0x8A1F3E: lea     eax, [esi+4]
0x8A1F41: push    eax; lpAddend
0x8A1F42: call    dword ptr ds:0A2807Ch
0x8A1F48: test    eax, eax
0x8A1F4A: jnz     short loc_8A1F56
0x8A1F4C: mov     edx, [esi]
0x8A1F4E: mov     eax, [edx]
0x8A1F50: push    1
0x8A1F52: mov     ecx, esi
0x8A1F54: call    eax
0x8A1F56: pop     esi
0x8A1F57: push    ebx
0x8A1F58: mov     ecx, edi
0x8A1F5A: call    sub_8A26C0
0x8A1F5F: pop     edi
0x8A1F60: pop     ebx
0x8A1F61: retn    4
