0x4BB960: push    0FFFFFFFFh
0x4BB962: push    offset ??1TESSigilStone@@UAE@XZ_SEH
0x4BB967: mov     eax, large fs:0
0x4BB96D: push    eax
0x4BB96E: sub     esp, 8
0x4BB971: push    esi
0x4BB972: push    edi
0x4BB973: mov     eax, ds:0B30AACh
0x4BB978: xor     eax, esp
0x4BB97A: push    eax
0x4BB97B: lea     eax, [esp+20h+var_C]
0x4BB97F: mov     large fs:0, eax
0x4BB985: mov     esi, ecx
0x4BB987: mov     [esp+20h+var_10], esi
0x4BB98B: lea     edi, [esi+70h]
0x4BB98E: lea     ecx, [esi+78h]
0x4BB991: mov     dword ptr [esi], offset ??_7TESSigilStone@@6BTESSigilStone@@@; const TESSigilStone::`vftable'{for `TESSigilStone'}
0x4BB997: mov     dword ptr [esi+24h], offset ??_7TESSigilStone@@6BTESFullName@@@; const TESSigilStone::`vftable'{for `TESFullName'}
0x4BB99E: mov     dword ptr [esi+30h], offset ??_7TESSigilStone@@6BTESModel@@@; const TESSigilStone::`vftable'{for `TESModel'}
0x4BB9A5: mov     dword ptr [esi+48h], offset ??_7TESSigilStone@@6BTESIcon@@@; const TESSigilStone::`vftable'{for `TESIcon'}
0x4BB9AC: mov     dword ptr [esi+54h], offset ??_7TESSigilStone@@6BTESScriptableForm@@@; const TESSigilStone::`vftable'{for `TESScriptableForm'}
0x4BB9B3: mov     dword ptr [esi+60h], offset ??_7TESSigilStone@@6BTESValueForm@@@; const TESSigilStone::`vftable'{for `TESValueForm'}
0x4BB9BA: mov     dword ptr [esi+68h], offset ??_7TESSigilStone@@6BTESWeightForm@@@; const TESSigilStone::`vftable'{for `TESWeightForm'}
0x4BB9C1: mov     dword ptr [edi], offset ??_7TESSigilStone@@6BTESUsesForm@@@; const TESSigilStone::`vftable'{for `TESUsesForm'}
0x4BB9C7: mov     dword ptr [ecx], offset ??_7TESSigilStone@@6BEffectItemList@@@; const TESSigilStone::`vftable'{for `EffectItemList'}
0x4BB9CD: mov     [esp+20h+var_4], 1
0x4BB9D5: call    EffectItemList_Clear
0x4BB9DA: mov     ecx, esi
0x4BB9DC: call    j_TESForm_ClearComponentReferences
0x4BB9E1: mov     ecx, edi
0x4BB9E3: mov     byte ptr [esp+20h+var_4], 0
0x4BB9E8: call    TESUsesForm_destr
0x4BB9ED: mov     ecx, esi; this
0x4BB9EF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4BB9F7: call    ??1TESObjectMISC@@UAE@XZ; TESObjectMISC::~TESObjectMISC(void)
0x4BB9FC: mov     ecx, [esp+20h+var_C]
0x4BBA00: mov     large fs:0, ecx
0x4BBA07: pop     ecx
0x4BBA08: pop     edi
0x4BBA09: pop     esi
0x4BBA0A: add     esp, 14h
0x4BBA0D: retn
