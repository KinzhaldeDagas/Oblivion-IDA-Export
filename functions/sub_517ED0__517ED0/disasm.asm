0x517ED0: push    ebx
0x517ED1: mov     ebx, [esp+4+Str2]
0x517ED5: push    ebp
0x517ED6: xor     ebp, ebp
0x517ED8: test    ebx, ebx
0x517EDA: jz      short loc_517F30
0x517EDC: push    esi
0x517EDD: mov     esi, ds:0B33A98h
0x517EE3: add     esi, 6Ch ; 'l'
0x517EE6: jz      short loc_517F2A
0x517EE8: push    edi
0x517EE9: lea     esp, [esp+0]
0x517EF0: cmp     [esi+4], ebp
0x517EF3: jnz     short loc_517EF9
0x517EF5: cmp     [esi], ebp
0x517EF7: jz      short loc_517F1C
0x517EF9: mov     edi, [esi]
0x517EFB: mov     eax, [edi+28h]
0x517EFE: test    eax, eax
0x517F00: jnz     short loc_517F07
0x517F02: mov     eax, offset EmptyString
0x517F07: push    ebx; Str2
0x517F08: push    eax; Str1
0x517F09: call    __strcmp
0x517F0E: add     esp, 8
0x517F11: test    eax, eax
0x517F13: jz      short loc_517F23
0x517F15: mov     esi, [esi+4]
0x517F18: test    esi, esi
0x517F1A: jnz     short loc_517EF0
0x517F1C: pop     edi
0x517F1D: pop     esi
0x517F1E: mov     eax, ebp
0x517F20: pop     ebp
0x517F21: pop     ebx
0x517F22: retn
0x517F23: mov     eax, edi
0x517F25: pop     edi
0x517F26: pop     esi
0x517F27: pop     ebp
0x517F28: pop     ebx
0x517F29: retn
0x517F2A: pop     esi
0x517F2B: mov     eax, ebp
0x517F2D: pop     ebp
0x517F2E: pop     ebx
0x517F2F: retn
0x517F30: mov     eax, ebp
0x517F32: pop     ebp
0x517F33: pop     ebx
0x517F34: retn
