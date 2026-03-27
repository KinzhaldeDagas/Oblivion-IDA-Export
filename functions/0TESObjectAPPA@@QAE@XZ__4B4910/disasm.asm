0x4B4910: push    0FFFFFFFFh
0x4B4912: push    offset ??0TESObjectAPPA@@QAE@XZ_SEH
0x4B4917: mov     eax, large fs:0
0x4B491D: push    eax
0x4B491E: push    ecx
0x4B491F: push    ebx
0x4B4920: push    ebp
0x4B4921: push    esi
0x4B4922: push    edi
0x4B4923: mov     eax, ds:0B30AACh
0x4B4928: xor     eax, esp
0x4B492A: push    eax
0x4B492B: lea     eax, [esp+24h+var_C]
0x4B492F: mov     large fs:0, eax
0x4B4935: mov     esi, ecx
0x4B4937: mov     [esp+24h+var_10], esi
0x4B493B: call    TESBoundObject_constr
0x4B4940: xor     eax, eax
0x4B4942: mov     dword ptr [esi+24h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4B4949: mov     [esp+24h+var_4], eax
0x4B494D: mov     [esi+28h], eax
0x4B4950: mov     [esi+2Ch], ax
0x4B4954: mov     [esi+2Eh], ax
0x4B4958: lea     ebp, [esi+30h]
0x4B495B: mov     ecx, ebp; this
0x4B495D: mov     byte ptr [esp+24h+var_4], 1
0x4B4962: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4B4967: lea     edi, [esi+48h]
0x4B496A: mov     ecx, edi
0x4B496C: mov     byte ptr [esp+24h+var_4], 2
0x4B4971: call    TESTexture_constr
0x4B4976: mov     dword ptr [edi], offset ??_7TESIcon@@6B@; const TESIcon::`vftable'
0x4B497C: lea     ebx, [esi+54h]
0x4B497F: mov     ecx, ebx
0x4B4981: mov     byte ptr [esp+24h+var_4], 3
0x4B4986: call    TESScriptableForm_constr
0x4B498B: lea     ecx, [esi+60h]
0x4B498E: call    TESValueForm_constr
0x4B4993: lea     ecx, [esi+68h]
0x4B4996: mov     byte ptr [esp+24h+var_4], 4
0x4B499B: call    TESWeightForm_constr
0x4B49A0: lea     ecx, [esi+70h]
0x4B49A3: mov     byte ptr [esp+24h+var_4], 5
0x4B49A8: call    TESQualityForm_constr
0x4B49AD: mov     dword ptr [esi], offset ??_7TESObjectAPPA@@6BTESObjectAPPA@@@; const TESObjectAPPA::`vftable'{for `TESObjectAPPA'}
0x4B49B3: mov     dword ptr [esi+24h], offset ??_7TESObjectAPPA@@6BTESFullName@@@; const TESObjectAPPA::`vftable'{for `TESFullName'}
0x4B49BA: mov     dword ptr [ebp+0], offset ??_7TESObjectAPPA@@6BTESModel@@@; const TESObjectAPPA::`vftable'{for `TESModel'}
0x4B49C1: mov     dword ptr [edi], offset ??_7TESObjectAPPA@@6BTESIcon@@@; const TESObjectAPPA::`vftable'{for `TESIcon'}
0x4B49C7: mov     dword ptr [ebx], offset ??_7TESObjectAPPA@@6BTESScriptableForm@@@; const TESObjectAPPA::`vftable'{for `TESScriptableForm'}
0x4B49CD: mov     dword ptr [esi+60h], offset ??_7TESObjectAPPA@@6BTESValueForm@@@; const TESObjectAPPA::`vftable'{for `TESValueForm'}
0x4B49D4: mov     dword ptr [esi+68h], offset ??_7TESObjectAPPA@@6BTESWeightForm@@@; const TESObjectAPPA::`vftable'{for `TESWeightForm'}
0x4B49DB: mov     dword ptr [esi+70h], offset ??_7TESObjectAPPA@@6BTESQualityForm@@@; const TESObjectAPPA::`vftable'{for `TESQualityForm'}
0x4B49E2: mov     byte ptr [esi+4], 13h
0x4B49E6: mov     ecx, esi; this
0x4B49E8: mov     byte ptr [esp+24h+var_4], 6
0x4B49ED: mov     byte ptr [esi+78h], 0
0x4B49F1: call    j_TESForm_InitializeComponents
0x4B49F6: mov     eax, esi
0x4B49F8: mov     ecx, [esp+24h+var_C]
0x4B49FC: mov     large fs:0, ecx
0x4B4A03: pop     ecx
0x4B4A04: pop     edi
0x4B4A05: pop     esi
0x4B4A06: pop     ebp
0x4B4A07: pop     ebx
0x4B4A08: add     esp, 10h
0x4B4A0B: retn
