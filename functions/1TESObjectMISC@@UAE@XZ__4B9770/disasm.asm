0x4B9770: push    0FFFFFFFFh
0x4B9772: push    offset ??1TESObjectMISC@@UAE@XZ_SEH
0x4B9777: mov     eax, large fs:0
0x4B977D: push    eax
0x4B977E: sub     esp, 18h
0x4B9781: push    ebx
0x4B9782: push    ebp
0x4B9783: push    esi
0x4B9784: push    edi
0x4B9785: mov     eax, ds:0B30AACh
0x4B978A: xor     eax, esp
0x4B978C: push    eax
0x4B978D: lea     eax, [esp+38h+var_C]
0x4B9791: mov     large fs:0, eax
0x4B9797: mov     esi, ecx
0x4B9799: mov     [esp+38h+var_10], esi
0x4B979D: lea     edi, [esi+30h]
0x4B97A0: lea     ebx, [esi+48h]
0x4B97A3: lea     ebp, [esi+60h]
0x4B97A6: mov     dword ptr [esi], offset ??_7TESObjectMISC@@6BTESObjectMISC@@@; const TESObjectMISC::`vftable'{for `TESObjectMISC'}
0x4B97AC: mov     dword ptr [esi+24h], offset ??_7TESObjectMISC@@6BTESFullName@@@; const TESObjectMISC::`vftable'{for `TESFullName'}
0x4B97B3: mov     dword ptr [edi], offset ??_7TESObjectMISC@@6BTESModel@@@; const TESObjectMISC::`vftable'{for `TESModel'}
0x4B97B9: mov     dword ptr [ebx], offset ??_7TESObjectMISC@@6BTESIcon@@@; const TESObjectMISC::`vftable'{for `TESIcon'}
0x4B97BF: mov     dword ptr [esi+54h], offset ??_7TESObjectMISC@@6BTESScriptableForm@@@; const TESObjectMISC::`vftable'{for `TESScriptableForm'}
0x4B97C6: mov     dword ptr [ebp+0], offset ??_7TESObjectMISC@@6BTESValueForm@@@; const TESObjectMISC::`vftable'{for `TESValueForm'}
0x4B97CD: mov     dword ptr [esi+68h], offset ??_7TESObjectMISC@@6BTESWeightForm@@@; const TESObjectMISC::`vftable'{for `TESWeightForm'}
0x4B97D4: mov     [esp+38h+var_4], 5
0x4B97DC: call    j_TESForm_ClearComponentReferences
0x4B97E1: lea     ecx, [esi+68h]
0x4B97E4: mov     byte ptr [esp+38h+var_4], 4
0x4B97E9: call    TESWeightForm_destr
0x4B97EE: mov     ecx, ebp
0x4B97F0: mov     byte ptr [esp+38h+var_4], 3
0x4B97F5: call    TESValueForm_destr
0x4B97FA: mov     ecx, ebx; void *
0x4B97FC: mov     byte ptr [esp+38h+var_4], 2
0x4B9801: call    TESTexture_destr
0x4B9806: mov     ecx, edi; this
0x4B9808: mov     byte ptr [esp+38h+var_4], 1
0x4B980D: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4B9812: mov     eax, [esi+28h]
0x4B9815: push    eax
0x4B9816: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B981B: xor     eax, eax
0x4B981D: add     esp, 4
0x4B9820: mov     ecx, esi
0x4B9822: mov     [esi+28h], eax
0x4B9825: mov     [esi+2Eh], ax
0x4B9829: mov     [esi+2Ch], ax
0x4B982D: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4B9835: call    TESObject_destr
0x4B983A: mov     ecx, [esp+38h+var_C]
0x4B983E: mov     large fs:0, ecx
0x4B9845: pop     ecx
0x4B9846: pop     edi
0x4B9847: pop     esi
0x4B9848: pop     ebp
0x4B9849: pop     ebx
0x4B984A: add     esp, 24h
0x4B984D: retn
0x9B3C60: mov     ecx, [ebp-10h]
0x9B3C63: jmp     TESObject_destr
0x9B3C68: cmp     dword ptr [ebp-10h], 0
0x9B3C6C: jz      loc_9B3C80
0x9B3C72: mov     eax, [ebp-10h]
0x9B3C75: add     eax, 24h ; '$'
0x9B3C78: mov     [ebp-14h], eax
0x9B3C7B: jmp     loc_9B3C87
0x9B3C80: mov     dword ptr [ebp-14h], 0
0x9B3C87: mov     ecx, [ebp-14h]
0x9B3C8A: jmp     TESFullName_Initialize
0x9B3C8F: cmp     dword ptr [ebp-10h], 0
0x9B3C93: jz      loc_9B3CA7
0x9B3C99: mov     eax, [ebp-10h]
0x9B3C9C: add     eax, 30h ; '0'
0x9B3C9F: mov     [ebp-18h], eax
0x9B3CA2: jmp     loc_9B3CAE
0x9B3CA7: mov     dword ptr [ebp-18h], 0
0x9B3CAE: mov     ecx, [ebp-18h]; this
0x9B3CB1: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B3CB6: cmp     dword ptr [ebp-10h], 0
0x9B3CBA: jz      loc_9B3CCE
0x9B3CC0: mov     eax, [ebp-10h]
0x9B3CC3: add     eax, 48h ; 'H'
0x9B3CC6: mov     [ebp-1Ch], eax
0x9B3CC9: jmp     loc_9B3CD5
0x9B3CCE: mov     dword ptr [ebp-1Ch], 0
0x9B3CD5: mov     ecx, [ebp-1Ch]; void *
0x9B3CD8: jmp     j_TESTexture_destr
0x9B3CDD: cmp     dword ptr [ebp-10h], 0
0x9B3CE1: jz      loc_9B3CF5
0x9B3CE7: mov     eax, [ebp-10h]
0x9B3CEA: add     eax, 60h ; '`'
0x9B3CED: mov     [ebp-20h], eax
0x9B3CF0: jmp     loc_9B3CFC
0x9B3CF5: mov     dword ptr [ebp-20h], 0
0x9B3CFC: mov     ecx, [ebp-20h]
0x9B3CFF: jmp     TESValueForm_destr
0x9B3D04: cmp     dword ptr [ebp-10h], 0
0x9B3D08: jz      loc_9B3D1C
0x9B3D0E: mov     eax, [ebp-10h]
0x9B3D11: add     eax, 68h ; 'h'
0x9B3D14: mov     [ebp-24h], eax
0x9B3D17: jmp     loc_9B3D23
0x9B3D1C: mov     dword ptr [ebp-24h], 0
0x9B3D23: mov     ecx, [ebp-24h]
0x9B3D26: jmp     TESWeightForm_destr
0x9B3D2B: mov     edx, [esp+arg_4]
0x9B3D2F: lea     eax, [edx-28h]
0x9B3D32: mov     ecx, [edx-2Ch]
0x9B3D35: xor     ecx, eax
0x9B3D37: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3D3C: mov     eax, offset stru_ADF5D0
0x9B3D41: jmp     ___CxxFrameHandler3
