0x4BBBE0: push    0FFFFFFFFh
0x4BBBE2: push    offset ??1TESSoulGem@@UAE@XZ_SEH
0x4BBBE7: mov     eax, large fs:0
0x4BBBED: push    eax
0x4BBBEE: push    ecx
0x4BBBEF: push    esi
0x4BBBF0: mov     eax, ds:0B30AACh
0x4BBBF5: xor     eax, esp
0x4BBBF7: push    eax
0x4BBBF8: lea     eax, [esp+18h+var_C]
0x4BBBFC: mov     large fs:0, eax
0x4BBC02: mov     esi, ecx
0x4BBC04: mov     [esp+18h+var_10], esi
0x4BBC08: mov     dword ptr [esi], offset ??_7TESSoulGem@@6BTESSoulGem@@@; const TESSoulGem::`vftable'{for `TESSoulGem'}
0x4BBC0E: mov     dword ptr [esi+24h], offset ??_7TESSoulGem@@6BTESFullName@@@; const TESSoulGem::`vftable'{for `TESFullName'}
0x4BBC15: mov     dword ptr [esi+30h], offset ??_7TESSoulGem@@6BTESModel@@@; const TESSoulGem::`vftable'{for `TESModel'}
0x4BBC1C: mov     dword ptr [esi+48h], offset ??_7TESSoulGem@@6BTESIcon@@@; const TESSoulGem::`vftable'{for `TESIcon'}
0x4BBC23: mov     dword ptr [esi+54h], offset ??_7TESSoulGem@@6BTESScriptableForm@@@; const TESSoulGem::`vftable'{for `TESScriptableForm'}
0x4BBC2A: mov     dword ptr [esi+60h], offset ??_7TESSoulGem@@6BTESValueForm@@@; const TESSoulGem::`vftable'{for `TESValueForm'}
0x4BBC31: mov     dword ptr [esi+68h], offset ??_7TESSoulGem@@6BTESWeightForm@@@; const TESSoulGem::`vftable'{for `TESWeightForm'}
0x4BBC38: mov     [esp+18h+var_4], 0
0x4BBC40: call    j_TESForm_ClearComponentReferences
0x4BBC45: mov     ecx, esi; this
0x4BBC47: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4BBC4F: call    ??1TESObjectMISC@@UAE@XZ; TESObjectMISC::~TESObjectMISC(void)
0x4BBC54: mov     ecx, [esp+18h+var_C]
0x4BBC58: mov     large fs:0, ecx
0x4BBC5F: pop     ecx
0x4BBC60: pop     esi
0x4BBC61: add     esp, 10h
0x4BBC64: retn
0x9B2DC0: mov     ecx, [ebp-10h]; this
0x9B2DC3: jmp     ??1TESObjectMISC@@UAE@XZ; TESObjectMISC::~TESObjectMISC(void)
0x9B2DC8: mov     edx, [esp+arg_4]
0x9B2DCC: lea     eax, [edx-8]
0x9B2DCF: mov     ecx, [edx-0Ch]
0x9B2DD2: xor     ecx, eax
0x9B2DD4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2DD9: mov     eax, offset stru_ADEC14
0x9B2DDE: jmp     ___CxxFrameHandler3
