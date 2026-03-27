0x419CF0: push    esi
0x419CF1: push    0
0x419CF3: mov     esi, ecx
0x419CF5: call    MagicItem_GetFXEffect
0x419CFA: test    eax, eax
0x419CFC: jz      short loc_419D34
0x419CFE: movzx   edx, word ptr [eax+20h]
0x419D02: cmp     dx, 0FFFFh
0x419D07: jnz     short loc_419D1E
0x419D09: mov     edx, [eax+1Ch]
0x419D0C: lea     ecx, [edx+1]
0x419D0F: push    ebx
0x419D10: mov     bl, [edx]
0x419D12: add     edx, 1
0x419D15: test    bl, bl
0x419D17: jnz     short loc_419D10
0x419D19: sub     edx, ecx
0x419D1B: pop     ebx
0x419D1C: jmp     short loc_419D21
0x419D1E: movzx   edx, dx
0x419D21: test    edx, edx
0x419D23: jbe     short loc_419D34
0x419D25: mov     ecx, eax
0x419D27: call    EffectSetting_IsUnkA0Positive
0x419D2C: test    al, al
0x419D2E: jnz     short loc_419D34
0x419D30: xor     al, al
0x419D32: pop     esi
0x419D33: retn
0x419D34: test    esi, esi
0x419D36: jz      short loc_419D3D
0x419D38: add     esi, 0Ch
0x419D3B: jmp     short loc_419D3F
0x419D3D: xor     esi, esi
0x419D3F: cmp     dword ptr [esi+8], 0
0x419D43: jnz     short loc_419D4B
0x419D45: cmp     dword ptr [esi+4], 0
0x419D49: jz      short loc_419D80
0x419D4B: test    esi, esi
0x419D4D: jz      short loc_419D80
0x419D4F: nop
0x419D50: mov     eax, [esi+4]
0x419D53: test    eax, eax
0x419D55: jz      short loc_419D5C
0x419D57: mov     ecx, [eax+1Ch]
0x419D5A: jmp     short loc_419D5E
0x419D5C: xor     ecx, ecx
0x419D5E: test    ecx, ecx
0x419D60: jz      short loc_419D74
0x419D62: test    dword ptr [ecx+58h], 70000h
0x419D69: jz      short loc_419D74
0x419D6B: call    EffectSetting_IsUnkA4Positive
0x419D70: test    al, al
0x419D72: jz      short loc_419D30
0x419D74: mov     esi, [esi+8]
0x419D77: test    esi, esi
0x419D79: jz      short loc_419D80
0x419D7B: add     esi, 0FFFFFFFCh
0x419D7E: jnz     short loc_419D50
0x419D80: mov     al, 1
0x419D82: pop     esi
0x419D83: retn
