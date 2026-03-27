0x418F50: push    0FFFFFFFFh
0x418F52: push    offset ??1SpellItem@@UAE@XZ_SEH
0x418F57: mov     eax, large fs:0
0x418F5D: push    eax
0x418F5E: push    ecx
0x418F5F: push    esi
0x418F60: mov     eax, ___security_cookie
0x418F65: xor     eax, esp
0x418F67: push    eax
0x418F68: lea     eax, [esp+18h+var_C]
0x418F6C: mov     large fs:0, eax
0x418F72: mov     esi, ecx
0x418F74: mov     [esp+18h+var_10], esi
0x418F78: lea     ecx, [esi+24h]
0x418F7B: mov     dword ptr [esi], offset ??_7EnchantmentItem@@6BEnchantmentItem@@@; const EnchantmentItem::`vftable'{for `EnchantmentItem'}
0x418F81: mov     dword ptr [esi+18h], offset ??_7EnchantmentItem@@6BMagicItem@@@; const EnchantmentItem::`vftable'{for `MagicItem'}
0x418F88: mov     dword ptr [ecx], offset ??_7EnchantmentItem@@6BEffectItemList@@@; const EnchantmentItem::`vftable'{for `EffectItemList'}
0x418F8E: mov     [esp+18h+var_4], 0
0x418F96: call    EffectItemList_Clear
0x418F9B: mov     ecx, esi
0x418F9D: call    j_TESForm_ClearComponentReferences
0x418FA2: mov     ecx, esi; this
0x418FA4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x418FAC: call    ??1MagicItemForm@@UAE@XZ; MagicItemForm::~MagicItemForm(void)
0x418FB1: mov     ecx, [esp+18h+var_C]
0x418FB5: mov     large fs:0, ecx
0x418FBC: pop     ecx
0x418FBD: pop     esi
0x418FBE: add     esp, 10h
0x418FC1: retn
