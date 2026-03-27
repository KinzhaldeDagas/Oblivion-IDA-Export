0x4B1410: push    0FFFFFFFFh
0x4B1412: push    offset ??1TESObjectLIGH@@UAE@XZ_SEH
0x4B1417: mov     eax, large fs:0
0x4B141D: push    eax
0x4B141E: sub     esp, 18h
0x4B1421: push    ebx
0x4B1422: push    ebp
0x4B1423: push    esi
0x4B1424: push    edi
0x4B1425: mov     eax, ds:0B30AACh
0x4B142A: xor     eax, esp
0x4B142C: push    eax
0x4B142D: lea     eax, [esp+38h+var_C]
0x4B1431: mov     large fs:0, eax
0x4B1437: mov     esi, ecx
0x4B1439: mov     [esp+38h+var_10], esi
0x4B143D: lea     edi, [esi+30h]
0x4B1440: lea     ebx, [esi+48h]
0x4B1443: lea     ebp, [esi+60h]
0x4B1446: mov     dword ptr [esi], offset ??_7TESObjectLIGH@@6BTESObjectLIGH@@@; const TESObjectLIGH::`vftable'{for `TESObjectLIGH'}
0x4B144C: mov     dword ptr [esi+24h], offset ??_7TESObjectLIGH@@6BTESFullName@@@; const TESObjectLIGH::`vftable'{for `TESFullName'}
0x4B1453: mov     dword ptr [edi], offset ??_7TESObjectLIGH@@6BTESModel@@@; const TESObjectLIGH::`vftable'{for `TESModel'}
0x4B1459: mov     dword ptr [ebx], offset ??_7TESObjectLIGH@@6BTESIcon@@@; const TESObjectLIGH::`vftable'{for `TESIcon'}
0x4B145F: mov     dword ptr [esi+54h], offset ??_7TESObjectLIGH@@6BTESScriptableForm@@@; const TESObjectLIGH::`vftable'{for `TESScriptableForm'}
0x4B1466: mov     dword ptr [ebp+0], offset ??_7TESObjectLIGH@@6BTESWeightForm@@@; const TESObjectLIGH::`vftable'{for `TESWeightForm'}
0x4B146D: mov     dword ptr [esi+68h], offset ??_7TESObjectLIGH@@6BTESValueForm@@@; const TESObjectLIGH::`vftable'{for `TESValueForm'}
0x4B1474: mov     [esp+38h+var_4], 5
0x4B147C: call    j_TESForm_ClearComponentReferences
0x4B1481: lea     ecx, [esi+68h]
0x4B1484: mov     byte ptr [esp+38h+var_4], 4
0x4B1489: call    TESValueForm_destr
0x4B148E: mov     ecx, ebp
0x4B1490: mov     byte ptr [esp+38h+var_4], 3
0x4B1495: call    TESWeightForm_destr
0x4B149A: mov     ecx, ebx; void *
0x4B149C: mov     byte ptr [esp+38h+var_4], 2
0x4B14A1: call    TESTexture_destr
0x4B14A6: mov     ecx, edi; this
0x4B14A8: mov     byte ptr [esp+38h+var_4], 1
0x4B14AD: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4B14B2: mov     eax, [esi+28h]
0x4B14B5: push    eax
0x4B14B6: call    FormHeapFree
0x4B14BB: xor     eax, eax
0x4B14BD: add     esp, 4
0x4B14C0: mov     ecx, esi
0x4B14C2: mov     [esi+28h], eax
0x4B14C5: mov     [esi+2Eh], ax
0x4B14C9: mov     [esi+2Ch], ax
0x4B14CD: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4B14D5: call    TESObject_destr
0x4B14DA: mov     ecx, [esp+38h+var_C]
0x4B14DE: mov     large fs:0, ecx
0x4B14E5: pop     ecx
0x4B14E6: pop     edi
0x4B14E7: pop     esi
0x4B14E8: pop     ebp
0x4B14E9: pop     ebx
0x4B14EA: add     esp, 24h
0x4B14ED: retn
