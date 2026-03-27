0x4B40A0: push    0FFFFFFFFh
0x4B40A2: push    offset ??0TESObjectDOOR@@QAE@XZ_SEH
0x4B40A7: mov     eax, large fs:0
0x4B40AD: push    eax
0x4B40AE: push    ecx
0x4B40AF: push    ebx
0x4B40B0: push    ebp
0x4B40B1: push    esi
0x4B40B2: push    edi
0x4B40B3: mov     eax, ds:0B30AACh
0x4B40B8: xor     eax, esp
0x4B40BA: push    eax
0x4B40BB: lea     eax, [esp+24h+var_C]
0x4B40BF: mov     large fs:0, eax
0x4B40C5: mov     esi, ecx
0x4B40C7: mov     [esp+24h+var_10], esi
0x4B40CB: call    TESBoundAnimObject_constr
0x4B40D0: xor     ebp, ebp
0x4B40D2: mov     dword ptr [esi+24h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4B40D9: mov     [esp+24h+var_4], ebp
0x4B40DD: mov     [esi+28h], ebp
0x4B40E0: mov     [esi+2Ch], bp
0x4B40E4: mov     [esi+2Eh], bp
0x4B40E8: lea     edi, [esi+30h]
0x4B40EB: mov     ecx, edi; this
0x4B40ED: mov     byte ptr [esp+24h+var_4], 1
0x4B40F2: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4B40F7: lea     ebx, [esi+48h]
0x4B40FA: mov     ecx, ebx
0x4B40FC: mov     byte ptr [esp+24h+var_4], 2
0x4B4101: call    TESScriptableForm_constr
0x4B4106: mov     ecx, esi; this
0x4B4108: mov     dword ptr [esi], offset ??_7TESObjectACTI@@6BTESObjectACTI@@@; const TESObjectACTI::`vftable'{for `TESObjectACTI'}
0x4B410E: mov     dword ptr [esi+24h], offset ??_7TESObjectACTI@@6BTESFullName@@@; const TESObjectACTI::`vftable'{for `TESFullName'}
0x4B4115: mov     dword ptr [edi], offset ??_7TESObjectACTI@@6BTESModel@@@; const TESObjectACTI::`vftable'{for `TESModel'}
0x4B411B: mov     dword ptr [ebx], offset ??_7TESObjectACTI@@6BTESScriptableForm@@@; const TESObjectACTI::`vftable'{for `TESScriptableForm'}
0x4B4121: mov     byte ptr [esi+4], 12h
0x4B4125: mov     [esi+54h], ebp
0x4B4128: call    j_TESForm_InitializeComponents
0x4B412D: push    1; a2
0x4B412F: mov     ecx, esi; this
0x4B4131: call    TESForm_SetIsLinked
0x4B4136: mov     eax, esi
0x4B4138: mov     ecx, [esp+24h+var_C]
0x4B413C: mov     large fs:0, ecx
0x4B4143: pop     ecx
0x4B4144: pop     edi
0x4B4145: pop     esi
0x4B4146: pop     ebp
0x4B4147: pop     ebx
0x4B4148: add     esp, 10h
0x4B414B: retn
