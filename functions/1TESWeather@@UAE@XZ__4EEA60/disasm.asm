0x4EEA60: push    0FFFFFFFFh
0x4EEA62: push    offset ??1TESWeather@@UAE@XZ_SEH
0x4EEA67: mov     eax, large fs:0
0x4EEA6D: push    eax
0x4EEA6E: push    ecx
0x4EEA6F: push    esi
0x4EEA70: mov     eax, ds:0B30AACh
0x4EEA75: xor     eax, esp
0x4EEA77: push    eax
0x4EEA78: lea     eax, [esp+18h+var_C]
0x4EEA7C: mov     large fs:0, eax
0x4EEA82: mov     esi, ecx
0x4EEA84: mov     [esp+18h+var_10], esi
0x4EEA88: mov     dword ptr [esi], offset ??_7TESWeather@@6B@; const TESWeather::`vftable'
0x4EEA8E: lea     ecx, [esi+108h]
0x4EEA94: mov     [esp+18h+var_4], 2
0x4EEA9C: call    sub_4EE770
0x4EEAA1: mov     ecx, esi
0x4EEAA3: call    j_TESForm_ClearComponentReferences
0x4EEAA8: lea     ecx, [esi+30h]; this
0x4EEAAB: mov     byte ptr [esp+18h+var_4], 1
0x4EEAB0: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4EEAB5: push    offset TESTexture_destr; void (__thiscall *)(void *)
0x4EEABA: push    2; int
0x4EEABC: push    0Ch; unsigned int
0x4EEABE: lea     eax, [esi+18h]
0x4EEAC1: push    eax; void *
0x4EEAC2: mov     byte ptr [esp+28h+var_4], 0
0x4EEAC7: call    $LN21
0x4EEACC: mov     ecx, esi; this
0x4EEACE: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4EEAD6: call    TESForm_destr
0x4EEADB: mov     ecx, [esp+18h+var_C]
0x4EEADF: mov     large fs:0, ecx
0x4EEAE6: pop     ecx
0x4EEAE7: pop     esi
0x4EEAE8: add     esp, 10h
0x4EEAEB: retn
0x9B66F0: mov     ecx, [ebp-10h]; this
0x9B66F3: jmp     TESForm_destr
0x9B66F8: push    offset TESTexture_destr; void (__thiscall *)(void *)
0x9B66FD: push    2; int
0x9B66FF: push    0Ch; unsigned int
0x9B6701: mov     eax, [ebp-10h]
0x9B6704: add     eax, 18h
0x9B6707: push    eax; void *
0x9B6708: call    $LN21
0x9B670D: retn
0x9B670E: mov     ecx, [ebp-10h]
0x9B6711: add     ecx, 30h ; '0'; this
0x9B6714: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B6719: mov     edx, [esp+arg_4]
0x9B671D: lea     eax, [edx-8]
0x9B6720: mov     ecx, [edx-0Ch]
0x9B6723: xor     ecx, eax
0x9B6725: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B672A: mov     eax, offset stru_AE1574
0x9B672F: jmp     ___CxxFrameHandler3
