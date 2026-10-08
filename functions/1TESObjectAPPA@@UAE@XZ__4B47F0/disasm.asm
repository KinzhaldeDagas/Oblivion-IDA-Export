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
0x4B48AA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
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
0x9B3500: mov     ecx, [ebp-10h]
0x9B3503: jmp     TESObject_destr
0x9B3508: cmp     dword ptr [ebp-10h], 0
0x9B350C: jz      loc_9B3520
0x9B3512: mov     eax, [ebp-10h]
0x9B3515: add     eax, 24h ; '$'
0x9B3518: mov     [ebp-14h], eax
0x9B351B: jmp     loc_9B3527
0x9B3520: mov     dword ptr [ebp-14h], 0
0x9B3527: mov     ecx, [ebp-14h]
0x9B352A: jmp     TESFullName_Initialize
0x9B352F: cmp     dword ptr [ebp-10h], 0
0x9B3533: jz      loc_9B3547
0x9B3539: mov     eax, [ebp-10h]
0x9B353C: add     eax, 30h ; '0'
0x9B353F: mov     [ebp-18h], eax
0x9B3542: jmp     loc_9B354E
0x9B3547: mov     dword ptr [ebp-18h], 0
0x9B354E: mov     ecx, [ebp-18h]; this
0x9B3551: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B3556: cmp     dword ptr [ebp-10h], 0
0x9B355A: jz      loc_9B356E
0x9B3560: mov     eax, [ebp-10h]
0x9B3563: add     eax, 48h ; 'H'
0x9B3566: mov     [ebp-1Ch], eax
0x9B3569: jmp     loc_9B3575
0x9B356E: mov     dword ptr [ebp-1Ch], 0
0x9B3575: mov     ecx, [ebp-1Ch]; void *
0x9B3578: jmp     j_TESTexture_destr
0x9B357D: cmp     dword ptr [ebp-10h], 0
0x9B3581: jz      loc_9B3595
0x9B3587: mov     eax, [ebp-10h]
0x9B358A: add     eax, 60h ; '`'
0x9B358D: mov     [ebp-20h], eax
0x9B3590: jmp     loc_9B359C
0x9B3595: mov     dword ptr [ebp-20h], 0
0x9B359C: mov     ecx, [ebp-20h]
0x9B359F: jmp     TESValueForm_destr
0x9B35A4: cmp     dword ptr [ebp-10h], 0
0x9B35A8: jz      loc_9B35BC
0x9B35AE: mov     eax, [ebp-10h]
0x9B35B1: add     eax, 68h ; 'h'
0x9B35B4: mov     [ebp-24h], eax
0x9B35B7: jmp     loc_9B35C3
0x9B35BC: mov     dword ptr [ebp-24h], 0
0x9B35C3: mov     ecx, [ebp-24h]
0x9B35C6: jmp     TESWeightForm_destr
0x9B35CB: cmp     dword ptr [ebp-10h], 0
0x9B35CF: jz      loc_9B35E3
0x9B35D5: mov     eax, [ebp-10h]
0x9B35D8: add     eax, 70h ; 'p'
0x9B35DB: mov     [ebp-28h], eax
0x9B35DE: jmp     loc_9B35EA
0x9B35E3: mov     dword ptr [ebp-28h], 0
0x9B35EA: mov     ecx, [ebp-28h]
0x9B35ED: jmp     TESQualityForm_destr
0x9B35F2: mov     edx, [esp+arg_4]
0x9B35F6: lea     eax, [edx-2Ch]
0x9B35F9: mov     ecx, [edx-30h]
0x9B35FC: xor     ecx, eax
0x9B35FE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3603: mov     eax, offset stru_ADF1A4
0x9B3608: jmp     ___CxxFrameHandler3
