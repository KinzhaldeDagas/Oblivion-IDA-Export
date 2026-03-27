0x699190: push    ebx
0x699191: push    esi
0x699192: push    edi
0x699193: mov     edi, [esp+0Ch+arg_0]
0x699197: mov     esi, ecx
0x699199: lea     ebx, [edi+0Ch]
0x69919C: mov     ecx, ebx
0x69919E: call    EffectItemList_HasIgnored
0x6991A3: test    al, al
0x6991A5: jz      short loc_6991B6
0x6991A7: pop     edi
0x6991A8: mov     dword ptr [esi+8], 5
0x6991AF: pop     esi
0x6991B0: xor     al, al
0x6991B2: pop     ebx
0x6991B3: retn    0Ch
0x6991B6: mov     eax, [edi]
0x6991B8: mov     edx, [eax+18h]
0x6991BB: mov     ecx, edi
0x6991BD: call    edx
0x6991BF: sub     eax, 1
0x6991C2: jz      MagicCaster_CastMagicItem___CastDisease
0x6991C8: sub     eax, 3
0x6991CB: jz      short MagicCaster_CastMagicItem___CastAbility
0x6991CD: mov     eax, [esi]
0x6991CF: mov     edx, [eax+30h]
0x6991D2: mov     ecx, esi
0x6991D4: call    edx
0x6991D6: test    eax, eax
0x6991D8: jz      short MagicCaster_CastMagicItem___SetCastingItem
0x6991DA: pop     edi
0x6991DB: mov     dword ptr [esi+8], 6
0x6991E2: pop     esi
0x6991E3: xor     al, al
0x6991E5: pop     ebx
0x6991E6: retn    0Ch
