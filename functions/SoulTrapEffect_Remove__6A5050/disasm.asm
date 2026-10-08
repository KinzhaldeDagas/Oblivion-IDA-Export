0x6A5050: push    ebx
0x6A5051: mov     ebx, ecx
0x6A5053: mov     ecx, [ebx+20h]; this
0x6A5056: test    ecx, ecx
0x6A5058: push    esi
0x6A5059: push    edi
0x6A505A: jz      short loc_6A5065
0x6A505C: call    MagicTarget_GetParentActor
0x6A5061: mov     edi, eax
0x6A5063: jmp     short loc_6A5067
0x6A5065: xor     edi, edi
0x6A5067: mov     ecx, [ebx+24h]; this
0x6A506A: test    ecx, ecx
0x6A506C: jz      short loc_6A5077
0x6A506E: call    MagicCaster_GetParentActor
0x6A5073: mov     esi, eax
0x6A5075: jmp     short loc_6A5079
0x6A5077: xor     esi, esi
0x6A5079: test    edi, edi
0x6A507B: jz      short loc_6A50BA
0x6A507D: mov     eax, [edi]
0x6A507F: mov     edx, [eax+ActorVtbl.super.super.IsDead]
0x6A5085: push    0
0x6A5087: mov     ecx, edi
0x6A5089: call    edx ; Actor_IsDead; ODismemberment: Actor_IsDead vtable +0x198. Arg 0 treats dead states 1, 2, and essential protected state 6 as dead; arg 1 only treats 1/2 as dead.
0x6A508B: test    al, al
0x6A508D: jz      short loc_6A50BA
0x6A508F: test    esi, esi
0x6A5091: jz      short loc_6A50BA
0x6A5093: mov     eax, [esi]
0x6A5095: mov     edx, [eax+ActorVtbl.super.super.IsDead]
0x6A509B: push    0
0x6A509D: mov     ecx, esi
0x6A509F: call    edx ; Actor_IsDead; ODismemberment: Actor_IsDead vtable +0x198. Arg 0 treats dead states 1, 2, and essential protected state 6 as dead; arg 1 only treats 1/2 as dead.
0x6A50A1: test    al, al
0x6A50A3: jnz     short loc_6A50BA
0x6A50A5: mov     ecx, edi
0x6A50A7: call    Actor__IsEssential
0x6A50AC: test    al, al
0x6A50AE: jnz     short loc_6A50BA
0x6A50B0: pop     edi
0x6A50B1: pop     esi
0x6A50B2: mov     ecx, ebx
0x6A50B4: pop     ebx
0x6A50B5: jmp     loc_6A4DF0
0x6A50BA: pop     edi
0x6A50BB: pop     esi
0x6A50BC: pop     ebx
0x6A50BD: retn
0x6A4DF0: push    0FFFFFFFFh
0x6A4DF2: push    offset SummonCreatureEffect_Apply_SEH
0x6A4DF7: mov     eax, large fs:0
0x6A4DFD: push    eax
0x6A4DFE: sub     esp, 18h
0x6A4E01: push    ebx
0x6A4E02: push    ebp
0x6A4E03: push    esi
0x6A4E04: push    edi
0x6A4E05: mov     eax, ds:0B30AACh
0x6A4E0A: xor     eax, esp
0x6A4E0C: push    eax
0x6A4E0D: lea     eax, [esp+40h+var_14]
0x6A4E11: mov     large fs:0, eax
0x6A4E17: mov     edi, ecx
0x6A4E19: mov     ecx, [edi+24h]; this
0x6A4E1C: test    ecx, ecx
0x6A4E1E: jz      short loc_6A4E29
0x6A4E20: call    MagicCaster_GetParentActor
0x6A4E25: mov     ebx, eax
0x6A4E27: jmp     short loc_6A4E2B
0x6A4E29: xor     ebx, ebx
0x6A4E2B: mov     ecx, [edi+20h]; this
0x6A4E2E: test    ecx, ecx
0x6A4E30: jz      short loc_6A4E54
0x6A4E32: call    MagicTarget_GetParentActor
0x6A4E37: mov     esi, eax
0x6A4E39: test    esi, esi
0x6A4E3B: jz      short loc_6A4E56
0x6A4E3D: mov     ecx, esi; this
0x6A4E3F: call    Actor_IsCreature
0x6A4E44: test    al, al
0x6A4E46: jz      short loc_6A4E56
0x6A4E48: mov     eax, [edi+20h]
0x6A4E4B: test    eax, eax
0x6A4E4D: jz      short loc_6A4E56
0x6A4E4F: lea     ebp, [eax-68h]
0x6A4E52: jmp     short loc_6A4E58
0x6A4E54: xor     esi, esi
0x6A4E56: xor     ebp, ebp
0x6A4E58: test    ebx, ebx
0x6A4E5A: jz      short loc_6A4E69
0x6A4E5C: mov     ecx, ebx
0x6A4E5E: call    Actor_IsPlayer
0x6A4E63: mov     [esp+40h+anonymous_5+3], al
0x6A4E67: jmp     short loc_6A4E6E
0x6A4E69: mov     [esp+40h+anonymous_5+3], 0
0x6A4E6E: test    ebp, ebp
0x6A4E70: jz      short loc_6A4E7B
0x6A4E72: mov     ecx, ebp; this
0x6A4E74: call    Actor__GetSoulLevel
0x6A4E79: jmp     short loc_6A4E7D
0x6A4E7B: xor     eax, eax
0x6A4E7D: test    esi, esi
0x6A4E7F: jz      loc_6A5036
0x6A4E85: test    ebx, ebx
0x6A4E87: jz      loc_6A5036
0x6A4E8D: test    ebp, ebp
0x6A4E8F: jz      short loc_6A4E99
0x6A4E91: test    eax, eax
0x6A4E93: jle     loc_6A5036
0x6A4E99: lea     ecx, [ebx+44h]; this
0x6A4E9C: call    ExtraDataList_GetContainerChanges
0x6A4EA1: push    esi; a3
0x6A4EA2: mov     ecx, eax; a1
0x6A4EA4: call    ExtraContainerChanges__AddActorSoulData
0x6A4EA9: test    al, al
0x6A4EAB: jz      short loc_6A4EE3
0x6A4EAD: cmp     [esp+40h+anonymous_5+3], 0
0x6A4EB2: jz      short loc_6A4EE3
0x6A4EB4: fld     dword ptr ds:0A30634h
0x6A4EBA: mov     eax, ds:0B38DF0h
0x6A4EBF: push    ecx
0x6A4EC0: fstp    [esp+44h+duration]; duration
0x6A4EC3: push    1; unk2
0x6A4EC5: push    0; localPosZ
0x6A4EC7: push    eax; localPosY
0x6A4EC8: call    GameUI_QueueMessage
0x6A4ECD: push    20h ; ' '; localPosX
0x6A4ECF: call    sub_57DE50
0x6A4ED4: mov     eax, ds:0B333C4h
0x6A4ED9: add     esp, 14h
0x6A4EDC: add     dword ptr [eax+680h], 1
0x6A4EE3: test    ebp, ebp
0x6A4EE5: jz      short loc_6A4EF0
0x6A4EE7: push    0; a2
0x6A4EE9: mov     ecx, ebp; this
0x6A4EEB: call    sub_625090
0x6A4EF0: mov     ecx, [edi+0Ch]
0x6A4EF3: mov     eax, [ecx+1Ch]
0x6A4EF6: mov     edx, [eax+18h]
0x6A4EF9: lea     ecx, [eax+18h]
0x6A4EFC: mov     eax, [edx+14h]
0x6A4EFF: call    eax
0x6A4F01: test    eax, eax
0x6A4F03: jz      loc_6A5036
0x6A4F09: mov     edx, [esi]
0x6A4F0B: mov     eax, [edx+1E0h]
0x6A4F11: mov     ecx, esi
0x6A4F13: call    eax
0x6A4F15: fchs
0x6A4F17: fstp    [esp+40h+var_28]
0x6A4F1B: fld     [esp+40h+var_28]
0x6A4F1F: call    __CIcos
0x6A4F24: fstp    [esp+40h+var_28]
0x6A4F28: mov     edx, [esi]
0x6A4F2A: fld     [esp+40h+var_28]
0x6A4F2E: mov     eax, [edx+1E0h]
0x6A4F34: fstp    [esp+40h+var_24]
0x6A4F38: mov     ecx, esi
0x6A4F3A: call    eax
0x6A4F3C: fchs
0x6A4F3E: fstp    [esp+40h+var_28]
0x6A4F42: fld     [esp+40h+var_28]
0x6A4F46: call    __CIsin
0x6A4F4B: fstp    [esp+40h+var_28]
0x6A4F4F: fld     [esp+40h+var_28]
0x6A4F53: mov     ecx, esi; this
0x6A4F55: fchs
0x6A4F57: fstp    [esp+40h+var_20]
0x6A4F5B: fld     [esp+40h+var_24]
0x6A4F5F: fstp    [esp+40h+var_1C]
0x6A4F63: fldz
0x6A4F65: fstp    [esp+40h+var_18]
0x6A4F69: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6A4F6E: push    esi; TESObjectREFR *
0x6A4F6F: call    sub_4C9BE0
0x6A4F74: add     esp, 4
0x6A4F77: push    3
0x6A4F79: push    eax
0x6A4F7A: mov     ecx, esi; this
0x6A4F7C: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6A4F81: mov     ecx, eax
0x6A4F83: call    sub_441800; ODismemberment authority: loaded cell effect child lookup by quadrant/index; hit particles use index 3 after sub_4C9BE0(ref).
0x6A4F88: push    20h ; ' '; Size
0x6A4F8A: mov     ebp, eax
0x6A4F8C: call    FormHeapAlloc
0x6A4F91: mov     ebx, eax
0x6A4F93: add     esp, 4
0x6A4F96: mov     [esp+40h+var_24], ebx
0x6A4F9A: test    ebx, ebx
0x6A4F9C: mov     [esp+40h+anonymous_0], 0
0x6A4FA4: jz      short loc_6A5015
0x6A4FA6: mov     ecx, [edi+0Ch]
0x6A4FA9: mov     edi, [ecx+1Ch]
0x6A4FAC: mov     edx, [esi]
0x6A4FAE: mov     eax, [edx+174h]
0x6A4FB4: mov     ecx, esi
0x6A4FB6: add     edi, 18h
0x6A4FB9: call    eax
0x6A4FBB: fld1
0x6A4FBD: mov     edx, [eax]
0x6A4FBF: push    0; useCachedClone
0x6A4FC1: sub     esp, 10h
0x6A4FC4: fstp    dword ptr [esp+0Ch]; scale
0x6A4FC8: mov     ecx, esp
0x6A4FCA: mov     [ecx], edx
0x6A4FCC: mov     edx, [eax+4]
0x6A4FCF: mov     eax, [eax+8]
0x6A4FD2: mov     [ecx+4], edx
0x6A4FD5: mov     edx, [esp+54h+var_1C]
0x6A4FD9: mov     [ecx+8], eax
0x6A4FDC: mov     ecx, [esp+54h+var_20]
0x6A4FE0: sub     esp, 0Ch
0x6A4FE3: mov     eax, esp
0x6A4FE5: mov     [eax], ecx
0x6A4FE7: mov     ecx, [esp+60h+var_18]
0x6A4FEB: mov     [eax+4], edx
0x6A4FEE: mov     edx, [edi]
0x6A4FF0: mov     [eax+8], ecx
0x6A4FF3: mov     eax, [edx+14h]
0x6A4FF6: mov     ecx, edi
0x6A4FF8: call    eax
0x6A4FFA: fld1
0x6A4FFC: push    eax; modelPath
0x6A4FFD: push    ebp; parentNode
0x6A4FFE: push    ecx
0x6A4FFF: mov     ecx, esi; this
0x6A5001: fstp    dword ptr [esp+0]; durationSeconds
0x6A5004: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6A5009: push    eax; parentCell
0x6A500A: mov     ecx, ebx; self
0x6A500C: call    BSTempEffectParticle_Constructor; Verified: constructs BSTempEffectParticle; parameters include cell, duration, NiNode parent, model path, direction XYZ, local position XYZ, scale, and cached-clone flag. Body-hit caller 0x5EF214 passes direction XYZ and position XYZ; constructor writes position components into the NiAVObject local-transform translation (including stores at root+0x54/+0x58). It applies |scale|, attaches the cloned NIF and starts controllers. Cached-clone choice is controlled by the final bool. All parameters now typed by observed data flow.
0x6A5011: mov     esi, eax
0x6A5013: jmp     short loc_6A5017
0x6A5015: xor     esi, esi
0x6A5017: push    offset aSpecialidle_so; Soultrap removal path starts SpecialIdle_Soultrap on the effect object's controller manager through sub_570C00.
0x6A501C: mov     ecx, esi
0x6A501E: mov     [esp+44h+anonymous_0], 0FFFFFFFFh
0x6A5026: call    PlaySpecialIdleOnControllerManager; Effect/projectile special-idle helper: starts named sequence from this object's controller manager map; does not query actor KFFZ or ActorAnimData.
0x6A502B: push    esi; effect
0x6A502C: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x6A5031: call    ActorProcessManager_RegisterTempEffect; [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
0x6A5036: mov     ecx, [esp+40h+var_14]
0x6A503A: mov     large fs:0, ecx
0x6A5041: pop     ecx
0x6A5042: pop     edi
0x6A5043: pop     esi
0x6A5044: pop     ebp
0x6A5045: pop     ebx
0x6A5046: add     esp, 24h
0x6A5049: retn
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
