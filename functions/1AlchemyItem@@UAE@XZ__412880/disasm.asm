0x412880: push    0FFFFFFFFh
0x412882: push    offset ??1IngredientItem@@UAE@XZ_SEH
0x412887: mov     eax, large fs:0
0x41288D: push    eax
0x41288E: sub     esp, 10h
0x412891: push    ebx
0x412892: push    ebp
0x412893: push    esi
0x412894: push    edi
0x412895: mov     eax, ___security_cookie
0x41289A: xor     eax, esp
0x41289C: push    eax
0x41289D: lea     eax, [esp+30h+var_C]
0x4128A1: mov     large fs:0, eax
0x4128A7: mov     esi, ecx
0x4128A9: mov     [esp+30h+var_10], esi
0x4128AD: lea     ecx, [esi+30h]
0x4128B0: lea     edi, [esi+40h]
0x4128B3: lea     ebx, [esi+58h]
0x4128B6: lea     ebp, [esi+70h]
0x4128B9: mov     dword ptr [esi], offset ??_7AlchemyItem@@6BAlchemyItem@@@; const AlchemyItem::`vftable'{for `AlchemyItem'}
0x4128BF: mov     dword ptr [esi+24h], offset ??_7AlchemyItem@@6BMagicItem@@@; const AlchemyItem::`vftable'{for `MagicItem'}
0x4128C6: mov     dword ptr [ecx], offset ??_7AlchemyItem@@6BEffectItemList@@@; const AlchemyItem::`vftable'{for `EffectItemList'}
0x4128CC: mov     dword ptr [edi], offset ??_7AlchemyItem@@6BTESModel@@@; const AlchemyItem::`vftable'{for `TESModel'}
0x4128D2: mov     dword ptr [ebx], offset ??_7AlchemyItem@@6BTESIcon@@@; const AlchemyItem::`vftable'{for `TESIcon'}
0x4128D8: mov     dword ptr [esi+64h], offset ??_7AlchemyItem@@6BTESScriptableForm@@@; const AlchemyItem::`vftable'{for `TESScriptableForm'}
0x4128DF: mov     dword ptr [ebp+0], offset ??_7AlchemyItem@@6BTESWeightForm@@@; const AlchemyItem::`vftable'{for `TESWeightForm'}
0x4128E6: mov     [esp+30h+var_4], 3
0x4128EE: call    EffectItemList_Clear
0x4128F3: mov     ecx, esi
0x4128F5: call    j_TESForm_ClearComponentReferences
0x4128FA: mov     ecx, ebp
0x4128FC: mov     byte ptr [esp+30h+var_4], 2
0x412901: call    TESWeightForm_destr
0x412906: mov     ecx, ebx; void *
0x412908: mov     byte ptr [esp+30h+var_4], 1
0x41290D: call    TESTexture_destr
0x412912: mov     ecx, edi; this
0x412914: mov     byte ptr [esp+30h+var_4], 0
0x412919: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x41291E: mov     ecx, esi; this
0x412920: mov     [esp+30h+var_4], 0FFFFFFFFh
0x412928: call    ??1MagicItemObject@@UAE@XZ; MagicItemObject::~MagicItemObject(void)
0x41292D: mov     ecx, [esp+30h+var_C]
0x412931: mov     large fs:0, ecx
0x412938: pop     ecx
0x412939: pop     edi
0x41293A: pop     esi
0x41293B: pop     ebp
0x41293C: pop     ebx
0x41293D: add     esp, 1Ch
0x412940: retn
