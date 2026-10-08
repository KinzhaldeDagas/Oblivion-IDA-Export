0x69B6B1: cmp     [esp+unknownChildTag], 0; Magic caster active-magic-item area-effect path. Creates area VFX and plays SpecialIdle_AreaEffect through controller-manager helper.
0x69B6B9: mov     ecx, [eax+8]
0x69B6BC: mov     ebp, [eax]
0x69B6BE: mov     ebx, [eax+4]
0x69B6C1: mov     [esp+arg_60], ecx
0x69B6C5: jz      MagicCaster_ApplyActiveMagicItem___TargetVFX?
0x69B6CB: fld1
0x69B6CD: mov     eax, [esp+unknownChildTag]
0x69B6D4: sub     esp, 8
0x69B6D7: fst     [esp+8+var_4]; float
0x69B6DB: fstp    [esp+8+scale]; float
0x69B6DE: lea     edx, [esp+8+unknownChildName]
0x69B6E2: push    edx; localPosZ
0x69B6E3: mov     edx, [esi]
0x69B6E5: push    eax; localPosY
0x69B6E6: mov     eax, [edx+30h]
0x69B6E9: mov     ecx, esi
0x69B6EB: call    eax
0x69B6ED: push    eax; localPosX
0x69B6EE: mov     ecx, edi; this
0x69B6F0: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x69B6F5: mov     ecx, [esp+14h+arg_60]
0x69B6F9: push    eax; directionZ
0x69B6FA: sub     esp, 0Ch
0x69B6FD: mov     eax, esp
0x69B6FF: mov     [eax], ebp
0x69B701: mov     [eax+4], ebx
0x69B704: mov     [eax+8], ecx
0x69B707: mov     ecx, esi
0x69B709: call    MagicCaster_ExplosionCalcs????
0x69B70E: cmp     [esp+arg_74], 0
0x69B713: jz      MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B719: mov     ecx, [esp+arg_74]
0x69B71D: add     ecx, 18h; compactString
0x69B720: call    OB_CompactString_Length_010201A0; Bethesda compact string length helper. If inline length marker is 0xFFFF, strlen(heap string); otherwise returns the 16-bit stored length. Used here to gate optional TESObjectTREE leaf texture.
0x69B725: test    eax, eax
0x69B727: jz      MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B72D: fld     dword ptr [edi+20h]
0x69B730: fchs
0x69B732: fstp    [esp+parentNode]
0x69B736: fld     [esp+parentNode]
0x69B73A: fstp    [esp+self]
0x69B73E: fld     [esp+self]
0x69B742: call    __CIcos
0x69B747: fstp    [esp+self]
0x69B74B: fld     [esp+self]
0x69B74F: fstp    [esp+self]
0x69B753: fld     [esp+parentNode]
0x69B757: fstp    [esp+parentNode]
0x69B75B: fld     [esp+parentNode]
0x69B75F: call    __CIsin
0x69B764: fstp    [esp+parentNode]
0x69B768: fld     [esp+parentNode]
0x69B76C: mov     ecx, edi; this
0x69B76E: fchs
0x69B770: fstp    [esp+arg_4C]
0x69B774: fld     [esp+self]
0x69B778: fstp    [esp+arg_50]
0x69B77C: fldz
0x69B77E: fstp    [esp+arg_54]
0x69B782: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x69B787: mov     edx, [esp+arg_1C]
0x69B78B: push    edx; TESObjectREFR *
0x69B78C: call    sub_4C9BE0
0x69B791: add     esp, 4
0x69B794: push    3
0x69B796: push    eax
0x69B797: mov     ecx, edi; this
0x69B799: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x69B79E: mov     ecx, eax
0x69B7A0: call    sub_441800; ODismemberment authority: loaded cell effect child lookup by quadrant/index; hit particles use index 3 after sub_4C9BE0(ref).
0x69B7A5: push    20h ; ' '; Size
0x69B7A7: mov     [esp+4+parentNode], eax
0x69B7AE: call    FormHeapAlloc
0x69B7B3: add     esp, 4
0x69B7B6: mov     [esp+self], eax
0x69B7BA: test    eax, eax
0x69B7BC: mov     [esp+arg_6C], 0
0x69B7C4: jz      short loc_69B82E
0x69B7C6: fld1
0x69B7C8: mov     ecx, [esp+arg_60]
0x69B7CC: mov     edx, [esp+arg_4C]
0x69B7D0: push    0; useCachedClone
0x69B7D2: sub     esp, 10h
0x69B7D5: fstp    [esp+14h+scale]; scale
0x69B7D9: mov     eax, esp
0x69B7DB: mov     [eax], ebp
0x69B7DD: mov     [eax+4], ebx
0x69B7E0: mov     [eax+8], ecx
0x69B7E3: mov     ecx, [esp+14h+arg_50]
0x69B7E7: sub     esp, 0Ch
0x69B7EA: mov     eax, esp
0x69B7EC: mov     [eax], edx
0x69B7EE: mov     edx, [esp+20h+arg_54]
0x69B7F2: mov     [eax+4], ecx
0x69B7F5: mov     ecx, [esp+20h+arg_74]
0x69B7FC: mov     [eax+8], edx
0x69B7FF: mov     eax, [ecx+18h]
0x69B802: mov     edx, [eax+14h]
0x69B805: add     ecx, 18h
0x69B808: call    edx
0x69B80A: fld1
0x69B80C: push    eax; modelPath
0x69B80D: mov     eax, [esp+24h+parentNode]
0x69B814: push    eax; parentNode
0x69B815: push    ecx
0x69B816: mov     ecx, edi; this
0x69B818: fstp    [esp+2Ch+durationSeconds]; durationSeconds
0x69B81B: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x69B820: mov     ecx, [esp+2Ch+self]; self
0x69B824: push    eax; parentCell
0x69B825: call    BSTempEffectParticle_Constructor; Verified: constructs BSTempEffectParticle; parameters include cell, duration, NiNode parent, model path, direction XYZ, local position XYZ, scale, and cached-clone flag. Body-hit caller 0x5EF214 passes direction XYZ and position XYZ; constructor writes position components into the NiAVObject local-transform translation (including stores at root+0x54/+0x58). It applies |scale|, attaches the cloned NIF and starts controllers. Cached-clone choice is controlled by the final bool. All parameters now typed by observed data flow.
0x69B82A: mov     edi, eax
0x69B82C: jmp     short loc_69B830
0x69B82E: xor     edi, edi
0x69B830: push    offset aSpecialidle_ar; "SpecialIdle_AreaEffect"
0x69B835: mov     ecx, edi
0x69B837: mov     [esp+4+arg_6C], 0FFFFFFFFh
0x69B83F: call    PlaySpecialIdleOnControllerManager; AOE VFX path starts SpecialIdle_AreaEffect on spawned effect object's controller manager via sub_570C00; no actor KFFZ lookup.
0x69B844: cmp     dword ptr [edi+18h], 0
0x69B848: jz      loc_69B8F2
0x69B84E: mov     ecx, [esp+unknownChildTag]
0x69B855: call    EffectItem_GetArea; Effective area: returns 0 for EffectSetting NoArea (0x200) or Self range (0); otherwise raw EffectItem+0x8 area.
0x69B85A: mov     [esp+unknownChildTag], eax
0x69B861: fild    [esp+unknownChildTag]
0x69B868: mov     ecx, offset flt_B37ED0
0x69B86D: fstp    qword ptr [esp+self]
0x69B871: call    GameSetting_GetSafeFloatPointer
0x69B876: fld     dword ptr [eax]
0x69B878: mov     ecx, (offset flt_B37ED0+8)
0x69B87D: fmul    qword ptr [esp+self]
0x69B881: fstp    [esp+unknownChildTag]
0x69B888: call    GameSetting_GetSafeFloatPointer
0x69B88D: fld     [esp+unknownChildTag]
0x69B894: fld     dword ptr [eax]
0x69B896: fcompp
0x69B898: fnstsw  ax
0x69B89A: test    ah, 5
0x69B89D: jp      short loc_69B8A6
0x69B89F: mov     ecx, (offset flt_B37ED0+8)
0x69B8A4: jmp     short loc_69B8C7
0x69B8A6: mov     ecx, (offset flt_B37ED0+10h)
0x69B8AB: call    GameSetting_GetSafeFloatPointer
0x69B8B0: fld     [esp+unknownChildTag]
0x69B8B7: fld     dword ptr [eax]
0x69B8B9: fcompp
0x69B8BB: fnstsw  ax
0x69B8BD: test    ah, 41h
0x69B8C0: jnz     short loc_69B8D5
0x69B8C2: mov     ecx, (offset flt_B37ED0+10h)
0x69B8C7: call    GameSetting_GetSafeFloatPointer
0x69B8CC: fld     dword ptr [eax]
0x69B8CE: fstp    [esp+unknownChildTag]
0x69B8D5: fld     [esp+unknownChildTag]
0x69B8DC: mov     ecx, [edi+18h]
0x69B8DF: fabs
0x69B8E1: fstp    [esp+unknownChildTag]
0x69B8E8: fld     [esp+unknownChildTag]
0x69B8EF: fstp    dword ptr [ecx+60h]
0x69B8F2: push    edi; effect
0x69B8F3: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x69B8F8: call    ActorProcessManager_RegisterTempEffect; [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
0x69B8FD: jmp     short MagicCaster_ApplyActiveMagicItem___AfterVFX
