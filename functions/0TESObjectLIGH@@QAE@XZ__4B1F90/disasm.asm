0x4B1F90: push    0FFFFFFFFh
0x4B1F92: push    offset ??0TESObjectLIGH@@QAE@XZ_SEH
0x4B1F97: mov     eax, large fs:0
0x4B1F9D: push    eax
0x4B1F9E: push    ecx
0x4B1F9F: push    ebx
0x4B1FA0: push    ebp
0x4B1FA1: push    esi
0x4B1FA2: push    edi
0x4B1FA3: mov     eax, ds:0B30AACh
0x4B1FA8: xor     eax, esp
0x4B1FAA: push    eax
0x4B1FAB: lea     eax, [esp+24h+var_C]
0x4B1FAF: mov     large fs:0, eax
0x4B1FB5: mov     esi, ecx
0x4B1FB7: mov     [esp+24h+var_10], esi
0x4B1FBB: call    TESBoundAnimObject_constr
0x4B1FC0: xor     eax, eax
0x4B1FC2: mov     dword ptr [esi+24h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4B1FC9: mov     [esp+24h+var_4], eax
0x4B1FCD: mov     [esi+28h], eax
0x4B1FD0: mov     [esi+2Ch], ax
0x4B1FD4: mov     [esi+2Eh], ax
0x4B1FD8: lea     ebx, [esi+30h]
0x4B1FDB: mov     ecx, ebx; this
0x4B1FDD: mov     byte ptr [esp+24h+var_4], 1
0x4B1FE2: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4B1FE7: lea     edi, [esi+48h]
0x4B1FEA: mov     ecx, edi
0x4B1FEC: mov     byte ptr [esp+24h+var_4], 2
0x4B1FF1: call    TESTexture_constr
0x4B1FF6: mov     dword ptr [edi], offset ??_7TESIcon@@6B@; const TESIcon::`vftable'
0x4B1FFC: lea     ebp, [esi+54h]
0x4B1FFF: mov     ecx, ebp
0x4B2001: mov     byte ptr [esp+24h+var_4], 3
0x4B2006: call    TESScriptableForm_constr
0x4B200B: lea     ecx, [esi+60h]
0x4B200E: call    TESWeightForm_constr
0x4B2013: lea     ecx, [esi+68h]
0x4B2016: mov     byte ptr [esp+24h+var_4], 4
0x4B201B: call    TESValueForm_constr
0x4B2020: fld1
0x4B2022: xor     eax, eax
0x4B2024: mov     dword ptr [esi], offset ??_7TESObjectLIGH@@6BTESObjectLIGH@@@; const TESObjectLIGH::`vftable'{for `TESObjectLIGH'}
0x4B202A: mov     dword ptr [esi+24h], offset ??_7TESObjectLIGH@@6BTESFullName@@@; const TESObjectLIGH::`vftable'{for `TESFullName'}
0x4B2031: mov     dword ptr [ebx], offset ??_7TESObjectLIGH@@6BTESModel@@@; const TESObjectLIGH::`vftable'{for `TESModel'}
0x4B2037: mov     dword ptr [edi], offset ??_7TESObjectLIGH@@6BTESIcon@@@; const TESObjectLIGH::`vftable'{for `TESIcon'}
0x4B203D: mov     dword ptr [ebp+0], offset ??_7TESObjectLIGH@@6BTESScriptableForm@@@; const TESObjectLIGH::`vftable'{for `TESScriptableForm'}
0x4B2044: mov     dword ptr [esi+60h], offset ??_7TESObjectLIGH@@6BTESWeightForm@@@; const TESObjectLIGH::`vftable'{for `TESWeightForm'}
0x4B204B: mov     dword ptr [esi+68h], offset ??_7TESObjectLIGH@@6BTESValueForm@@@; const TESObjectLIGH::`vftable'{for `TESValueForm'}
0x4B2052: mov     byte ptr [esi+4], 1Ah
0x4B2056: mov     [esi+8Ch], eax
0x4B205C: mov     [esi+70h], eax
0x4B205F: mov     [esi+74h], eax
0x4B2062: mov     [esi+78h], eax
0x4B2065: mov     [esi+7Ch], eax
0x4B2068: mov     [esi+80h], eax
0x4B206E: fstp    dword ptr [esi+88h]
0x4B2074: fld     dword ptr ds:0A430CCh
0x4B207A: mov     ecx, esi; this
0x4B207C: fstp    dword ptr [esi+84h]
0x4B2082: mov     byte ptr [esp+24h+var_4], 5
0x4B2087: call    j_TESForm_InitializeComponents
0x4B208C: mov     eax, esi
0x4B208E: mov     ecx, [esp+24h+var_C]
0x4B2092: mov     large fs:0, ecx
0x4B2099: pop     ecx
0x4B209A: pop     edi
0x4B209B: pop     esi
0x4B209C: pop     ebp
0x4B209D: pop     ebx
0x4B209E: add     esp, 10h
0x4B20A1: retn
