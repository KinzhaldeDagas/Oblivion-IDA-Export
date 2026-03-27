0x4B3FF0: push    0FFFFFFFFh
0x4B3FF2: push    offset ??1TESObjectDOOR@@UAE@XZ_SEH
0x4B3FF7: mov     eax, large fs:0
0x4B3FFD: push    eax
0x4B3FFE: sub     esp, 0Ch
0x4B4001: push    esi
0x4B4002: push    edi
0x4B4003: mov     eax, ds:0B30AACh
0x4B4008: xor     eax, esp
0x4B400A: push    eax
0x4B400B: lea     eax, [esp+24h+var_C]
0x4B400F: mov     large fs:0, eax
0x4B4015: mov     esi, ecx
0x4B4017: mov     [esp+24h+var_10], esi
0x4B401B: lea     edi, [esi+30h]
0x4B401E: mov     dword ptr [esi], offset ??_7TESObjectACTI@@6BTESObjectACTI@@@; const TESObjectACTI::`vftable'{for `TESObjectACTI'}
0x4B4024: mov     dword ptr [esi+24h], offset ??_7TESObjectACTI@@6BTESFullName@@@; const TESObjectACTI::`vftable'{for `TESFullName'}
0x4B402B: mov     dword ptr [edi], offset ??_7TESObjectACTI@@6BTESModel@@@; const TESObjectACTI::`vftable'{for `TESModel'}
0x4B4031: mov     dword ptr [esi+48h], offset ??_7TESObjectACTI@@6BTESScriptableForm@@@; const TESObjectACTI::`vftable'{for `TESScriptableForm'}
0x4B4038: mov     [esp+24h+var_4], 2
0x4B4040: call    j_TESForm_ClearComponentReferences
0x4B4045: mov     ecx, edi; this
0x4B4047: mov     byte ptr [esp+24h+var_4], 1
0x4B404C: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4B4051: mov     eax, [esi+28h]
0x4B4054: push    eax
0x4B4055: call    FormHeapFree
0x4B405A: xor     eax, eax
0x4B405C: add     esp, 4
0x4B405F: mov     ecx, esi
0x4B4061: mov     [esi+28h], eax
0x4B4064: mov     [esi+2Eh], ax
0x4B4068: mov     [esi+2Ch], ax
0x4B406C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4B4074: call    TESObject_destr
0x4B4079: mov     ecx, [esp+24h+var_C]
0x4B407D: mov     large fs:0, ecx
0x4B4084: pop     ecx
0x4B4085: pop     edi
0x4B4086: pop     esi
0x4B4087: add     esp, 18h
0x4B408A: retn
