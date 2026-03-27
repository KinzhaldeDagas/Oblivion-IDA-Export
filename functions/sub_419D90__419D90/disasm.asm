0x419D90: push    esi
0x419D91: push    edi
0x419D92: push    0
0x419D94: mov     edi, ecx
0x419D96: call    MagicItem_GetFXEffect
0x419D9B: mov     esi, eax
0x419D9D: test    esi, esi
0x419D9F: jz      short loc_419DE0
0x419DA1: movzx   eax, word ptr [esi+20h]
0x419DA5: cmp     ax, 0FFFFh
0x419DA9: jnz     short loc_419DBE
0x419DAB: mov     eax, [esi+1Ch]
0x419DAE: lea     edx, [eax+1]
0x419DB1: mov     cl, [eax]
0x419DB3: add     eax, 1
0x419DB6: test    cl, cl
0x419DB8: jnz     short loc_419DB1
0x419DBA: sub     eax, edx
0x419DBC: jmp     short loc_419DC1
0x419DBE: movzx   eax, ax
0x419DC1: test    eax, eax
0x419DC3: jbe     short loc_419DE0
0x419DC5: mov     ecx, esi
0x419DC7: call    EffectSetting_IsUnkA0Positive
0x419DCC: test    al, al
0x419DCE: jnz     short loc_419DE0
0x419DD0: mov     ecx, esi
0x419DD2: call    EffectSetting_IsUnkA0Negative
0x419DD7: test    al, al
0x419DD9: jnz     short loc_419DE0
0x419DDB: pop     edi
0x419DDC: xor     al, al
0x419DDE: pop     esi
0x419DDF: retn
0x419DE0: test    edi, edi
0x419DE2: jz      short loc_419DE9
0x419DE4: lea     esi, [edi+0Ch]
0x419DE7: jmp     short loc_419DEB
0x419DE9: xor     esi, esi
0x419DEB: cmp     dword ptr [esi+8], 0
0x419DEF: jnz     short loc_419DF7
0x419DF1: cmp     dword ptr [esi+4], 0
0x419DF5: jz      short loc_419E3D
0x419DF7: test    esi, esi
0x419DF9: jz      short loc_419E3D
0x419DFB: jmp     short loc_419E00
0x419DFD: align 10h
0x419E00: mov     eax, [esi+4]
0x419E03: test    eax, eax
0x419E05: jz      short loc_419E0C
0x419E07: mov     edi, [eax+1Ch]
0x419E0A: jmp     short loc_419E0E
0x419E0C: xor     edi, edi
0x419E0E: test    edi, edi
0x419E10: jz      short loc_419E31
0x419E12: test    dword ptr [edi+58h], 70000h
0x419E19: jz      short loc_419E31
0x419E1B: mov     ecx, edi
0x419E1D: call    EffectSetting_IsUnkA4Positive
0x419E22: test    al, al
0x419E24: jnz     short loc_419E31
0x419E26: mov     ecx, edi
0x419E28: call    EffectSetting_IsUnkA4Negative
0x419E2D: test    al, al
0x419E2F: jz      short loc_419DDB
0x419E31: mov     esi, [esi+8]
0x419E34: test    esi, esi
0x419E36: jz      short loc_419E3D
0x419E38: add     esi, 0FFFFFFFCh
0x419E3B: jnz     short loc_419E00
0x419E3D: pop     edi
0x419E3E: mov     al, 1
0x419E40: pop     esi
0x419E41: retn
