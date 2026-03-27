0x4B9770: push    0FFFFFFFFh
0x4B9772: push    offset ??1TESObjectMISC@@UAE@XZ_SEH
0x4B9777: mov     eax, large fs:0
0x4B977D: push    eax
0x4B977E: sub     esp, 18h
0x4B9781: push    ebx
0x4B9782: push    ebp
0x4B9783: push    esi
0x4B9784: push    edi
0x4B9785: mov     eax, ds:0B30AACh
0x4B978A: xor     eax, esp
0x4B978C: push    eax
0x4B978D: lea     eax, [esp+38h+var_C]
0x4B9791: mov     large fs:0, eax
0x4B9797: mov     esi, ecx
0x4B9799: mov     [esp+38h+var_10], esi
0x4B979D: lea     edi, [esi+30h]
0x4B97A0: lea     ebx, [esi+48h]
0x4B97A3: lea     ebp, [esi+60h]
0x4B97A6: mov     dword ptr [esi], offset ??_7TESObjectMISC@@6BTESObjectMISC@@@; const TESObjectMISC::`vftable'{for `TESObjectMISC'}
0x4B97AC: mov     dword ptr [esi+24h], offset ??_7TESObjectMISC@@6BTESFullName@@@; const TESObjectMISC::`vftable'{for `TESFullName'}
0x4B97B3: mov     dword ptr [edi], offset ??_7TESObjectMISC@@6BTESModel@@@; const TESObjectMISC::`vftable'{for `TESModel'}
0x4B97B9: mov     dword ptr [ebx], offset ??_7TESObjectMISC@@6BTESIcon@@@; const TESObjectMISC::`vftable'{for `TESIcon'}
0x4B97BF: mov     dword ptr [esi+54h], offset ??_7TESObjectMISC@@6BTESScriptableForm@@@; const TESObjectMISC::`vftable'{for `TESScriptableForm'}
0x4B97C6: mov     dword ptr [ebp+0], offset ??_7TESObjectMISC@@6BTESValueForm@@@; const TESObjectMISC::`vftable'{for `TESValueForm'}
0x4B97CD: mov     dword ptr [esi+68h], offset ??_7TESObjectMISC@@6BTESWeightForm@@@; const TESObjectMISC::`vftable'{for `TESWeightForm'}
0x4B97D4: mov     [esp+38h+var_4], 5
0x4B97DC: call    j_TESForm_ClearComponentReferences
0x4B97E1: lea     ecx, [esi+68h]
0x4B97E4: mov     byte ptr [esp+38h+var_4], 4
0x4B97E9: call    TESWeightForm_destr
0x4B97EE: mov     ecx, ebp
0x4B97F0: mov     byte ptr [esp+38h+var_4], 3
0x4B97F5: call    TESValueForm_destr
0x4B97FA: mov     ecx, ebx; void *
0x4B97FC: mov     byte ptr [esp+38h+var_4], 2
0x4B9801: call    TESTexture_destr
0x4B9806: mov     ecx, edi; this
0x4B9808: mov     byte ptr [esp+38h+var_4], 1
0x4B980D: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4B9812: mov     eax, [esi+28h]
0x4B9815: push    eax
0x4B9816: call    FormHeapFree
0x4B981B: xor     eax, eax
0x4B981D: add     esp, 4
0x4B9820: mov     ecx, esi
0x4B9822: mov     [esi+28h], eax
0x4B9825: mov     [esi+2Eh], ax
0x4B9829: mov     [esi+2Ch], ax
0x4B982D: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4B9835: call    TESObject_destr
0x4B983A: mov     ecx, [esp+38h+var_C]
0x4B983E: mov     large fs:0, ecx
0x4B9845: pop     ecx
0x4B9846: pop     edi
0x4B9847: pop     esi
0x4B9848: pop     ebp
0x4B9849: pop     ebx
0x4B984A: add     esp, 24h
0x4B984D: retn
