0x512CA0: push    0FFFFFFFFh; Hit visual-effect command path. Applies a visual effect to a reference; when the ref has no NiNode yet it spawns a placed effect object and plays SpecialIdle_HitEffect through the controller manager.
0x512CA2: push    offset SEH_512CA0
0x512CA7: mov     eax, large fs:0
0x512CAD: push    eax
0x512CAE: sub     esp, 2Ch
0x512CB1: push    ebx
0x512CB2: push    ebp
0x512CB3: push    esi
0x512CB4: push    edi
0x512CB5: mov     eax, ds:0B30AACh
0x512CBA: xor     eax, esp
0x512CBC: push    eax
0x512CBD: lea     eax, [esp+4Ch+var_C]
0x512CC1: mov     large fs:0, eax
0x512CC7: mov     edx, [esp+4Ch+l]
0x512CCB: fld     dword ptr ds:0A30634h
0x512CD1: mov     esi, [esp+4Ch+arg_8]
0x512CD5: fstp    [esp+4Ch+var_30]
0x512CD9: lea     eax, [esp+4Ch+var_30]
0x512CDD: push    eax
0x512CDE: mov     eax, [esp+50h+arg_10]
0x512CE2: lea     ecx, [esp+50h+var_38]
0x512CE6: push    ecx; UInt16
0x512CE7: mov     ecx, [esp+54h+arg_C]
0x512CEB: push    edx; localPosZ
0x512CEC: mov     edx, [esp+58h+a3]
0x512CF0: push    eax; localPosY
0x512CF1: mov     eax, [esp+5Ch+arg_4]
0x512CF5: push    ecx; localPosX
0x512CF6: mov     ecx, [esp+60h+a1]
0x512CFA: push    esi; directionZ
0x512CFB: push    edx; directionY
0x512CFC: push    eax; directionX
0x512CFD: push    ecx; a1
0x512CFE: mov     dword ptr [esp+70h+var_38], 0
0x512D06: call    Script_ExtractArgs; TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
0x512D0B: add     esp, 24h
0x512D0E: test    al, al
0x512D10: jnz     short loc_512D26
0x512D12: mov     ecx, [esp+4Ch+var_C]
0x512D16: mov     large fs:0, ecx
0x512D1D: pop     ecx
0x512D1E: pop     edi
0x512D1F: pop     esi
0x512D20: pop     ebp
0x512D21: pop     ebx
0x512D22: add     esp, 38h
0x512D25: retn
0x512D26: test    esi, esi
0x512D28: jnz     short loc_512D30
0x512D2A: mov     esi, ds:0B333C4h
0x512D30: mov     ecx, esi; this
0x512D32: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x512D37: mov     ecx, ds:0B333A0h
0x512D3D: push    0; a2
0x512D3F: push    eax; a1
0x512D40: call    TESObjectCELL_IsProcessLevel?LowHigh
0x512D45: test    al, al
0x512D47: jz      loc_512F84
0x512D4D: mov     edx, [esi]
0x512D4F: mov     eax, [edx+154h]
0x512D55: mov     ecx, esi
0x512D57: call    eax
0x512D59: test    eax, eax
0x512D5B: jnz     loc_512ECF
0x512D61: mov     edx, [esi+24h]
0x512D64: mov     ecx, [esi+20h]
0x512D67: mov     eax, [esi+28h]
0x512D6A: mov     [esp+4Ch+var_20], edx
0x512D6E: mov     edx, [esi]
0x512D70: mov     [esp+4Ch+var_24], ecx
0x512D74: mov     [esp+4Ch+var_1C], eax
0x512D78: mov     eax, [edx+174h]
0x512D7E: mov     ecx, esi
0x512D80: call    eax
0x512D82: fld     [esp+4Ch+var_1C]
0x512D86: mov     ecx, [eax+8]
0x512D89: fchs
0x512D8B: mov     ebp, [eax]
0x512D8D: fstp    [esp+4Ch+var_34]
0x512D91: fld     [esp+4Ch+var_34]
0x512D95: mov     ebx, [eax+4]
0x512D98: mov     [esp+4Ch+var_10], ecx
0x512D9C: call    __CIcos
0x512DA1: fstp    [esp+4Ch+var_2C]
0x512DA5: fld     [esp+4Ch+var_2C]
0x512DA9: fstp    [esp+4Ch+parentNode]
0x512DAD: fld     [esp+4Ch+var_34]
0x512DB1: call    __CIsin
0x512DB6: fstp    [esp+4Ch+var_2C]
0x512DBA: fld     [esp+4Ch+var_2C]
0x512DBE: mov     ecx, esi; this
0x512DC0: fchs
0x512DC2: fstp    [esp+4Ch+var_24]
0x512DC6: fld     [esp+4Ch+parentNode]
0x512DCA: fstp    [esp+4Ch+var_20]
0x512DCE: fldz
0x512DD0: fstp    [esp+4Ch+var_1C]
0x512DD4: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x512DD9: push    esi; TESObjectREFR *
0x512DDA: call    sub_4C9BE0
0x512DDF: add     esp, 4
0x512DE2: push    3
0x512DE4: push    eax
0x512DE5: mov     ecx, esi; this
0x512DE7: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x512DEC: mov     ecx, eax
0x512DEE: call    sub_441800; ODismemberment authority: loaded cell effect child lookup by quadrant/index; hit particles use index 3 after sub_4C9BE0(ref).
0x512DF3: push    20h ; ' '; Size
0x512DF5: mov     [esp+50h+parentNode], eax
0x512DF9: call    FormHeapAlloc
0x512DFE: mov     edi, eax
0x512E00: add     esp, 4
0x512E03: mov     [esp+4Ch+var_2C], edi
0x512E07: test    edi, edi
0x512E09: mov     [esp+4Ch+var_4], 0
0x512E11: jz      short loc_512E72
0x512E13: fld1
0x512E15: mov     edx, [esp+4Ch+var_10]
0x512E19: mov     ecx, dword ptr [esp+4Ch+var_38]
0x512E1D: push    0; useCachedClone
0x512E1F: sub     esp, 10h
0x512E22: fstp    [esp+60h+scale]; scale
0x512E26: mov     eax, esp
0x512E28: mov     [eax], ebp
0x512E2A: mov     [eax+4], ebx
0x512E2D: mov     [eax+8], edx
0x512E30: mov     edx, [esp+60h+var_24]
0x512E34: sub     esp, 0Ch
0x512E37: mov     eax, esp
0x512E39: mov     [eax], edx
0x512E3B: mov     edx, [esp+6Ch+var_20]
0x512E3F: mov     [eax+4], edx
0x512E42: mov     edx, [esp+6Ch+var_1C]
0x512E46: add     ecx, 18h
0x512E49: mov     [eax+8], edx
0x512E4C: mov     eax, [ecx]
0x512E4E: mov     edx, [eax+14h]
0x512E51: call    edx
0x512E53: fld1
0x512E55: push    eax; modelPath
0x512E56: mov     eax, [esp+70h+parentNode]
0x512E5A: push    eax; parentNode
0x512E5B: push    ecx
0x512E5C: mov     ecx, esi; this
0x512E5E: fstp    [esp+78h+durationSeconds]; durationSeconds
0x512E61: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x512E66: push    eax; parentCell
0x512E67: mov     ecx, edi; self
0x512E69: call    BSTempEffectParticle_Constructor; Verified: constructs BSTempEffectParticle; parameters include cell, duration, NiNode parent, model path, direction XYZ, local position XYZ, scale, and cached-clone flag. Body-hit caller 0x5EF214 passes direction XYZ and position XYZ; constructor writes position components into the NiAVObject local-transform translation (including stores at root+0x54/+0x58). It applies |scale|, attaches the cloned NIF and starts controllers. Cached-clone choice is controlled by the final bool. All parameters now typed by observed data flow.
0x512E6E: mov     edi, eax
0x512E70: jmp     short loc_512E74
0x512E72: xor     edi, edi
0x512E74: push    offset aSpecialidle_hi; "SpecialIdle_HitEffect"
0x512E79: mov     ecx, edi
0x512E7B: mov     [esp+50h+var_4], 0FFFFFFFFh
0x512E83: call    PlaySpecialIdleOnControllerManager; HitEffect visual effect starts SpecialIdle_HitEffect on the effect object's controller manager through sub_570C00.
0x512E88: push    edi; effect
0x512E89: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x512E8E: call    ActorProcessManager_RegisterTempEffect; [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
0x512E93: cmp     byte ptr ds:0B361ACh, 0
0x512E9A: jz      loc_512F84
0x512EA0: mov     ecx, esi; this
0x512EA2: call    TESObjectREFR_GetName
0x512EA7: test    eax, eax
0x512EA9: jz      short loc_512EC5
0x512EAB: mov     ecx, esi; this
0x512EAD: call    TESObjectREFR_GetName
0x512EB2: push    eax
0x512EB3: push    offset aVisualEffectHa; "Visual effect has been applied to %s"
0x512EB8: call    Interface_ConsolePrint
0x512EBD: add     esp, 8
0x512EC0: jmp     loc_512F84
0x512EC5: push    offset aVisualEffect_0; "Visual effect has been applied to refer"...
0x512ECA: jmp     loc_512F7C
0x512ECF: mov     eax, dword ptr [esp+4Ch+var_38]
0x512ED3: test    eax, eax
0x512ED5: jz      short loc_512F4C
0x512ED7: lea     ecx, [eax+18h]; compactString
0x512EDA: call    OB_CompactString_Length_010201A0; Bethesda compact string length helper. If inline length marker is 0xFFFF, strlen(heap string); otherwise returns the 16-bit stored length. Used here to gate optional TESObjectTREE leaf texture.
0x512EDF: test    eax, eax
0x512EE1: jbe     short loc_512F4C
0x512EE3: push    38h ; '8'; Size
0x512EE5: call    FormHeapAlloc
0x512EEA: mov     edi, eax
0x512EEC: add     esp, 4
0x512EEF: mov     [esp+4Ch+parentNode], edi
0x512EF3: test    edi, edi
0x512EF5: mov     [esp+4Ch+var_4], 1
0x512EFD: jz      short loc_512F23
0x512EFF: mov     ecx, dword ptr [esp+4Ch+var_38]
0x512F03: fld     [esp+4Ch+var_30]
0x512F07: mov     edx, [ecx+18h]
0x512F0A: mov     eax, [edx+14h]
0x512F0D: add     ecx, 18h
0x512F10: push    ecx
0x512F11: fstp    [esp+50h+var_50]; float
0x512F14: call    eax
0x512F16: push    eax; int
0x512F17: push    esi; int
0x512F18: mov     ecx, edi
0x512F1A: call    MagicModelHitEffect_constr_args2
0x512F1F: mov     edi, eax
0x512F21: jmp     short loc_512F25
0x512F23: xor     edi, edi
0x512F25: test    edi, edi
0x512F27: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x512F2F: jz      short loc_512F4C
0x512F31: mov     edx, [edi]
0x512F33: mov     eax, [edx+68h]
0x512F36: mov     ecx, edi
0x512F38: call    eax
0x512F3A: test    al, al
0x512F3C: jnz     loc_512E88
0x512F42: mov     edx, [edi]
0x512F44: mov     eax, [edx]
0x512F46: push    1
0x512F48: mov     ecx, edi
0x512F4A: call    eax
0x512F4C: cmp     byte ptr ds:0B361ACh, 0
0x512F53: jz      short loc_512F84
0x512F55: mov     ecx, esi; this
0x512F57: call    TESObjectREFR_GetName
0x512F5C: test    eax, eax
0x512F5E: jz      short loc_512F77
0x512F60: mov     ecx, esi; this
0x512F62: call    TESObjectREFR_GetName
0x512F67: push    eax
0x512F68: push    offset aVisualEffectIn; "Visual effect initialization failed for"...
0x512F6D: call    Interface_ConsolePrint
0x512F72: add     esp, 8
0x512F75: jmp     short loc_512F84
0x512F77: push    offset aVisualEffect_1; "Visual effect initialization failed for"...
0x512F7C: call    Interface_ConsolePrint
0x512F81: add     esp, 4
0x512F84: mov     al, 1
0x512F86: mov     ecx, [esp+4Ch+var_C]
0x512F8A: mov     large fs:0, ecx
0x512F91: pop     ecx
0x512F92: pop     edi
0x512F93: pop     esi
0x512F94: pop     ebp
0x512F95: pop     ebx
0x512F96: add     esp, 38h
0x512F99: retn
0x9B6FF0: mov     eax, [ebp-2Ch]
0x9B6FF3: push    eax
0x9B6FF4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B6FF9: pop     ecx
0x9B6FFA: retn
0x9B6FFB: mov     eax, [ebp-28h]
0x9B6FFE: push    eax
0x9B6FFF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B7004: pop     ecx
0x9B7005: retn
0x9B7006: mov     edx, [esp+arg_4]
0x9B700A: lea     eax, [edx-3Ch]
0x9B700D: mov     ecx, [edx-40h]
0x9B7010: xor     ecx, eax
0x9B7012: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B7017: mov     eax, offset stru_AE1CD0
0x9B701C: jmp     ___CxxFrameHandler3
