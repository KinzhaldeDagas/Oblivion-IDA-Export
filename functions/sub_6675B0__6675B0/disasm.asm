0x6675B0: push    ebx
0x6675B1: push    esi
0x6675B2: mov     esi, [esp+8+arg_0]
0x6675B6: push    edi
0x6675B7: push    esi
0x6675B8: mov     edi, ecx
0x6675BA: call    Actor_RemoveMagicItemForm
0x6675BF: mov     bl, al
0x6675C1: test    bl, bl
0x6675C3: jz      short loc_6675F7
0x6675C5: test    esi, esi
0x6675C7: jz      short loc_6675CE
0x6675C9: add     esi, 18h
0x6675CC: jmp     short loc_6675D0
0x6675CE: xor     esi, esi
0x6675D0: mov     eax, [edi+624h]
0x6675D6: test    eax, eax
0x6675D8: jnz     short loc_6675EA
0x6675DA: call    Magic_GetDefaultPlayerSpell
0x6675DF: test    eax, eax
0x6675E1: jz      short loc_6675E8
0x6675E3: add     eax, 18h
0x6675E6: jmp     short loc_6675EA
0x6675E8: xor     eax, eax
0x6675EA: cmp     esi, eax
0x6675EC: jnz     short loc_6675F7
0x6675EE: push    0
0x6675F0: mov     ecx, edi
0x6675F2: call    PlayerCharacter_SetCurrentMagicItem
0x6675F7: pop     edi
0x6675F8: pop     esi
0x6675F9: mov     al, bl
0x6675FB: pop     ebx
0x6675FC: retn    4
