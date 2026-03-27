0x4B58C0: push    0FFFFFFFFh
0x4B58C2: push    offset ??1TESObjectBOOK@@UAE@XZ_SEH
0x4B58C7: mov     eax, large fs:0
0x4B58CD: push    eax
0x4B58CE: sub     esp, 18h
0x4B58D1: push    ebx
0x4B58D2: push    ebp
0x4B58D3: push    esi
0x4B58D4: push    edi
0x4B58D5: mov     eax, ds:0B30AACh
0x4B58DA: xor     eax, esp
0x4B58DC: push    eax
0x4B58DD: lea     eax, [esp+38h+var_C]
0x4B58E1: mov     large fs:0, eax
0x4B58E7: mov     esi, ecx
0x4B58E9: mov     [esp+38h+var_10], esi
0x4B58ED: lea     edi, [esi+30h]
0x4B58F0: lea     ebx, [esi+48h]
0x4B58F3: lea     ebp, [esi+70h]
0x4B58F6: mov     dword ptr [esi], offset ??_7TESObjectBOOK@@6BTESObjectBOOK@@@; const TESObjectBOOK::`vftable'{for `TESObjectBOOK'}
0x4B58FC: mov     dword ptr [esi+24h], offset ??_7TESObjectBOOK@@6BTESFullName@@@; const TESObjectBOOK::`vftable'{for `TESFullName'}
0x4B5903: mov     dword ptr [edi], offset ??_7TESObjectBOOK@@6BTESModel@@@; const TESObjectBOOK::`vftable'{for `TESModel'}
0x4B5909: mov     dword ptr [ebx], offset ??_7TESObjectBOOK@@6BTESIcon@@@; const TESObjectBOOK::`vftable'{for `TESIcon'}
0x4B590F: mov     dword ptr [esi+54h], offset ??_7TESObjectBOOK@@6BTESScriptableForm@@@; const TESObjectBOOK::`vftable'{for `TESScriptableForm'}
0x4B5916: mov     dword ptr [esi+60h], offset ??_7TESObjectBOOK@@6BTESEnchantableForm@@@; const TESObjectBOOK::`vftable'{for `TESEnchantableForm'}
0x4B591D: mov     dword ptr [ebp+0], offset ??_7TESObjectBOOK@@6BTESValueForm@@@; const TESObjectBOOK::`vftable'{for `TESValueForm'}
0x4B5924: mov     dword ptr [esi+78h], offset ??_7TESObjectBOOK@@6BTESWeightForm@@@; const TESObjectBOOK::`vftable'{for `TESWeightForm'}
0x4B592B: mov     dword ptr [esi+80h], offset ??_7TESObjectBOOK@@6BTESDescription@@@; const TESObjectBOOK::`vftable'{for `TESDescription'}
0x4B5935: mov     [esp+38h+var_4], 5
0x4B593D: call    j_TESForm_ClearComponentReferences
0x4B5942: lea     ecx, [esi+78h]
0x4B5945: mov     byte ptr [esp+38h+var_4], 4
0x4B594A: call    TESWeightForm_destr
0x4B594F: mov     ecx, ebp
0x4B5951: mov     byte ptr [esp+38h+var_4], 3
0x4B5956: call    TESValueForm_destr
0x4B595B: mov     ecx, ebx; void *
0x4B595D: mov     byte ptr [esp+38h+var_4], 2
0x4B5962: call    TESTexture_destr
0x4B5967: mov     ecx, edi; this
0x4B5969: mov     byte ptr [esp+38h+var_4], 1
0x4B596E: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4B5973: mov     eax, [esi+28h]
0x4B5976: push    eax
0x4B5977: call    FormHeapFree
0x4B597C: xor     eax, eax
0x4B597E: add     esp, 4
0x4B5981: mov     ecx, esi
0x4B5983: mov     [esi+28h], eax
0x4B5986: mov     [esi+2Eh], ax
0x4B598A: mov     [esi+2Ch], ax
0x4B598E: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4B5996: call    TESObject_destr
0x4B599B: mov     ecx, [esp+38h+var_C]
0x4B599F: mov     large fs:0, ecx
0x4B59A6: pop     ecx
0x4B59A7: pop     edi
0x4B59A8: pop     esi
0x4B59A9: pop     ebp
0x4B59AA: pop     ebx
0x4B59AB: add     esp, 24h
0x4B59AE: retn
