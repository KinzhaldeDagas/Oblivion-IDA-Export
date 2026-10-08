0x4B4170: push    0FFFFFFFFh
0x4B4172: push    offset ??1TESObjectANIO@@UAE@XZ_SEH
0x4B4177: mov     eax, large fs:0
0x4B417D: push    eax
0x4B417E: sub     esp, 8
0x4B4181: push    esi
0x4B4182: push    edi
0x4B4183: mov     eax, ds:0B30AACh
0x4B4188: xor     eax, esp
0x4B418A: push    eax
0x4B418B: lea     eax, [esp+20h+var_C]
0x4B418F: mov     large fs:0, eax
0x4B4195: mov     esi, ecx
0x4B4197: mov     [esp+20h+var_10], esi
0x4B419B: lea     edi, [esi+18h]
0x4B419E: mov     dword ptr [esi], offset ??_7TESObjectANIO@@6BTESObjectANIO@@@; const TESObjectANIO::`vftable'{for `TESObjectANIO'}
0x4B41A4: mov     dword ptr [edi], offset ??_7TESObjectANIO@@6BTESModel@@@; const TESObjectANIO::`vftable'{for `TESModel'}
0x4B41AA: mov     [esp+20h+var_4], 1
0x4B41B2: call    j_TESForm_ClearComponentReferences
0x4B41B7: mov     ecx, edi; this
0x4B41B9: mov     byte ptr [esp+20h+var_4], 0
0x4B41BE: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4B41C3: mov     ecx, esi; this
0x4B41C5: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4B41CD: call    TESForm_destr
0x4B41D2: mov     ecx, [esp+20h+var_C]
0x4B41D6: mov     large fs:0, ecx
0x4B41DD: pop     ecx
0x4B41DE: pop     edi
0x4B41DF: pop     esi
0x4B41E0: add     esp, 14h
0x4B41E3: retn
0x9B34B0: mov     ecx, [ebp-10h]; this
0x9B34B3: jmp     TESForm_destr
0x9B34B8: cmp     dword ptr [ebp-10h], 0
0x9B34BC: jz      loc_9B34D0
0x9B34C2: mov     eax, [ebp-10h]
0x9B34C5: add     eax, 18h
0x9B34C8: mov     [ebp-14h], eax
0x9B34CB: jmp     loc_9B34D7
0x9B34D0: mov     dword ptr [ebp-14h], 0
0x9B34D7: mov     ecx, [ebp-14h]; this
0x9B34DA: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B34DF: mov     edx, [esp+arg_4]
0x9B34E3: lea     eax, [edx-10h]
0x9B34E6: mov     ecx, [edx-14h]
0x9B34E9: xor     ecx, eax
0x9B34EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B34F0: mov     eax, offset stru_ADF180
0x9B34F5: jmp     ___CxxFrameHandler3
