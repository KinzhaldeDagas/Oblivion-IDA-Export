0x480F00: push    ebx
0x480F01: push    esi
0x480F02: mov     esi, [esp+8+arg_0]
0x480F06: xor     ebx, ebx
0x480F08: test    esi, esi
0x480F0A: jz      loc_480FCA
0x480F10: mov     eax, [esi]
0x480F12: mov     edx, [eax+10h]
0x480F15: mov     ecx, esi
0x480F17: call    edx
0x480F19: test    eax, eax
0x480F1B: jz      short loc_480F6B
0x480F1D: cmp     byte ptr [esp+8+arg_4], bl
0x480F21: jz      short loc_480F46
0x480F23: mov     eax, [esi+8]
0x480F26: test    eax, eax
0x480F28: jz      loc_480FCA
0x480F2E: push    5; MaxCount
0x480F30: push    offset aDecal; "Decal"
0x480F35: push    eax; Str1
0x480F36: call    _strncmp
0x480F3B: add     esp, 0Ch
0x480F3E: test    eax, eax
0x480F40: jz      loc_480FCA
0x480F46: cmp     byte ptr [esp+8+arg_8], bl
0x480F4A: jz      short loc_480F63
0x480F4C: mov     esi, [esi+8]
0x480F4F: push    7; MaxCount
0x480F51: push    offset aBlock_1; "Block ("
0x480F56: push    esi; Str1
0x480F57: call    _strncmp
0x480F5C: add     esp, 0Ch
0x480F5F: test    eax, eax
0x480F61: jnz     short loc_480FCA
0x480F63: pop     esi
0x480F64: mov     eax, 1
0x480F69: pop     ebx
0x480F6A: retn
0x480F6B: mov     eax, [esi]
0x480F6D: mov     edx, [eax+8]
0x480F70: push    edi
0x480F71: mov     ecx, esi
0x480F73: call    edx
0x480F75: mov     edi, eax
0x480F77: test    edi, edi
0x480F79: jz      short loc_480FC4
0x480F7B: movzx   eax, word ptr [edi+0B6h]
0x480F82: xor     esi, esi
0x480F84: test    eax, eax
0x480F86: jbe     short loc_480FC4
0x480F88: cmp     eax, esi
0x480F8A: push    ebp
0x480F8B: mov     ebp, [esp+10h+arg_4]
0x480F8F: ja      short loc_480F95
0x480F91: xor     eax, eax
0x480F93: jmp     short loc_480F9E
0x480F95: mov     eax, [edi+0B0h]
0x480F9B: mov     eax, [eax+esi*4]
0x480F9E: mov     ecx, [esp+10h+arg_8]
0x480FA2: push    ecx
0x480FA3: push    ebp
0x480FA4: push    eax
0x480FA5: call    sub_480F00
0x480FAA: add     ebx, eax
0x480FAC: movzx   eax, word ptr [edi+0B6h]
0x480FB3: add     esi, 1
0x480FB6: add     esp, 0Ch
0x480FB9: cmp     eax, esi
0x480FBB: ja      short loc_480F95
0x480FBD: pop     ebp
0x480FBE: pop     edi
0x480FBF: pop     esi
0x480FC0: mov     eax, ebx
0x480FC2: pop     ebx
0x480FC3: retn
0x480FC4: pop     edi
0x480FC5: pop     esi
0x480FC6: mov     eax, ebx
0x480FC8: pop     ebx
0x480FC9: retn
0x480FCA: pop     esi
0x480FCB: mov     eax, ebx
0x480FCD: pop     ebx
0x480FCE: retn
