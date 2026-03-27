0x629EE0: push    esi
0x629EE1: mov     esi, ecx
0x629EE3: mov     eax, [esi]
0x629EE5: mov     edx, [eax+0C4h]
0x629EEB: push    edi
0x629EEC: push    1
0x629EEE: call    edx
0x629EF0: mov     eax, [esi]
0x629EF2: mov     edi, [esp+8+arg_0]
0x629EF6: mov     edx, [eax+0B8h]
0x629EFC: push    edi
0x629EFD: mov     ecx, esi
0x629EFF: call    edx
0x629F01: test    edi, edi
0x629F03: jz      short loc_629F2C
0x629F05: mov     eax, [edi]
0x629F07: mov     edx, [eax+380h]
0x629F0D: mov     ecx, edi
0x629F0F: call    edx
0x629F11: test    eax, eax
0x629F13: jz      short loc_629F2C
0x629F15: mov     ecx, [eax+58h]
0x629F18: test    ecx, ecx
0x629F1A: jz      short loc_629F2C
0x629F1C: mov     edx, [ecx]
0x629F1E: pop     edi
0x629F1F: pop     esi
0x629F20: mov     [esp+arg_0], eax
0x629F24: mov     eax, [edx+194h]
0x629F2A: jmp     eax
0x629F2C: pop     edi
0x629F2D: pop     esi
0x629F2E: retn    4
