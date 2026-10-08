0x419570: push    0FFFFFFFFh
0x419572: push    offset ??1SpellItem@@UAE@XZ_SEH
0x419577: mov     eax, large fs:0
0x41957D: push    eax
0x41957E: push    ecx
0x41957F: push    esi
0x419580: mov     eax, ___security_cookie
0x419585: xor     eax, esp
0x419587: push    eax
0x419588: lea     eax, [esp+18h+var_C]
0x41958C: mov     large fs:0, eax
0x419592: mov     esi, ecx
0x419594: mov     [esp+18h+var_10], esi
0x419598: call    MagicItemForm_constr
0x41959D: xor     ecx, ecx
0x41959F: or      eax, 0FFFFFFFFh
0x4195A2: mov     [esp+18h+var_4], ecx
0x4195A6: mov     [esi+40h], cl
0x4195A9: mov     ecx, esi; this
0x4195AB: mov     dword ptr [esi], offset ??_7EnchantmentItem@@6BEnchantmentItem@@@; const EnchantmentItem::`vftable'{for `EnchantmentItem'}
0x4195B1: mov     dword ptr [esi+18h], offset ??_7EnchantmentItem@@6BMagicItem@@@; const EnchantmentItem::`vftable'{for `MagicItem'}
0x4195B8: mov     dword ptr [esi+24h], offset ??_7EnchantmentItem@@6BEffectItemList@@@; const EnchantmentItem::`vftable'{for `EffectItemList'}
0x4195BF: mov     byte ptr [esi+4], 0Fh
0x4195C3: mov     [esi+3Ch], eax
0x4195C6: mov     [esi+38h], eax
0x4195C9: mov     dword ptr [esi+34h], 2
0x4195D0: call    j_TESForm_InitializeComponents
0x4195D5: mov     eax, esi
0x4195D7: mov     ecx, [esp+18h+var_C]
0x4195DB: mov     large fs:0, ecx
0x4195E2: pop     ecx
0x4195E3: pop     esi
0x4195E4: add     esp, 10h
0x4195E7: retn
0x9AB450: mov     ecx, [ebp-10h]; this
0x9AB453: jmp     ??1MagicItemForm@@UAE@XZ; MagicItemForm::~MagicItemForm(void)
0x9AB458: mov     edx, [esp+arg_4]
0x9AB45C: lea     eax, [edx-8]
0x9AB45F: mov     ecx, [edx-0Ch]
0x9AB462: xor     ecx, eax
0x9AB464: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB469: mov     eax, offset stru_AD8390
0x9AB46E: jmp     ___CxxFrameHandler3
