0x4198F0: push    0FFFFFFFFh
0x4198F2: push    offset ??0IngredientItem@@QAE@XZ_SEH
0x4198F7: mov     eax, large fs:0
0x4198FD: push    eax
0x4198FE: push    ecx
0x4198FF: push    ebx
0x419900: push    ebp
0x419901: push    esi
0x419902: push    edi
0x419903: mov     eax, ___security_cookie
0x419908: xor     eax, esp
0x41990A: push    eax
0x41990B: lea     eax, [esp+24h+var_C]
0x41990F: mov     large fs:0, eax
0x419915: mov     esi, ecx
0x419917: mov     [esp+24h+var_10], esi
0x41991B: call    MagicItemObject_constr
0x419920: lea     ebp, [esi+40h]
0x419923: mov     ecx, ebp; this
0x419925: mov     [esp+24h+var_4], 0
0x41992D: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x419932: lea     edi, [esi+58h]
0x419935: mov     ecx, edi
0x419937: mov     byte ptr [esp+24h+var_4], 1
0x41993C: call    TESTexture_constr
0x419941: mov     dword ptr [edi], offset ??_7TESIcon@@6B@; const TESIcon::`vftable'
0x419947: lea     ebx, [esi+64h]
0x41994A: mov     ecx, ebx
0x41994C: mov     byte ptr [esp+24h+var_4], 2
0x419951: call    TESScriptableForm_constr
0x419956: lea     ecx, [esi+70h]
0x419959: call    TESWeightForm_constr
0x41995E: mov     ecx, esi; this
0x419960: mov     byte ptr [esp+24h+var_4], 3
0x419965: mov     dword ptr [esi], offset ??_7IngredientItem@@6BIngredientItem@@@; const IngredientItem::`vftable'{for `IngredientItem'}
0x41996B: mov     dword ptr [esi+24h], offset ??_7IngredientItem@@6BMagicItem@@@; const IngredientItem::`vftable'{for `MagicItem'}
0x419972: mov     dword ptr [esi+30h], offset ??_7IngredientItem@@6BEffectItemList@@@; const IngredientItem::`vftable'{for `EffectItemList'}
0x419979: mov     dword ptr [ebp+0], offset ??_7IngredientItem@@6BTESModel@@@; const IngredientItem::`vftable'{for `TESModel'}
0x419980: mov     dword ptr [edi], offset ??_7IngredientItem@@6BTESIcon@@@; const IngredientItem::`vftable'{for `TESIcon'}
0x419986: mov     dword ptr [ebx], offset ??_7IngredientItem@@6BTESScriptableForm@@@; const IngredientItem::`vftable'{for `TESScriptableForm'}
0x41998C: mov     dword ptr [esi+70h], offset ??_7IngredientItem@@6BTESWeightForm@@@; const IngredientItem::`vftable'{for `TESWeightForm'}
0x419993: mov     byte ptr [esi+4], 19h
0x419997: mov     dword ptr [esi+78h], 0FFFFFFFFh
0x41999E: mov     byte ptr [esi+7Ch], 0
0x4199A2: call    j_TESForm_InitializeComponents
0x4199A7: mov     eax, esi
0x4199A9: mov     ecx, [esp+24h+var_C]
0x4199AD: mov     large fs:0, ecx
0x4199B4: pop     ecx
0x4199B5: pop     edi
0x4199B6: pop     esi
0x4199B7: pop     ebp
0x4199B8: pop     ebx
0x4199B9: add     esp, 10h
0x4199BC: retn
