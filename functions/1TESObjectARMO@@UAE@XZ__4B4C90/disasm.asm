0x4B4C90: push    0FFFFFFFFh
0x4B4C92: push    offset ??1TESObjectARMO@@UAE@XZ_SEH
0x4B4C97: mov     eax, large fs:0
0x4B4C9D: push    eax
0x4B4C9E: sub     esp, 18h
0x4B4CA1: push    ebx
0x4B4CA2: push    ebp
0x4B4CA3: push    esi
0x4B4CA4: push    edi
0x4B4CA5: mov     eax, ds:0B30AACh
0x4B4CAA: xor     eax, esp
0x4B4CAC: push    eax
0x4B4CAD: lea     eax, [esp+38h+var_C]
0x4B4CB1: mov     large fs:0, eax
0x4B4CB7: mov     esi, ecx
0x4B4CB9: mov     [esp+38h+var_10], esi
0x4B4CBD: lea     edi, [esi+4Ch]
0x4B4CC0: lea     ebx, [esi+54h]
0x4B4CC3: lea     ebp, [esi+5Ch]
0x4B4CC6: mov     dword ptr [esi], offset ??_7TESObjectARMO@@6BTESObjectARMO@@@; const TESObjectARMO::`vftable'{for `TESObjectARMO'}
0x4B4CCC: mov     dword ptr [esi+24h], offset ??_7TESObjectARMO@@6BTESFullName@@@; const TESObjectARMO::`vftable'{for `TESFullName'}
0x4B4CD3: mov     dword ptr [esi+30h], offset ??_7TESObjectARMO@@6BTESScriptableForm@@@; const TESObjectARMO::`vftable'{for `TESScriptableForm'}
0x4B4CDA: mov     dword ptr [esi+3Ch], offset ??_7TESObjectARMO@@6BTESEnchantableForm@@@; const TESObjectARMO::`vftable'{for `TESEnchantableForm'}
0x4B4CE1: mov     dword ptr [edi], offset ??_7TESObjectARMO@@6BTESValueForm@@@; const TESObjectARMO::`vftable'{for `TESValueForm'}
0x4B4CE7: mov     dword ptr [ebx], offset ??_7TESObjectARMO@@6BTESWeightForm@@@; const TESObjectARMO::`vftable'{for `TESWeightForm'}
0x4B4CED: mov     dword ptr [ebp+0], offset ??_7TESObjectARMO@@6BTESHealthForm@@@; const TESObjectARMO::`vftable'{for `TESHealthForm'}
0x4B4CF4: mov     dword ptr [esi+64h], offset ??_7TESObjectARMO@@6BTESBipedModelForm@@@; const TESObjectARMO::`vftable'{for `TESBipedModelForm'}
0x4B4CFB: mov     [esp+38h+var_4], 5
0x4B4D03: call    j_TESForm_ClearComponentReferences
0x4B4D08: lea     ecx, [esi+64h]
0x4B4D0B: mov     byte ptr [esp+38h+var_4], 4
0x4B4D10: call    TESBipedModelForm_destr
0x4B4D15: mov     ecx, ebp
0x4B4D17: mov     byte ptr [esp+38h+var_4], 3
0x4B4D1C: call    TESHealthForm_destr
0x4B4D21: mov     ecx, ebx
0x4B4D23: mov     byte ptr [esp+38h+var_4], 2
0x4B4D28: call    TESWeightForm_destr
0x4B4D2D: mov     ecx, edi
0x4B4D2F: mov     byte ptr [esp+38h+var_4], 1
0x4B4D34: call    TESValueForm_destr
0x4B4D39: mov     eax, [esi+28h]
0x4B4D3C: push    eax
0x4B4D3D: call    FormHeapFree
0x4B4D42: xor     eax, eax
0x4B4D44: add     esp, 4
0x4B4D47: mov     ecx, esi
0x4B4D49: mov     [esi+28h], eax
0x4B4D4C: mov     [esi+2Eh], ax
0x4B4D50: mov     [esi+2Ch], ax
0x4B4D54: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4B4D5C: call    TESObject_destr
0x4B4D61: mov     ecx, [esp+38h+var_C]
0x4B4D65: mov     large fs:0, ecx
0x4B4D6C: pop     ecx
0x4B4D6D: pop     edi
0x4B4D6E: pop     esi
0x4B4D6F: pop     ebp
0x4B4D70: pop     ebx
0x4B4D71: add     esp, 24h
0x4B4D74: retn
