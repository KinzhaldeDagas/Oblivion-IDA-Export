0x412AE0: push    0FFFFFFFFh
0x412AE2: push    offset MagicItem_destr_SEH
0x412AE7: mov     eax, large fs:0
0x412AED: push    eax
0x412AEE: push    ecx
0x412AEF: push    esi
0x412AF0: push    edi
0x412AF1: mov     eax, ___security_cookie
0x412AF6: xor     eax, esp
0x412AF8: push    eax
0x412AF9: lea     eax, [esp+1Ch+var_C]
0x412AFD: mov     large fs:0, eax
0x412B03: mov     esi, ecx
0x412B05: mov     [esp+1Ch+var_10], esi
0x412B09: xor     eax, eax
0x412B0B: mov     dword ptr [esi], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x412B11: mov     [esi+4], eax
0x412B14: mov     [esi+8], ax
0x412B18: mov     [esi+0Ah], ax
0x412B1C: lea     edi, [esi+0Ch]
0x412B1F: mov     ecx, edi
0x412B21: mov     [esp+1Ch+var_4], eax
0x412B25: call    EffectItemList_constr
0x412B2A: mov     dword ptr [esi], offset ??_7MagicItem@@6BMagicItem@@@; const MagicItem::`vftable'{for `MagicItem'}
0x412B30: mov     dword ptr [edi], offset ??_7MagicItem@@6BEffectItemList@@@; const MagicItem::`vftable'{for `EffectItemList'}
0x412B36: mov     eax, esi
0x412B38: mov     ecx, [esp+1Ch+var_C]
0x412B3C: mov     large fs:0, ecx
0x412B43: pop     ecx
0x412B44: pop     edi
0x412B45: pop     esi
0x412B46: add     esp, 10h
0x412B49: retn
