0x691030: push    0FFFFFFFFh
0x691032: push    offset BoundItemEffect_Remove_SEH
0x691037: mov     eax, large fs:0
0x69103D: push    eax
0x69103E: sub     esp, 18h
0x691041: push    ebx
0x691042: push    ebp
0x691043: push    esi
0x691044: push    edi
0x691045: mov     eax, ds:0B30AACh
0x69104A: xor     eax, esp
0x69104C: push    eax
0x69104D: lea     eax, [esp+38h+var_C]
0x691051: mov     large fs:0, eax
0x691057: mov     ebx, ecx
0x691059: mov     ecx, [ebx+20h]; this
0x69105C: test    ecx, ecx
0x69105E: jz      short loc_691069
0x691060: call    MagicTarget_GetParentActor
0x691065: mov     esi, eax
0x691067: jmp     short loc_69106B
0x691069: xor     esi, esi
0x69106B: cmp     byte ptr [ebx+84h], 0
0x691072: jz      loc_691558
0x691078: test    esi, esi
0x69107A: jz      loc_691558
0x691080: mov     eax, [ebx+38h]
0x691083: push    0; int
0x691085: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x69108A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x69108F: push    0; int
0x691091: push    eax; void *
0x691092: call    OblivionDynamicCast
0x691097: push    0; int
0x691099: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x69109E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6910A3: mov     ebp, eax
0x6910A5: mov     eax, [ebx+38h]
0x6910A8: push    0; int
0x6910AA: push    eax; void *
0x6910AB: call    OblivionDynamicCast
0x6910B0: add     esp, 28h
0x6910B3: test    ebp, ebp
0x6910B5: mov     edi, eax
0x6910B7: jz      loc_691212
0x6910BD: push    0; a2
0x6910BF: mov     ecx, esi; this
0x6910C1: call    Actor_GetActorBaseForm
0x6910C6: test    eax, eax
0x6910C8: jz      short loc_6910CF
0x6910CA: add     eax, 44h ; 'D'
0x6910CD: jmp     short loc_6910D1
0x6910CF: xor     eax, eax
0x6910D1: push    eax
0x6910D2: push    esi; a1
0x6910D3: call    ContainerExtraData_GetContainerExtraDataForRef
0x6910D8: add     esp, 8
0x6910DB: push    0
0x6910DD: push    ebp
0x6910DE: mov     ecx, eax
0x6910E0: call    ExtraContainerChanges_SetEquipped
0x6910E5: test    eax, eax
0x6910E7: jz      short loc_6910F0
0x6910E9: mov     ecx, eax
0x6910EB: call    sub_41F6D0
0x6910F0: mov     ecx, esi
0x6910F2: call    Actor_GetCurrentAction; Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
0x6910F7: cmp     eax, 6
0x6910FA: ja      short loc_691107
0x6910FC: push    0; sequence
0x6910FE: push    0FFFFFFFFh; action
0x691100: mov     ecx, esi; this
0x691102: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x691107: push    0
0x691109: push    0
0x69110B: push    0
0x69110D: push    0
0x69110F: push    1
0x691111: push    ebp
0x691112: mov     ecx, esi
0x691114: call    Actor_UnequipItem
0x691119: mov     eax, [esi]
0x69111B: mov     edx, [eax+100h]
0x691121: push    0
0x691123: push    1
0x691125: push    0
0x691127: push    0
0x691129: push    0
0x69112B: push    0
0x69112D: push    0
0x69112F: push    1
0x691131: push    0
0x691133: push    ebp
0x691134: mov     ecx, esi
0x691136: call    edx
0x691138: mov     eax, [ebx+3Ch]
0x69113B: test    eax, eax
0x69113D: jz      loc_69140C
0x691143: cmp     dword ptr [eax], 0
0x691146: jz      short loc_69114E
0x691148: mov     ecx, [eax]
0x69114A: mov     ebp, [ecx]
0x69114C: jmp     short loc_691150
0x69114E: xor     ebp, ebp
0x691150: mov     eax, [eax+8]
0x691153: push    eax; item
0x691154: mov     ecx, esi; this
0x691156: call    TESObjectREFR_GetItemCount; TESObjectREFR inventory count accessor: returns 0 when the reference has no container or no ContainerChanges; otherwise asks ContainerExtraData_GetItemCount(this, item), which combines base TESContainer count with EntryData.countDelta. Exact ABI is thiscall (TESObjectREFR *this, TESForm *item).
0x69115B: cmp     eax, 1
0x69115E: jl      short loc_691175
0x691160: mov     eax, [ebx+3Ch]
0x691163: mov     eax, [eax+8]
0x691166: push    0
0x691168: push    1
0x69116A: push    ebp
0x69116B: push    1
0x69116D: push    eax
0x69116E: mov     ecx, esi
0x691170: call    Actor_EquipItem; UCWUS pipeline note: Actor equip path is not currently hooked by UCWUS.dll. Bridge replacement scripts own equip selection/token setup through OBSE commands.
0x691175: cmp     byte ptr [ebx+86h], 0
0x69117C: jz      short loc_6911CD
0x69117E: mov     ecx, [ebx+3Ch]
0x691181: mov     eax, [ecx+8]
0x691184: push    0; int
0x691186: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x69118B: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x691190: push    0; int
0x691192: push    eax; void *
0x691193: call    OblivionDynamicCast
0x691198: add     esp, 14h
0x69119B: test    eax, eax
0x69119D: jz      short loc_6911C6
0x69119F: lea     edi, [eax+30h]
0x6911A2: mov     ecx, edi; compactString
0x6911A4: call    OB_CompactString_Length_010201A0; Bethesda compact string length helper. If inline length marker is 0xFFFF, strlen(heap string); otherwise returns the 16-bit stored length. Used here to gate optional TESObjectTREE leaf texture.
0x6911A9: test    eax, eax
0x6911AB: jbe     short loc_6911C6
0x6911AD: mov     edx, [edi]
0x6911AF: mov     eax, [edx+14h]
0x6911B2: push    1
0x6911B4: push    0
0x6911B6: mov     ecx, edi
0x6911B8: call    eax
0x6911BA: mov     ecx, ds:0B33A1Ch
0x6911C0: push    eax
0x6911C1: call    QueuedModelLoader_RemoveModel
0x6911C6: mov     byte ptr [ebx+86h], 0
0x6911CD: test    ebp, ebp
0x6911CF: jz      short loc_6911D8
0x6911D1: mov     ecx, ebp
0x6911D3: call    sub_41F670
0x6911D8: mov     ecx, [ebx+3Ch]
0x6911DB: call    ContainerEntryExtraData_ClearDataTable
0x6911E0: mov     edi, [ebx+3Ch]
0x6911E3: test    edi, edi
0x6911E5: jz      short loc_6911F7
0x6911E7: mov     ecx, edi
0x6911E9: call    ContainerEntryExtraData_DestroyDataTable
0x6911EE: push    edi
0x6911EF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6911F4: add     esp, 4
0x6911F7: mov     dword ptr [ebx+3Ch], 0
0x6911FE: mov     ecx, [esi+58h]
0x691201: mov     edx, [ecx]
0x691203: mov     eax, [edx+300h]
0x691209: push    1
0x69120B: call    eax
0x69120D: jmp     loc_69140C
0x691212: test    edi, edi
0x691214: jz      loc_69140C
0x69121A: mov     edx, [esi]
0x69121C: mov     eax, [edx+170h]
0x691222: push    0; int
0x691224: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x691229: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x69122E: push    0; int
0x691230: mov     ecx, esi
0x691232: mov     [esp+48h+var_14], 0
0x69123A: call    eax
0x69123C: push    eax; void *
0x69123D: call    OblivionDynamicCast
0x691242: add     esp, 14h
0x691245: test    eax, eax
0x691247: jz      short loc_691254
0x691249: mov     ecx, eax
0x69124B: call    TESActorBase_IsFemale
0x691250: mov     [esp+38h+var_14], eax
0x691254: push    0; a2
0x691256: mov     ecx, esi; this
0x691258: call    Actor_GetActorBaseForm
0x69125D: test    eax, eax
0x69125F: jz      short loc_691266
0x691261: add     eax, 44h ; 'D'
0x691264: jmp     short loc_691268
0x691266: xor     eax, eax
0x691268: push    eax
0x691269: push    esi; a1
0x69126A: call    ContainerExtraData_GetContainerExtraDataForRef
0x69126F: add     esp, 8
0x691272: push    0
0x691274: push    edi
0x691275: mov     ecx, eax
0x691277: call    ExtraContainerChanges_SetEquipped
0x69127C: test    eax, eax
0x69127E: jz      short loc_691287
0x691280: mov     ecx, eax
0x691282: call    sub_41F6D0
0x691287: push    0
0x691289: push    0
0x69128B: push    0
0x69128D: push    0
0x69128F: push    1
0x691291: push    edi
0x691292: mov     ecx, esi
0x691294: call    Actor_UnequipItem
0x691299: mov     edx, [esi]
0x69129B: mov     eax, [edx+100h]
0x6912A1: push    0
0x6912A3: push    1
0x6912A5: push    0
0x6912A7: push    0
0x6912A9: push    0
0x6912AB: push    0
0x6912AD: push    0
0x6912AF: push    1
0x6912B1: push    0
0x6912B3: push    edi
0x6912B4: mov     ecx, esi
0x6912B6: call    eax
0x6912B8: xor     ebp, ebp
0x6912BA: add     edi, 64h ; 'd'
0x6912BD: lea     ecx, [ebx+40h]
0x6912C0: mov     [esp+38h+var_18], ebp
0x6912C4: mov     [esp+38h+var_10], edi
0x6912C8: mov     [esp+38h+var_20], ecx
0x6912CC: mov     ecx, [esp+38h+var_10]
0x6912D0: push    0
0x6912D2: push    ebp
0x6912D3: call    TESBipedModelForm_CoversSlot
0x6912D8: test    al, al
0x6912DA: jz      loc_6913F0
0x6912E0: mov     edx, [esp+38h+var_20]
0x6912E4: mov     edi, [edx]
0x6912E6: test    edi, edi
0x6912E8: jz      loc_6913F0
0x6912EE: mov     eax, [edi]
0x6912F0: test    eax, eax
0x6912F2: mov     [esp+38h+var_1C], 0
0x6912FA: jz      short loc_691302
0x6912FC: mov     eax, [eax]
0x6912FE: mov     [esp+38h+var_1C], eax
0x691302: mov     eax, [edi+8]
0x691305: push    eax; item
0x691306: mov     ecx, esi; this
0x691308: mov     [esp+3Ch+var_21], 0
0x69130D: call    TESObjectREFR_GetItemCount; TESObjectREFR inventory count accessor: returns 0 when the reference has no container or no ContainerChanges; otherwise asks ContainerExtraData_GetItemCount(this, item), which combines base TESContainer count with EntryData.countDelta. Exact ABI is thiscall (TESObjectREFR *this, TESForm *item).
0x691312: cmp     eax, 1
0x691315: jl      short loc_691374
0x691317: mov     ecx, [esp+38h+var_1C]
0x69131B: mov     eax, [edi+8]
0x69131E: push    0
0x691320: push    1
0x691322: push    ecx
0x691323: push    1
0x691325: push    eax
0x691326: mov     ecx, esi
0x691328: call    Actor_EquipItem; UCWUS pipeline note: Actor equip path is not currently hooked by UCWUS.dll. Bridge replacement scripts own equip selection/token setup through OBSE commands.
0x69132D: push    0
0x69132F: push    ebp
0x691330: lea     ecx, [esi+44h]; this
0x691333: call    ExtraDataList_GetContainerChanges
0x691338: mov     ecx, eax
0x69133A: call    ContainerExtraData_GetEquippedInstance
0x69133F: mov     ebp, eax
0x691341: test    ebp, ebp
0x691343: jz      short loc_69134D
0x691345: mov     eax, [ebp+8]
0x691348: cmp     eax, [edi+8]
0x69134B: jz      short loc_69135C
0x69134D: push    ebx
0x69134E: push    edi
0x69134F: push    esi
0x691350: call    sub_690310
0x691355: add     esp, 0Ch
0x691358: mov     [esp+38h+var_21], al
0x69135C: test    ebp, ebp
0x69135E: jz      short loc_691370
0x691360: mov     ecx, ebp
0x691362: call    ContainerEntryExtraData_DestroyDataTable
0x691367: push    ebp
0x691368: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x69136D: add     esp, 4
0x691370: mov     ebp, [esp+38h+var_18]
0x691374: cmp     byte ptr [ebx+87h], 0
0x69137B: jz      short loc_6913C2
0x69137D: mov     eax, [edi+8]
0x691380: test    eax, eax
0x691382: jz      short loc_6913C2
0x691384: cmp     [esp+38h+var_21], 0
0x691389: jnz     short loc_6913C2
0x69138B: push    0; int
0x69138D: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x691392: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x691397: push    0; int
0x691399: push    eax; void *
0x69139A: call    OblivionDynamicCast
0x69139F: add     esp, 14h
0x6913A2: test    eax, eax
0x6913A4: jz      short loc_6913C2
0x6913A6: mov     edx, [esp+38h+var_14]
0x6913AA: push    1
0x6913AC: push    0
0x6913AE: push    edx
0x6913AF: mov     ecx, eax
0x6913B1: call    TESBipedModelForm_GetModelPath
0x6913B6: mov     ecx, ds:0B33A1Ch
0x6913BC: push    eax
0x6913BD: call    QueuedModelLoader_RemoveModel
0x6913C2: mov     ecx, [esp+38h+var_1C]
0x6913C6: test    ecx, ecx
0x6913C8: jz      short loc_6913CF
0x6913CA: call    sub_41F670
0x6913CF: mov     ecx, edi
0x6913D1: call    ContainerEntryExtraData_ClearDataTable
0x6913D6: mov     ecx, edi
0x6913D8: call    ContainerEntryExtraData_DestroyDataTable
0x6913DD: push    edi
0x6913DE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6913E3: mov     eax, [esp+3Ch+var_20]
0x6913E7: add     esp, 4
0x6913EA: mov     dword ptr [eax], 0
0x6913F0: add     [esp+38h+var_20], 4
0x6913F5: add     ebp, 1
0x6913F8: cmp     ebp, 10h
0x6913FB: mov     [esp+38h+var_18], ebp
0x6913FF: jl      loc_6912CC
0x691405: mov     byte ptr [ebx+87h], 0
0x69140C: mov     edx, [esi]
0x69140E: mov     eax, [edx+154h]
0x691414: mov     ecx, esi
0x691416: call    eax
0x691418: test    eax, eax
0x69141A: jz      loc_69154A
0x691420: mov     ecx, [esi+58h]
0x691423: test    ecx, ecx
0x691425: jz      loc_69154A
0x69142B: mov     edx, [ecx]
0x69142D: mov     eax, [edx+8]
0x691430: call    eax
0x691432: test    eax, eax
0x691434: jnz     loc_69154A
0x69143A: mov     ecx, [ebx+8]; magicItem
0x69143D: test    ecx, ecx
0x69143F: jz      loc_69154A
0x691445: cmp     [ebx+0Ch], eax
0x691448: jz      loc_69154A
0x69144E: push    eax; effectIndex
0x69144F: call    MagicItem_GetFXEffect; Verified (Oblivion): MagicItem_GetFXEffect returns the effect's EffectSetting pointer; MagicShaderHitEffect constructors/PostLink dereference its +0x78 EffectSetting::effectShader field.
0x691454: mov     ecx, [ebx+8]
0x691457: mov     ebp, eax
0x691459: mov     eax, [ebx+0Ch]
0x69145C: mov     eax, [eax+10h]
0x69145F: push    0
0x691461: push    eax
0x691462: add     ecx, 0Ch
0x691465: call    EffectItemList_GetStrongestItem; this=EffectItemList; args are rangeFilter (0 self,1 touch,2 target,3 any) and requireArea. Returns effective (flag 0x400000 clear) qualifying item with greatest truncated MagickaCostForCaster(item,null).
0x69146A: mov     ecx, [ebx+0Ch]
0x69146D: cmp     ecx, eax
0x69146F: jnz     loc_69154A
0x691475: mov     ecx, [ecx+1Ch]
0x691478: add     ecx, 18h; compactString
0x69147B: call    OB_CompactString_Length_010201A0; Bethesda compact string length helper. If inline length marker is 0xFFFF, strlen(heap string); otherwise returns the 16-bit stored length. Used here to gate optional TESObjectTREE leaf texture.
0x691480: test    eax, eax
0x691482: jbe     loc_69151F
0x691488: push    38h ; '8'; Size
0x69148A: call    FormHeapAlloc
0x69148F: mov     edi, eax
0x691491: add     esp, 4
0x691494: mov     [esp+38h+var_10], edi
0x691498: test    edi, edi
0x69149A: mov     [esp+38h+var_4], 0
0x6914A2: jz      short loc_6914C6
0x6914A4: mov     edx, [ebp+18h]
0x6914A7: fld     dword ptr ds:0A30634h
0x6914AD: mov     eax, [edx+14h]
0x6914B0: lea     ecx, [ebp+18h]
0x6914B3: push    ecx
0x6914B4: fstp    [esp+3Ch+var_3C]; float
0x6914B7: call    eax
0x6914B9: push    eax; int
0x6914BA: push    esi; int
0x6914BB: mov     ecx, edi
0x6914BD: call    MagicModelHitEffect_constr_args2
0x6914C2: mov     edi, eax
0x6914C4: jmp     short loc_6914C8
0x6914C6: xor     edi, edi
0x6914C8: mov     edx, [edi]
0x6914CA: mov     eax, [edx+68h]
0x6914CD: mov     ecx, edi
0x6914CF: mov     [esp+38h+var_4], 0FFFFFFFFh
0x6914D7: call    eax
0x6914D9: test    al, al
0x6914DB: jz      short loc_6914EA
0x6914DD: push    edi; effect
0x6914DE: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x6914E3: call    ActorProcessManager_RegisterTempEffect; [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
0x6914E8: jmp     short loc_6914F4
0x6914EA: mov     edx, [edi]
0x6914EC: mov     eax, [edx]
0x6914EE: push    1
0x6914F0: mov     ecx, edi
0x6914F2: call    eax
0x6914F4: cmp     byte ptr [ebx+85h], 0
0x6914FB: jz      short loc_69151F
0x6914FD: mov     edx, [ebp+18h]
0x691500: mov     eax, [edx+14h]
0x691503: lea     ecx, [ebp+18h]
0x691506: push    1
0x691508: push    0
0x69150A: call    eax
0x69150C: mov     ecx, ds:0B33A1Ch
0x691512: push    eax
0x691513: call    QueuedModelLoader_RemoveModel
0x691518: mov     byte ptr [ebx+85h], 0
0x69151F: push    1
0x691521: push    102h
0x691526: push    0
0x691528: push    offset aItmbounddisapp; "ITMBoundDisappear"
0x69152D: mov     ecx, esi
0x69152F: call    TESObjectREFR_PlayResolvedAnimSoundNote; Reference animation sound-note playback. Resolves a Sound: note token through SoundMap_ResolveAnimSoundNote, plays it, positions it on the reference when requested, and applies volume/loop flags.
0x691534: mov     esi, eax
0x691536: test    esi, esi
0x691538: jz      short loc_69154A
0x69153A: mov     ecx, esi; this
0x69153C: call    sub_6B73E0
0x691541: push    esi
0x691542: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x691547: add     esp, 4
0x69154A: mov     dword ptr [ebx+20h], 0
0x691551: mov     byte ptr [ebx+84h], 0
0x691558: mov     ecx, dword ptr [esp+38h+var_C]
0x69155C: mov     large fs:0, ecx
0x691563: pop     ecx
0x691564: pop     edi
0x691565: pop     esi
0x691566: pop     ebp
0x691567: pop     ebx
0x691568: add     esp, 24h
0x69156B: retn
0x9C49B0: mov     eax, [ebp-10h]
0x9C49B3: push    eax
0x9C49B4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C49B9: pop     ecx
0x9C49BA: retn
0x9C49BB: mov     edx, [esp+arg_4]
0x9C49BF: lea     eax, [edx-28h]
0x9C49C2: mov     ecx, [edx-2Ch]
0x9C49C5: xor     ecx, eax
0x9C49C7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C49CC: mov     eax, offset stru_AED2E8
0x9C49D1: jmp     ___CxxFrameHandler3
