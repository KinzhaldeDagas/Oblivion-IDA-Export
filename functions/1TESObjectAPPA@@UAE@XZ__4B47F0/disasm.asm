0x4B47F0: push    0FFFFFFFFh
0x4B47F2: push    offset ??1TESObjectAPPA@@UAE@XZ_SEH
0x4B47F7: mov     eax, large fs:0
0x4B47FD: push    eax
0x4B47FE: sub     esp, 1Ch
0x4B4801: push    ebx
0x4B4802: push    ebp
0x4B4803: push    esi
0x4B4804: push    edi
0x4B4805: mov     eax, ds:0B30AACh
0x4B480A: xor     eax, esp
0x4B480C: push    eax
0x4B480D: lea     eax, [esp+3Ch+var_C]
0x4B4811: mov     large fs:0, eax
0x4B4817: mov     esi, ecx
0x4B4819: mov     [esp+3Ch+var_10], esi
0x4B481D: lea     edi, [esi+30h]
0x4B4820: lea     ebx, [esi+48h]
0x4B4823: lea     ebp, [esi+60h]
0x4B4826: mov     dword ptr [esi], offset ??_7TESObjectAPPA@@6BTESObjectAPPA@@@; const TESObjectAPPA::`vftable'{for `TESObjectAPPA'}
0x4B482C: mov     dword ptr [esi+24h], offset ??_7TESObjectAPPA@@6BTESFullName@@@; const TESObjectAPPA::`vftable'{for `TESFullName'}
0x4B4833: mov     dword ptr [edi], offset ??_7TESObjectAPPA@@6BTESModel@@@; const TESObjectAPPA::`vftable'{for `TESModel'}
0x4B4839: mov     dword ptr [ebx], offset ??_7TESObjectAPPA@@6BTESIcon@@@; const TESObjectAPPA::`vftable'{for `TESIcon'}
0x4B483F: mov     dword ptr [esi+54h], offset ??_7TESObjectAPPA@@6BTESScriptableForm@@@; const TESObjectAPPA::`vftable'{for `TESScriptableForm'}
0x4B4846: mov     dword ptr [ebp+0], offset ??_7TESObjectAPPA@@6BTESValueForm@@@; const TESObjectAPPA::`vftable'{for `TESValueForm'}
0x4B484D: mov     dword ptr [esi+68h], offset ??_7TESObjectAPPA@@6BTESWeightForm@@@; const TESObjectAPPA::`vftable'{for `TESWeightForm'}
0x4B4854: mov     dword ptr [esi+70h], offset ??_7TESObjectAPPA@@6BTESQualityForm@@@; const TESObjectAPPA::`vftable'{for `TESQualityForm'}
0x4B485B: mov     [esp+3Ch+var_4], 6
0x4B4863: call    j_TESForm_ClearComponentReferences
0x4B4868: lea     ecx, [esi+70h]
0x4B486B: mov     byte ptr [esp+3Ch+var_4], 5
0x4B4870: call    TESQualityForm_destr
0x4B4875: lea     ecx, [esi+68h]
0x4B4878: mov     byte ptr [esp+3Ch+var_4], 4
0x4B487D: call    TESWeightForm_destr
0x4B4882: mov     ecx, ebp
0x4B4884: mov     byte ptr [esp+3Ch+var_4], 3
0x4B4889: call    TESValueForm_destr
0x4B488E: mov     ecx, ebx; void *
0x4B4890: mov     byte ptr [esp+3Ch+var_4], 2
0x4B4895: call    TESTexture_destr
0x4B489A: mov     ecx, edi; this
0x4B489C: mov     byte ptr [esp+3Ch+var_4], 1
0x4B48A1: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4B48A6: mov     eax, [esi+28h]
0x4B48A9: push    eax
0x4B48AA: call    FormHeapFree
0x4B48AF: xor     eax, eax
0x4B48B1: add     esp, 4
0x4B48B4: mov     ecx, esi
0x4B48B6: mov     [esi+28h], eax
0x4B48B9: mov     [esi+2Eh], ax
0x4B48BD: mov     [esi+2Ch], ax
0x4B48C1: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x4B48C9: call    TESObject_destr
0x4B48CE: mov     ecx, [esp+3Ch+var_C]
0x4B48D2: mov     large fs:0, ecx
0x4B48D9: pop     ecx
0x4B48DA: pop     edi
0x4B48DB: pop     esi
0x4B48DC: pop     ebp
0x4B48DD: pop     ebx
0x4B48DE: add     esp, 28h
0x4B48E1: retn
