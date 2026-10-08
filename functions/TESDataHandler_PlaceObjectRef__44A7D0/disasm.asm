0x44A7D0: push    0FFFFFFFFh; Verified object-reference placement helper accepts an interior cell or exterior WorldSpace and sets/reuses a reference base form. New reference attachment proceeds through cell lifecycle methods; this helper itself does not write the WorldSpace SubSpace index.
0x44A7D2: push    offset TESDataHandler_PlaceObjectRef_SEH
0x44A7D7: mov     eax, large fs:0
0x44A7DD: push    eax
0x44A7DE: sub     esp, 24h
0x44A7E1: push    ebx
0x44A7E2: push    ebp
0x44A7E3: push    esi
0x44A7E4: push    edi
0x44A7E5: mov     eax, ds:0B30AACh
0x44A7EA: xor     eax, esp
0x44A7EC: push    eax
0x44A7ED: lea     eax, [esp+44h+var_C]
0x44A7F1: mov     large fs:0, eax
0x44A7F7: mov     ebx, [esp+44h+arg_C]
0x44A7FB: xor     ebp, ebp
0x44A7FD: test    ebx, ebx
0x44A7FF: jz      short loc_44A80E
0x44A801: mov     ecx, ebx; this
0x44A803: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x44A808: test    al, al
0x44A80A: jnz     short loc_44A88B
0x44A80C: xor     ebx, ebx
0x44A80E: mov     edi, [esp+44h+arg_10]
0x44A812: mov     esi, [esp+44h+a2]
0x44A816: test    esi, esi
0x44A818: jz      loc_44ABBF
0x44A81E: test    ebx, ebx
0x44A820: jnz     short loc_44A82A
0x44A822: test    edi, edi
0x44A824: jz      loc_44ABBF
0x44A82A: mov     ebp, [esp+44h+arg_14]
0x44A82E: test    ebp, ebp
0x44A830: jz      short TESDataHandler_PlaceObjectRef___SwitchRefType; New-ref path chooses allocation by base form type: type 0x23 Character -> Character_constr, type 0x24 Creature -> Creature_constr, otherwise TESObjectREFR_constr.
0x44A832: mov     ecx, ebp; this
0x44A834: call    TESObjectREFR_IsPersistent
0x44A839: push    0; a2
0x44A83B: mov     ecx, ebp; this
0x44A83D: mov     byte ptr [esp+48h+arg_10], al
0x44A841: call    TESObjectREFR_SetPersistance
0x44A846: mov     ecx, ebp; this
0x44A848: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x44A84D: test    eax, eax
0x44A84F: jz      short loc_44A859
0x44A851: push    ebp; reference
0x44A852: mov     ecx, eax; this
0x44A854: call    TESObjectCELL_RemoveReference; Verified: removes a reference from the cell object list under the cell lock. For persistent cells, clears the reference's ExtraDataList cell pointer and removes it from the owning WorldSpace persistent-reference index (+0x64); for normal cells, clears its parent cell and updates changed state. No write to the separate SubSpace index (+0x60) is present.
0x44A859: mov     eax, [ebp+0]
0x44A85C: mov     edx, [eax+170h]
0x44A862: mov     ecx, ebp
0x44A864: call    edx
0x44A866: test    eax, eax
0x44A868: jnz     short loc_44A872
0x44A86A: push    esi; baseForm
0x44A86B: mov     ecx, ebp; this
0x44A86D: call    TESObjectREFR_SetBaseForm
0x44A872: mov     ecx, ebp
0x44A874: call    sub_4DB3C0
0x44A879: test    al, al
0x44A87B: jz      loc_44A96D
0x44A881: mov     byte ptr [esp+44h+arg_10], 1
0x44A886: jmp     loc_44A96D
0x44A88B: xor     edi, edi
0x44A88D: jmp     short loc_44A812
0x9AD9D0: mov     eax, [ebp+14h]
0x9AD9D3: push    eax
0x9AD9D4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AD9D9: pop     ecx
0x9AD9DA: retn
0x9AD9DB: mov     eax, [ebp+14h]
0x9AD9DE: push    eax
0x9AD9DF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AD9E4: pop     ecx
0x9AD9E5: retn
0x9AD9E6: mov     eax, [ebp+14h]
0x9AD9E9: push    eax
0x9AD9EA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AD9EF: pop     ecx
0x9AD9F0: retn
0x9AD9F1: mov     eax, [ebp+4]
0x9AD9F4: push    eax
0x9AD9F5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AD9FA: pop     ecx
0x9AD9FB: retn
0x9AD9FC: mov     edx, [esp+arg_4]
0x9ADA00: lea     eax, [edx-34h]
0x9ADA03: mov     ecx, [edx-38h]
0x9ADA06: xor     ecx, eax
0x9ADA08: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADA0D: mov     eax, offset stru_ADA460
0x9ADA12: jmp     ___CxxFrameHandler3
