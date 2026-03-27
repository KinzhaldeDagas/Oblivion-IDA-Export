0x4B8620: push    0FFFFFFFFh
0x4B8622: push    offset ??1TESObjectDOOR@@UAE@XZ_SEH
0x4B8627: mov     eax, large fs:0
0x4B862D: push    eax
0x4B862E: sub     esp, 0Ch
0x4B8631: push    esi
0x4B8632: push    edi
0x4B8633: mov     eax, ds:0B30AACh
0x4B8638: xor     eax, esp
0x4B863A: push    eax
0x4B863B: lea     eax, [esp+24h+var_C]
0x4B863F: mov     large fs:0, eax
0x4B8645: mov     esi, ecx
0x4B8647: mov     [esp+24h+var_10], esi
0x4B864B: lea     edi, [esi+30h]
0x4B864E: mov     dword ptr [esi], offset ??_7TESObjectDOOR@@6BTESObjectDOOR@@@; const TESObjectDOOR::`vftable'{for `TESObjectDOOR'}
0x4B8654: mov     dword ptr [esi+24h], offset ??_7TESObjectDOOR@@6BTESFullName@@@; const TESObjectDOOR::`vftable'{for `TESFullName'}
0x4B865B: mov     dword ptr [edi], offset ??_7TESObjectDOOR@@6BTESModel@@@; const TESObjectDOOR::`vftable'{for `TESModel'}
0x4B8661: mov     dword ptr [esi+48h], offset ??_7TESObjectDOOR@@6BTESScriptableForm@@@; const TESObjectDOOR::`vftable'{for `TESScriptableForm'}
0x4B8668: mov     [esp+24h+var_4], 2
0x4B8670: call    sub_4B7A20
0x4B8675: mov     ecx, edi; this
0x4B8677: mov     byte ptr [esp+24h+var_4], 1
0x4B867C: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4B8681: mov     eax, [esi+28h]
0x4B8684: push    eax
0x4B8685: call    FormHeapFree
0x4B868A: xor     eax, eax
0x4B868C: add     esp, 4
0x4B868F: mov     ecx, esi
0x4B8691: mov     [esi+28h], eax
0x4B8694: mov     [esi+2Eh], ax
0x4B8698: mov     [esi+2Ch], ax
0x4B869C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4B86A4: call    TESObject_destr
0x4B86A9: mov     ecx, [esp+24h+var_C]
0x4B86AD: mov     large fs:0, ecx
0x4B86B4: pop     ecx
0x4B86B5: pop     edi
0x4B86B6: pop     esi
0x4B86B7: add     esp, 18h
0x4B86BA: retn
