0x60C940: push    ebp; ArrowProjectile shot constructor. ammoEntry is mandatory and unconditionally dereferenced; weaponEntry is optional internally although Actor_ProcessAction requires both. Native damage combines WEAP+AMMO contributions. Poison consumption and enchantment-charge reduction occur before process/node/cell construction with no rollback. On completion it has cell-attached the projectile and incremented g_liveArrowProjectileCount, returns placement this, and still has not performed inventory depletion or ActorProcessManager insertion. External ThrowingWeapon contrast after this native result: supplying source-WEAP damage in both proxy AMMO and real WEAP entries creates a double contribution, and destroying the projectile does not restore consumed poison or charge.
0x60C941: mov     ebp, esp
0x60C943: and     esp, 0FFFFFFF0h
0x60C946: push    0FFFFFFFFh
0x60C948: push    offset SEH_60C940
0x60C94D: mov     eax, large fs:0
0x60C953: push    eax
0x60C954: sub     esp, 48h
0x60C957: mov     eax, ds:0B30AACh
0x60C95C: xor     eax, esp
0x60C95E: mov     [esp+54h+var_14], eax
0x60C962: push    ebx
0x60C963: push    esi
0x60C964: push    edi
0x60C965: mov     eax, ds:0B30AACh
0x60C96A: xor     eax, esp
0x60C96C: push    eax
0x60C96D: lea     eax, [esp+64h+var_C]
0x60C971: mov     large fs:0, eax
0x60C977: mov     eax, [ebp+ammoEntry]
0x60C97A: mov     ebx, [ebp+owner]
0x60C97D: mov     edi, [ebp+weaponEntry]
0x60C980: mov     esi, ecx
0x60C982: mov     [esp+64h+var_34], esi
0x60C986: mov     [esp+64h+anonymous_0+4], eax; a3
0x60C98A: call    MobilObject_constr
0x60C98F: fld1
0x60C991: mov     edx, [esp+64h+anonymous_0+4]
0x60C995: xor     ecx, ecx
0x60C997: cmp     edi, ecx
0x60C999: mov     dword ptr [esi], offset ??_7ArrowProjectile@@6BArrowProjectile@@@; const ArrowProjectile::`vftable'{for `ArrowProjectile'}
0x60C99F: mov     dword ptr [esi+18h], offset ??_7ArrowProjectile@@6BTESChildCell@@@; const ArrowProjectile::`vftable'{for `TESChildCell'}
0x60C9A6: mov     eax, [edx+8]; ammoEntry->type is loaded from EntryData+0x08. This TESObjectAMMO becomes the projectile's source/base form; the WEAP entry is not used as projectile base.
0x60C9A9: fst     dword ptr [esi+64h]; Initialize projectile +0x64 presentation alpha/fade scalar to 1.0; lifecycle state 3 later reduces it over three seconds.
0x60C9AC: mov     [esi+5Ch], ecx
0x60C9AF: mov     [esi+60h], ecx; Initialize ArrowProjectile lifecycle +0x60 to state 0 (active flight). This field is separate from collisionData->state at +0x5C.
0x60C9B2: fld     dword ptr [eax+7Ch]
0x60C9B5: fstp    [esp+64h+a4]; Read TESObjectAMMO projectile speed at form+0x7C; native speed is then scaled by the projectile-speed game setting and attack-strength curve.
0x60C9B9: mov     [esp+64h+baseForm], eax
0x60C9BD: fld     dword ptr ds:0B37040h
0x60C9C3: mov     [esp+64h+var_4], ecx
0x60C9C7: fmul    [esp+64h+a4]
0x60C9CB: fstp    [esp+64h+a4]; a4
0x60C9CF: fld     [esp+64h+a4]
0x60C9D3: fst     dword ptr [esi+6Ch]; Initial scalar speed = AMMO projectile-speed field * global speed multiplier.
0x60C9D6: fld     [ebp+attackStrength]
0x60C9D9: fld     st
0x60C9DB: fld1
0x60C9DD: fsubrp  st(1), st
0x60C9DF: fmul    dword ptr ds:0B37090h
0x60C9E5: mov     [esi+78h], ebx; Store shooter reference for attribution and player-only launch-obstruction handling; projectile base form remains AMMO.
0x60C9E8: faddp   st(1), st
0x60C9EA: fmulp   st(1), st
0x60C9EC: fstp    dword ptr [esi+6Ch]; Final launch speed scales initial speed by draw-strength interpolation: strength + (1-strength)*minimum-draw-speed factor.
0x60C9EF: fst     dword ptr [esi+74h]
0x60C9F2: fldz
0x60C9F4: fstp    dword ptr [esi+68h]
0x60C9F7: mov     eax, ds:0B3F9A8h
0x60C9FC: mov     [esi+88h], eax
0x60CA02: mov     edx, ds:0B3F9ACh
0x60CA08: mov     [esi+8Ch], edx
0x60CA0E: mov     eax, ds:0B3F9B0h
0x60CA13: mov     [esi+90h], eax
0x60CA19: mov     [esi+94h], cl
0x60CA1F: mov     [esi+98h], ecx
0x60CA25: mov     [esi+95h], cl
0x60CA2B: mov     [esi+96h], cl
0x60CA31: mov     [esi+97h], cl; Initialize ArrowProjectile +0x97 impact-impulse one-shot guard to false.
0x60CA37: jz      loc_60CC16
0x60CA3D: cmp     ebx, ecx
0x60CA3F: jz      loc_60CC16
0x60CA45: push    ecx
0x60CA46: fstp    [esp+68h+var_68.x]; damageOffset
0x60CA49: push    ebx; owner
0x60CA4A: mov     ecx, edi; this
0x60CA4C: call    EquippedWeaponData_GetDamage; TES4 authoritative call ABI: EntryData in ECX, Actor* owner as first stack argument, float damageOffset as second; returns damage through ST0 and ends with retn 8. This type is required to keep ArrowProjectile constructor stack analysis correct.
0x60CA51: fstp    qword ptr [esp+64h+a4]; Compute equipped WEAP contribution to physical projectile damage using shooter context.
0x60CA55: fld1
0x60CA57: push    ecx
0x60CA58: mov     ecx, [esp+68h+anonymous_0+4]; this
0x60CA5C: fstp    [esp+68h+var_68.x]; damageOffset
0x60CA5F: push    ebx; owner
0x60CA60: call    EquippedWeaponData_GetDamage; TES4 authoritative call ABI: EntryData in ECX, Actor* owner as first stack argument, float damageOffset as second; returns damage through ST0 and ends with retn 8. This type is required to keep ArrowProjectile constructor stack analysis correct.
0x60CA65: fadd    qword ptr [esp+64h+a4]
0x60CA69: mov     ecx, edi; this
0x60CA6B: fstp    [esp+64h+a4]; Add equipped AMMO damage contribution to WEAP damage before draw-strength scaling.
0x60CA6F: fld     [esp+64h+a4]
0x60CA73: fmul    [ebp+attackStrength]
0x60CA76: fstp    dword ptr [esi+70h]; Store projectile physical damage = (WEAP damage + AMMO damage) * attackStrength.
0x60CA79: call    EquippedEntryData_GetPoison; Capture poison from the equipped WEAP EntryData into the independent projectile.
0x60CA7E: test    eax, eax
0x60CA80: mov     [esi+84h], eax
0x60CA86: jz      short loc_60CA8F
0x60CA88: mov     ecx, edi; this
0x60CA8A: call    EquippedEntryData_ConsumePoison; Consume/remove poison from equipped WEAP EntryData at projectile construction, not at impact.
0x60CA8F: mov     ecx, [esp+64h+baseForm]
0x60CA93: mov     eax, [ecx+58h]
0x60CA96: push    0; int
0x60CA98: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x60CA9D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x60CAA2: mov     [esi+7Ch], eax; Capture AMMO form enchantment as projectile arrowEnch; no per-stack AMMO instance is retained.
0x60CAA5: mov     eax, [edi+8]
0x60CAA8: push    0; int
0x60CAAA: push    eax; void *
0x60CAAB: call    OblivionDynamicCast
0x60CAB0: xor     edx, edx
0x60CAB2: add     esp, 14h
0x60CAB5: cmp     eax, edx
0x60CAB7: jz      short loc_60CAC4
0x60CAB9: mov     cl, [eax+9Ch]
0x60CABF: and     cl, 1
0x60CAC2: jmp     short loc_60CAC6
0x60CAC4: xor     cl, cl
0x60CAC6: cmp     eax, edx
0x60CAC8: mov     [esi+96h], cl
0x60CACE: mov     [esi+80h], edx
0x60CAD4: jz      short loc_60CADF
0x60CAD6: mov     eax, [eax+64h]
0x60CAD9: mov     [esp+64h+anonymous_0+4], eax
0x60CADD: jmp     short loc_60CAE3
0x60CADF: mov     [esp+64h+anonymous_0+4], edx
0x60CAE3: cmp     [esp+64h+anonymous_0+4], edx
0x60CAE7: jz      loc_60CB95
0x60CAED: mov     ecx, edi; this
0x60CAEF: call    EquippedEntryData_GetCharge; Return per-instance ExtraCharge when present; otherwise return the TESEnchantableForm base charge. Returns the sentinel/default when the EntryData form is not enchantable.
0x60CAF4: fstp    [esp+64h+var_38]
0x60CAF8: mov     ecx, [esp+64h+anonymous_0+4]
0x60CAFC: mov     edx, [ecx+24h]
0x60CAFF: mov     eax, [edx]
0x60CB01: add     ecx, 24h ; '$'
0x60CB04: push    ebx
0x60CB05: call    eax
0x60CB07: fstp    [esp+64h+a4]
0x60CB0B: fld     [esp+64h+var_38]
0x60CB0F: fld     [esp+64h+a4]
0x60CB13: fcompp
0x60CB15: fnstsw  ax
0x60CB17: test    ah, 41h
0x60CB1A: jp      short loc_60CB8E
0x60CB1C: mov     eax, [edi]
0x60CB1E: mov     eax, [eax]
0x60CB20: push    eax; targetStack
0x60CB21: lea     ecx, [ebx+44h]; this
0x60CB24: call    ExtraDataList_GetContainerChanges
0x60CB29: fld     [esp+68h+var_38]
0x60CB2D: fsub    [esp+68h+a4]
0x60CB31: push    eax; containerChanges
0x60CB32: push    ecx
0x60CB33: mov     ecx, edi; this
0x60CB35: fstp    [esp+70h+a4]; Compute remaining equipped-WEAP enchantment charge after shot cost.
0x60CB39: fld     [esp+70h+a4]
0x60CB3D: fstp    [esp+70h+newCharge]; newCharge
0x60CB40: call    EquippedEntryData_SetCharge; Commit reduced charge to the equipped WEAP instance at projectile construction.
0x60CB45: cmp     dword ptr [ebx+58h], 0
0x60CB49: jz      short loc_60CB84
0x60CB4B: mov     ecx, edi; this
0x60CB4D: call    EquippedEntryData_GetCharge; Return per-instance ExtraCharge when present; otherwise return the TESEnchantableForm base charge. Returns the sentinel/default when the EntryData form is not enchantable.
0x60CB52: fstp    qword ptr [esp+64h+a4]
0x60CB56: mov     ecx, [esp+64h+anonymous_0+4]
0x60CB5A: mov     edx, [ecx+24h]
0x60CB5D: mov     eax, [edx]
0x60CB5F: add     ecx, 24h ; '$'
0x60CB62: push    ebx
0x60CB63: call    eax
0x60CB65: fcomp   qword ptr [esp+64h+a4]
0x60CB69: fnstsw  ax
0x60CB6B: test    ah, 41h
0x60CB6E: jnz     short loc_60CB84
0x60CB70: mov     ecx, [ebx+58h]
0x60CB73: mov     edx, [ecx]
0x60CB75: mov     eax, [edx+42Ch]
0x60CB7B: push    0
0x60CB7D: push    0
0x60CB7F: push    1
0x60CB81: push    ebx
0x60CB82: call    eax
0x60CB84: mov     ecx, [esp+64h+anonymous_0+4]
0x60CB88: mov     [esi+80h], ecx; Store bow enchantment on projectile only when the equipped WEAP had sufficient charge; impact later uses this retained pointer.
0x60CB8E: mov     byte ptr [esi+96h], 1
0x60CB95: mov     eax, [esi+7Ch]
0x60CB98: test    eax, eax
0x60CB9A: jnz     short loc_60CBA6
0x60CB9C: mov     eax, [esi+80h]
0x60CBA2: test    eax, eax
0x60CBA4: jz      short loc_60CC18
0x60CBA6: push    0; effectIndex
0x60CBA8: lea     ecx, [eax+18h]; magicItem
0x60CBAB: call    MagicItem_GetFXEffect; Verified (Oblivion): MagicItem_GetFXEffect returns the effect's EffectSetting pointer; MagicShaderHitEffect constructors/PostLink dereference its +0x78 EffectSetting::effectShader field.
0x60CBB0: test    eax, eax
0x60CBB2: jz      short loc_60CC18
0x60CBB4: mov     edi, [eax+7Ch]
0x60CBB7: test    edi, edi
0x60CBB9: jz      short loc_60CC18
0x60CBBB: push    4Ch ; 'L'; Size
0x60CBBD: call    FormHeapAlloc; Allocate the projectile magic-hit-effect object (0x4C bytes). This allocation is not handled as a recoverable constructor failure.
0x60CBC2: add     esp, 4
0x60CBC5: mov     [esp+64h+a4], eax
0x60CBC9: test    eax, eax
0x60CBCB: mov     byte ptr [esp+64h+var_4], 1
0x60CBD0: jz      short loc_60CBE9
0x60CBD2: fld     dword ptr ds:0A30634h
0x60CBD8: push    ecx
0x60CBD9: fstp    [esp+68h+var_68.x]; elapsedSeconds
0x60CBDC: push    edi; effectShader
0x60CBDD: push    esi; targetReference
0x60CBDE: mov     ecx, eax; this
0x60CBE0: call    MagicShaderHitEffect_constr_args2
0x60CBE5: mov     edi, eax
0x60CBE7: jmp     short loc_60CBEB
0x60CBE9: xor     edi, edi
0x60CBEB: mov     edx, [edi]; Fatal OOM path: the magic-hit-effect allocation result is dereferenced immediately; null does not propagate as a constructor failure return.
0x60CBED: mov     eax, [edx+68h]
0x60CBF0: mov     ecx, edi
0x60CBF2: mov     byte ptr [esp+64h+var_4], 0
0x60CBF7: call    eax
0x60CBF9: test    al, al
0x60CBFB: jz      short loc_60CC0A
0x60CBFD: push    edi; effect
0x60CBFE: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x60CC03: call    ActorProcessManager_RegisterTempEffect; [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
0x60CC08: jmp     short loc_60CC18
0x60CC0A: mov     edx, [edi]
0x60CC0C: mov     eax, [edx]
0x60CC0E: push    1
0x60CC10: mov     ecx, edi
0x60CC12: call    eax
0x60CC14: jmp     short loc_60CC18
0x60CC16: fstp    st
0x60CC18: mov     ecx, [ebp+originX]
0x60CC1B: mov     edx, [ebp+originY]
0x60CC1E: sub     esp, 0Ch
0x60CC21: mov     eax, esp
0x60CC23: mov     [eax], ecx
0x60CC25: mov     ecx, [ebp+originZ]
0x60CC28: mov     [eax+4], edx
0x60CC2B: mov     [eax+8], ecx
0x60CC2E: mov     ecx, esi; this
0x60CC30: call    TESObjectREFR_SetPosition; Initialize projectile world position from constructor originX/originY/originZ.
0x60CC35: push    2ECh; Allocate a HighProcess (0x2EC bytes) for the new ArrowProjectile before scene generation.
0x60CC3A: call    FormHeapAlloc; Allocate a HighProcess for the new projectile. On allocation failure native code stores a null process and continues local construction; there is no error return.
0x60CC3F: add     esp, 4
0x60CC42: mov     [esp+64h+a4], eax
0x60CC46: test    eax, eax
0x60CC48: mov     byte ptr [esp+64h+var_4], 2
0x60CC4D: jz      short loc_60CC58
0x60CC4F: mov     ecx, eax; this
0x60CC51: call    ??0HighProcess@@QAE@XZ; HighProcess constructor: derives from MiddleHighProcess, then installs HighProcess vtable and initializes movementFlags at +0x1FC to 0. Confirms movement flag storage is HighProcess-only.
0x60CC56: jmp     short loc_60CC5A
0x60CC58: xor     eax, eax; HighProcess allocation failed: store null at MobileObject+0x58 and continue. If construction completes, Actor_GetProcessLevel returns -1 and requested level-0 manager insertion is silently rejected.
0x60CC5A: fld     [ebp+yawZ]
0x60CC5D: push    ecx
0x60CC5E: mov     ecx, esi; this
0x60CC60: fstp    [esp+68h+var_68.x]; radians
0x60CC63: mov     byte ptr [esp+68h+var_4], 0
0x60CC68: mov     [esi+58h], eax; Assign the newly constructed HighProcess to MobileObject+0x58.
0x60CC6B: call    TESObjectREFR_SetRotationZ; Store launch yaw Z supplied by Actor_ProcessAction; projectile orientation is independent from the released ArrowBone clone.
0x60CC70: fld     [ebp+pitchX]
0x60CC73: push    ecx
0x60CC74: mov     ecx, esi; this
0x60CC76: fstp    [esp+68h+var_68.x]; radians
0x60CC79: call    TESObjectREFR_SetRotationX; Store launch pitch X supplied by Actor_ProcessAction; roll Y is forced to zero.
0x60CC7E: fldz
0x60CC80: push    ecx
0x60CC81: fstp    [esp+68h+var_68.x]; radians
0x60CC84: mov     ecx, esi; this
0x60CC86: call    TESObjectREFR_SetRotationY; Set projectile reference rotation Y (roll) to zero.
0x60CC8B: test    ebx, ebx
0x60CC8D: jz      short loc_60CC9E
0x60CC8F: mov     ecx, ebx; this
0x60CC91: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x60CC96: push    eax
0x60CC97: mov     ecx, esi
0x60CC99: call    MobileObject_ChangeCell
0x60CC9E: mov     edx, [esp+64h+baseForm]
0x60CCA2: push    edx; baseForm
0x60CCA3: mov     ecx, esi; this
0x60CCA5: call    TESObjectREFR_SetBaseForm; Hard recovery boundary: set ArrowProjectile.baseForm to ammoEntry->type. weaponEntry contributes damage/enchantment/poison/flags only and its WEAP form is not retained by the projectile.
0x60CCAA: mov     ecx, esi; this
0x60CCAC: call    MobileObject_GenerateNiNode; Generate a separate projectile-owned NiNode from the AMMO base form/model after cell and transform initialization.
0x60CCB1: test    eax, eax
0x60CCB3: jz      short loc_60CCC1
0x60CCB5: push    offset aArrow; "Arrow"
0x60CCBA: mov     ecx, eax
0x60CCBC: call    NiObjectNET_SetName; Name the generated projectile root "Arrow". This node is distinct from the actor-owned equipped/held model.
0x60CCC1: mov     ecx, esi; this
0x60CCC3: call    ArrowProjectile_InitializeNodeLocalTransformAndCollision; Initialize the generated projectile root's local transform and collision filter, then ensure recursive alpha properties. This call does not perform a local-to-world transform update.
0x60CCC8: fld     [ebp+attackStrength]
0x60CCCB: push    ecx
0x60CCCC: fstp    [esp+68h+var_68.x]; attackStrength
0x60CCCF: push    ebx; shooter
0x60CCD0: mov     ecx, esi; this
0x60CCD2: call    ArrowProjectile_EnsureCharacterProxy; Ensures a high-process ArrowProjectile owns a sphere-based bhk character proxy. Builds projectile collision layer 6 independently of the visible NIF, derives gravity/collision metadata from shooter and attack strength, attaches the projectile NiNode, and initializes water-height/filter state.
0x60CCD7: fld     dword ptr ds:0A7DEB4h
0x60CCDD: fchs
0x60CCDF: mov     ecx, esi; this
0x60CCE1: fstp    [esp+64h+var_30]
0x60CCE5: fldz
0x60CCE7: fst     [esp+64h+var_2C]
0x60CCEB: fst     [esp+64h+var_28]
0x60CCEF: fstp    [esp+64h+var_24]
0x60CCF3: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x60CCF8: test    eax, eax
0x60CCFA: jz      short loc_60CD0F
0x60CCFC: mov     eax, [eax+8]
0x60CCFF: test    eax, eax
0x60CD01: jz      short loc_60CD0F
0x60CD03: lea     ecx, [esp+64h+var_30]
0x60CD07: push    ecx; a2
0x60CD08: mov     ecx, eax; this
0x60CD0A: call    sub_8AC0B0; TES4 authoritative: writes proxy velocity vector back into bhk collision object+0x10. Climbing/Slowfall velocity edits must happen before these calls or must write both proxy+0x2E0 and object+0x10 after the fact.
0x60CD0F: push    esi; reference
0x60CD10: mov     ecx, esi; this
0x60CD12: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x60CD17: mov     ecx, eax; this
0x60CD19: call    TESObjectCELL_AddReference; Verified: persistent-cell AddReference updates the WorldSpace coordinate/fallback persistent-reference index (+0x64) through TESWorldSpace_IndexReference. Ordinary cell additions do not index there. This routine does not populate the separate SubSpace spatial index at +0x60.
0x60CD1E: mov     ecx, esi; this
0x60CD20: call    ArrowProjectile_CheckPlayerLaunchObstruction; Player-only launch-obstruction ray test from projectile origin toward player eye/reference height. A valid early hit is routed through normal ArrowProjectile collision handling and collision-state resolution; non-player shots skip this path.
0x60CD25: mov     eax, ds:0B3B7D0h; After constructing a shot, increment g_liveArrowProjectileCount and compare against iArrowMaxRefCount (default 15).
0x60CD2A: mov     ecx, ds:0B370D0h
0x60CD30: add     eax, 1
0x60CD33: cmp     eax, ecx
0x60CD35: mov     ds:0B3B7D0h, eax
0x60CD3A: jle     short loc_60CD47
0x60CD3C: push    0; destroyImmediately
0x60CD3E: push    ecx; maximumReferenceCount
0x60CD3F: call    ArrowProjectile_PruneOldestSettled; When live count exceeds iArrowMaxRefCount, request deferred pruning of the oldest lifecycle-state-2 projectile.
0x60CD44: add     esp, 8
0x60CD47: mov     eax, esi
0x60CD49: mov     ecx, dword ptr [esp+64h+var_C]
0x60CD4D: mov     large fs:0, ecx
0x60CD54: pop     ecx
0x60CD55: pop     edi
0x60CD56: pop     esi
0x60CD57: pop     ebx
0x60CD58: mov     ecx, [esp+54h+var_14]
0x60CD5C: xor     ecx, esp
0x60CD5E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60CD63: mov     esp, ebp
0x60CD65: pop     ebp
0x60CD66: retn    24h ; '$'
0x9C3040: mov     ecx, [ebp+var_34]
0x9C3043: jmp     MobileObject_destr
0x9C3048: mov     eax, [ebp+a4]
0x9C304B: push    eax
0x9C304C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3051: pop     ecx
0x9C3052: retn
0x9C3053: mov     eax, [ebp+a4]
0x9C3056: push    eax
0x9C3057: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C305C: pop     ecx
0x9C305D: retn
0x9C305E: mov     edx, [esp-4+originX]
0x9C3062: lea     eax, [edx-54h]
0x9C3065: mov     ecx, [edx-58h]
0x9C3068: xor     ecx, eax
0x9C306A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C306F: add     eax, 0Ch
0x9C3072: mov     ecx, [edx-8]
0x9C3075: xor     ecx, eax
0x9C3077: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C307C: mov     eax, offset stru_AEBD1C
0x9C3081: jmp     ___CxxFrameHandler3
