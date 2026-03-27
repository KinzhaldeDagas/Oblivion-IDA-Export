0x4194E0: push    0FFFFFFFFh
0x4194E2: push    offset ??0TESObjectANIO@@QAE@XZ_SEH
0x4194E7: mov     eax, large fs:0
0x4194ED: push    eax
0x4194EE: push    ecx
0x4194EF: push    esi
0x4194F0: push    edi
0x4194F1: mov     eax, ___security_cookie
0x4194F6: xor     eax, esp
0x4194F8: push    eax
0x4194F9: lea     eax, [esp+1Ch+var_C]
0x4194FD: mov     large fs:0, eax
0x419503: mov     esi, ecx
0x419505: mov     [esp+1Ch+var_10], esi
0x419509: call    TESForm_constr
0x41950E: lea     edi, [esi+18h]
0x419511: mov     ecx, edi
0x419513: mov     [esp+1Ch+var_4], 0
0x41951B: call    MagicItem_constr
0x419520: mov     dword ptr [esi], offset ??_7MagicItemForm@@6BMagicItemForm@@@; const MagicItemForm::`vftable'{for `MagicItemForm'}
0x419526: mov     dword ptr [edi], offset ??_7MagicItemForm@@6BMagicItem@@@; const MagicItemForm::`vftable'{for `MagicItem'}
0x41952C: mov     dword ptr [esi+24h], offset ??_7MagicItemForm@@6BEffectItemList@@@; const MagicItemForm::`vftable'{for `EffectItemList'}
0x419533: mov     eax, esi
0x419535: mov     ecx, [esp+1Ch+var_C]
0x419539: mov     large fs:0, ecx
0x419540: pop     ecx
0x419541: pop     edi
0x419542: pop     esi
0x419543: add     esp, 10h
0x419546: retn
