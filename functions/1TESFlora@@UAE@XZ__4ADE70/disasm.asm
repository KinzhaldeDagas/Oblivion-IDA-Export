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
0x9B2C20: cmp     dword ptr [ebp-10h], 0
0x9B2C24: jz      loc_9B2C38
0x9B2C2A: mov     eax, [ebp-10h]
0x9B2C2D: add     eax, 0Ch
0x9B2C30: mov     [ebp-14h], eax
0x9B2C33: jmp     loc_9B2C3F
0x9B2C38: mov     dword ptr [ebp-14h], 0
0x9B2C3F: mov     ecx, [ebp-14h]; this
0x9B2C42: jmp     ??1TESObjectACTI@@UAE@XZ; TESObjectACTI::~TESObjectACTI(void)
0x9B2C47: mov     edx, [esp+arg_4]
0x9B2C4B: lea     eax, [edx-0Ch]
0x9B2C4E: mov     ecx, [edx-10h]
0x9B2C51: xor     ecx, eax
0x9B2C53: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2C58: mov     eax, offset stru_ADEAC0
0x9B2C5D: jmp     ___CxxFrameHandler3
