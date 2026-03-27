0x4B59F0: push    0FFFFFFFFh
0x4B59F2: push    offset ??0TESObjectBOOK@@QAE@XZ_SEH
0x4B59F7: mov     eax, large fs:0
0x4B59FD: push    eax
0x4B59FE: push    ecx
0x4B59FF: push    ebx
0x4B5A00: push    ebp
0x4B5A01: push    esi
0x4B5A02: push    edi
0x4B5A03: mov     eax, ds:0B30AACh
0x4B5A08: xor     eax, esp
0x4B5A0A: push    eax
0x4B5A0B: lea     eax, [esp+24h+var_C]
0x4B5A0F: mov     large fs:0, eax
0x4B5A15: mov     esi, ecx
0x4B5A17: mov     [esp+24h+var_10], esi
0x4B5A1B: call    TESBoundObject_constr
0x4B5A20: xor     eax, eax
0x4B5A22: mov     dword ptr [esi+24h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4B5A29: mov     [esp+24h+var_4], eax
0x4B5A2D: mov     [esi+28h], eax
0x4B5A30: mov     [esi+2Ch], ax
0x4B5A34: mov     [esi+2Eh], ax
0x4B5A38: lea     ebx, [esi+30h]
0x4B5A3B: mov     ecx, ebx; this
0x4B5A3D: mov     byte ptr [esp+24h+var_4], 1
0x4B5A42: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4B5A47: lea     edi, [esi+48h]
0x4B5A4A: mov     ecx, edi
0x4B5A4C: mov     byte ptr [esp+24h+var_4], 2
0x4B5A51: call    TESTexture_constr
0x4B5A56: mov     dword ptr [edi], offset ??_7TESIcon@@6B@; const TESIcon::`vftable'
0x4B5A5C: lea     ebp, [esi+54h]
0x4B5A5F: mov     ecx, ebp
0x4B5A61: mov     byte ptr [esp+24h+var_4], 3
0x4B5A66: call    TESScriptableForm_constr
0x4B5A6B: lea     ecx, [esi+60h]
0x4B5A6E: call    TESEnchantableForm_constr
0x4B5A73: lea     ecx, [esi+70h]
0x4B5A76: call    TESValueForm_constr
0x4B5A7B: lea     ecx, [esi+78h]
0x4B5A7E: mov     byte ptr [esp+24h+var_4], 4
0x4B5A83: call    TESWeightForm_constr
0x4B5A88: lea     ecx, [esi+80h]
0x4B5A8E: mov     byte ptr [esp+24h+var_4], 5
0x4B5A93: call    TESDescription_constr
0x4B5A98: mov     dword ptr [edi], offset ??_7TESObjectBOOK@@6BTESIcon@@@; const TESObjectBOOK::`vftable'{for `TESIcon'}
0x4B5A9E: xor     edi, edi
0x4B5AA0: mov     dword ptr [esi], offset ??_7TESObjectBOOK@@6BTESObjectBOOK@@@; const TESObjectBOOK::`vftable'{for `TESObjectBOOK'}
0x4B5AA6: mov     dword ptr [esi+24h], offset ??_7TESObjectBOOK@@6BTESFullName@@@; const TESObjectBOOK::`vftable'{for `TESFullName'}
0x4B5AAD: mov     dword ptr [ebx], offset ??_7TESObjectBOOK@@6BTESModel@@@; const TESObjectBOOK::`vftable'{for `TESModel'}
0x4B5AB3: mov     dword ptr [ebp+0], offset ??_7TESObjectBOOK@@6BTESScriptableForm@@@; const TESObjectBOOK::`vftable'{for `TESScriptableForm'}
0x4B5ABA: mov     dword ptr [esi+60h], offset ??_7TESObjectBOOK@@6BTESEnchantableForm@@@; const TESObjectBOOK::`vftable'{for `TESEnchantableForm'}
0x4B5AC1: mov     dword ptr [esi+70h], offset ??_7TESObjectBOOK@@6BTESValueForm@@@; const TESObjectBOOK::`vftable'{for `TESValueForm'}
0x4B5AC8: mov     dword ptr [esi+78h], offset ??_7TESObjectBOOK@@6BTESWeightForm@@@; const TESObjectBOOK::`vftable'{for `TESWeightForm'}
0x4B5ACF: mov     dword ptr [esi+80h], offset ??_7TESObjectBOOK@@6BTESDescription@@@; const TESObjectBOOK::`vftable'{for `TESDescription'}
0x4B5AD9: mov     byte ptr [esi+4], 15h
0x4B5ADD: mov     [esi+88h], di
0x4B5AE4: mov     ecx, esi; this
0x4B5AE6: mov     byte ptr [esi+89h], 0FFh
0x4B5AED: call    j_TESForm_InitializeComponents
0x4B5AF2: mov     [esi+6Ch], edi
0x4B5AF5: mov     eax, esi
0x4B5AF7: mov     ecx, [esp+24h+var_C]
0x4B5AFB: mov     large fs:0, ecx
0x4B5B02: pop     ecx
0x4B5B03: pop     edi
0x4B5B04: pop     esi
0x4B5B05: pop     ebp
0x4B5B06: pop     ebx
0x4B5B07: add     esp, 10h
0x4B5B0A: retn
