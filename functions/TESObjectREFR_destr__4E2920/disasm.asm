0x4E2920: push    0FFFFFFFFh; Verified reference destruction lifecycle: TESObjectREFR_destr calls TESForm_SetDeleted(this, true) before removing the reference from its cell and destroying its ExtraDataList.
0x4E2922: push    offset TESObjectREFR_destr_SEH
0x4E2927: mov     eax, large fs:0
0x4E292D: push    eax
0x4E292E: sub     esp, 0Ch
0x4E2931: push    ebp
0x4E2932: push    esi
0x4E2933: push    edi
0x4E2934: mov     eax, ds:0B30AACh
0x4E2939: xor     eax, esp
0x4E293B: push    eax
0x4E293C: lea     eax, [esp+28h+var_C]
0x4E2940: mov     large fs:0, eax
0x4E2946: mov     esi, ecx
0x4E2948: mov     [esp+28h+var_10], esi
0x4E294C: mov     dword ptr [esi], offset ??_7TESObjectREFR@@6BTESObjectREFR@@@; const TESObjectREFR::`vftable'{for `TESObjectREFR'}
0x4E2952: mov     dword ptr [esi+18h], offset ??_7TESObjectREFR@@6BTESChildCell@@@; const TESObjectREFR::`vftable'{for `TESChildCell'}
0x4E2959: mov     eax, ds:0BA9DE4h
0x4E295E: mov     ecx, large fs:2Ch
0x4E2965: mov     edi, [ecx+eax*4]
0x4E2968: mov     dl, [edi+185h]
0x4E296E: mov     byte ptr [edi+185h], 0
0x4E2975: mov     eax, [esi+8]
0x4E2978: shr     eax, 0Eh
0x4E297B: test    al, 1
0x4E297D: mov     [esp+28h+var_4], 2
0x4E2985: mov     [esp+28h+var_14], edi
0x4E2989: mov     [esp+28h+var_15], dl
0x4E298D: jnz     loc_4E2ADA
0x4E2993: mov     ecx, esi; this
0x4E2995: call    TESOjectREFR_stuffsWithPArentCell
0x4E299A: push    esi; target
0x4E299B: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x4E29A0: call    ActorProcessManager_RemoveCrimesForTarget
0x4E29A5: push    esi
0x4E29A6: call    sub_60DF00
0x4E29AB: mov     ecx, ds:0B33B00h
0x4E29B1: add     esp, 4
0x4E29B4: push    esi
0x4E29B5: call    sub_45A300
0x4E29BA: lea     ebp, [esi+44h]
0x4E29BD: mov     ecx, ebp
0x4E29BF: call    ExtraDataList_GetEnableStateParent; Returns the parent TESObjectREFR stored in ExtraEnableStateParent type 0x3F.
0x4E29C4: test    eax, eax
0x4E29C6: jz      short loc_4E29D1
0x4E29C8: push    esi
0x4E29C9: lea     ecx, [eax+44h]
0x4E29CC: call    sub_424B10
0x4E29D1: mov     ecx, ebp
0x4E29D3: call    ExtraDataList_GetEnableStateChildren; Returns the embedded child-reference list in ExtraEnableStateChildren, or null.
0x4E29D8: mov     edi, eax
0x4E29DA: test    edi, edi
0x4E29DC: jz      short loc_4E29FE
0x4E29DE: mov     edi, edi
0x4E29E0: cmp     dword ptr [edi+4], 0
0x4E29E4: jnz     short loc_4E29EB
0x4E29E6: cmp     dword ptr [edi], 0
0x4E29E9: jz      short loc_4E29FE
0x4E29EB: mov     eax, [edi]
0x4E29ED: push    0
0x4E29EF: lea     ecx, [eax+44h]
0x4E29F2: call    ExtraDataList_SetEnableStateParent; Creates or updates ExtraEnableStateParent; a null parent removes extra type 0x3F.
0x4E29F7: mov     edi, [edi+4]
0x4E29FA: test    edi, edi
0x4E29FC: jnz     short loc_4E29E0
0x4E29FE: mov     ecx, ebp
0x4E2A00: call    ExtraDataList_GetItemDropper; Returns the TESObjectREFR stored in ExtraItemDropper type 0x41.
0x4E2A05: test    eax, eax
0x4E2A07: jz      short loc_4E2A12
0x4E2A09: push    esi
0x4E2A0A: lea     ecx, [eax+44h]
0x4E2A0D: call    sub_424C00
0x4E2A12: mov     ecx, ebp
0x4E2A14: call    ExtraDataList_GetDroppedItemList; Returns the embedded reference list in ExtraDroppedItemList type 0x42.
0x4E2A19: mov     edi, eax
0x4E2A1B: test    edi, edi
0x4E2A1D: jz      short loc_4E2A3E
0x4E2A1F: nop
0x4E2A20: cmp     dword ptr [edi+4], 0
0x4E2A24: jnz     short loc_4E2A2B
0x4E2A26: cmp     dword ptr [edi], 0
0x4E2A29: jz      short loc_4E2A3E
0x4E2A2B: mov     eax, [edi]
0x4E2A2D: push    0
0x4E2A2F: lea     ecx, [eax+44h]
0x4E2A32: call    ExtraDataList_SetItemDropper; Creates/updates ExtraItemDropper; a null dropper removes extra type 0x41.
0x4E2A37: mov     edi, [edi+4]
0x4E2A3A: test    edi, edi
0x4E2A3C: jnz     short loc_4E2A20
0x4E2A3E: push    esi; a1
0x4E2A3F: call    TESObjectREFR_EnableREF
0x4E2A44: mov     ecx, ds:0B333A0h
0x4E2A4A: add     esp, 4
0x4E2A4D: push    esi
0x4E2A4E: call    sub_4416D0
0x4E2A53: mov     ecx, ds:0B33A98h
0x4E2A59: cmp     byte ptr [ecx+0CD4h], 0
0x4E2A60: jnz     short loc_4E2A81
0x4E2A62: test    dword ptr [esi+8], 40000h
0x4E2A69: jz      short loc_4E2A76
0x4E2A6B: push    esi
0x4E2A6C: mov     ecx, (offset qword_B3BB2C+1D4h)
0x4E2A71: call    sub_679C10
0x4E2A76: push    esi; targetReference
0x4E2A77: mov     ecx, (offset qword_B3BB2C+1D4h); this
0x4E2A7C: call    ActorProcessManager_FinishHitEffectsForTarget; Verified (Oblivion): walks the temp-effect RTTI chain to NiRTTI_MagicHitEffect; for matching targetReference, calls the hit-effect detach virtual and marks the effect finished.
0x4E2A81: mov     edx, [esi+8]
0x4E2A84: shr     edx, 16h
0x4E2A87: test    dl, 1
0x4E2A8A: jz      short loc_4E2A9E
0x4E2A8C: mov     ecx, ds:0B333C4h
0x4E2A92: push    esi
0x4E2A93: add     ecx, 780h
0x4E2A99: call    BSSimpleList_Remove
0x4E2A9E: mov     eax, ds:0B33A98h
0x4E2AA3: cmp     byte ptr [eax+0CD4h], 0
0x4E2AAA: jnz     short loc_4E2AD6
0x4E2AAC: cmp     dword ptr [esi+1Ch], 0
0x4E2AB0: jz      short loc_4E2AD6
0x4E2AB2: mov     edx, [esi]
0x4E2AB4: mov     eax, [edx+170h]
0x4E2ABA: mov     ecx, esi
0x4E2ABC: call    eax
0x4E2ABE: cmp     byte ptr [eax+4], 20h ; ' '
0x4E2AC2: jnz     short loc_4E2AD6
0x4E2AC4: mov     ecx, ds:0B333A0h
0x4E2ACA: push    esi
0x4E2ACB: add     ecx, 80h ; '€'
0x4E2AD1: call    BSSimpleList_Remove
0x4E2AD6: mov     edi, [esp+28h+var_14]
0x4E2ADA: push    1; a2
0x4E2ADC: mov     ecx, esi; this
0x4E2ADE: call    TESForm_SetDeleted; Verified Oblivion setter: toggles TESFormMembr.flags bit 0x20 and marks the form modified. The TESForm_SetDeleted symbol, TESObjectREFR_destr call with true, and both low-path filters establish that this is the deleted flag.
0x4E2AE3: mov     ecx, esi
0x4E2AE5: call    TESObjectREFR_ClearAllComponents
0x4E2AEA: mov     ecx, [esi+40h]; this
0x4E2AED: test    ecx, ecx
0x4E2AEF: jz      short loc_4E2AF7
0x4E2AF1: push    esi; reference
0x4E2AF2: call    TESObjectCELL_RemoveReference; Verified: removes a reference from the cell object list under the cell lock. For persistent cells, clears the reference's ExtraDataList cell pointer and removes it from the owning WorldSpace persistent-reference index (+0x64); for normal cells, clears its parent cell and updates changed state. No write to the separate SubSpace index (+0x60) is present.
0x4E2AF7: mov     ecx, esi; this
0x4E2AF9: call    TESObjectREFR_IsPersistent
0x4E2AFE: test    al, al
0x4E2B00: jz      short loc_4E2B28
0x4E2B02: mov     eax, ds:0B33A98h
0x4E2B07: test    eax, eax
0x4E2B09: jz      short loc_4E2B28
0x4E2B0B: cmp     byte ptr [eax+0CD4h], 0
0x4E2B12: jnz     short loc_4E2B28
0x4E2B14: lea     ecx, [esi+18h]; this
0x4E2B17: call    TESObjectREFR_TESChildCell_GetChildCell
0x4E2B1C: test    eax, eax
0x4E2B1E: jz      short loc_4E2B28
0x4E2B20: push    esi; reference
0x4E2B21: mov     ecx, eax; this
0x4E2B23: call    TESObjectCELL_RemoveReference; Verified: removes a reference from the cell object list under the cell lock. For persistent cells, clears the reference's ExtraDataList cell pointer and removes it from the owning WorldSpace persistent-reference index (+0x64); for normal cells, clears its parent cell and updates changed state. No write to the separate SubSpace index (+0x60) is present.
0x4E2B28: push    1; arg1
0x4E2B2A: push    0; canCreate
0x4E2B2C: call    InterfaceManager_GetSingleton
0x4E2B31: add     esp, 8
0x4E2B34: test    eax, eax
0x4E2B36: jz      short loc_4E2B4C
0x4E2B38: push    esi
0x4E2B39: push    1; arg1
0x4E2B3B: push    0; canCreate
0x4E2B3D: call    InterfaceManager_GetSingleton
0x4E2B42: add     esp, 8
0x4E2B45: mov     ecx, eax
0x4E2B47: call    sub_57D1A0
0x4E2B4C: cmp     ds:0B333B4h, esi
0x4E2B52: jnz     short loc_4E2B5E
0x4E2B54: mov     dword ptr ds:0B333B4h, 0
0x4E2B5E: cmp     ds:0B3B364h, esi
0x4E2B64: jnz     short loc_4E2B70
0x4E2B66: push    0
0x4E2B68: call    Player_UpdateHUDHealthBarTarget?
0x4E2B6D: add     esp, 4
0x4E2B70: mov     ecx, ds:0B333C4h
0x4E2B76: test    ecx, ecx
0x4E2B78: jz      short loc_4E2B80
0x4E2B7A: push    esi
0x4E2B7B: call    sub_663FA0
0x4E2B80: mov     cl, [esp+28h+var_15]
0x4E2B84: mov     [edi+185h], cl
0x4E2B8A: lea     ecx, [esi+44h]
0x4E2B8D: mov     byte ptr [esp+28h+var_4], 1
0x4E2B92: call    BaseExtraList_destr
0x4E2B97: mov     edi, [esi+3Ch]
0x4E2B9A: test    edi, edi
0x4E2B9C: mov     byte ptr [esp+28h+var_4], 0
0x4E2BA1: jz      short loc_4E2BBF
0x4E2BA3: lea     edx, [edi+4]
0x4E2BA6: push    edx; lpAddend
0x4E2BA7: call    dword ptr ds:0A2807Ch
0x4E2BAD: test    eax, eax
0x4E2BAF: jnz     short loc_4E2BBF
0x4E2BB1: test    edi, edi
0x4E2BB3: jz      short loc_4E2BBF
0x4E2BB5: mov     eax, [edi]
0x4E2BB7: mov     edx, [eax]
0x4E2BB9: push    1
0x4E2BBB: mov     ecx, edi
0x4E2BBD: call    edx
0x4E2BBF: mov     ecx, esi; this
0x4E2BC1: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4E2BC9: call    TESForm_destr
0x4E2BCE: mov     ecx, dword ptr [esp+28h+var_C]
0x4E2BD2: mov     large fs:0, ecx
0x4E2BD9: pop     ecx
0x4E2BDA: pop     edi
0x4E2BDB: pop     esi
0x4E2BDC: pop     ebp
0x4E2BDD: add     esp, 18h
0x4E2BE0: retn
0x9B5C00: mov     ecx, [ebp-10h]; this
0x9B5C03: jmp     TESForm_destr
0x9B5C08: mov     ecx, [ebp-10h]
0x9B5C0B: add     ecx, 3Ch ; '<'; slot
0x9B5C0E: jmp     NiPointerSlot_Release
0x9B5C13: mov     ecx, [ebp-10h]
0x9B5C16: add     ecx, 44h ; 'D'
0x9B5C19: jmp     BaseExtraList_destr
0x9B5C1E: mov     edx, [esp+arg_4]
0x9B5C22: lea     eax, [edx-18h]
0x9B5C25: mov     ecx, [edx-1Ch]
0x9B5C28: xor     ecx, eax
0x9B5C2A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5C2F: mov     eax, offset stru_AE0BF0
0x9B5C34: jmp     ___CxxFrameHandler3
