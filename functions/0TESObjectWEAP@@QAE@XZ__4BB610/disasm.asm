0x4BB610: push    0FFFFFFFFh
0x4BB612: push    offset ??0TESObjectWEAP@@QAE@XZ_SEH
0x4BB617: mov     eax, large fs:0
0x4BB61D: push    eax
0x4BB61E: push    ecx
0x4BB61F: push    ebx
0x4BB620: push    ebp
0x4BB621: push    esi
0x4BB622: push    edi
0x4BB623: mov     eax, ds:0B30AACh
0x4BB628: xor     eax, esp
0x4BB62A: push    eax
0x4BB62B: lea     eax, [esp+24h+var_C]
0x4BB62F: mov     large fs:0, eax
0x4BB635: mov     esi, ecx
0x4BB637: mov     [esp+24h+var_10], esi
0x4BB63B: call    TESBoundObject_constr
0x4BB640: xor     eax, eax
0x4BB642: mov     dword ptr [esi+24h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4BB649: mov     [esp+24h+var_4], eax
0x4BB64D: mov     [esi+28h], eax
0x4BB650: mov     [esi+2Ch], ax
0x4BB654: mov     [esi+2Eh], ax
0x4BB658: lea     ebp, [esi+30h]
0x4BB65B: mov     ecx, ebp; this
0x4BB65D: mov     byte ptr [esp+24h+var_4], 1
0x4BB662: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4BB667: lea     edi, [esi+48h]
0x4BB66A: mov     ecx, edi
0x4BB66C: mov     byte ptr [esp+24h+var_4], 2
0x4BB671: call    TESTexture_constr
0x4BB676: mov     dword ptr [edi], offset ??_7TESIcon@@6B@; const TESIcon::`vftable'
0x4BB67C: lea     ebx, [esi+54h]
0x4BB67F: mov     ecx, ebx
0x4BB681: mov     byte ptr [esp+24h+var_4], 3
0x4BB686: call    TESScriptableForm_constr
0x4BB68B: lea     ecx, [esi+60h]
0x4BB68E: call    TESEnchantableForm_constr
0x4BB693: lea     ecx, [esi+70h]
0x4BB696: call    TESValueForm_constr
0x4BB69B: lea     ecx, [esi+78h]
0x4BB69E: mov     byte ptr [esp+24h+var_4], 4
0x4BB6A3: call    TESWeightForm_constr
0x4BB6A8: lea     ecx, [esi+80h]
0x4BB6AE: mov     byte ptr [esp+24h+var_4], 5
0x4BB6B3: call    TESHealthForm_constr
0x4BB6B8: lea     ecx, [esi+88h]
0x4BB6BE: mov     byte ptr [esp+24h+var_4], 6
0x4BB6C3: call    TESAttackDamageForm_constr
0x4BB6C8: xor     eax, eax
0x4BB6CA: mov     dword ptr [esi], offset ??_7TESObjectWEAP@@6BTESObjectWEAP@@@; const TESObjectWEAP::`vftable'{for `TESObjectWEAP'}
0x4BB6D0: mov     dword ptr [esi+24h], offset ??_7TESObjectWEAP@@6BTESFullName@@@; const TESObjectWEAP::`vftable'{for `TESFullName'}
0x4BB6D7: mov     dword ptr [ebp+0], offset ??_7TESObjectWEAP@@6BTESModel@@@; const TESObjectWEAP::`vftable'{for `TESModel'}
0x4BB6DE: mov     dword ptr [edi], offset ??_7TESObjectWEAP@@6BTESIcon@@@; const TESObjectWEAP::`vftable'{for `TESIcon'}
0x4BB6E4: mov     dword ptr [ebx], offset ??_7TESObjectWEAP@@6BTESScriptableForm@@@; const TESObjectWEAP::`vftable'{for `TESScriptableForm'}
0x4BB6EA: mov     dword ptr [esi+60h], offset ??_7TESObjectWEAP@@6BTESEnchantableForm@@@; const TESObjectWEAP::`vftable'{for `TESEnchantableForm'}
0x4BB6F1: mov     dword ptr [esi+70h], offset ??_7TESObjectWEAP@@6BTESValueForm@@@; const TESObjectWEAP::`vftable'{for `TESValueForm'}
0x4BB6F8: mov     dword ptr [esi+78h], offset ??_7TESObjectWEAP@@6BTESWeightForm@@@; const TESObjectWEAP::`vftable'{for `TESWeightForm'}
0x4BB6FF: mov     dword ptr [esi+80h], offset ??_7TESObjectWEAP@@6BTESHealthForm@@@; const TESObjectWEAP::`vftable'{for `TESHealthForm'}
0x4BB709: mov     dword ptr [esi+88h], offset ??_7TESObjectWEAP@@6BTESAttackDamageForm@@@; const TESObjectWEAP::`vftable'{for `TESAttackDamageForm'}
0x4BB713: mov     byte ptr [esi+4], 21h ; '!'
0x4BB717: mov     [esi+90h], eax
0x4BB71D: mov     [esi+94h], eax
0x4BB723: mov     [esi+98h], eax
0x4BB729: mov     ecx, esi; this
0x4BB72B: mov     byte ptr [esp+24h+var_4], 7
0x4BB730: mov     [esi+9Ch], eax
0x4BB736: call    j_TESForm_InitializeComponents
0x4BB73B: mov     dword ptr [esi+6Ch], 2
0x4BB742: mov     eax, esi
0x4BB744: mov     ecx, [esp+24h+var_C]
0x4BB748: mov     large fs:0, ecx
0x4BB74F: pop     ecx
0x4BB750: pop     edi
0x4BB751: pop     esi
0x4BB752: pop     ebp
0x4BB753: pop     ebx
0x4BB754: add     esp, 10h
0x4BB757: retn
