0x41D420: push    0FFFFFFFFh
0x41D422: push    offset ??1SpellItem@@UAE@XZ_SEH
0x41D427: mov     eax, large fs:0
0x41D42D: push    eax
0x41D42E: push    ecx
0x41D42F: push    esi
0x41D430: mov     eax, ___security_cookie
0x41D435: xor     eax, esp
0x41D437: push    eax
0x41D438: lea     eax, [esp+18h+var_C]
0x41D43C: mov     large fs:0, eax
0x41D442: mov     esi, ecx
0x41D444: mov     [esp+18h+var_10], esi
0x41D448: call    MagicItemForm_constr
0x41D44D: xor     eax, eax
0x41D44F: mov     ecx, esi; this
0x41D451: mov     [esp+18h+var_4], eax
0x41D455: mov     dword ptr [esi], offset ??_7SpellItem@@6BSpellItem@@@; const SpellItem::`vftable'{for `SpellItem'}
0x41D45B: mov     dword ptr [esi+18h], offset ??_7SpellItem@@6BMagicItem@@@; const SpellItem::`vftable'{for `MagicItem'}
0x41D462: mov     dword ptr [esi+24h], offset ??_7SpellItem@@6BEffectItemList@@@; const SpellItem::`vftable'{for `EffectItemList'}
0x41D469: mov     byte ptr [esi+4], 10h
0x41D46D: mov     [esi+34h], eax
0x41D470: mov     dword ptr [esi+38h], 0FFFFFFFFh
0x41D477: mov     [esi+3Ch], eax
0x41D47A: mov     [esi+40h], al
0x41D47D: call    j_TESForm_InitializeComponents
0x41D482: mov     eax, esi
0x41D484: mov     ecx, [esp+18h+var_C]
0x41D488: mov     large fs:0, ecx
0x41D48F: pop     ecx
0x41D490: pop     esi
0x41D491: add     esp, 10h
0x41D494: retn
