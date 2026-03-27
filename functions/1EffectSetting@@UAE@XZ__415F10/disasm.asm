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
0x415F9A: call    FormHeapFree
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
