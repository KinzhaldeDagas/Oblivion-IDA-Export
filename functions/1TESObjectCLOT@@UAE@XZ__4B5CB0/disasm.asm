0x4B5CB0: push    0FFFFFFFFh
0x4B5CB2: push    offset ??1TESObjectCLOT@@UAE@XZ_SEH
0x4B5CB7: mov     eax, large fs:0
0x4B5CBD: push    eax
0x4B5CBE: sub     esp, 14h
0x4B5CC1: push    ebx
0x4B5CC2: push    ebp
0x4B5CC3: push    esi
0x4B5CC4: push    edi
0x4B5CC5: mov     eax, ds:0B30AACh
0x4B5CCA: xor     eax, esp
0x4B5CCC: push    eax
0x4B5CCD: lea     eax, [esp+34h+var_C]
0x4B5CD1: mov     large fs:0, eax
0x4B5CD7: mov     esi, ecx
0x4B5CD9: mov     [esp+34h+var_10], esi
0x4B5CDD: lea     edi, [esi+4Ch]
0x4B5CE0: lea     ebx, [esi+54h]
0x4B5CE3: lea     ebp, [esi+5Ch]
0x4B5CE6: mov     dword ptr [esi], offset ??_7TESObjectCLOT@@6BTESObjectCLOT@@@; const TESObjectCLOT::`vftable'{for `TESObjectCLOT'}
0x4B5CEC: mov     dword ptr [esi+24h], offset ??_7TESObjectCLOT@@6BTESFullName@@@; const TESObjectCLOT::`vftable'{for `TESFullName'}
0x4B5CF3: mov     dword ptr [esi+30h], offset ??_7TESObjectCLOT@@6BTESScriptableForm@@@; const TESObjectCLOT::`vftable'{for `TESScriptableForm'}
0x4B5CFA: mov     dword ptr [esi+3Ch], offset ??_7TESObjectCLOT@@6BTESEnchantableForm@@@; const TESObjectCLOT::`vftable'{for `TESEnchantableForm'}
0x4B5D01: mov     dword ptr [edi], offset ??_7TESObjectCLOT@@6BTESValueForm@@@; const TESObjectCLOT::`vftable'{for `TESValueForm'}
0x4B5D07: mov     dword ptr [ebx], offset ??_7TESObjectCLOT@@6BTESWeightForm@@@; const TESObjectCLOT::`vftable'{for `TESWeightForm'}
0x4B5D0D: mov     dword ptr [ebp+0], offset ??_7TESObjectCLOT@@6BTESBipedModelForm@@@; const TESObjectCLOT::`vftable'{for `TESBipedModelForm'}
0x4B5D14: mov     [esp+34h+var_4], 4
0x4B5D1C: call    j_TESForm_ClearComponentReferences
0x4B5D21: mov     ecx, ebp
0x4B5D23: mov     byte ptr [esp+34h+var_4], 3
0x4B5D28: call    TESBipedModelForm_destr
0x4B5D2D: mov     ecx, ebx
0x4B5D2F: mov     byte ptr [esp+34h+var_4], 2
0x4B5D34: call    TESWeightForm_destr
0x4B5D39: mov     ecx, edi
0x4B5D3B: mov     byte ptr [esp+34h+var_4], 1
0x4B5D40: call    TESValueForm_destr
0x4B5D45: mov     eax, [esi+28h]
0x4B5D48: push    eax
0x4B5D49: call    FormHeapFree
0x4B5D4E: xor     eax, eax
0x4B5D50: add     esp, 4
0x4B5D53: mov     ecx, esi
0x4B5D55: mov     [esi+28h], eax
0x4B5D58: mov     [esi+2Eh], ax
0x4B5D5C: mov     [esi+2Ch], ax
0x4B5D60: mov     [esp+34h+var_4], 0FFFFFFFFh
0x4B5D68: call    TESObject_destr
0x4B5D6D: mov     ecx, [esp+34h+var_C]
0x4B5D71: mov     large fs:0, ecx
0x4B5D78: pop     ecx
0x4B5D79: pop     edi
0x4B5D7A: pop     esi
0x4B5D7B: pop     ebp
0x4B5D7C: pop     ebx
0x4B5D7D: add     esp, 20h
0x4B5D80: retn
