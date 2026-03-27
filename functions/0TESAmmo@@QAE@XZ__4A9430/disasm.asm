0x4A9430: push    0FFFFFFFFh
0x4A9432: push    offset ??0TESAmmo@@QAE@XZ_SEH
0x4A9437: mov     eax, large fs:0
0x4A943D: push    eax
0x4A943E: push    ecx
0x4A943F: push    ebx
0x4A9440: push    ebp
0x4A9441: push    esi
0x4A9442: push    edi
0x4A9443: mov     eax, ds:0B30AACh
0x4A9448: xor     eax, esp
0x4A944A: push    eax
0x4A944B: lea     eax, [esp+24h+var_C]
0x4A944F: mov     large fs:0, eax
0x4A9455: mov     esi, ecx
0x4A9457: mov     [esp+24h+var_10], esi
0x4A945B: call    TESBoundObject_constr
0x4A9460: xor     eax, eax
0x4A9462: mov     dword ptr [esi+24h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4A9469: mov     [esp+24h+var_4], eax
0x4A946D: mov     [esi+28h], eax
0x4A9470: mov     [esi+2Ch], ax
0x4A9474: mov     [esi+2Eh], ax
0x4A9478: lea     ebp, [esi+30h]
0x4A947B: mov     ecx, ebp; this
0x4A947D: mov     byte ptr [esp+24h+var_4], 1
0x4A9482: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4A9487: lea     edi, [esi+48h]
0x4A948A: mov     ecx, edi
0x4A948C: mov     byte ptr [esp+24h+var_4], 2
0x4A9491: call    TESTexture_constr
0x4A9496: mov     dword ptr [edi], offset ??_7TESIcon@@6B@; const TESIcon::`vftable'
0x4A949C: lea     ebx, [esi+54h]
0x4A949F: mov     ecx, ebx
0x4A94A1: mov     byte ptr [esp+24h+var_4], 3
0x4A94A6: call    TESEnchantableForm_constr
0x4A94AB: lea     ecx, [esi+64h]
0x4A94AE: call    TESValueForm_constr
0x4A94B3: lea     ecx, [esi+6Ch]
0x4A94B6: mov     byte ptr [esp+24h+var_4], 4
0x4A94BB: call    TESWeightForm_constr
0x4A94C0: lea     ecx, [esi+74h]
0x4A94C3: mov     byte ptr [esp+24h+var_4], 5
0x4A94C8: call    TESAttackDamageForm_constr
0x4A94CD: xor     eax, eax
0x4A94CF: mov     dword ptr [esi], offset ??_7TESAmmo@@6BTESAmmo@@@; const TESAmmo::`vftable'{for `TESAmmo'}
0x4A94D5: mov     dword ptr [esi+24h], offset ??_7TESAmmo@@6BTESFullName@@@; const TESAmmo::`vftable'{for `TESFullName'}
0x4A94DC: mov     dword ptr [ebp+0], offset ??_7TESAmmo@@6BTESModel@@@; const TESAmmo::`vftable'{for `TESModel'}
0x4A94E3: mov     dword ptr [edi], offset ??_7TESAmmo@@6BTESIcon@@@; const TESAmmo::`vftable'{for `TESIcon'}
0x4A94E9: mov     dword ptr [ebx], offset ??_7TESAmmo@@6BTESEnchantableForm@@@; const TESAmmo::`vftable'{for `TESEnchantableForm'}
0x4A94EF: mov     dword ptr [esi+64h], offset ??_7TESAmmo@@6BTESValueForm@@@; const TESAmmo::`vftable'{for `TESValueForm'}
0x4A94F6: mov     dword ptr [esi+6Ch], offset ??_7TESAmmo@@6BTESWeightForm@@@; const TESAmmo::`vftable'{for `TESWeightForm'}
0x4A94FD: mov     dword ptr [esi+74h], offset ??_7TESAmmo@@6BTESAttackDamageForm@@@; const TESAmmo::`vftable'{for `TESAttackDamageForm'}
0x4A9504: mov     byte ptr [esi+4], 22h ; '"'
0x4A9508: mov     [esi+7Ch], eax
0x4A950B: mov     ecx, esi; this
0x4A950D: mov     byte ptr [esp+24h+var_4], 6
0x4A9512: mov     [esi+80h], eax
0x4A9518: call    j_TESForm_InitializeComponents
0x4A951D: mov     dword ptr [esi+60h], 2
0x4A9524: mov     eax, esi
0x4A9526: mov     ecx, [esp+24h+var_C]
0x4A952A: mov     large fs:0, ecx
0x4A9531: pop     ecx
0x4A9532: pop     edi
0x4A9533: pop     esi
0x4A9534: pop     ebp
0x4A9535: pop     ebx
0x4A9536: add     esp, 10h
0x4A9539: retn
