0x6575B0: push    0FFFFFFFFh; Verified (Oblivion): the same method is present in HighProcess and MiddleHighProcess vtable groups. It refreshes per-target enchantment shader state and the PlayerCharacter cache; the exact shared subobject interface name remains Candidate.
0x6575B2: push    offset SEH_6575B0
0x6575B7: mov     eax, large fs:0
0x6575BD: push    eax
0x6575BE: sub     esp, 8
0x6575C1: push    ebx
0x6575C2: push    ebp
0x6575C3: push    esi
0x6575C4: push    edi
0x6575C5: mov     eax, ds:0B30AACh
0x6575CA: xor     eax, esp
0x6575CC: push    eax
0x6575CD: lea     eax, [esp+28h+var_C]
0x6575D1: mov     large fs:0, eax
0x6575D7: mov     esi, ecx
0x6575D9: cmp     [esp+28h+arg4], 0
0x6575DE: mov     ebp, [esp+28h+targetReference]
0x6575E2: mov     byte ptr [esi+160h], 0
0x6575E9: jz      short loc_657603
0x6575EB: push    ebp; targetReference
0x6575EC: mov     ecx, (offset qword_B3BB2C+1D4h); this
0x6575F1: call    ActorProcessManager_FindTargetNonWeaponShaderHitEffect; Verified (Oblivion): weapon-enchantment refresh first queries the manager for an existing non-weapon shader candidate on this target and reinitializes the returned object before handling the weapon-enchantment-specific instance.
0x6575F6: test    eax, eax
0x6575F8: jz      short loc_657603
0x6575FA: mov     edx, [eax]
0x6575FC: mov     ecx, eax
0x6575FE: mov     eax, [edx+68h]
0x657601: call    eax
0x657603: cmp     [esp+28h+arg3], 0
0x657608: jz      loc_657850
0x65760E: mov     edx, [esi]
0x657610: mov     eax, [edx+420h]
0x657616: push    0
0x657618: mov     ecx, esi
0x65761A: call    eax
0x65761C: mov     ecx, [ebp+58h]
0x65761F: test    ecx, ecx
0x657621: jz      loc_6576BE
0x657627: mov     edx, [ecx]
0x657629: mov     eax, [edx+0ECh]
0x65762F: push    1
0x657631: call    eax
0x657633: test    eax, eax
0x657635: jz      loc_6576BE
0x65763B: mov     ecx, [ebp+58h]
0x65763E: mov     edx, [ecx]
0x657640: mov     eax, [edx+13Ch]
0x657646: call    eax
0x657648: test    al, al
0x65764A: jnz     short loc_6576BE
0x65764C: mov     edx, [esi]
0x65764E: mov     eax, [edx+0ECh]
0x657654: push    1
0x657656: mov     ecx, esi
0x657658: call    eax
0x65765A: mov     eax, [eax+8]
0x65765D: push    eax
0x65765E: call    TESEnchantableForm_GetFormEnchantment
0x657663: mov     edi, eax
0x657665: add     esp, 4
0x657668: test    edi, edi
0x65766A: jz      short loc_6576BE
0x65766C: mov     ecx, [ebp+58h]
0x65766F: mov     edx, [ecx]
0x657671: mov     eax, [edx+0ECh]
0x657677: push    1
0x657679: call    eax
0x65767B: mov     ecx, eax; this
0x65767D: call    EquippedEntryData_GetCharge; Return per-instance ExtraCharge when present; otherwise return the TESEnchantableForm base charge. Returns the sentinel/default when the EntryData form is not enchantable.
0x657682: fstp    [esp+28h+var_14]
0x657686: mov     edx, [edi+24h]
0x657689: mov     eax, [edx]
0x65768B: lea     ecx, [edi+24h]
0x65768E: push    ebp
0x65768F: call    eax
0x657691: fcomp   [esp+28h+var_14]
0x657695: fnstsw  ax
0x657697: test    ah, 41h
0x65769A: jp      short loc_6576BE
0x65769C: push    0; effectIndex
0x65769E: lea     ecx, [edi+18h]; magicItem
0x6576A1: call    MagicItem_GetFXEffect; Verified (Oblivion): MagicItem_GetFXEffect returns the effect's EffectSetting pointer; MagicShaderHitEffect constructors/PostLink dereference its +0x78 EffectSetting::effectShader field.
0x6576A6: test    eax, eax
0x6576A8: jz      short loc_6576BE
0x6576AA: mov     eax, [eax+7Ch]
0x6576AD: test    eax, eax
0x6576AF: jz      short loc_6576BE
0x6576B1: mov     edx, [esi]
0x6576B3: push    eax
0x6576B4: mov     eax, [edx+420h]
0x6576BA: mov     ecx, esi
0x6576BC: call    eax
0x6576BE: mov     edx, [esi]
0x6576C0: mov     eax, [edx+41Ch]
0x6576C6: mov     ecx, esi
0x6576C8: mov     [esp+28h+arg4], 0
0x6576CD: call    eax
0x6576CF: push    eax; effectShader
0x6576D0: push    ebp; targetReference
0x6576D1: mov     ecx, (offset qword_B3BB2C+1D4h); this
0x6576D6: call    ActorProcessManager_FindWeaponEnchantmentShader; Verified (Oblivion): weapon-enchantment refresh first asks ActorProcessManager_FindWeaponEnchantmentShader for an active matching effect. Existing effects are reinitialized; otherwise a new effect is created, flagged bWeaponEnchantment_28, and registered.
0x6576DB: test    eax, eax
0x6576DD: jz      short loc_6576ED
0x6576DF: mov     edx, [eax]
0x6576E1: mov     ecx, eax
0x6576E3: mov     eax, [edx+68h]
0x6576E6: call    eax
0x6576E8: jmp     loc_65777C
0x6576ED: mov     edx, [esi]
0x6576EF: mov     eax, [edx+41Ch]
0x6576F5: mov     ecx, esi
0x6576F7: call    eax
0x6576F9: test    eax, eax
0x6576FB: jz      short loc_65777C
0x6576FD: push    4Ch ; 'L'; Size
0x6576FF: call    FormHeapAlloc
0x657704: mov     edi, eax
0x657706: add     esp, 4
0x657709: mov     dword ptr [esp+28h+arg3], edi
0x65770D: test    edi, edi
0x65770F: mov     [esp+28h+var_4], 0
0x657717: jz      short loc_65773C
0x657719: mov     edx, [esi]
0x65771B: fld     dword ptr ds:0A30634h
0x657721: mov     eax, [edx+41Ch]
0x657727: push    ecx
0x657728: mov     ecx, esi
0x65772A: fstp    [esp+2Ch+elapsedSeconds]; elapsedSeconds
0x65772D: call    eax
0x65772F: push    eax; effectShader
0x657730: push    ebp; targetReference
0x657731: mov     ecx, edi; this
0x657733: call    MagicShaderHitEffect_constr_args2
0x657738: mov     edi, eax
0x65773A: jmp     short loc_65773E
0x65773C: xor     edi, edi
0x65773E: mov     bl, [esp+28h+arg5]
0x657742: test    bl, bl
0x657744: mov     [esp+28h+var_4], 0FFFFFFFFh
0x65774C: mov     byte ptr [edi+28h], 1; Verified (Oblivion): sets bWeaponEnchantment_28 immediately after constructing the shader from the equipped item's enchantment shader (EffectSetting.enchantEffect).
0x657750: jz      short loc_65775B
0x657752: fld     dword ptr ds:0A2FE7Ch
0x657758: fstp    dword ptr [edi+38h]
0x65775B: mov     edx, [edi]
0x65775D: mov     eax, [edx+68h]
0x657760: mov     ecx, edi
0x657762: call    eax
0x657764: test    al, al
0x657766: jz      short loc_65777C
0x657768: push    edi; effect
0x657769: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x65776E: call    ActorProcessManager_RegisterTempEffect; [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
0x657773: test    bl, bl
0x657775: jnz     short loc_65777C
0x657777: mov     [esp+28h+arg4], 1
0x65777C: mov     eax, ds:0B333C4h
0x657781: cmp     ebp, eax
0x657783: jnz     loc_657850
0x657789: xor     ebx, ebx
0x65778B: cmp     [eax+5D8h], ebx
0x657791: jz      loc_657850
0x657797: mov     edx, [esi]
0x657799: mov     eax, [edx+41Ch]
0x65779F: mov     ecx, esi
0x6577A1: call    eax
0x6577A3: mov     ecx, ds:0B333C4h
0x6577A9: mov     esi, [ecx+5E0h]
0x6577AF: mov     edi, eax
0x6577B1: cmp     edi, ebx
0x6577B3: jz      loc_657866
0x6577B9: cmp     esi, ebx
0x6577BB: jz      short loc_6577CC
0x6577BD: cmp     [esi+34h], edi
0x6577C0: jz      short loc_65782D
0x6577C2: mov     edx, [esi]
0x6577C4: mov     eax, [edx]
0x6577C6: push    1
0x6577C8: mov     ecx, esi
0x6577CA: call    eax
0x6577CC: push    4Ch ; 'L'; Size
0x6577CE: call    FormHeapAlloc
0x6577D3: add     esp, 4
0x6577D6: mov     dword ptr [esp+28h+arg3], eax
0x6577DA: cmp     eax, ebx
0x6577DC: mov     [esp+28h+var_4], 1
0x6577E4: jz      short loc_657801
0x6577E6: fld     dword ptr ds:0A30634h
0x6577EC: push    ecx
0x6577ED: mov     ecx, ds:0B333C4h
0x6577F3: fstp    [esp+2Ch+elapsedSeconds]; elapsedSeconds
0x6577F6: push    edi; effectShader
0x6577F7: push    ecx; targetReference
0x6577F8: mov     ecx, eax; this
0x6577FA: call    MagicShaderHitEffect_constr_args2
0x6577FF: jmp     short loc_657803
0x657801: xor     eax, eax
0x657803: cmp     [esp+28h+arg4], 0
0x657808: mov     byte ptr [eax+28h], 1; Verified (Oblivion): sets bWeaponEnchantment_28 on the player's cached weapon-enchantment shader before storing it in PlayerCharacter::unk5E0.
0x65780C: mov     edx, ds:0B333C4h
0x657812: mov     [esp+28h+var_4], 0FFFFFFFFh
0x65781A: mov     esi, eax
0x65781C: mov     [edx+5E0h], eax
0x657822: jnz     short loc_65782D
0x657824: fld     dword ptr ds:0A2FE7Ch
0x65782A: fstp    dword ptr [eax+38h]
0x65782D: mov     edx, [esi]
0x65782F: mov     eax, [edx+68h]
0x657832: mov     ecx, esi
0x657834: call    eax
0x657836: test    al, al
0x657838: jnz     short loc_657850
0x65783A: mov     edx, [esi]
0x65783C: mov     eax, [edx]
0x65783E: push    1
0x657840: mov     ecx, esi
0x657842: call    eax
0x657844: mov     ecx, ds:0B333C4h
0x65784A: mov     [ecx+5E0h], ebx
0x657850: mov     ecx, dword ptr [esp+28h+var_C]
0x657854: mov     large fs:0, ecx
0x65785B: pop     ecx
0x65785C: pop     edi
0x65785D: pop     esi
0x65785E: pop     ebp
0x65785F: pop     ebx
0x657860: add     esp, 14h
0x657863: retn    10h
0x657866: cmp     esi, ebx
0x657868: jz      short loc_657850
0x65786A: mov     eax, [esi]
0x65786C: mov     edx, [eax]
0x65786E: push    1
0x657870: mov     ecx, esi
0x657872: call    edx
0x657874: mov     eax, ds:0B333C4h
0x657879: mov     [eax+5E0h], ebx
0x65787F: jmp     short loc_657850
0x9C3BA0: mov     eax, [ebp+8]
0x9C3BA3: push    eax
0x9C3BA4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3BA9: pop     ecx
0x9C3BAA: retn
0x9C3BAB: mov     eax, [ebp+8]
0x9C3BAE: push    eax
0x9C3BAF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3BB4: pop     ecx
0x9C3BB5: retn
0x9C3BB6: mov     edx, dword ptr [esp+arg3]
0x9C3BBA: lea     eax, [edx-18h]
0x9C3BBD: mov     ecx, [edx-1Ch]
0x9C3BC0: xor     ecx, eax
0x9C3BC2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3BC7: mov     eax, offset stru_AEC704
0x9C3BCC: jmp     ___CxxFrameHandler3
