0x4B6B00: push    0FFFFFFFFh
0x4B6B02: push    offset ??1TESObjectCONT@@UAE@XZ_SEH
0x4B6B07: mov     eax, large fs:0
0x4B6B0D: push    eax
0x4B6B0E: sub     esp, 14h
0x4B6B11: push    ebx
0x4B6B12: push    ebp
0x4B6B13: push    esi
0x4B6B14: push    edi
0x4B6B15: mov     eax, ds:0B30AACh
0x4B6B1A: xor     eax, esp
0x4B6B1C: push    eax
0x4B6B1D: lea     eax, [esp+34h+var_C]
0x4B6B21: mov     large fs:0, eax
0x4B6B27: mov     esi, ecx
0x4B6B29: mov     [esp+34h+var_10], esi
0x4B6B2D: lea     edi, [esi+24h]
0x4B6B30: lea     ebx, [esi+40h]
0x4B6B33: lea     ebp, [esi+64h]
0x4B6B36: mov     dword ptr [esi], offset ??_7TESObjectCONT@@6BTESObjectCONT@@@; const TESObjectCONT::`vftable'{for `TESObjectCONT'}
0x4B6B3C: mov     dword ptr [edi], offset ??_7TESObjectCONT@@6BTESContainer@@@; const TESObjectCONT::`vftable'{for `TESContainer'}
0x4B6B42: mov     dword ptr [esi+34h], offset ??_7TESObjectCONT@@6BTESFullName@@@; const TESObjectCONT::`vftable'{for `TESFullName'}
0x4B6B49: mov     dword ptr [ebx], offset ??_7TESObjectCONT@@6BTESModel@@@; const TESObjectCONT::`vftable'{for `TESModel'}
0x4B6B4F: mov     dword ptr [esi+58h], offset ??_7TESObjectCONT@@6BTESScriptableForm@@@; const TESObjectCONT::`vftable'{for `TESScriptableForm'}
0x4B6B56: mov     dword ptr [ebp+0], offset ??_7TESObjectCONT@@6BTESWeightForm@@@; const TESObjectCONT::`vftable'{for `TESWeightForm'}
0x4B6B5D: mov     [esp+34h+var_4], 4
0x4B6B65: call    j_TESForm_ClearComponentReferences
0x4B6B6A: mov     ecx, ebp
0x4B6B6C: mov     byte ptr [esp+34h+var_4], 3
0x4B6B71: call    TESWeightForm_destr
0x4B6B76: mov     ecx, ebx; this
0x4B6B78: mov     byte ptr [esp+34h+var_4], 2
0x4B6B7D: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4B6B82: mov     eax, [esi+38h]
0x4B6B85: push    eax
0x4B6B86: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B6B8B: xor     eax, eax
0x4B6B8D: add     esp, 4
0x4B6B90: mov     ecx, edi
0x4B6B92: mov     [esi+38h], eax
0x4B6B95: mov     [esi+3Eh], ax
0x4B6B99: mov     [esi+3Ch], ax
0x4B6B9D: mov     byte ptr [esp+34h+var_4], al
0x4B6BA1: call    TESContainer_destr
0x4B6BA6: mov     ecx, esi
0x4B6BA8: mov     [esp+34h+var_4], 0FFFFFFFFh
0x4B6BB0: call    TESObject_destr
0x4B6BB5: mov     ecx, [esp+34h+var_C]
0x4B6BB9: mov     large fs:0, ecx
0x4B6BC0: pop     ecx
0x4B6BC1: pop     edi
0x4B6BC2: pop     esi
0x4B6BC3: pop     ebp
0x4B6BC4: pop     ebx
0x4B6BC5: add     esp, 20h
0x4B6BC8: retn
0x9B3A80: mov     ecx, [ebp-10h]
0x9B3A83: jmp     TESObject_destr
0x9B3A88: cmp     dword ptr [ebp-10h], 0
0x9B3A8C: jz      loc_9B3AA0
0x9B3A92: mov     eax, [ebp-10h]
0x9B3A95: add     eax, 24h ; '$'
0x9B3A98: mov     [ebp-14h], eax
0x9B3A9B: jmp     loc_9B3AA7
0x9B3AA0: mov     dword ptr [ebp-14h], 0
0x9B3AA7: mov     ecx, [ebp-14h]
0x9B3AAA: jmp     TESContainer_destr
0x9B3AAF: cmp     dword ptr [ebp-10h], 0
0x9B3AB3: jz      loc_9B3AC7
0x9B3AB9: mov     eax, [ebp-10h]
0x9B3ABC: add     eax, 34h ; '4'
0x9B3ABF: mov     [ebp-18h], eax
0x9B3AC2: jmp     loc_9B3ACE
0x9B3AC7: mov     dword ptr [ebp-18h], 0
0x9B3ACE: mov     ecx, [ebp-18h]
0x9B3AD1: jmp     TESFullName_Initialize
0x9B3AD6: cmp     dword ptr [ebp-10h], 0
0x9B3ADA: jz      loc_9B3AEE
0x9B3AE0: mov     eax, [ebp-10h]
0x9B3AE3: add     eax, 40h ; '@'
0x9B3AE6: mov     [ebp-1Ch], eax
0x9B3AE9: jmp     loc_9B3AF5
0x9B3AEE: mov     dword ptr [ebp-1Ch], 0
0x9B3AF5: mov     ecx, [ebp-1Ch]; this
0x9B3AF8: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B3AFD: cmp     dword ptr [ebp-10h], 0
0x9B3B01: jz      loc_9B3B15
0x9B3B07: mov     eax, [ebp-10h]
0x9B3B0A: add     eax, 64h ; 'd'
0x9B3B0D: mov     [ebp-20h], eax
0x9B3B10: jmp     loc_9B3B1C
0x9B3B15: mov     dword ptr [ebp-20h], 0
0x9B3B1C: mov     ecx, [ebp-20h]
0x9B3B1F: jmp     TESWeightForm_destr
0x9B3B24: mov     edx, [esp+arg_4]
0x9B3B28: lea     eax, [edx-24h]
0x9B3B2B: mov     ecx, [edx-28h]
0x9B3B2E: xor     ecx, eax
0x9B3B30: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3B35: mov     eax, offset stru_ADF478
0x9B3B3A: jmp     ___CxxFrameHandler3
