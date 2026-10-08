0x419C50: mov     eax, dword ptr unk_B33518
0x419C55: push    esi
0x419C56: mov     esi, ecx
0x419C58: mov     ecx, ds:0B33554h
0x419C5E: cmp     eax, ecx
0x419C60: jge     short loc_419C66
0x419C66: jnz     short loc_419C95
0x419C68: mov     ecx, dword ptr reference
0x419C6E: call    Player_GetCurrentMagicItem
0x419C73: test    eax, eax
0x419C75: jz      short loc_419C95
0x419C77: mov     ecx, dword ptr reference
0x419C7D: push    40000h
0x419C82: call    Player_GetCurrentMagicItem
0x419C87: mov     ecx, eax
0x419C89: add     ecx, 0Ch
0x419C8C: call    EffectItemList_HasEffectWithFlags
0x419C91: test    al, al
0x419C93: jnz     short sub_419C62
0x419C95: test    esi, esi
0x419C97: push    edi
0x419C98: jz      short loc_419CE5
0x419C9A: add     esi, 0Ch
0x419C9D: jz      short loc_419CE5
0x419C9F: nop
0x419CA0: cmp     dword ptr [esi+8], 0
0x419CA4: jnz     short loc_419CAC
0x419CA6: cmp     dword ptr [esi+4], 0
0x419CAA: jz      short loc_419CE5
0x419CAC: mov     eax, [esi+4]
0x419CAF: mov     edi, [eax+1Ch]
0x419CB2: mov     eax, [edi+58h]
0x419CB5: test    eax, 70000h
0x419CBA: jz      short loc_419CD9
0x419CBC: shr     eax, 12h
0x419CBF: test    al, 1
0x419CC1: jz      short loc_419CD9
0x419CC3: mov     ecx, edi
0x419CC5: call    EffectSetting_IsUnkA4Positive
0x419CCA: test    al, al
0x419CCC: jnz     short loc_419CD9
0x419CCE: mov     ecx, edi
0x419CD0: call    EffectSetting_IsUnkA4Negative
0x419CD5: test    al, al
0x419CD7: jz      short loc_419CEA
0x419CD9: mov     esi, [esi+8]
0x419CDC: test    esi, esi
0x419CDE: jz      short loc_419CE5
0x419CE0: add     esi, 0FFFFFFFCh
0x419CE3: jnz     short loc_419CA0
0x419CE5: pop     edi
0x419CE6: mov     al, 1
0x419CE8: pop     esi
0x419CE9: retn
0x419CEA: pop     edi
0x419CEB: xor     al, al
0x419CED: pop     esi
0x419CEE: retn
