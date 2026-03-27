0x4AE4C0: push    0FFFFFFFFh
0x4AE4C2: push    offset ??0TESFurniture@@QAE@XZ_SEH
0x4AE4C7: mov     eax, large fs:0
0x4AE4CD: push    eax
0x4AE4CE: push    ecx
0x4AE4CF: push    esi
0x4AE4D0: mov     eax, ds:0B30AACh
0x4AE4D5: xor     eax, esp
0x4AE4D7: push    eax
0x4AE4D8: lea     eax, [esp+18h+var_C]
0x4AE4DC: mov     large fs:0, eax
0x4AE4E2: mov     esi, ecx
0x4AE4E4: mov     [esp+18h+var_10], esi
0x4AE4E8: mov     dword ptr [esi], offset ??_7TESFurniture@@6BTESFurniture@@@; const TESFurniture::`vftable'{for `TESFurniture'}
0x4AE4EE: mov     dword ptr [esi+24h], offset ??_7TESFurniture@@6BTESFullName@@@; const TESFurniture::`vftable'{for `TESFullName'}
0x4AE4F5: mov     dword ptr [esi+30h], offset ??_7TESFurniture@@6BTESModel@@@; const TESFurniture::`vftable'{for `TESModel'}
0x4AE4FC: mov     dword ptr [esi+48h], offset ??_7TESFurniture@@6BTESScriptableForm@@@; const TESFurniture::`vftable'{for `TESScriptableForm'}
0x4AE503: mov     [esp+18h+var_4], 0
0x4AE50B: call    j_TESForm_ClearComponentReferences
0x4AE510: mov     ecx, esi; this
0x4AE512: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4AE51A: call    ??1TESObjectACTI@@UAE@XZ; TESObjectACTI::~TESObjectACTI(void)
0x4AE51F: mov     ecx, [esp+18h+var_C]
0x4AE523: mov     large fs:0, ecx
0x4AE52A: pop     ecx
0x4AE52B: pop     esi
0x4AE52C: add     esp, 10h
0x4AE52F: retn
