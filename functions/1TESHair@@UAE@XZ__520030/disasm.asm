0x520030: push    0FFFFFFFFh
0x520032: push    offset ??1TESHair@@UAE@XZ_SEH
0x520037: mov     eax, large fs:0
0x52003D: push    eax
0x52003E: sub     esp, 10h
0x520041: push    ebx
0x520042: push    esi
0x520043: push    edi
0x520044: mov     eax, ds:0B30AACh
0x520049: xor     eax, esp
0x52004B: push    eax
0x52004C: lea     eax, [esp+2Ch+var_C]
0x520050: mov     large fs:0, eax
0x520056: mov     esi, ecx
0x520058: mov     [esp+2Ch+var_10], esi
0x52005C: lea     edi, [esi+24h]
0x52005F: lea     ebx, [esi+3Ch]
0x520062: mov     dword ptr [esi], offset ??_7TESHair@@6BTESHair@@@; const TESHair::`vftable'{for `TESHair'}
0x520068: mov     dword ptr [esi+18h], offset ??_7TESHair@@6BTESFullName@@@; const TESHair::`vftable'{for `TESFullName'}
0x52006F: mov     dword ptr [edi], offset ??_7TESHair@@6BTESModel@@@; const TESHair::`vftable'{for `TESModel'}
0x520075: mov     dword ptr [ebx], offset ??_7TESHair@@6BTESTexture@@@; const TESHair::`vftable'{for `TESTexture'}
0x52007B: mov     [esp+2Ch+var_4], 3
0x520083: call    j_TESForm_ClearComponentReferences
0x520088: mov     ecx, ebx; void *
0x52008A: mov     byte ptr [esp+2Ch+var_4], 2
0x52008F: call    TESTexture_destr
0x520094: mov     ecx, edi; this
0x520096: mov     byte ptr [esp+2Ch+var_4], 1
0x52009B: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x5200A0: mov     eax, [esi+1Ch]
0x5200A3: push    eax
0x5200A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5200A9: xor     eax, eax
0x5200AB: add     esp, 4
0x5200AE: mov     ecx, esi; this
0x5200B0: mov     [esi+1Ch], eax
0x5200B3: mov     [esi+22h], ax
0x5200B7: mov     [esi+20h], ax
0x5200BB: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x5200C3: call    TESForm_destr
0x5200C8: mov     ecx, [esp+2Ch+var_C]
0x5200CC: mov     large fs:0, ecx
0x5200D3: pop     ecx
0x5200D4: pop     edi
0x5200D5: pop     esi
0x5200D6: pop     ebx
0x5200D7: add     esp, 1Ch
0x5200DA: retn
0x9B7CA0: mov     ecx, [ebp-10h]; this
0x9B7CA3: jmp     TESForm_destr
0x9B7CA8: cmp     dword ptr [ebp-10h], 0
0x9B7CAC: jz      loc_9B7CC0
0x9B7CB2: mov     eax, [ebp-10h]
0x9B7CB5: add     eax, 18h
0x9B7CB8: mov     [ebp-14h], eax
0x9B7CBB: jmp     loc_9B7CC7
0x9B7CC0: mov     dword ptr [ebp-14h], 0
0x9B7CC7: mov     ecx, [ebp-14h]
0x9B7CCA: jmp     TESFullName_Initialize
0x9B7CCF: cmp     dword ptr [ebp-10h], 0
0x9B7CD3: jz      loc_9B7CE7
0x9B7CD9: mov     eax, [ebp-10h]
0x9B7CDC: add     eax, 24h ; '$'
0x9B7CDF: mov     [ebp-18h], eax
0x9B7CE2: jmp     loc_9B7CEE
0x9B7CE7: mov     dword ptr [ebp-18h], 0
0x9B7CEE: mov     ecx, [ebp-18h]; this
0x9B7CF1: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B7CF6: cmp     dword ptr [ebp-10h], 0
0x9B7CFA: jz      loc_9B7D0E
0x9B7D00: mov     eax, [ebp-10h]
0x9B7D03: add     eax, 3Ch ; '<'
0x9B7D06: mov     [ebp-1Ch], eax
0x9B7D09: jmp     loc_9B7D15
0x9B7D0E: mov     dword ptr [ebp-1Ch], 0
0x9B7D15: mov     ecx, [ebp-1Ch]; void *
0x9B7D18: jmp     TESTexture_destr
0x9B7D1D: mov     edx, [esp+arg_4]
0x9B7D21: lea     eax, [edx-1Ch]
0x9B7D24: mov     ecx, [edx-20h]
0x9B7D27: xor     ecx, eax
0x9B7D29: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B7D2E: mov     eax, offset stru_AE257C
0x9B7D33: jmp     ___CxxFrameHandler3
