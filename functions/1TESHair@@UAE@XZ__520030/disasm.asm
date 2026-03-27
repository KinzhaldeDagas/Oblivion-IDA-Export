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
0x5200A4: call    FormHeapFree
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
