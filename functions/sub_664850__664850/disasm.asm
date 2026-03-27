0x664850: push    esi
0x664851: mov     esi, [esp+4+arg_0]
0x664855: test    esi, esi
0x664857: push    edi
0x664858: mov     edi, ecx
0x66485A: jz      short loc_664871
0x66485C: cmp     dword ptr [esi+64h], 0
0x664860: jnz     short loc_664871
0x664862: mov     dword ptr [edi+628h], 0
0x66486C: pop     edi
0x66486D: pop     esi
0x66486E: retn    4
0x664871: mov     eax, [edi+628h]
0x664877: test    eax, eax
0x664879: jz      short loc_66488D
0x66487B: cmp     eax, esi
0x66487D: jz      short loc_6648C6
0x66487F: test    eax, eax
0x664881: jz      short loc_66488D
0x664883: test    esi, esi
0x664885: jnz     short loc_66488D
0x664887: push    esi
0x664888: call    PlayerCharacter_SetCurrentMagicItem
0x66488D: test    esi, esi
0x66488F: mov     [edi+628h], esi
0x664895: jz      short loc_6648BD
0x664897: mov     esi, [esi+64h]
0x66489A: test    esi, esi
0x66489C: jz      short loc_6648AE
0x66489E: lea     eax, [esi+18h]
0x6648A1: push    eax
0x6648A2: mov     ecx, edi
0x6648A4: call    PlayerCharacter_SetCurrentMagicItem
0x6648A9: pop     edi
0x6648AA: pop     esi
0x6648AB: retn    4
0x6648AE: xor     eax, eax
0x6648B0: push    eax
0x6648B1: mov     ecx, edi
0x6648B3: call    PlayerCharacter_SetCurrentMagicItem
0x6648B8: pop     edi
0x6648B9: pop     esi
0x6648BA: retn    4
0x6648BD: push    0
0x6648BF: mov     ecx, edi
0x6648C1: call    PlayerCharacter_SetCurrentMagicItem
0x6648C6: pop     edi
0x6648C7: pop     esi
0x6648C8: retn    4
