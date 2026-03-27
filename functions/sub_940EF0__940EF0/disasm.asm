0x940EF0: push    ebx
0x940EF1: push    esi
0x940EF2: push    edi
0x940EF3: mov     edi, [esp+0Ch+arg_0]
0x940EF7: mov     esi, ecx
0x940EF9: lea     eax, [esp+0Ch+arg_0]
0x940EFD: push    eax
0x940EFE: lea     ebx, [esi+2Ch]
0x940F01: push    edi
0x940F02: mov     ecx, ebx
0x940F04: call    sub_942B00
0x940F09: test    eax, eax
0x940F0B: jz      short loc_940F51
0x940F0D: push    edi
0x940F0E: call    sub_8B18F0
0x940F13: mov     edi, eax
0x940F15: mov     eax, [esi+24h]
0x940F18: add     esp, 4
0x940F1B: push    eax
0x940F1C: push    edi
0x940F1D: mov     ecx, ebx
0x940F1F: mov     [esp+14h+arg_0], eax
0x940F23: call    sub_9429D0
0x940F28: mov     ecx, [esi+28h]
0x940F2B: mov     eax, [esi+24h]
0x940F2E: add     esi, 20h ; ' '
0x940F31: and     ecx, 3FFFFFFFh
0x940F37: cmp     eax, ecx
0x940F39: jnz     short loc_940F46
0x940F3B: push    4
0x940F3D: push    esi
0x940F3E: call    sub_8A6EE0
0x940F43: add     esp, 8
0x940F46: mov     edx, [esi+4]
0x940F49: mov     eax, [esi]
0x940F4B: mov     [eax+edx*4], edi
0x940F4E: inc     dword ptr [esi+4]
0x940F51: mov     eax, [esp+0Ch+arg_0]
0x940F55: pop     edi
0x940F56: pop     esi
0x940F57: pop     ebx
0x940F58: retn    4
