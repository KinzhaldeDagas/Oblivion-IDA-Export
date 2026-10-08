0x4B9F90: push    0FFFFFFFFh; Verified destructor releases the seed table's backing buffer from TESObjectTREE+0x4C after restoring the NiTArray<unsigned int> vtable at +0x48, then destroys TESIconTree, TESModelTree, and TESObject bases.
0x4B9F92: push    offset ??1TESObjectTREE@@UAE@XZ_SEH
0x4B9F97: mov     eax, large fs:0
0x4B9F9D: push    eax
0x4B9F9E: sub     esp, 0Ch
0x4B9FA1: push    ebx
0x4B9FA2: push    esi
0x4B9FA3: push    edi
0x4B9FA4: mov     eax, ds:0B30AACh
0x4B9FA9: xor     eax, esp
0x4B9FAB: push    eax
0x4B9FAC: lea     eax, [esp+28h+var_C]
0x4B9FB0: mov     large fs:0, eax
0x4B9FB6: mov     esi, ecx
0x4B9FB8: mov     [esp+28h+var_10], esi
0x4B9FBC: lea     edi, [esi+24h]
0x4B9FBF: lea     ebx, [esi+3Ch]
0x4B9FC2: mov     dword ptr [esi], offset ??_7TESObjectTREE@@6BTESObjectTREE@@@; const TESObjectTREE::`vftable'{for `TESObjectTREE'}
0x4B9FC8: mov     dword ptr [edi], offset ??_7TESObjectTREE@@6BTESModelTree@@@; const TESObjectTREE::`vftable'{for `TESModelTree'}
0x4B9FCE: mov     dword ptr [ebx], offset ??_7TESObjectTREE@@6BTESIconTree@@@; const TESObjectTREE::`vftable'{for `TESIconTree'}
0x4B9FD4: mov     [esp+28h+var_4], 3
0x4B9FDC: call    j_TESForm_ClearComponentReferences
0x4B9FE1: mov     eax, [esi+4Ch]
0x4B9FE4: push    eax; Verified destructor restores the embedded NiTArray<unsigned int> vtable at +0x48 then frees its backing pointer at +0x4C. Constructor starts the array empty; no Oblivion TREE record path that populates this array was found in TESObjectTREE_LoadFormRecord.
0x4B9FE5: mov     dword ptr [esi+48h], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x4B9FEC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B9FF1: add     esp, 4
0x4B9FF4: mov     ecx, ebx; void *
0x4B9FF6: mov     byte ptr [esp+28h+var_4], 1
0x4B9FFB: call    TESTexture_destr
0x4BA000: mov     ecx, edi; this
0x4BA002: mov     byte ptr [esp+28h+var_4], 0
0x4BA007: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4BA00C: mov     ecx, esi
0x4BA00E: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4BA016: call    TESObject_destr
0x4BA01B: mov     ecx, [esp+28h+var_C]
0x4BA01F: mov     large fs:0, ecx
0x4BA026: pop     ecx
0x4BA027: pop     edi
0x4BA028: pop     esi
0x4BA029: pop     ebx
0x4BA02A: add     esp, 18h
0x4BA02D: retn
0x4B9D50: mov     eax, [ecx+4]
0x4B9D53: push    eax
0x4B9D54: mov     dword ptr [ecx], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x4B9D5A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B9D5F: pop     ecx
0x4B9D60: retn
0x9B3DF0: mov     ecx, [ebp-10h]
0x9B3DF3: jmp     TESObject_destr
0x9B3DF8: cmp     dword ptr [ebp-10h], 0
0x9B3DFC: jz      loc_9B3E10
0x9B3E02: mov     eax, [ebp-10h]
0x9B3E05: add     eax, 24h ; '$'
0x9B3E08: mov     [ebp-14h], eax
0x9B3E0B: jmp     loc_9B3E17
0x9B3E10: mov     dword ptr [ebp-14h], 0
0x9B3E17: mov     ecx, [ebp-14h]; this
0x9B3E1A: jmp     j_??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B3E1F: cmp     dword ptr [ebp-10h], 0
0x9B3E23: jz      loc_9B3E37
0x9B3E29: mov     eax, [ebp-10h]
0x9B3E2C: add     eax, 3Ch ; '<'
0x9B3E2F: mov     [ebp-18h], eax
0x9B3E32: jmp     loc_9B3E3E
0x9B3E37: mov     dword ptr [ebp-18h], 0
0x9B3E3E: mov     ecx, [ebp-18h]; void *
0x9B3E41: jmp     j_TESTexture_destr
0x9B3E46: mov     ecx, [ebp-10h]
0x9B3E49: add     ecx, 48h ; 'H'
0x9B3E4C: jmp     loc_4B9D50
0x9B3E51: mov     edx, [esp+arg_4]
0x9B3E55: lea     eax, [edx-18h]
0x9B3E58: mov     ecx, [edx-1Ch]
0x9B3E5B: xor     ecx, eax
0x9B3E5D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3E62: mov     eax, offset stru_ADF6D4
0x9B3E67: jmp     ___CxxFrameHandler3
