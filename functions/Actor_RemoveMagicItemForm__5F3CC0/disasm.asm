0x5F3CC0: push    ebx
0x5F3CC1: push    ebp
0x5F3CC2: push    esi
0x5F3CC3: mov     esi, ecx
0x5F3CC5: mov     eax, [esi]
0x5F3CC7: mov     edx, [eax+170h]
0x5F3CCD: push    edi
0x5F3CCE: xor     bl, bl
0x5F3CD0: xor     ebp, ebp
0x5F3CD2: call    edx
0x5F3CD4: mov     edi, eax
0x5F3CD6: test    edi, edi
0x5F3CD8: jz      short loc_5F3CEC
0x5F3CDA: mov     eax, [esi]
0x5F3CDC: mov     edx, [eax+190h]
0x5F3CE2: mov     ecx, esi
0x5F3CE4: call    edx
0x5F3CE6: test    al, al
0x5F3CE8: jz      short loc_5F3CEC
0x5F3CEA: mov     ebp, edi
0x5F3CEC: mov     eax, [esp+10h+arg_0]
0x5F3CF0: push    eax
0x5F3CF1: lea     ecx, [ebp+54h]
0x5F3CF4: call    TESSpellList_HasSpell
0x5F3CF9: test    al, al
0x5F3CFB: jz      short loc_5F3D61
0x5F3CFD: mov     edx, [esi]
0x5F3CFF: mov     eax, [edx+170h]
0x5F3D05: mov     ecx, esi
0x5F3D07: xor     edi, edi
0x5F3D09: call    eax
0x5F3D0B: mov     ebp, eax
0x5F3D0D: test    ebp, ebp
0x5F3D0F: jz      short loc_5F3D23
0x5F3D11: mov     edx, [esi]
0x5F3D13: mov     eax, [edx+190h]
0x5F3D19: mov     ecx, esi
0x5F3D1B: call    eax
0x5F3D1D: test    al, al
0x5F3D1F: jz      short loc_5F3D23
0x5F3D21: mov     edi, ebp
0x5F3D23: mov     ecx, [esp+10h+arg_0]
0x5F3D27: push    ecx
0x5F3D28: lea     ecx, [edi+54h]
0x5F3D2B: call    TESSpellList_RemoveSpell
0x5F3D30: mov     edx, [esi]
0x5F3D32: mov     eax, [edx+170h]
0x5F3D38: mov     ecx, esi
0x5F3D3A: xor     ebp, ebp
0x5F3D3C: call    eax
0x5F3D3E: mov     edi, eax
0x5F3D40: test    edi, edi
0x5F3D42: jz      short loc_5F3D56
0x5F3D44: mov     edx, [esi]
0x5F3D46: mov     eax, [edx+190h]
0x5F3D4C: mov     ecx, esi
0x5F3D4E: call    eax
0x5F3D50: test    al, al
0x5F3D52: jz      short loc_5F3D56
0x5F3D54: mov     ebp, edi
0x5F3D56: push    20h ; ' '; a2
0x5F3D58: mov     ecx, ebp; this
0x5F3D5A: call    TESForm_MarkAsModified
0x5F3D5F: mov     bl, 1
0x5F3D61: mov     edi, [esp+14h]
0x5F3D65: mov     edx, [edi+18h]
0x5F3D68: mov     eax, [edx+18h]
0x5F3D6B: add     edi, 18h
0x5F3D6E: mov     ecx, edi
0x5F3D70: call    eax
0x5F3D72: cmp     eax, 4
0x5F3D75: jz      short loc_5F3D85
0x5F3D77: mov     edx, [edi]
0x5F3D79: mov     eax, [edx+18h]
0x5F3D7C: mov     ecx, edi
0x5F3D7E: call    eax
0x5F3D80: cmp     eax, 1
0x5F3D83: jnz     short loc_5F3DA2
0x5F3D85: lea     ebp, [esi+68h]
0x5F3D88: push    edi
0x5F3D89: mov     ecx, ebp
0x5F3D8B: call    MagicTarget_HasMagicItem
0x5F3D90: test    al, al
0x5F3D92: jz      short loc_5F3DA2
0x5F3D94: push    0
0x5F3D96: push    0
0x5F3D98: push    edi
0x5F3D99: mov     ecx, ebp
0x5F3D9B: call    MagicTarget_RemoveEffects
0x5F3DA0: mov     bl, 1
0x5F3DA2: mov     edx, [edi]
0x5F3DA4: mov     eax, [edx+18h]
0x5F3DA7: mov     ecx, edi
0x5F3DA9: call    eax
0x5F3DAB: cmp     eax, 2
0x5F3DAE: jnz     short Actor_RemoveMagicItemForm___Done
0x5F3DB0: mov     edi, [esp+24h+var_10]
0x5F3DB4: push    edi
0x5F3DB5: mov     ecx, esi
0x5F3DB7: call    Actor_GetMagicItemCooldown
0x5F3DBC: test    eax, eax
0x5F3DBE: jz      short Actor_RemoveMagicItemForm___Done
0x5F3DC0: push    edi
0x5F3DC1: mov     ecx, esi
0x5F3DC3: call    Actor_GetMagicItemCooldown
0x5F3DC8: mov     edi, eax
0x5F3DCA: test    edi, edi
0x5F3DCC: jz      short Actor_RemoveMagicItemForm___Return_1
0x5F3DCE: push    edi
0x5F3DCF: lea     ecx, [esi+9Ch]
0x5F3DD5: call    BSSimpleList_Remove
0x5F3DDA: push    edi
0x5F3DDB: call    FormHeapFree
0x5F3DE0: add     esp, 4
