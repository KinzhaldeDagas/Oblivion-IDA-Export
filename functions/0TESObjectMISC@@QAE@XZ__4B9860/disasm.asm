0x4B9860: push    0FFFFFFFFh
0x4B9862: push    offset ??0TESObjectMISC@@QAE@XZ_SEH
0x4B9867: mov     eax, large fs:0
0x4B986D: push    eax
0x4B986E: push    ecx
0x4B986F: push    ebx
0x4B9870: push    ebp
0x4B9871: push    esi
0x4B9872: push    edi
0x4B9873: mov     eax, ds:0B30AACh
0x4B9878: xor     eax, esp
0x4B987A: push    eax
0x4B987B: lea     eax, [esp+24h+var_C]
0x4B987F: mov     large fs:0, eax
0x4B9885: mov     esi, ecx
0x4B9887: mov     [esp+24h+var_10], esi
0x4B988B: call    TESBoundObject_constr
0x4B9890: xor     eax, eax
0x4B9892: mov     dword ptr [esi+24h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4B9899: mov     [esp+24h+var_4], eax
0x4B989D: mov     [esi+28h], eax
0x4B98A0: mov     [esi+2Ch], ax
0x4B98A4: mov     [esi+2Eh], ax
0x4B98A8: lea     ebx, [esi+30h]
0x4B98AB: mov     ecx, ebx; this
0x4B98AD: mov     byte ptr [esp+24h+var_4], 1
0x4B98B2: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4B98B7: lea     edi, [esi+48h]
0x4B98BA: mov     ecx, edi
0x4B98BC: mov     byte ptr [esp+24h+var_4], 2
0x4B98C1: call    TESTexture_constr
0x4B98C6: mov     dword ptr [edi], offset ??_7TESIcon@@6B@; const TESIcon::`vftable'
0x4B98CC: lea     ebp, [esi+54h]
0x4B98CF: mov     ecx, ebp
0x4B98D1: mov     byte ptr [esp+24h+var_4], 3
0x4B98D6: call    TESScriptableForm_constr
0x4B98DB: lea     ecx, [esi+60h]
0x4B98DE: call    TESValueForm_constr
0x4B98E3: lea     ecx, [esi+68h]
0x4B98E6: mov     byte ptr [esp+24h+var_4], 4
0x4B98EB: call    TESWeightForm_constr
0x4B98F0: push    1; a2
0x4B98F2: mov     ecx, esi; this
0x4B98F4: mov     byte ptr [esp+28h+var_4], 5
0x4B98F9: mov     dword ptr [esi], offset ??_7TESObjectMISC@@6BTESObjectMISC@@@; const TESObjectMISC::`vftable'{for `TESObjectMISC'}
0x4B98FF: mov     dword ptr [esi+24h], offset ??_7TESObjectMISC@@6BTESFullName@@@; const TESObjectMISC::`vftable'{for `TESFullName'}
0x4B9906: mov     dword ptr [ebx], offset ??_7TESObjectMISC@@6BTESModel@@@; const TESObjectMISC::`vftable'{for `TESModel'}
0x4B990C: mov     dword ptr [edi], offset ??_7TESObjectMISC@@6BTESIcon@@@; const TESObjectMISC::`vftable'{for `TESIcon'}
0x4B9912: mov     dword ptr [ebp+0], offset ??_7TESObjectMISC@@6BTESScriptableForm@@@; const TESObjectMISC::`vftable'{for `TESScriptableForm'}
0x4B9919: mov     dword ptr [esi+60h], offset ??_7TESObjectMISC@@6BTESValueForm@@@; const TESObjectMISC::`vftable'{for `TESValueForm'}
0x4B9920: mov     dword ptr [esi+68h], offset ??_7TESObjectMISC@@6BTESWeightForm@@@; const TESObjectMISC::`vftable'{for `TESWeightForm'}
0x4B9927: mov     byte ptr [esi+4], 1Bh
0x4B992B: call    TESForm_SetIsLinked
0x4B9930: mov     eax, esi
0x4B9932: mov     ecx, [esp+24h+var_C]
0x4B9936: mov     large fs:0, ecx
0x4B993D: pop     ecx
0x4B993E: pop     edi
0x4B993F: pop     esi
0x4B9940: pop     ebp
0x4B9941: pop     ebx
0x4B9942: add     esp, 10h
0x4B9945: retn
