0x41A5A0: push    0FFFFFFFFh
0x41A5A2: push    offset MagicItem_destr_SEH
0x41A5A7: mov     eax, large fs:0
0x41A5AD: push    eax
0x41A5AE: push    ecx
0x41A5AF: push    esi
0x41A5B0: push    edi
0x41A5B1: mov     eax, ___security_cookie
0x41A5B6: xor     eax, esp
0x41A5B8: push    eax
0x41A5B9: lea     eax, [esp+1Ch+var_C]
0x41A5BD: mov     large fs:0, eax
0x41A5C3: mov     esi, ecx
0x41A5C5: mov     [esp+1Ch+var_10], esi
0x41A5C9: lea     ecx, [esi+0Ch]
0x41A5CC: mov     dword ptr [esi], offset ??_7MagicItem@@6BMagicItem@@@; const MagicItem::`vftable'{for `MagicItem'}
0x41A5D2: mov     dword ptr [ecx], offset ??_7MagicItem@@6BEffectItemList@@@; const MagicItem::`vftable'{for `EffectItemList'}
0x41A5D8: xor     edi, edi
0x41A5DA: mov     [esp+1Ch+var_4], edi
0x41A5DE: call    EffectItemList_Clear
0x41A5E3: mov     eax, [esi+4]
0x41A5E6: push    eax
0x41A5E7: call    FormHeapFree
0x41A5EC: add     esp, 4
0x41A5EF: mov     [esi+4], edi
0x41A5F2: mov     [esi+0Ah], di
0x41A5F6: mov     [esi+8], di
0x41A5FA: mov     ecx, [esp+1Ch+var_C]
0x41A5FE: mov     large fs:0, ecx
0x41A605: pop     ecx
0x41A606: pop     edi
0x41A607: pop     esi
0x41A608: add     esp, 10h
0x41A60B: retn
