0x4B5140: push    0FFFFFFFFh
0x4B5142: push    offset ??0TESObjectARMO@@QAE@XZ_SEH
0x4B5147: mov     eax, large fs:0
0x4B514D: push    eax
0x4B514E: push    ecx
0x4B514F: push    ebx
0x4B5150: push    ebp
0x4B5151: push    esi
0x4B5152: push    edi
0x4B5153: mov     eax, ds:0B30AACh
0x4B5158: xor     eax, esp
0x4B515A: push    eax
0x4B515B: lea     eax, [esp+24h+var_C]
0x4B515F: mov     large fs:0, eax
0x4B5165: mov     esi, ecx
0x4B5167: mov     [esp+24h+var_10], esi
0x4B516B: call    TESBoundObject_constr
0x4B5170: xor     eax, eax
0x4B5172: mov     dword ptr [esi+24h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4B5179: mov     [esp+24h+var_4], eax
0x4B517D: mov     [esi+28h], eax
0x4B5180: mov     [esi+2Ch], ax
0x4B5184: mov     [esi+2Eh], ax
0x4B5188: lea     edi, [esi+30h]
0x4B518B: mov     ecx, edi
0x4B518D: mov     byte ptr [esp+24h+var_4], 1
0x4B5192: call    TESScriptableForm_constr
0x4B5197: lea     ebp, [esi+3Ch]
0x4B519A: mov     ecx, ebp
0x4B519C: call    TESEnchantableForm_constr
0x4B51A1: lea     ebx, [esi+4Ch]
0x4B51A4: mov     ecx, ebx
0x4B51A6: call    TESValueForm_constr
0x4B51AB: lea     ecx, [esi+54h]
0x4B51AE: mov     byte ptr [esp+24h+var_4], 2
0x4B51B3: call    TESWeightForm_constr
0x4B51B8: lea     ecx, [esi+5Ch]
0x4B51BB: mov     byte ptr [esp+24h+var_4], 3
0x4B51C0: call    TESHealthForm_constr
0x4B51C5: lea     ecx, [esi+64h]
0x4B51C8: mov     byte ptr [esp+24h+var_4], 4
0x4B51CD: call    TESBipedModelForm_constr
0x4B51D2: mov     dword ptr [esi], offset ??_7TESObjectARMO@@6BTESObjectARMO@@@; const TESObjectARMO::`vftable'{for `TESObjectARMO'}
0x4B51D8: mov     dword ptr [esi+24h], offset ??_7TESObjectARMO@@6BTESFullName@@@; const TESObjectARMO::`vftable'{for `TESFullName'}
0x4B51DF: mov     dword ptr [edi], offset ??_7TESObjectARMO@@6BTESScriptableForm@@@; const TESObjectARMO::`vftable'{for `TESScriptableForm'}
0x4B51E5: mov     dword ptr [ebp+0], offset ??_7TESObjectARMO@@6BTESEnchantableForm@@@; const TESObjectARMO::`vftable'{for `TESEnchantableForm'}
0x4B51EC: mov     dword ptr [ebx], offset ??_7TESObjectARMO@@6BTESValueForm@@@; const TESObjectARMO::`vftable'{for `TESValueForm'}
0x4B51F2: mov     dword ptr [esi+54h], offset ??_7TESObjectARMO@@6BTESWeightForm@@@; const TESObjectARMO::`vftable'{for `TESWeightForm'}
0x4B51F9: mov     dword ptr [esi+5Ch], offset ??_7TESObjectARMO@@6BTESHealthForm@@@; const TESObjectARMO::`vftable'{for `TESHealthForm'}
0x4B5200: mov     dword ptr [esi+64h], offset ??_7TESObjectARMO@@6BTESBipedModelForm@@@; const TESObjectARMO::`vftable'{for `TESBipedModelForm'}
0x4B5207: mov     byte ptr [esi+4], 14h
0x4B520B: mov     ecx, esi; this
0x4B520D: mov     byte ptr [esp+24h+var_4], 5
0x4B5212: mov     word ptr [esi+0E4h], 0
0x4B521B: call    j_TESForm_InitializeComponents
0x4B5220: mov     dword ptr [esi+48h], 3
0x4B5227: mov     eax, esi
0x4B5229: mov     ecx, [esp+24h+var_C]
0x4B522D: mov     large fs:0, ecx
0x4B5234: pop     ecx
0x4B5235: pop     edi
0x4B5236: pop     esi
0x4B5237: pop     ebp
0x4B5238: pop     ebx
0x4B5239: add     esp, 10h
0x4B523C: retn
