0x4A92F0: push    0FFFFFFFFh
0x4A92F2: push    offset ??1TESAmmo@@UAE@XZ_SEH
0x4A92F7: mov     eax, large fs:0
0x4A92FD: push    eax
0x4A92FE: sub     esp, 1Ch
0x4A9301: push    ebx
0x4A9302: push    ebp
0x4A9303: push    esi
0x4A9304: push    edi
0x4A9305: mov     eax, ds:0B30AACh
0x4A930A: xor     eax, esp
0x4A930C: push    eax
0x4A930D: lea     eax, [esp+3Ch+var_C]
0x4A9311: mov     large fs:0, eax
0x4A9317: mov     esi, ecx
0x4A9319: mov     [esp+3Ch+var_10], esi
0x4A931D: lea     edi, [esi+30h]
0x4A9320: lea     ebx, [esi+48h]
0x4A9323: lea     ebp, [esi+64h]
0x4A9326: mov     dword ptr [esi], offset ??_7TESAmmo@@6BTESAmmo@@@; const TESAmmo::`vftable'{for `TESAmmo'}
0x4A932C: mov     dword ptr [esi+24h], offset ??_7TESAmmo@@6BTESFullName@@@; const TESAmmo::`vftable'{for `TESFullName'}
0x4A9333: mov     dword ptr [edi], offset ??_7TESAmmo@@6BTESModel@@@; const TESAmmo::`vftable'{for `TESModel'}
0x4A9339: mov     dword ptr [ebx], offset ??_7TESAmmo@@6BTESIcon@@@; const TESAmmo::`vftable'{for `TESIcon'}
0x4A933F: mov     dword ptr [esi+54h], offset ??_7TESAmmo@@6BTESEnchantableForm@@@; const TESAmmo::`vftable'{for `TESEnchantableForm'}
0x4A9346: mov     dword ptr [ebp+0], offset ??_7TESAmmo@@6BTESValueForm@@@; const TESAmmo::`vftable'{for `TESValueForm'}
0x4A934D: mov     dword ptr [esi+6Ch], offset ??_7TESAmmo@@6BTESWeightForm@@@; const TESAmmo::`vftable'{for `TESWeightForm'}
0x4A9354: mov     dword ptr [esi+74h], offset ??_7TESAmmo@@6BTESAttackDamageForm@@@; const TESAmmo::`vftable'{for `TESAttackDamageForm'}
0x4A935B: mov     [esp+3Ch+var_4], 6
0x4A9363: call    j_TESForm_ClearComponentReferences
0x4A9368: lea     ecx, [esi+74h]
0x4A936B: mov     byte ptr [esp+3Ch+var_4], 5
0x4A9370: call    TESAttackDamageForm_destr
0x4A9375: lea     ecx, [esi+6Ch]
0x4A9378: mov     byte ptr [esp+3Ch+var_4], 4
0x4A937D: call    TESWeightForm_destr
0x4A9382: mov     ecx, ebp
0x4A9384: mov     byte ptr [esp+3Ch+var_4], 3
0x4A9389: call    TESValueForm_destr
0x4A938E: mov     ecx, ebx; void *
0x4A9390: mov     byte ptr [esp+3Ch+var_4], 2
0x4A9395: call    TESTexture_destr
0x4A939A: mov     ecx, edi; this
0x4A939C: mov     byte ptr [esp+3Ch+var_4], 1
0x4A93A1: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4A93A6: mov     eax, [esi+28h]
0x4A93A9: push    eax
0x4A93AA: call    FormHeapFree
0x4A93AF: xor     eax, eax
0x4A93B1: add     esp, 4
0x4A93B4: mov     ecx, esi
0x4A93B6: mov     [esi+28h], eax
0x4A93B9: mov     [esi+2Eh], ax
0x4A93BD: mov     [esi+2Ch], ax
0x4A93C1: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x4A93C9: call    TESObject_destr
0x4A93CE: mov     ecx, [esp+3Ch+var_C]
0x4A93D2: mov     large fs:0, ecx
0x4A93D9: pop     ecx
0x4A93DA: pop     edi
0x4A93DB: pop     esi
0x4A93DC: pop     ebp
0x4A93DD: pop     ebx
0x4A93DE: add     esp, 28h
0x4A93E1: retn
