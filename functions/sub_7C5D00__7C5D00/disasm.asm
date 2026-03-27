0x7C5D00: push    esi
0x7C5D01: push    edi
0x7C5D02: mov     edi, [esp+8+arg_0]
0x7C5D06: test    edi, edi
0x7C5D08: mov     esi, ecx
0x7C5D0A: jz      short loc_7C5D84
0x7C5D0C: test    byte ptr [edi+18h], 1
0x7C5D10: jnz     short loc_7C5D84
0x7C5D12: push    ebx
0x7C5D13: xor     bl, bl
0x7C5D15: cmp     ds:0B43384h, bl
0x7C5D1B: jz      short loc_7C5D3C
0x7C5D1D: push    offset stru_B43400; lpCriticalSection
0x7C5D22: call    dword ptr ds:0A2806Ch
0x7C5D28: call    dword ptr ds:0A2808Ch
0x7C5D2E: add     dword ptr ds:0B4347Ch, 1
0x7C5D35: mov     ds:0B43478h, eax
0x7C5D3A: mov     bl, 1
0x7C5D3C: mov     esi, [esi+0E8h]
0x7C5D42: test    esi, esi
0x7C5D44: jz      short loc_7C5D5C
0x7C5D46: mov     ecx, [esi+8]
0x7C5D49: test    ecx, ecx
0x7C5D4B: lea     eax, [esi+8]
0x7C5D4E: mov     esi, [esi]
0x7C5D50: jz      short loc_7C5D58
0x7C5D52: push    edi
0x7C5D53: call    ShadowSceneLight_AddToScene????
0x7C5D58: test    esi, esi
0x7C5D5A: jnz     short loc_7C5D46
0x7C5D5C: test    bl, bl
0x7C5D5E: pop     ebx
0x7C5D5F: jz      short loc_7C5D84
0x7C5D61: sub     dword ptr ds:0B4347Ch, 1
0x7C5D68: jnz     short loc_7C5D74
0x7C5D6A: mov     dword ptr ds:0B43478h, 0
0x7C5D74: pop     edi
0x7C5D75: pop     esi
0x7C5D76: mov     [esp+arg_0], offset stru_B43400
0x7C5D7E: jmp     dword ptr ds:0A28074h
0x7C5D84: pop     edi
0x7C5D85: pop     esi
0x7C5D86: retn    4
