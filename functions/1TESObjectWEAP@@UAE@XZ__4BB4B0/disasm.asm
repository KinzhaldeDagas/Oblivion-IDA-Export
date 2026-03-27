0x4BB4B0: push    0FFFFFFFFh
0x4BB4B2: push    offset ??1TESObjectWEAP@@UAE@XZ_SEH
0x4BB4B7: mov     eax, large fs:0
0x4BB4BD: push    eax
0x4BB4BE: sub     esp, 20h
0x4BB4C1: push    ebx
0x4BB4C2: push    ebp
0x4BB4C3: push    esi
0x4BB4C4: push    edi
0x4BB4C5: mov     eax, ds:0B30AACh
0x4BB4CA: xor     eax, esp
0x4BB4CC: push    eax
0x4BB4CD: lea     eax, [esp+40h+var_C]
0x4BB4D1: mov     large fs:0, eax
0x4BB4D7: mov     esi, ecx
0x4BB4D9: mov     [esp+40h+var_10], esi
0x4BB4DD: lea     edi, [esi+30h]
0x4BB4E0: lea     ebx, [esi+48h]
0x4BB4E3: lea     ebp, [esi+70h]
0x4BB4E6: mov     dword ptr [esi], offset ??_7TESObjectWEAP@@6BTESObjectWEAP@@@; const TESObjectWEAP::`vftable'{for `TESObjectWEAP'}
0x4BB4EC: mov     dword ptr [esi+24h], offset ??_7TESObjectWEAP@@6BTESFullName@@@; const TESObjectWEAP::`vftable'{for `TESFullName'}
0x4BB4F3: mov     dword ptr [edi], offset ??_7TESObjectWEAP@@6BTESModel@@@; const TESObjectWEAP::`vftable'{for `TESModel'}
0x4BB4F9: mov     dword ptr [ebx], offset ??_7TESObjectWEAP@@6BTESIcon@@@; const TESObjectWEAP::`vftable'{for `TESIcon'}
0x4BB4FF: mov     dword ptr [esi+54h], offset ??_7TESObjectWEAP@@6BTESScriptableForm@@@; const TESObjectWEAP::`vftable'{for `TESScriptableForm'}
0x4BB506: mov     dword ptr [esi+60h], offset ??_7TESObjectWEAP@@6BTESEnchantableForm@@@; const TESObjectWEAP::`vftable'{for `TESEnchantableForm'}
0x4BB50D: mov     dword ptr [ebp+0], offset ??_7TESObjectWEAP@@6BTESValueForm@@@; const TESObjectWEAP::`vftable'{for `TESValueForm'}
0x4BB514: mov     dword ptr [esi+78h], offset ??_7TESObjectWEAP@@6BTESWeightForm@@@; const TESObjectWEAP::`vftable'{for `TESWeightForm'}
0x4BB51B: mov     dword ptr [esi+80h], offset ??_7TESObjectWEAP@@6BTESHealthForm@@@; const TESObjectWEAP::`vftable'{for `TESHealthForm'}
0x4BB525: mov     dword ptr [esi+88h], offset ??_7TESObjectWEAP@@6BTESAttackDamageForm@@@; const TESObjectWEAP::`vftable'{for `TESAttackDamageForm'}
0x4BB52F: mov     [esp+40h+var_4], 7
0x4BB537: call    j_TESForm_ClearComponentReferences
0x4BB53C: lea     ecx, [esi+88h]
0x4BB542: mov     byte ptr [esp+40h+var_4], 6
0x4BB547: call    TESAttackDamageForm_destr
0x4BB54C: lea     ecx, [esi+80h]
0x4BB552: mov     byte ptr [esp+40h+var_4], 5
0x4BB557: call    TESHealthForm_destr
0x4BB55C: lea     ecx, [esi+78h]
0x4BB55F: mov     byte ptr [esp+40h+var_4], 4
0x4BB564: call    TESWeightForm_destr
0x4BB569: mov     ecx, ebp
0x4BB56B: mov     byte ptr [esp+40h+var_4], 3
0x4BB570: call    TESValueForm_destr
0x4BB575: mov     ecx, ebx; void *
0x4BB577: mov     byte ptr [esp+40h+var_4], 2
0x4BB57C: call    TESTexture_destr
0x4BB581: mov     ecx, edi; this
0x4BB583: mov     byte ptr [esp+40h+var_4], 1
0x4BB588: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4BB58D: mov     eax, [esi+28h]
0x4BB590: push    eax
0x4BB591: call    FormHeapFree
0x4BB596: xor     eax, eax
0x4BB598: add     esp, 4
0x4BB59B: mov     ecx, esi
0x4BB59D: mov     [esi+28h], eax
0x4BB5A0: mov     [esi+2Eh], ax
0x4BB5A4: mov     [esi+2Ch], ax
0x4BB5A8: mov     [esp+40h+var_4], 0FFFFFFFFh
0x4BB5B0: call    TESObject_destr
0x4BB5B5: mov     ecx, [esp+40h+var_C]
0x4BB5B9: mov     large fs:0, ecx
0x4BB5C0: pop     ecx
0x4BB5C1: pop     edi
0x4BB5C2: pop     esi
0x4BB5C3: pop     ebp
0x4BB5C4: pop     ebx
0x4BB5C5: add     esp, 2Ch
0x4BB5C8: retn
