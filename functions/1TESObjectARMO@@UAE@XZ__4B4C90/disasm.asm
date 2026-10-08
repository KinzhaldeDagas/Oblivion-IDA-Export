0x4B4C90: push    0FFFFFFFFh
0x4B4C92: push    offset ??1TESObjectARMO@@UAE@XZ_SEH
0x4B4C97: mov     eax, large fs:0
0x4B4C9D: push    eax
0x4B4C9E: sub     esp, 18h
0x4B4CA1: push    ebx
0x4B4CA2: push    ebp
0x4B4CA3: push    esi
0x4B4CA4: push    edi
0x4B4CA5: mov     eax, ds:0B30AACh
0x4B4CAA: xor     eax, esp
0x4B4CAC: push    eax
0x4B4CAD: lea     eax, [esp+38h+var_C]
0x4B4CB1: mov     large fs:0, eax
0x4B4CB7: mov     esi, ecx
0x4B4CB9: mov     [esp+38h+var_10], esi
0x4B4CBD: lea     edi, [esi+4Ch]
0x4B4CC0: lea     ebx, [esi+54h]
0x4B4CC3: lea     ebp, [esi+5Ch]
0x4B4CC6: mov     dword ptr [esi], offset ??_7TESObjectARMO@@6BTESObjectARMO@@@; const TESObjectARMO::`vftable'{for `TESObjectARMO'}
0x4B4CCC: mov     dword ptr [esi+24h], offset ??_7TESObjectARMO@@6BTESFullName@@@; const TESObjectARMO::`vftable'{for `TESFullName'}
0x4B4CD3: mov     dword ptr [esi+30h], offset ??_7TESObjectARMO@@6BTESScriptableForm@@@; const TESObjectARMO::`vftable'{for `TESScriptableForm'}
0x4B4CDA: mov     dword ptr [esi+3Ch], offset ??_7TESObjectARMO@@6BTESEnchantableForm@@@; const TESObjectARMO::`vftable'{for `TESEnchantableForm'}
0x4B4CE1: mov     dword ptr [edi], offset ??_7TESObjectARMO@@6BTESValueForm@@@; const TESObjectARMO::`vftable'{for `TESValueForm'}
0x4B4CE7: mov     dword ptr [ebx], offset ??_7TESObjectARMO@@6BTESWeightForm@@@; const TESObjectARMO::`vftable'{for `TESWeightForm'}
0x4B4CED: mov     dword ptr [ebp+0], offset ??_7TESObjectARMO@@6BTESHealthForm@@@; const TESObjectARMO::`vftable'{for `TESHealthForm'}
0x4B4CF4: mov     dword ptr [esi+64h], offset ??_7TESObjectARMO@@6BTESBipedModelForm@@@; const TESObjectARMO::`vftable'{for `TESBipedModelForm'}
0x4B4CFB: mov     [esp+38h+var_4], 5
0x4B4D03: call    j_TESForm_ClearComponentReferences
0x4B4D08: lea     ecx, [esi+64h]
0x4B4D0B: mov     byte ptr [esp+38h+var_4], 4
0x4B4D10: call    TESBipedModelForm_destr
0x4B4D15: mov     ecx, ebp
0x4B4D17: mov     byte ptr [esp+38h+var_4], 3
0x4B4D1C: call    TESHealthForm_destr
0x4B4D21: mov     ecx, ebx
0x4B4D23: mov     byte ptr [esp+38h+var_4], 2
0x4B4D28: call    TESWeightForm_destr
0x4B4D2D: mov     ecx, edi
0x4B4D2F: mov     byte ptr [esp+38h+var_4], 1
0x4B4D34: call    TESValueForm_destr
0x4B4D39: mov     eax, [esi+28h]
0x4B4D3C: push    eax
0x4B4D3D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B4D42: xor     eax, eax
0x4B4D44: add     esp, 4
0x4B4D47: mov     ecx, esi
0x4B4D49: mov     [esi+28h], eax
0x4B4D4C: mov     [esi+2Eh], ax
0x4B4D50: mov     [esi+2Ch], ax
0x4B4D54: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4B4D5C: call    TESObject_destr
0x4B4D61: mov     ecx, [esp+38h+var_C]
0x4B4D65: mov     large fs:0, ecx
0x4B4D6C: pop     ecx
0x4B4D6D: pop     edi
0x4B4D6E: pop     esi
0x4B4D6F: pop     ebp
0x4B4D70: pop     ebx
0x4B4D71: add     esp, 24h
0x4B4D74: retn
0x9B36D0: mov     ecx, [ebp-10h]
0x9B36D3: jmp     TESObject_destr
0x9B36D8: cmp     dword ptr [ebp-10h], 0
0x9B36DC: jz      loc_9B36F0
0x9B36E2: mov     eax, [ebp-10h]
0x9B36E5: add     eax, 24h ; '$'
0x9B36E8: mov     [ebp-14h], eax
0x9B36EB: jmp     loc_9B36F7
0x9B36F0: mov     dword ptr [ebp-14h], 0
0x9B36F7: mov     ecx, [ebp-14h]
0x9B36FA: jmp     TESFullName_Initialize
0x9B36FF: cmp     dword ptr [ebp-10h], 0
0x9B3703: jz      loc_9B3717
0x9B3709: mov     eax, [ebp-10h]
0x9B370C: add     eax, 4Ch ; 'L'
0x9B370F: mov     [ebp-18h], eax
0x9B3712: jmp     loc_9B371E
0x9B3717: mov     dword ptr [ebp-18h], 0
0x9B371E: mov     ecx, [ebp-18h]
0x9B3721: jmp     TESValueForm_destr
0x9B3726: cmp     dword ptr [ebp-10h], 0
0x9B372A: jz      loc_9B373E
0x9B3730: mov     eax, [ebp-10h]
0x9B3733: add     eax, 54h ; 'T'
0x9B3736: mov     [ebp-1Ch], eax
0x9B3739: jmp     loc_9B3745
0x9B373E: mov     dword ptr [ebp-1Ch], 0
0x9B3745: mov     ecx, [ebp-1Ch]
0x9B3748: jmp     TESWeightForm_destr
0x9B374D: cmp     dword ptr [ebp-10h], 0
0x9B3751: jz      loc_9B3765
0x9B3757: mov     eax, [ebp-10h]
0x9B375A: add     eax, 5Ch ; '\'
0x9B375D: mov     [ebp-20h], eax
0x9B3760: jmp     loc_9B376C
0x9B3765: mov     dword ptr [ebp-20h], 0
0x9B376C: mov     ecx, [ebp-20h]
0x9B376F: jmp     TESHealthForm_destr
0x9B3774: cmp     dword ptr [ebp-10h], 0
0x9B3778: jz      loc_9B378C
0x9B377E: mov     eax, [ebp-10h]
0x9B3781: add     eax, 64h ; 'd'
0x9B3784: mov     [ebp-24h], eax
0x9B3787: jmp     loc_9B3793
0x9B378C: mov     dword ptr [ebp-24h], 0
0x9B3793: mov     ecx, [ebp-24h]
0x9B3796: jmp     TESBipedModelForm_destr
0x9B379B: mov     edx, [esp+arg_4]
0x9B379F: lea     eax, [edx-28h]
0x9B37A2: mov     ecx, [edx-2Ch]
0x9B37A5: xor     ecx, eax
0x9B37A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B37AC: mov     eax, offset stru_ADF290
0x9B37B1: jmp     ___CxxFrameHandler3
