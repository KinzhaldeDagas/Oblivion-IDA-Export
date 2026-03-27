0x412B50: push    0FFFFFFFFh
0x412B52: push    offset ??0TESObjectSTAT@@QAE@XZ_SEH
0x412B57: mov     eax, large fs:0
0x412B5D: push    eax
0x412B5E: push    ecx
0x412B5F: push    esi
0x412B60: push    edi
0x412B61: mov     eax, ___security_cookie
0x412B66: xor     eax, esp
0x412B68: push    eax
0x412B69: lea     eax, [esp+1Ch+var_C]
0x412B6D: mov     large fs:0, eax
0x412B73: mov     esi, ecx
0x412B75: mov     [esp+1Ch+var_10], esi
0x412B79: call    TESBoundObject_constr
0x412B7E: lea     edi, [esi+24h]
0x412B81: mov     ecx, edi
0x412B83: mov     [esp+1Ch+var_4], 0
0x412B8B: call    MagicItem_constr
0x412B90: mov     dword ptr [esi], offset ??_7MagicItemObject@@6BMagicItemObject@@@; const MagicItemObject::`vftable'{for `MagicItemObject'}
0x412B96: mov     dword ptr [edi], offset ??_7MagicItemObject@@6BMagicItem@@@; const MagicItemObject::`vftable'{for `MagicItem'}
0x412B9C: mov     dword ptr [esi+30h], offset ??_7MagicItemObject@@6BEffectItemList@@@; const MagicItemObject::`vftable'{for `EffectItemList'}
0x412BA3: mov     eax, esi
0x412BA5: mov     ecx, [esp+1Ch+var_C]
0x412BA9: mov     large fs:0, ecx
0x412BB0: pop     ecx
0x412BB1: pop     edi
0x412BB2: pop     esi
0x412BB3: add     esp, 10h
0x412BB6: retn
