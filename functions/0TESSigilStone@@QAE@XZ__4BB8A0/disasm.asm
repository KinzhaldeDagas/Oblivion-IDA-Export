0x4BB8A0: push    0FFFFFFFFh
0x4BB8A2: push    offset ??0TESSigilStone@@QAE@XZ_SEH
0x4BB8A7: mov     eax, large fs:0
0x4BB8AD: push    eax
0x4BB8AE: push    ecx
0x4BB8AF: push    ebx
0x4BB8B0: push    esi
0x4BB8B1: push    edi
0x4BB8B2: mov     eax, ds:0B30AACh
0x4BB8B7: xor     eax, esp
0x4BB8B9: push    eax
0x4BB8BA: lea     eax, [esp+20h+var_C]
0x4BB8BE: mov     large fs:0, eax
0x4BB8C4: mov     esi, ecx
0x4BB8C6: mov     [esp+20h+var_10], esi
0x4BB8CA: call    ??0TESObjectMISC@@QAE@XZ; TESObjectMISC::TESObjectMISC(void)
0x4BB8CF: lea     edi, [esi+70h]
0x4BB8D2: mov     ecx, edi
0x4BB8D4: mov     [esp+20h+var_4], 0
0x4BB8DC: call    TESUsesForm_constr
0x4BB8E1: lea     ebx, [esi+78h]
0x4BB8E4: mov     ecx, ebx
0x4BB8E6: mov     byte ptr [esp+20h+var_4], 1
0x4BB8EB: call    EffectItemList_constr
0x4BB8F0: mov     ecx, esi; this
0x4BB8F2: mov     dword ptr [esi], offset ??_7TESSigilStone@@6BTESSigilStone@@@; const TESSigilStone::`vftable'{for `TESSigilStone'}
0x4BB8F8: mov     dword ptr [esi+24h], offset ??_7TESSigilStone@@6BTESFullName@@@; const TESSigilStone::`vftable'{for `TESFullName'}
0x4BB8FF: mov     dword ptr [esi+30h], offset ??_7TESSigilStone@@6BTESModel@@@; const TESSigilStone::`vftable'{for `TESModel'}
0x4BB906: mov     dword ptr [esi+48h], offset ??_7TESSigilStone@@6BTESIcon@@@; const TESSigilStone::`vftable'{for `TESIcon'}
0x4BB90D: mov     dword ptr [esi+54h], offset ??_7TESSigilStone@@6BTESScriptableForm@@@; const TESSigilStone::`vftable'{for `TESScriptableForm'}
0x4BB914: mov     dword ptr [esi+60h], offset ??_7TESSigilStone@@6BTESValueForm@@@; const TESSigilStone::`vftable'{for `TESValueForm'}
0x4BB91B: mov     dword ptr [esi+68h], offset ??_7TESSigilStone@@6BTESWeightForm@@@; const TESSigilStone::`vftable'{for `TESWeightForm'}
0x4BB922: mov     dword ptr [edi], offset ??_7TESSigilStone@@6BTESUsesForm@@@; const TESSigilStone::`vftable'{for `TESUsesForm'}
0x4BB928: mov     dword ptr [ebx], offset ??_7TESSigilStone@@6BEffectItemList@@@; const TESSigilStone::`vftable'{for `EffectItemList'}
0x4BB92E: mov     byte ptr [esi+4], 2Ah ; '*'
0x4BB932: call    j_TESForm_InitializeComponents
0x4BB937: mov     eax, esi
0x4BB939: mov     ecx, [esp+20h+var_C]
0x4BB93D: mov     large fs:0, ecx
0x4BB944: pop     ecx
0x4BB945: pop     edi
0x4BB946: pop     esi
0x4BB947: pop     ebx
0x4BB948: add     esp, 10h
0x4BB94B: retn
