0x419E50: push    ebx
0x419E51: push    esi
0x419E52: push    edi
0x419E53: push    0
0x419E55: mov     edi, ecx
0x419E57: call    MagicItem_GetFXEffect
0x419E5C: mov     esi, eax
0x419E5E: test    esi, esi
0x419E60: mov     bl, 1
0x419E62: jz      short loc_419EA6
0x419E64: movzx   eax, word ptr [esi+20h]
0x419E68: cmp     ax, 0FFFFh
0x419E6C: jnz     short loc_419E81
0x419E6E: mov     eax, [esi+1Ch]
0x419E71: lea     edx, [eax+1]
0x419E74: mov     cl, [eax]
0x419E76: add     eax, 1
0x419E79: test    cl, cl
0x419E7B: jnz     short loc_419E74
0x419E7D: sub     eax, edx
0x419E7F: jmp     short loc_419E84
0x419E81: movzx   eax, ax
0x419E84: test    eax, eax
0x419E86: jbe     short loc_419EA6
0x419E88: mov     ecx, esi
0x419E8A: call    EffectSetting_IsUnkA0Positive
0x419E8F: test    al, al
0x419E91: jnz     short loc_419EA6
0x419E93: mov     ecx, esi
0x419E95: xor     bl, bl
0x419E97: call    EffectSetting_IsUnkA0Negative
0x419E9C: test    al, al
0x419E9E: jnz     short loc_419EA6
0x419EA0: pop     edi
0x419EA1: pop     esi
0x419EA2: xor     al, al
0x419EA4: pop     ebx
0x419EA5: retn
0x419EA6: test    edi, edi
0x419EA8: jz      short loc_419EAF
0x419EAA: add     edi, 0Ch
0x419EAD: jmp     short loc_419EB1
0x419EAF: xor     edi, edi
0x419EB1: cmp     dword ptr [edi+8], 0
0x419EB5: jnz     short loc_419EBD
0x419EB7: cmp     dword ptr [edi+4], 0
0x419EBB: jz      short loc_419F00
0x419EBD: test    edi, edi
0x419EBF: jz      short loc_419F00
0x419EC1: mov     eax, [edi+4]
0x419EC4: test    eax, eax
0x419EC6: jz      short loc_419ECD
0x419EC8: mov     esi, [eax+1Ch]
0x419ECB: jmp     short loc_419ECF
0x419ECD: xor     esi, esi
0x419ECF: test    esi, esi
0x419ED1: jz      short loc_419EF4
0x419ED3: test    dword ptr [esi+58h], 70000h
0x419EDA: jz      short loc_419EF4
0x419EDC: mov     ecx, esi
0x419EDE: call    EffectSetting_IsUnkA4Positive
0x419EE3: test    al, al
0x419EE5: jnz     short loc_419EF4
0x419EE7: mov     ecx, esi
0x419EE9: xor     bl, bl
0x419EEB: call    EffectSetting_IsUnkA4Negative
0x419EF0: test    al, al
0x419EF2: jz      short loc_419EA0
0x419EF4: mov     edi, [edi+8]
0x419EF7: test    edi, edi
0x419EF9: jz      short loc_419F00
0x419EFB: add     edi, 0FFFFFFFCh
0x419EFE: jnz     short loc_419EC1
0x419F00: pop     edi
0x419F01: test    bl, bl
0x419F03: pop     esi
0x419F04: setz    al
0x419F07: pop     ebx
0x419F08: retn
