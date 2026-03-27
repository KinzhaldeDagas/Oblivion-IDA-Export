0x51E560: push    0FFFFFFFFh
0x51E562: push    offset TESActorBase_constr_SEH
0x51E567: mov     eax, large fs:0
0x51E56D: push    eax
0x51E56E: push    ecx
0x51E56F: push    ebx
0x51E570: push    ebp
0x51E571: push    esi
0x51E572: push    edi
0x51E573: mov     eax, ds:0B30AACh
0x51E578: xor     eax, esp
0x51E57A: push    eax
0x51E57B: lea     eax, [esp+24h+var_C]
0x51E57F: mov     large fs:0, eax
0x51E585: mov     esi, ecx
0x51E587: mov     [esp+24h+var_10], esi
0x51E58B: call    TESBoundAnimObject_constr
0x51E590: lea     edi, [esi+24h]
0x51E593: mov     ecx, edi
0x51E595: mov     [esp+24h+var_4], 0
0x51E59D: call    TESActorBaseData_constr
0x51E5A2: lea     ebx, [esi+44h]
0x51E5A5: mov     ecx, ebx
0x51E5A7: mov     byte ptr [esp+24h+var_4], 1
0x51E5AC: call    TESContainer_constr
0x51E5B1: lea     ebp, [esi+54h]
0x51E5B4: mov     ecx, ebp
0x51E5B6: mov     byte ptr [esp+24h+var_4], 2
0x51E5BB: call    TESSpellList_constr
0x51E5C0: lea     ecx, [esi+68h]
0x51E5C3: mov     byte ptr [esp+24h+var_4], 3
0x51E5C8: call    TESAIForm_constr
0x51E5CD: lea     ecx, [esi+80h]
0x51E5D3: mov     byte ptr [esp+24h+var_4], 4
0x51E5D8: call    TESHealthForm_constr
0x51E5DD: lea     ecx, [esi+88h]
0x51E5E3: mov     byte ptr [esp+24h+var_4], 5
0x51E5E8: call    TESAttributes_constr
0x51E5ED: lea     ecx, [esi+94h]
0x51E5F3: mov     byte ptr [esp+24h+var_4], 6
0x51E5F8: call    TESAnimation_constr
0x51E5FD: xor     eax, eax
0x51E5FF: mov     dword ptr [esi+0A0h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x51E609: mov     [esi+0A4h], eax
0x51E60F: mov     [esi+0A8h], ax
0x51E616: mov     [esi+0AAh], ax
0x51E61D: lea     ecx, [esi+0ACh]; this
0x51E623: mov     byte ptr [esp+24h+var_4], 7
0x51E628: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x51E62D: lea     ecx, [esi+0C4h]
0x51E633: mov     byte ptr [esp+24h+var_4], 8
0x51E638: call    TESScriptableForm_constr
0x51E63D: lea     ecx, [esi+0D0h]
0x51E643: mov     dword ptr [esi], offset ??_7TESActorBase@@6BTESActorBase@@@; const TESActorBase::`vftable'{for `TESActorBase'}
0x51E649: mov     dword ptr [edi], offset ??_7TESActorBase@@6BTESActorBaseData@@@; const TESActorBase::`vftable'{for `TESActorBaseData'}
0x51E64F: mov     dword ptr [ebx], offset ??_7TESActorBase@@6BTESContainer@@@; const TESActorBase::`vftable'{for `TESContainer'}
0x51E655: mov     dword ptr [ebp+0], offset ??_7TESActorBase@@6BTESSpellList@@@; const TESActorBase::`vftable'{for `TESSpellList'}
0x51E65C: mov     dword ptr [esi+68h], offset ??_7TESActorBase@@6BTESAIForm@@@; const TESActorBase::`vftable'{for `TESAIForm'}
0x51E663: mov     dword ptr [esi+80h], offset ??_7TESActorBase@@6BTESHealthForm@@@; const TESActorBase::`vftable'{for `TESHealthForm'}
0x51E66D: mov     dword ptr [esi+88h], offset ??_7TESActorBase@@6BTESAttributes@@@; const TESActorBase::`vftable'{for `TESAttributes'}
0x51E677: mov     dword ptr [esi+94h], offset ??_7TESActorBase@@6BTESAnimation@@@; const TESActorBase::`vftable'{for `TESAnimation'}
0x51E681: mov     dword ptr [esi+0A0h], offset ??_7TESActorBase@@6BTESFullName@@@; const TESActorBase::`vftable'{for `TESFullName'}
0x51E68B: mov     dword ptr [esi+0ACh], offset ??_7TESActorBase@@6BTESModel@@@; const TESActorBase::`vftable'{for `TESModel'}
0x51E695: mov     dword ptr [esi+0C4h], offset ??_7TESActorBase@@6BTESScriptableForm@@@; const TESActorBase::`vftable'{for `TESScriptableForm'}
0x51E69F: call    AVCollection_Constr
0x51E6A4: mov     eax, esi
0x51E6A6: mov     ecx, [esp+24h+var_C]
0x51E6AA: mov     large fs:0, ecx
0x51E6B1: pop     ecx
0x51E6B2: pop     edi
0x51E6B3: pop     esi
0x51E6B4: pop     ebp
0x51E6B5: pop     ebx
0x51E6B6: add     esp, 10h
0x51E6B9: retn
