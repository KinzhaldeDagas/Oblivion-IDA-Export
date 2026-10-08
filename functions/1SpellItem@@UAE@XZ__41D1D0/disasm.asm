0x41D1D0: push    0FFFFFFFFh
0x41D1D2: push    offset ??1SpellItem@@UAE@XZ_SEH
0x41D1D7: mov     eax, large fs:0
0x41D1DD: push    eax
0x41D1DE: push    ecx
0x41D1DF: push    esi
0x41D1E0: mov     eax, ___security_cookie
0x41D1E5: xor     eax, esp
0x41D1E7: push    eax
0x41D1E8: lea     eax, [esp+18h+var_C]
0x41D1EC: mov     large fs:0, eax
0x41D1F2: mov     esi, ecx
0x41D1F4: mov     [esp+18h+var_10], esi
0x41D1F8: lea     ecx, [esi+24h]
0x41D1FB: mov     dword ptr [esi], offset ??_7SpellItem@@6BSpellItem@@@; const SpellItem::`vftable'{for `SpellItem'}
0x41D201: mov     dword ptr [esi+18h], offset ??_7SpellItem@@6BMagicItem@@@; const SpellItem::`vftable'{for `MagicItem'}
0x41D208: mov     dword ptr [ecx], offset ??_7SpellItem@@6BEffectItemList@@@; const SpellItem::`vftable'{for `EffectItemList'}
0x41D20E: mov     [esp+18h+var_4], 0
0x41D216: call    EffectItemList_Clear
0x41D21B: mov     ecx, esi
0x41D21D: call    j_TESForm_ClearComponentReferences
0x41D222: mov     ecx, esi; this
0x41D224: mov     [esp+18h+var_4], 0FFFFFFFFh
0x41D22C: call    ??1MagicItemForm@@UAE@XZ; MagicItemForm::~MagicItemForm(void)
0x41D231: mov     ecx, [esp+18h+var_C]
0x41D235: mov     large fs:0, ecx
0x41D23C: pop     ecx
0x41D23D: pop     esi
0x41D23E: add     esp, 10h
0x41D241: retn
0x9AB450: mov     ecx, [ebp-10h]; this
0x9AB453: jmp     ??1MagicItemForm@@UAE@XZ; MagicItemForm::~MagicItemForm(void)
0x9AB458: mov     edx, [esp+arg_4]
0x9AB45C: lea     eax, [edx-8]
0x9AB45F: mov     ecx, [edx-0Ch]
0x9AB462: xor     ecx, eax
0x9AB464: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB469: mov     eax, offset stru_AD8390
0x9AB46E: jmp     ___CxxFrameHandler3
