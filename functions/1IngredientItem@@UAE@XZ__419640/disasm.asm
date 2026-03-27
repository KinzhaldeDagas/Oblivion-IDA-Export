0x419640: push    0FFFFFFFFh
0x419642: push    offset ??1IngredientItem@@UAE@XZ_SEH
0x419647: mov     eax, large fs:0
0x41964D: push    eax
0x41964E: sub     esp, 10h
0x419651: push    ebx
0x419652: push    ebp
0x419653: push    esi
0x419654: push    edi
0x419655: mov     eax, ___security_cookie
0x41965A: xor     eax, esp
0x41965C: push    eax
0x41965D: lea     eax, [esp+30h+var_C]
0x419661: mov     large fs:0, eax
0x419667: mov     esi, ecx
0x419669: mov     [esp+30h+var_10], esi
0x41966D: lea     ecx, [esi+30h]
0x419670: lea     edi, [esi+40h]
0x419673: lea     ebx, [esi+58h]
0x419676: lea     ebp, [esi+70h]
0x419679: mov     dword ptr [esi], offset ??_7IngredientItem@@6BIngredientItem@@@; const IngredientItem::`vftable'{for `IngredientItem'}
0x41967F: mov     dword ptr [esi+24h], offset ??_7IngredientItem@@6BMagicItem@@@; const IngredientItem::`vftable'{for `MagicItem'}
0x419686: mov     dword ptr [ecx], offset ??_7IngredientItem@@6BEffectItemList@@@; const IngredientItem::`vftable'{for `EffectItemList'}
0x41968C: mov     dword ptr [edi], offset ??_7IngredientItem@@6BTESModel@@@; const IngredientItem::`vftable'{for `TESModel'}
0x419692: mov     dword ptr [ebx], offset ??_7IngredientItem@@6BTESIcon@@@; const IngredientItem::`vftable'{for `TESIcon'}
0x419698: mov     dword ptr [esi+64h], offset ??_7IngredientItem@@6BTESScriptableForm@@@; const IngredientItem::`vftable'{for `TESScriptableForm'}
0x41969F: mov     dword ptr [ebp+0], offset ??_7IngredientItem@@6BTESWeightForm@@@; const IngredientItem::`vftable'{for `TESWeightForm'}
0x4196A6: mov     [esp+30h+var_4], 3
0x4196AE: call    EffectItemList_Clear
0x4196B3: mov     ecx, esi
0x4196B5: call    j_TESForm_ClearComponentReferences
0x4196BA: mov     ecx, ebp
0x4196BC: mov     byte ptr [esp+30h+var_4], 2
0x4196C1: call    TESWeightForm_destr
0x4196C6: mov     ecx, ebx; void *
0x4196C8: mov     byte ptr [esp+30h+var_4], 1
0x4196CD: call    TESTexture_destr
0x4196D2: mov     ecx, edi; this
0x4196D4: mov     byte ptr [esp+30h+var_4], 0
0x4196D9: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4196DE: mov     ecx, esi; this
0x4196E0: mov     [esp+30h+var_4], 0FFFFFFFFh
0x4196E8: call    ??1MagicItemObject@@UAE@XZ; MagicItemObject::~MagicItemObject(void)
0x4196ED: mov     ecx, [esp+30h+var_C]
0x4196F1: mov     large fs:0, ecx
0x4196F8: pop     ecx
0x4196F9: pop     edi
0x4196FA: pop     esi
0x4196FB: pop     ebp
0x4196FC: pop     ebx
0x4196FD: add     esp, 1Ch
0x419700: retn
