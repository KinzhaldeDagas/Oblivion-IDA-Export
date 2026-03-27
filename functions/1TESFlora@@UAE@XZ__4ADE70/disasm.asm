0x4ADE70: push    0FFFFFFFFh
0x4ADE72: push    offset ??1TESFlora@@UAE@XZ_SEH
0x4ADE77: mov     eax, large fs:0
0x4ADE7D: push    eax
0x4ADE7E: sub     esp, 8
0x4ADE81: push    esi
0x4ADE82: mov     eax, ds:0B30AACh
0x4ADE87: xor     eax, esp
0x4ADE89: push    eax
0x4ADE8A: lea     eax, [esp+1Ch+var_C]
0x4ADE8E: mov     large fs:0, eax
0x4ADE94: mov     [esp+1Ch+var_10], ecx
0x4ADE98: lea     esi, [ecx+0Ch]
0x4ADE9B: mov     dword ptr [ecx], offset ??_7TESFlora@@6BTESFlora@@@; const TESFlora::`vftable'{for `TESFlora'}
0x4ADEA1: mov     dword ptr [esi], offset ??_7TESFlora@@6BTESObjectACTI@@@; const TESFlora::`vftable'{for `TESObjectACTI'}
0x4ADEA7: mov     dword ptr [ecx+30h], offset ??_7TESFlora@@6BTESFullName@@@; const TESFlora::`vftable'{for `TESFullName'}
0x4ADEAE: mov     dword ptr [ecx+3Ch], offset ??_7TESFlora@@6BTESModel@@@; const TESFlora::`vftable'{for `TESModel'}
0x4ADEB5: mov     dword ptr [ecx+54h], offset ??_7TESFlora@@6BTESScriptableForm@@@; const TESFlora::`vftable'{for `TESScriptableForm'}
0x4ADEBC: mov     ecx, esi
0x4ADEBE: mov     [esp+1Ch+var_4], 0
0x4ADEC6: call    j_TESForm_ClearComponentReferences
0x4ADECB: mov     ecx, esi; this
0x4ADECD: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4ADED5: call    ??1TESObjectACTI@@UAE@XZ; TESObjectACTI::~TESObjectACTI(void)
0x4ADEDA: mov     ecx, [esp+1Ch+var_C]
0x4ADEDE: mov     large fs:0, ecx
0x4ADEE5: pop     ecx
0x4ADEE6: pop     esi
0x4ADEE7: add     esp, 14h
0x4ADEEA: retn
