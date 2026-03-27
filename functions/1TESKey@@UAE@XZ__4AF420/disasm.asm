0x4AF420: push    0FFFFFFFFh
0x4AF422: push    offset ??1TESSoulGem@@UAE@XZ_SEH
0x4AF427: mov     eax, large fs:0
0x4AF42D: push    eax
0x4AF42E: push    ecx
0x4AF42F: push    esi
0x4AF430: mov     eax, ds:0B30AACh
0x4AF435: xor     eax, esp
0x4AF437: push    eax
0x4AF438: lea     eax, [esp+18h+var_C]
0x4AF43C: mov     large fs:0, eax
0x4AF442: mov     esi, ecx
0x4AF444: mov     [esp+18h+var_10], esi
0x4AF448: mov     dword ptr [esi], offset ??_7TESKey@@6BTESKey@@@; const TESKey::`vftable'{for `TESKey'}
0x4AF44E: mov     dword ptr [esi+24h], offset ??_7TESKey@@6BTESFullName@@@; const TESKey::`vftable'{for `TESFullName'}
0x4AF455: mov     dword ptr [esi+30h], offset ??_7TESKey@@6BTESModel@@@; const TESKey::`vftable'{for `TESModel'}
0x4AF45C: mov     dword ptr [esi+48h], offset ??_7TESKey@@6BTESIcon@@@; const TESKey::`vftable'{for `TESIcon'}
0x4AF463: mov     dword ptr [esi+54h], offset ??_7TESKey@@6BTESScriptableForm@@@; const TESKey::`vftable'{for `TESScriptableForm'}
0x4AF46A: mov     dword ptr [esi+60h], offset ??_7TESKey@@6BTESValueForm@@@; const TESKey::`vftable'{for `TESValueForm'}
0x4AF471: mov     dword ptr [esi+68h], offset ??_7TESKey@@6BTESWeightForm@@@; const TESKey::`vftable'{for `TESWeightForm'}
0x4AF478: mov     [esp+18h+var_4], 0
0x4AF480: call    j_TESForm_ClearComponentReferences
0x4AF485: mov     ecx, esi; this
0x4AF487: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4AF48F: call    ??1TESObjectMISC@@UAE@XZ; TESObjectMISC::~TESObjectMISC(void)
0x4AF494: mov     ecx, [esp+18h+var_C]
0x4AF498: mov     large fs:0, ecx
0x4AF49F: pop     ecx
0x4AF4A0: pop     esi
0x4AF4A1: add     esp, 10h
0x4AF4A4: retn
