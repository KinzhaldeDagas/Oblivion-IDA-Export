0x4BBD10: push    0FFFFFFFFh
0x4BBD12: push    offset ??1TESSoulGem@@UAE@XZ_SEH
0x4BBD17: mov     eax, large fs:0
0x4BBD1D: push    eax
0x4BBD1E: push    ecx
0x4BBD1F: push    esi
0x4BBD20: mov     eax, ds:0B30AACh
0x4BBD25: xor     eax, esp
0x4BBD27: push    eax
0x4BBD28: lea     eax, [esp+18h+var_C]
0x4BBD2C: mov     large fs:0, eax
0x4BBD32: mov     esi, ecx
0x4BBD34: mov     [esp+18h+var_10], esi
0x4BBD38: call    ??0TESObjectMISC@@QAE@XZ; TESObjectMISC::TESObjectMISC(void)
0x4BBD3D: xor     eax, eax
0x4BBD3F: mov     ecx, esi; this
0x4BBD41: mov     [esp+18h+var_4], eax
0x4BBD45: mov     dword ptr [esi], offset ??_7TESSoulGem@@6BTESSoulGem@@@; const TESSoulGem::`vftable'{for `TESSoulGem'}
0x4BBD4B: mov     dword ptr [esi+24h], offset ??_7TESSoulGem@@6BTESFullName@@@; const TESSoulGem::`vftable'{for `TESFullName'}
0x4BBD52: mov     dword ptr [esi+30h], offset ??_7TESSoulGem@@6BTESModel@@@; const TESSoulGem::`vftable'{for `TESModel'}
0x4BBD59: mov     dword ptr [esi+48h], offset ??_7TESSoulGem@@6BTESIcon@@@; const TESSoulGem::`vftable'{for `TESIcon'}
0x4BBD60: mov     dword ptr [esi+54h], offset ??_7TESSoulGem@@6BTESScriptableForm@@@; const TESSoulGem::`vftable'{for `TESScriptableForm'}
0x4BBD67: mov     dword ptr [esi+60h], offset ??_7TESSoulGem@@6BTESValueForm@@@; const TESSoulGem::`vftable'{for `TESValueForm'}
0x4BBD6E: mov     dword ptr [esi+68h], offset ??_7TESSoulGem@@6BTESWeightForm@@@; const TESSoulGem::`vftable'{for `TESWeightForm'}
0x4BBD75: mov     byte ptr [esi+4], 26h ; '&'
0x4BBD79: mov     [esi+70h], al
0x4BBD7C: mov     [esi+71h], al
0x4BBD7F: call    j_TESForm_InitializeComponents
0x4BBD84: mov     eax, esi
0x4BBD86: mov     ecx, [esp+18h+var_C]
0x4BBD8A: mov     large fs:0, ecx
0x4BBD91: pop     ecx
0x4BBD92: pop     esi
0x4BBD93: add     esp, 10h
0x4BBD96: retn
