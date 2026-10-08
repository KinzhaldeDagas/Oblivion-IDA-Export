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
0x4B14B6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
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
0x9B2ED0: mov     ecx, [ebp-10h]
0x9B2ED3: jmp     TESObject_destr
0x9B2ED8: cmp     dword ptr [ebp-10h], 0
0x9B2EDC: jz      loc_9B2EF0
0x9B2EE2: mov     eax, [ebp-10h]
0x9B2EE5: add     eax, 24h ; '$'
0x9B2EE8: mov     [ebp-14h], eax
0x9B2EEB: jmp     loc_9B2EF7
0x9B2EF0: mov     dword ptr [ebp-14h], 0
0x9B2EF7: mov     ecx, [ebp-14h]
0x9B2EFA: jmp     TESFullName_Initialize
0x9B2EFF: cmp     dword ptr [ebp-10h], 0
0x9B2F03: jz      loc_9B2F17
0x9B2F09: mov     eax, [ebp-10h]
0x9B2F0C: add     eax, 30h ; '0'
0x9B2F0F: mov     [ebp-18h], eax
0x9B2F12: jmp     loc_9B2F1E
0x9B2F17: mov     dword ptr [ebp-18h], 0
0x9B2F1E: mov     ecx, [ebp-18h]; this
0x9B2F21: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B2F26: cmp     dword ptr [ebp-10h], 0
0x9B2F2A: jz      loc_9B2F3E
0x9B2F30: mov     eax, [ebp-10h]
0x9B2F33: add     eax, 48h ; 'H'
0x9B2F36: mov     [ebp-1Ch], eax
0x9B2F39: jmp     loc_9B2F45
0x9B2F3E: mov     dword ptr [ebp-1Ch], 0
0x9B2F45: mov     ecx, [ebp-1Ch]; void *
0x9B2F48: jmp     j_TESTexture_destr
0x9B2F4D: cmp     dword ptr [ebp-10h], 0
0x9B2F51: jz      loc_9B2F65
0x9B2F57: mov     eax, [ebp-10h]
0x9B2F5A: add     eax, 60h ; '`'
0x9B2F5D: mov     [ebp-20h], eax
0x9B2F60: jmp     loc_9B2F6C
0x9B2F65: mov     dword ptr [ebp-20h], 0
0x9B2F6C: mov     ecx, [ebp-20h]
0x9B2F6F: jmp     TESWeightForm_destr
0x9B2F74: cmp     dword ptr [ebp-10h], 0
0x9B2F78: jz      loc_9B2F8C
0x9B2F7E: mov     eax, [ebp-10h]
0x9B2F81: add     eax, 68h ; 'h'
0x9B2F84: mov     [ebp-24h], eax
0x9B2F87: jmp     loc_9B2F93
0x9B2F8C: mov     dword ptr [ebp-24h], 0
0x9B2F93: mov     ecx, [ebp-24h]
0x9B2F96: jmp     TESValueForm_destr
0x9B2F9B: mov     edx, [esp+arg_4]
0x9B2F9F: lea     eax, [edx-28h]
0x9B2FA2: mov     ecx, [edx-2Ch]
0x9B2FA5: xor     ecx, eax
0x9B2FA7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2FAC: mov     eax, offset stru_ADED08
0x9B2FB1: jmp     ___CxxFrameHandler3
