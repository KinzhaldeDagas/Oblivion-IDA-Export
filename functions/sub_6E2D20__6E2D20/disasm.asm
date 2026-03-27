0x6E2D20: push    esi
0x6E2D21: mov     esi, [esp+4+arg_0]
0x6E2D25: test    esi, esi
0x6E2D27: push    edi
0x6E2D28: mov     edi, ecx
0x6E2D2A: jz      short loc_6E2D58
0x6E2D2C: mov     eax, [esi]
0x6E2D2E: mov     edx, [eax+4]
0x6E2D31: mov     ecx, esi
0x6E2D33: call    edx
0x6E2D35: test    eax, eax
0x6E2D37: jz      short loc_6E2D4E
0x6E2D39: lea     esp, [esp+0]
0x6E2D40: cmp     eax, offset dword_B3CFBC
0x6E2D45: jz      short loc_6E2D74
0x6E2D47: mov     eax, [eax+4]
0x6E2D4A: test    eax, eax
0x6E2D4C: jnz     short loc_6E2D40
0x6E2D4E: xor     al, al
0x6E2D50: neg     al
0x6E2D52: sbb     eax, eax
0x6E2D54: and     eax, esi
0x6E2D56: mov     esi, eax
0x6E2D58: mov     eax, [edi+48h]
0x6E2D5B: mov     ecx, [edi+44h]
0x6E2D5E: push    eax
0x6E2D5F: call    sub_7300B0
0x6E2D64: push    ecx
0x6E2D65: mov     ecx, esi
0x6E2D67: fstp    [esp+0Ch+var_C]; float
0x6E2D6A: call    sub_6D2B70
0x6E2D6F: pop     edi
0x6E2D70: pop     esi
0x6E2D71: retn    8
0x6E2D74: mov     al, 1
0x6E2D76: jmp     short loc_6E2D50
