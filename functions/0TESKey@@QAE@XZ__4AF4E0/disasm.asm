0x4AF4E0: push    0FFFFFFFFh
0x4AF4E2: push    offset ??1TESSoulGem@@UAE@XZ_SEH
0x4AF4E7: mov     eax, large fs:0
0x4AF4ED: push    eax
0x4AF4EE: push    ecx
0x4AF4EF: push    esi
0x4AF4F0: mov     eax, ds:0B30AACh
0x4AF4F5: xor     eax, esp
0x4AF4F7: push    eax
0x4AF4F8: lea     eax, [esp+18h+var_C]
0x4AF4FC: mov     large fs:0, eax
0x4AF502: mov     esi, ecx
0x4AF504: mov     [esp+18h+var_10], esi
0x4AF508: call    ??0TESObjectMISC@@QAE@XZ; TESObjectMISC::TESObjectMISC(void)
0x4AF50D: push    1; a2
0x4AF50F: mov     ecx, esi; this
0x4AF511: mov     [esp+1Ch+var_4], 0
0x4AF519: mov     dword ptr [esi], offset ??_7TESKey@@6BTESKey@@@; const TESKey::`vftable'{for `TESKey'}
0x4AF51F: mov     dword ptr [esi+24h], offset ??_7TESKey@@6BTESFullName@@@; const TESKey::`vftable'{for `TESFullName'}
0x4AF526: mov     dword ptr [esi+30h], offset ??_7TESKey@@6BTESModel@@@; const TESKey::`vftable'{for `TESModel'}
0x4AF52D: mov     dword ptr [esi+48h], offset ??_7TESKey@@6BTESIcon@@@; const TESKey::`vftable'{for `TESIcon'}
0x4AF534: mov     dword ptr [esi+54h], offset ??_7TESKey@@6BTESScriptableForm@@@; const TESKey::`vftable'{for `TESScriptableForm'}
0x4AF53B: mov     dword ptr [esi+60h], offset ??_7TESKey@@6BTESValueForm@@@; const TESKey::`vftable'{for `TESValueForm'}
0x4AF542: mov     dword ptr [esi+68h], offset ??_7TESKey@@6BTESWeightForm@@@; const TESKey::`vftable'{for `TESWeightForm'}
0x4AF549: mov     byte ptr [esi+4], 27h ; '''
0x4AF54D: call    TESForm_SetIsLinked
0x4AF552: mov     eax, esi
0x4AF554: mov     ecx, [esp+18h+var_C]
0x4AF558: mov     large fs:0, ecx
0x4AF55F: pop     ecx
0x4AF560: pop     esi
0x4AF561: add     esp, 10h
0x4AF564: retn
