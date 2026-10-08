0x4A92F0: push    0FFFFFFFFh
0x4A92F2: push    offset ??1TESAmmo@@UAE@XZ_SEH
0x4A92F7: mov     eax, large fs:0
0x4A92FD: push    eax
0x4A92FE: sub     esp, 1Ch
0x4A9301: push    ebx
0x4A9302: push    ebp
0x4A9303: push    esi
0x4A9304: push    edi
0x4A9305: mov     eax, ds:0B30AACh
0x4A930A: xor     eax, esp
0x4A930C: push    eax
0x4A930D: lea     eax, [esp+3Ch+var_C]
0x4A9311: mov     large fs:0, eax
0x4A9317: mov     esi, ecx
0x4A9319: mov     [esp+3Ch+var_10], esi
0x4A931D: lea     edi, [esi+30h]
0x4A9320: lea     ebx, [esi+48h]
0x4A9323: lea     ebp, [esi+64h]
0x4A9326: mov     dword ptr [esi], offset ??_7TESAmmo@@6BTESAmmo@@@; const TESAmmo::`vftable'{for `TESAmmo'}
0x4A932C: mov     dword ptr [esi+24h], offset ??_7TESAmmo@@6BTESFullName@@@; const TESAmmo::`vftable'{for `TESFullName'}
0x4A9333: mov     dword ptr [edi], offset ??_7TESAmmo@@6BTESModel@@@; const TESAmmo::`vftable'{for `TESModel'}
0x4A9339: mov     dword ptr [ebx], offset ??_7TESAmmo@@6BTESIcon@@@; const TESAmmo::`vftable'{for `TESIcon'}
0x4A933F: mov     dword ptr [esi+54h], offset ??_7TESAmmo@@6BTESEnchantableForm@@@; const TESAmmo::`vftable'{for `TESEnchantableForm'}
0x4A9346: mov     dword ptr [ebp+0], offset ??_7TESAmmo@@6BTESValueForm@@@; const TESAmmo::`vftable'{for `TESValueForm'}
0x4A934D: mov     dword ptr [esi+6Ch], offset ??_7TESAmmo@@6BTESWeightForm@@@; const TESAmmo::`vftable'{for `TESWeightForm'}
0x4A9354: mov     dword ptr [esi+74h], offset ??_7TESAmmo@@6BTESAttackDamageForm@@@; const TESAmmo::`vftable'{for `TESAttackDamageForm'}
0x4A935B: mov     [esp+3Ch+var_4], 6
0x4A9363: call    j_TESForm_ClearComponentReferences
0x4A9368: lea     ecx, [esi+74h]
0x4A936B: mov     byte ptr [esp+3Ch+var_4], 5
0x4A9370: call    TESAttackDamageForm_destr
0x4A9375: lea     ecx, [esi+6Ch]
0x4A9378: mov     byte ptr [esp+3Ch+var_4], 4
0x4A937D: call    TESWeightForm_destr
0x4A9382: mov     ecx, ebp
0x4A9384: mov     byte ptr [esp+3Ch+var_4], 3
0x4A9389: call    TESValueForm_destr
0x4A938E: mov     ecx, ebx; void *
0x4A9390: mov     byte ptr [esp+3Ch+var_4], 2
0x4A9395: call    TESTexture_destr
0x4A939A: mov     ecx, edi; this
0x4A939C: mov     byte ptr [esp+3Ch+var_4], 1
0x4A93A1: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4A93A6: mov     eax, [esi+28h]
0x4A93A9: push    eax
0x4A93AA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4A93AF: xor     eax, eax
0x4A93B1: add     esp, 4
0x4A93B4: mov     ecx, esi
0x4A93B6: mov     [esi+28h], eax
0x4A93B9: mov     [esi+2Eh], ax
0x4A93BD: mov     [esi+2Ch], ax
0x4A93C1: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x4A93C9: call    TESObject_destr
0x4A93CE: mov     ecx, [esp+3Ch+var_C]
0x4A93D2: mov     large fs:0, ecx
0x4A93D9: pop     ecx
0x4A93DA: pop     edi
0x4A93DB: pop     esi
0x4A93DC: pop     ebp
0x4A93DD: pop     ebx
0x4A93DE: add     esp, 28h
0x4A93E1: retn
0x9B29C0: mov     ecx, [ebp-10h]
0x9B29C3: jmp     TESObject_destr
0x9B29C8: cmp     dword ptr [ebp-10h], 0
0x9B29CC: jz      loc_9B29E0
0x9B29D2: mov     eax, [ebp-10h]
0x9B29D5: add     eax, 24h ; '$'
0x9B29D8: mov     [ebp-14h], eax
0x9B29DB: jmp     loc_9B29E7
0x9B29E0: mov     dword ptr [ebp-14h], 0
0x9B29E7: mov     ecx, [ebp-14h]
0x9B29EA: jmp     TESFullName_Initialize
0x9B29EF: cmp     dword ptr [ebp-10h], 0
0x9B29F3: jz      loc_9B2A07
0x9B29F9: mov     eax, [ebp-10h]
0x9B29FC: add     eax, 30h ; '0'
0x9B29FF: mov     [ebp-18h], eax
0x9B2A02: jmp     loc_9B2A0E
0x9B2A07: mov     dword ptr [ebp-18h], 0
0x9B2A0E: mov     ecx, [ebp-18h]; this
0x9B2A11: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B2A16: cmp     dword ptr [ebp-10h], 0
0x9B2A1A: jz      loc_9B2A2E
0x9B2A20: mov     eax, [ebp-10h]
0x9B2A23: add     eax, 48h ; 'H'
0x9B2A26: mov     [ebp-1Ch], eax
0x9B2A29: jmp     loc_9B2A35
0x9B2A2E: mov     dword ptr [ebp-1Ch], 0
0x9B2A35: mov     ecx, [ebp-1Ch]; void *
0x9B2A38: jmp     j_TESTexture_destr
0x9B2A3D: cmp     dword ptr [ebp-10h], 0
0x9B2A41: jz      loc_9B2A55
0x9B2A47: mov     eax, [ebp-10h]
0x9B2A4A: add     eax, 64h ; 'd'
0x9B2A4D: mov     [ebp-20h], eax
0x9B2A50: jmp     loc_9B2A5C
0x9B2A55: mov     dword ptr [ebp-20h], 0
0x9B2A5C: mov     ecx, [ebp-20h]
0x9B2A5F: jmp     TESValueForm_destr
0x9B2A64: cmp     dword ptr [ebp-10h], 0
0x9B2A68: jz      loc_9B2A7C
0x9B2A6E: mov     eax, [ebp-10h]
0x9B2A71: add     eax, 6Ch ; 'l'
0x9B2A74: mov     [ebp-24h], eax
0x9B2A77: jmp     loc_9B2A83
0x9B2A7C: mov     dword ptr [ebp-24h], 0
0x9B2A83: mov     ecx, [ebp-24h]
0x9B2A86: jmp     TESWeightForm_destr
0x9B2A8B: cmp     dword ptr [ebp-10h], 0
0x9B2A8F: jz      loc_9B2AA3
0x9B2A95: mov     eax, [ebp-10h]
0x9B2A98: add     eax, 74h ; 't'
0x9B2A9B: mov     [ebp-28h], eax
0x9B2A9E: jmp     loc_9B2AAA
0x9B2AA3: mov     dword ptr [ebp-28h], 0
0x9B2AAA: mov     ecx, [ebp-28h]
0x9B2AAD: jmp     TESAttackDamageForm_destr
0x9B2AB2: mov     edx, [esp+arg_4]
0x9B2AB6: lea     eax, [edx-2Ch]
0x9B2AB9: mov     ecx, [edx-30h]
0x9B2ABC: xor     ecx, eax
0x9B2ABE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2AC3: mov     eax, offset stru_ADE930
0x9B2AC8: jmp     ___CxxFrameHandler3
