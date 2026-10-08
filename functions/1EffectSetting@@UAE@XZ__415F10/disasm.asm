0x415F10: push    0FFFFFFFFh
0x415F12: push    offset ??1EffectSetting@@UAE@XZ_SEH
0x415F17: mov     eax, large fs:0
0x415F1D: push    eax
0x415F1E: sub     esp, 10h
0x415F21: push    ebx
0x415F22: push    ebp
0x415F23: push    esi
0x415F24: push    edi
0x415F25: mov     eax, ___security_cookie
0x415F2A: xor     eax, esp
0x415F2C: push    eax
0x415F2D: lea     eax, [esp+30h+var_C]
0x415F31: mov     large fs:0, eax
0x415F37: mov     esi, ecx
0x415F39: mov     [esp+30h+var_10], esi
0x415F3D: lea     edi, [esi+18h]
0x415F40: lea     ebp, [esi+44h]
0x415F43: mov     dword ptr [esi], offset ??_7EffectSetting@@6BEffectSetting@@@; const EffectSetting::`vftable'{for `EffectSetting'}
0x415F49: mov     dword ptr [edi], offset ??_7EffectSetting@@6BTESModel@@@; const EffectSetting::`vftable'{for `TESModel'}
0x415F4F: mov     dword ptr [esi+30h], offset ??_7EffectSetting@@6BTESDescription@@@; const EffectSetting::`vftable'{for `TESDescription'}
0x415F56: mov     dword ptr [esi+38h], offset ??_7EffectSetting@@6BTESFullName@@@; const EffectSetting::`vftable'{for `TESFullName'}
0x415F5D: mov     dword ptr [ebp+0], offset ??_7EffectSetting@@6BTESIcon@@@; const EffectSetting::`vftable'{for `TESIcon'}
0x415F64: mov     eax, [esi+9Ch]
0x415F6A: xor     ebx, ebx
0x415F6C: cmp     eax, ebx
0x415F6E: mov     [esp+30h+var_4], 3
0x415F76: jz      short loc_415F83
0x415F78: push    eax; void *
0x415F79: mov     ecx, offset FormHeap
0x415F7E: call    MemoryHeap_Free_checked
0x415F83: mov     ecx, esi
0x415F85: call    j_TESForm_ClearComponentReferences
0x415F8A: mov     ecx, ebp; void *
0x415F8C: mov     byte ptr [esp+30h+var_4], 2
0x415F91: call    TESTexture_destr
0x415F96: mov     eax, [esi+3Ch]
0x415F99: push    eax
0x415F9A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x415F9F: add     esp, 4
0x415FA2: mov     ecx, edi; this
0x415FA4: mov     [esi+3Ch], ebx
0x415FA7: mov     [esi+42h], bx
0x415FAB: mov     [esi+40h], bx
0x415FAF: mov     byte ptr [esp+30h+var_4], bl
0x415FB3: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x415FB8: mov     ecx, esi; this
0x415FBA: mov     [esp+30h+var_4], 0FFFFFFFFh
0x415FC2: call    TESForm_destr
0x9AB2C0: mov     ecx, [ebp-10h]; this
0x9AB2C3: jmp     TESForm_destr
0x9AB2C8: cmp     dword ptr [ebp-10h], 0
0x9AB2CC: jz      loc_9AB2E0
0x9AB2D2: mov     eax, [ebp-10h]
0x9AB2D5: add     eax, 18h
0x9AB2D8: mov     [ebp-14h], eax
0x9AB2DB: jmp     loc_9AB2E7
0x9AB2E0: mov     dword ptr [ebp-14h], 0
0x9AB2E7: mov     ecx, [ebp-14h]; this
0x9AB2EA: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9AB2EF: cmp     dword ptr [ebp-10h], 0
0x9AB2F3: jz      loc_9AB307
0x9AB2F9: mov     eax, [ebp-10h]
0x9AB2FC: add     eax, 38h ; '8'
0x9AB2FF: mov     [ebp-18h], eax
0x9AB302: jmp     loc_9AB30E
0x9AB307: mov     dword ptr [ebp-18h], 0
0x9AB30E: mov     ecx, [ebp-18h]
0x9AB311: jmp     TESFullName_Initialize
0x9AB316: cmp     dword ptr [ebp-10h], 0
0x9AB31A: jz      loc_9AB32E
0x9AB320: mov     eax, [ebp-10h]
0x9AB323: add     eax, 44h ; 'D'
0x9AB326: mov     [ebp-1Ch], eax
0x9AB329: jmp     loc_9AB335
0x9AB32E: mov     dword ptr [ebp-1Ch], 0
0x9AB335: mov     ecx, [ebp-1Ch]; void *
0x9AB338: jmp     j_TESTexture_destr
0x9AB33D: mov     edx, [esp+arg_4]
0x9AB341: lea     eax, [edx-20h]
0x9AB344: mov     ecx, [edx-24h]
0x9AB347: xor     ecx, eax
0x9AB349: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB34E: mov     eax, offset stru_AD8214
0x9AB353: jmp     ___CxxFrameHandler3
