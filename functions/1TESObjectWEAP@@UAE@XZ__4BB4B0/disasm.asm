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
0x4BB591: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
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
0x9B3F90: mov     ecx, [ebp-10h]
0x9B3F93: jmp     TESObject_destr
0x9B3F98: cmp     dword ptr [ebp-10h], 0
0x9B3F9C: jz      loc_9B3FB0
0x9B3FA2: mov     eax, [ebp-10h]
0x9B3FA5: add     eax, 24h ; '$'
0x9B3FA8: mov     [ebp-14h], eax
0x9B3FAB: jmp     loc_9B3FB7
0x9B3FB0: mov     dword ptr [ebp-14h], 0
0x9B3FB7: mov     ecx, [ebp-14h]
0x9B3FBA: jmp     TESFullName_Initialize
0x9B3FBF: cmp     dword ptr [ebp-10h], 0
0x9B3FC3: jz      loc_9B3FD7
0x9B3FC9: mov     eax, [ebp-10h]
0x9B3FCC: add     eax, 30h ; '0'
0x9B3FCF: mov     [ebp-18h], eax
0x9B3FD2: jmp     loc_9B3FDE
0x9B3FD7: mov     dword ptr [ebp-18h], 0
0x9B3FDE: mov     ecx, [ebp-18h]; this
0x9B3FE1: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B3FE6: cmp     dword ptr [ebp-10h], 0
0x9B3FEA: jz      loc_9B3FFE
0x9B3FF0: mov     eax, [ebp-10h]
0x9B3FF3: add     eax, 48h ; 'H'
0x9B3FF6: mov     [ebp-1Ch], eax
0x9B3FF9: jmp     loc_9B4005
0x9B3FFE: mov     dword ptr [ebp-1Ch], 0
0x9B4005: mov     ecx, [ebp-1Ch]; void *
0x9B4008: jmp     j_TESTexture_destr
0x9B400D: cmp     dword ptr [ebp-10h], 0
0x9B4011: jz      loc_9B4025
0x9B4017: mov     eax, [ebp-10h]
0x9B401A: add     eax, 70h ; 'p'
0x9B401D: mov     [ebp-20h], eax
0x9B4020: jmp     loc_9B402C
0x9B4025: mov     dword ptr [ebp-20h], 0
0x9B402C: mov     ecx, [ebp-20h]
0x9B402F: jmp     TESValueForm_destr
0x9B4034: cmp     dword ptr [ebp-10h], 0
0x9B4038: jz      loc_9B404C
0x9B403E: mov     eax, [ebp-10h]
0x9B4041: add     eax, 78h ; 'x'
0x9B4044: mov     [ebp-24h], eax
0x9B4047: jmp     loc_9B4053
0x9B404C: mov     dword ptr [ebp-24h], 0
0x9B4053: mov     ecx, [ebp-24h]
0x9B4056: jmp     TESWeightForm_destr
0x9B405B: cmp     dword ptr [ebp-10h], 0
0x9B405F: jz      loc_9B4075
0x9B4065: mov     eax, [ebp-10h]
0x9B4068: add     eax, 80h ; '€'
0x9B406D: mov     [ebp-28h], eax
0x9B4070: jmp     loc_9B407C
0x9B4075: mov     dword ptr [ebp-28h], 0
0x9B407C: mov     ecx, [ebp-28h]
0x9B407F: jmp     TESHealthForm_destr
0x9B4084: cmp     dword ptr [ebp-10h], 0
0x9B4088: jz      loc_9B409E
0x9B408E: mov     eax, [ebp-10h]
0x9B4091: add     eax, 88h ; 'ˆ'
0x9B4096: mov     [ebp-2Ch], eax
0x9B4099: jmp     loc_9B40A5
0x9B409E: mov     dword ptr [ebp-2Ch], 0
0x9B40A5: mov     ecx, [ebp-2Ch]
0x9B40A8: jmp     TESAttackDamageForm_destr
0x9B40AD: mov     edx, [esp+arg_4]
0x9B40B1: lea     eax, [edx-30h]
0x9B40B4: mov     ecx, [edx-34h]
0x9B40B7: xor     ecx, eax
0x9B40B9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B40BE: mov     eax, offset stru_ADF7BC
0x9B40C3: jmp     ___CxxFrameHandler3
