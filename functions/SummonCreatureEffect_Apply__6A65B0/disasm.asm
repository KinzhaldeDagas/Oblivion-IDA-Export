0x6A65B0: push    0FFFFFFFFh; Summon creature effect apply path. Peripheral animation/VFX caller that creates summoned actor state and triggers associated visual/animation setup.
0x6A65B2: push    offset SummonCreatureEffect_Apply_SEH
0x6A65B7: mov     eax, large fs:0
0x6A65BD: push    eax
0x6A65BE: sub     esp, 18h
0x6A65C1: push    ebx
0x6A65C2: push    ebp
0x6A65C3: push    esi
0x6A65C4: push    edi
0x6A65C5: mov     eax, ds:0B30AACh
0x6A65CA: xor     eax, esp
0x6A65CC: push    eax
0x6A65CD: lea     eax, [esp+38h+var_C]
0x6A65D1: mov     large fs:0, eax
0x6A65D7: mov     esi, ecx
0x6A65D9: mov     ecx, [esi+20h]; this
0x6A65DC: test    ecx, ecx
0x6A65DE: jz      SummonCreatureEffect_Apply___Done
0x6A65E4: call    MagicTarget_GetParentActor
0x6A65E9: mov     edi, eax
0x6A65EB: test    edi, edi
0x6A65ED: jz      SummonCreatureEffect_Apply___Done
0x6A65F3: mov     eax, [edi+20h]
0x6A65F6: mov     [esi+54h], eax
0x6A65F9: mov     ecx, [edi+24h]
0x6A65FC: mov     [esi+58h], ecx
0x6A65FF: mov     edx, [edi+28h]
0x6A6602: mov     [esi+5Ch], edx
0x6A6605: mov     eax, [edi]
0x6A6607: mov     edx, [eax+174h]
0x6A660D: mov     ecx, edi
0x6A660F: call    edx
0x6A6611: mov     ecx, [eax]
0x6A6613: mov     [esi+48h], ecx
0x6A6616: mov     edx, [eax+4]
0x6A6619: mov     [esi+4Ch], edx
0x6A661C: mov     edx, [esi+3Ch]
0x6A661F: mov     eax, [eax+8]
0x6A6622: lea     ecx, [esp+38h+var_18]
0x6A6626: push    ecx
0x6A6627: push    edx
0x6A6628: push    edi; localPosZ
0x6A6629: mov     ecx, esi
0x6A662B: mov     [esi+50h], eax
0x6A662E: call    sub_6A64D0
0x6A6633: test    al, al
0x6A6635: jz      short loc_6A664C
0x6A6637: mov     eax, [esp+38h+var_18]
0x6A663B: mov     ecx, [esp+38h+var_14]
0x6A663F: mov     edx, [esp+38h+var_10]
0x6A6643: mov     [esi+48h], eax
0x6A6646: mov     [esi+4Ch], ecx
0x6A6649: mov     [esi+50h], edx
0x6A664C: fld     dword ptr [esi+5Ch]
0x6A664F: fchs
0x6A6651: fstp    [esp+38h+var_24]
0x6A6655: fld     [esp+38h+var_24]
0x6A6659: fstp    [esp+38h+var_20]
0x6A665D: fld     [esp+38h+var_20]
0x6A6661: call    __CIcos
0x6A6666: fstp    [esp+38h+var_20]
0x6A666A: fld     [esp+38h+var_20]
0x6A666E: fstp    [esp+38h+var_1C]
0x6A6672: fld     [esp+38h+var_24]
0x6A6676: fstp    [esp+38h+var_20]
0x6A667A: fld     [esp+38h+var_20]
0x6A667E: call    __CIsin
0x6A6683: fstp    [esp+38h+var_20]
0x6A6687: fld     [esp+38h+var_20]
0x6A668B: mov     ecx, edi; this
0x6A668D: fstp    [esp+38h+var_20]
0x6A6691: fld     [esp+38h+var_20]
0x6A6695: fchs
0x6A6697: fstp    [esp+38h+var_18]
0x6A669B: fld     [esp+38h+var_18]
0x6A669F: fld     qword ptr ds:0A4D910h
0x6A66A5: fmul    st(1), st
0x6A66A7: fxch    st(1)
0x6A66A9: fstp    [esp+38h+var_20]
0x6A66AD: fld     [esp+38h+var_1C]
0x6A66B1: fmul    st, st(1)
0x6A66B3: fstp    [esp+38h+var_1C]
0x6A66B7: fldz
0x6A66B9: fmulp   st(1), st
0x6A66BB: fstp    [esp+38h+var_24]
0x6A66BF: fld     [esp+38h+var_20]
0x6A66C3: fstp    [esp+38h+var_18]
0x6A66C7: fld     [esp+38h+var_1C]
0x6A66CB: fstp    [esp+38h+var_14]
0x6A66CF: fld     [esp+38h+var_24]
0x6A66D3: fstp    [esp+38h+var_10]
0x6A66D7: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6A66DC: push    edi; TESObjectREFR *
0x6A66DD: call    sub_4C9BE0
0x6A66E2: add     esp, 4
0x6A66E5: push    3
0x6A66E7: push    eax
0x6A66E8: mov     ecx, edi; this
0x6A66EA: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6A66EF: mov     ecx, eax
0x6A66F1: call    sub_441800; ODismemberment authority: loaded cell effect child lookup by quadrant/index; hit particles use index 3 after sub_4C9BE0(ref).
0x6A66F6: push    20h ; ' '; Size
0x6A66F8: mov     ebp, eax
0x6A66FA: call    FormHeapAlloc
0x6A66FF: mov     ebx, eax
0x6A6701: add     esp, 4
0x6A6704: mov     [esp+38h+var_1C], ebx
0x6A6708: test    ebx, ebx
0x6A670A: mov     [esp+38h+var_4], 0
0x6A6712: jz      short loc_6A6776
0x6A6714: mov     eax, [esi+0Ch]
0x6A6717: fld1
0x6A6719: mov     eax, [eax+1Ch]
0x6A671C: mov     edx, [esi+48h]
0x6A671F: push    0; useCachedClone
0x6A6721: lea     ecx, [eax+18h]
0x6A6724: sub     esp, 10h
0x6A6727: fstp    [esp+4Ch+scale]; scale
0x6A672B: mov     eax, esp
0x6A672D: mov     [eax], edx
0x6A672F: mov     edx, [esi+4Ch]
0x6A6732: mov     [eax+4], edx
0x6A6735: mov     edx, [esi+50h]
0x6A6738: mov     [eax+8], edx
0x6A673B: mov     edx, [esp+4Ch+var_18]
0x6A673F: sub     esp, 0Ch
0x6A6742: mov     eax, esp
0x6A6744: mov     [eax], edx
0x6A6746: mov     edx, [esp+58h+var_14]
0x6A674A: mov     [eax+4], edx
0x6A674D: mov     edx, [esp+58h+var_10]
0x6A6751: mov     [eax+8], edx
0x6A6754: mov     eax, [ecx]
0x6A6756: mov     edx, [eax+14h]
0x6A6759: call    edx
0x6A675B: fld1
0x6A675D: push    eax; modelPath
0x6A675E: push    ebp; parentNode
0x6A675F: push    ecx
0x6A6760: mov     ecx, edi; this
0x6A6762: fstp    [esp+64h+durationSeconds]; durationSeconds
0x6A6765: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6A676A: push    eax; parentCell
0x6A676B: mov     ecx, ebx; self
0x6A676D: call    BSTempEffectParticle_Constructor; Verified: constructs BSTempEffectParticle; parameters include cell, duration, NiNode parent, model path, direction XYZ, local position XYZ, scale, and cached-clone flag. Body-hit caller 0x5EF214 passes direction XYZ and position XYZ; constructor writes position components into the NiAVObject local-transform translation (including stores at root+0x54/+0x58). It applies |scale|, attaches the cloned NIF and starts controllers. Cached-clone choice is controlled by the final bool. All parameters now typed by observed data flow.
0x6A6772: mov     edi, eax
0x6A6774: jmp     short loc_6A6778
0x6A6776: xor     edi, edi
0x6A6778: push    offset aSpecialidle_su; "SpecialIdle_SummonEffect"
0x6A677D: mov     ecx, edi
0x6A677F: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x6A6787: call    PlaySpecialIdleOnControllerManager; Summon effect path starts SpecialIdle_SummonEffect on spawned effect object's controller manager via sub_570C00; no actor KFFZ lookup.
0x6A678C: push    edi; effect
0x6A678D: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x6A6792: call    ActorProcessManager_RegisterTempEffect; [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
0x6A6797: mov     edi, [edi+18h]
0x6A679A: push    offset aHit; Str2
0x6A679F: push    offset aSpecialidle_su; "SpecialIdle_SummonEffect"
0x6A67A4: push    edi; int
0x6A67A5: call    sub_480B00
0x6A67AA: fstp    dword ptr [esi+44h]
0x6A67AD: add     esp, 0Ch
0x6A67B0: cmp     byte ptr [esi+61h], 0
0x6A67B4: jnz     short SummonCreatureEffect_Apply___Done
0x6A67B6: mov     ecx, [esi+8]
0x6A67B9: test    ecx, ecx
0x6A67BB: jz      short SummonCreatureEffect_Apply___Done
0x6A67BD: push    0
0x6A67BF: call    MagicItem_LoadVFXModels; MagicItem VFX model preload path. Walks spell art and effect-item VFX model references and asks the model loader to load/cache required art resources.
0x6A67C4: mov     byte ptr [esi+61h], 1
0x9C26D0: mov     eax, [ebp-1Ch]
0x9C26D3: push    eax
0x9C26D4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C26D9: pop     ecx
0x9C26DA: retn
0x9C26DB: mov     edx, [esp+arg_4]
0x9C26DF: lea     eax, [edx-28h]
0x9C26E2: mov     ecx, [edx-2Ch]
0x9C26E5: xor     ecx, eax
0x9C26E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C26EC: mov     eax, offset stru_AEB550
0x9C26F1: jmp     ___CxxFrameHandler3
