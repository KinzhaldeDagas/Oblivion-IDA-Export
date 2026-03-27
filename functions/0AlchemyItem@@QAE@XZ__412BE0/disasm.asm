0x412BE0: push    0FFFFFFFFh
0x412BE2: push    offset ??0IngredientItem@@QAE@XZ_SEH
0x412BE7: mov     eax, large fs:0
0x412BED: push    eax
0x412BEE: push    ecx
0x412BEF: push    ebx
0x412BF0: push    ebp
0x412BF1: push    esi
0x412BF2: push    edi
0x412BF3: mov     eax, ___security_cookie
0x412BF8: xor     eax, esp
0x412BFA: push    eax
0x412BFB: lea     eax, [esp+24h+var_C]
0x412BFF: mov     large fs:0, eax
0x412C05: mov     esi, ecx
0x412C07: mov     [esp+24h+var_10], esi
0x412C0B: call    MagicItemObject_constr
0x412C10: lea     ebp, [esi+40h]
0x412C13: mov     ecx, ebp; this
0x412C15: mov     [esp+24h+var_4], 0
0x412C1D: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x412C22: lea     edi, [esi+58h]
0x412C25: mov     ecx, edi
0x412C27: mov     byte ptr [esp+24h+var_4], 1
0x412C2C: call    TESTexture_constr
0x412C31: mov     dword ptr [edi], offset ??_7TESIcon@@6B@; const TESIcon::`vftable'
0x412C37: lea     ebx, [esi+64h]
0x412C3A: mov     ecx, ebx
0x412C3C: mov     byte ptr [esp+24h+var_4], 2
0x412C41: call    TESScriptableForm_constr
0x412C46: lea     ecx, [esi+70h]
0x412C49: call    TESWeightForm_constr
0x412C4E: mov     ecx, esi; this
0x412C50: mov     byte ptr [esp+24h+var_4], 3
0x412C55: mov     dword ptr [esi], offset ??_7AlchemyItem@@6BAlchemyItem@@@; const AlchemyItem::`vftable'{for `AlchemyItem'}
0x412C5B: mov     dword ptr [esi+24h], offset ??_7AlchemyItem@@6BMagicItem@@@; const AlchemyItem::`vftable'{for `MagicItem'}
0x412C62: mov     dword ptr [esi+30h], offset ??_7AlchemyItem@@6BEffectItemList@@@; const AlchemyItem::`vftable'{for `EffectItemList'}
0x412C69: mov     dword ptr [ebp+0], offset ??_7AlchemyItem@@6BTESModel@@@; const AlchemyItem::`vftable'{for `TESModel'}
0x412C70: mov     dword ptr [edi], offset ??_7AlchemyItem@@6BTESIcon@@@; const AlchemyItem::`vftable'{for `TESIcon'}
0x412C76: mov     dword ptr [ebx], offset ??_7AlchemyItem@@6BTESScriptableForm@@@; const AlchemyItem::`vftable'{for `TESScriptableForm'}
0x412C7C: mov     dword ptr [esi+70h], offset ??_7AlchemyItem@@6BTESWeightForm@@@; const AlchemyItem::`vftable'{for `TESWeightForm'}
0x412C83: mov     byte ptr [esi+4], 28h ; '('
0x412C87: mov     dword ptr [esi+78h], 0FFFFFFFFh
0x412C8E: mov     byte ptr [esi+7Ch], 0
0x412C92: call    j_TESForm_InitializeComponents
0x412C97: mov     eax, esi
0x412C99: mov     ecx, [esp+24h+var_C]
0x412C9D: mov     large fs:0, ecx
0x412CA4: pop     ecx
0x412CA5: pop     edi
0x412CA6: pop     esi
0x412CA7: pop     ebp
0x412CA8: pop     ebx
0x412CA9: add     esp, 10h
0x412CAC: retn
