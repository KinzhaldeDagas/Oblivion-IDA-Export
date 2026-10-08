0x5C9CD0: push    0FFFFFFFFh; Prettier Faces 1.20.0 RC1 native-call audit (2026-10-01): character-creation Randomize Face remains TESNPC_RandomizeFaceGen at 0x5C9D4E then RaceSexMenu_RefreshPlayerFace at 0x5C9D55. Plugin core/optional patch-site preflight matched 20 expected E8 targets in OblivionNew; Blockhead-owned age lookup at 0x555457 is conditionally preserved. RC1 adds no new binary hook sites. Static audit/build/zip verification passed, but no in-game RC1 validation yet. Prettier Faces DLL is absent from active OBSE plugins as requested.
0x5C9CD2: push    offset SEH_5C9CD0
0x5C9CD7: mov     eax, large fs:0
0x5C9CDD: push    eax
0x5C9CDE: sub     esp, 74h
0x5C9CE1: push    ebx; a3
0x5C9CE2: push    ebp; a3
0x5C9CE3: push    esi; a3
0x5C9CE4: push    edi; a3
0x5C9CE5: mov     eax, ds:0B30AACh
0x5C9CEA: xor     eax, esp
0x5C9CEC: push    eax; a3
0x5C9CED: lea     eax, [esp+94h+var_C]
0x5C9CF4: mov     large fs:0, eax
0x5C9CFA: push    40Ch
0x5C9CFF: call    Menu_GetOpenMenuTile
0x5C9D04: xor     ebx, ebx
0x5C9D06: add     esp, 4
0x5C9D09: cmp     eax, ebx
0x5C9D0B: jz      loc_5C9F54
0x5C9D11: push    ebx; int
0x5C9D12: push    offset ??_R0?AVRaceSexMenu@@@8; struct TypeDescriptor *
0x5C9D17: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5C9D1C: push    ebx; int
0x5C9D1D: mov     ecx, eax
0x5C9D1F: call    Tile_GetParentMenu
0x5C9D24: push    eax; void *
0x5C9D25: call    OblivionDynamicCast
0x5C9D2A: mov     esi, eax
0x5C9D2C: add     esp, 14h
0x5C9D2F: cmp     esi, ebx
0x5C9D31: jz      loc_5C9F54
0x5C9D37: mov     ecx, ds:0B333C4h
0x5C9D3D: mov     eax, [ecx]
0x5C9D3F: mov     edx, [eax+170h]
0x5C9D45: call    edx
0x5C9D47: push    ebx; preserveHairLength
0x5C9D48: mov     edi, eax
0x5C9D4A: push    ebx; preserveSexMorph
0x5C9D4B: push    ebx; preserveAge
0x5C9D4C: mov     ecx, edi; this
0x5C9D4E: call    TESNPC_RandomizeFaceGen; RaceSexMenu_ExecuteRandomizeFace passes all preserve flags false to TESNPC_RandomizeFaceGen in native executable. PF 1.19.16 only ORs third preserveHairLength flag with opt-in INI setting. Age and sex-morph flags and native refresh remain unchanged. This allows face reroll with current hair length.
0x5C9D53: mov     ecx, esi; Pass the active RaceSexMenu as this for the immediately following player-face refresh.
0x5C9D55: call    RaceSexMenu_RefreshPlayerFace; Vanilla Randomize Face refreshes the actor head after NPC hairLength mutation, then updates Age/Complexion sliders; no explicit Hair > Length slider update in this function. Compare NPC+0x1CC, menu+0x874, Hair > Length Tile user0 before/after randomize to demonstrate stale UI.
0x5C9D5A: push    offset FaceGenMatrix_Destruct; a5
0x5C9D5F: push    offset FaceGenMatrix_Construct; a4
0x5C9D64: push    4; size
0x5C9D66: push    18h; a2
0x5C9D68: lea     eax, [esp+0A4h+a1]
0x5C9D6C: push    eax; a1
0x5C9D6D: call    ArrayConstructor
0x5C9D72: lea     ecx, [esp+94h+a1]
0x5C9D76: push    ecx; outAbsolute
0x5C9D77: mov     ecx, edi; this
0x5C9D79: mov     [esp+98h+var_4], ebx
0x5C9D80: call    TESNPC_BuildAbsoluteFaceGenParameters; Post-randomize UI synchronization begins. Only absolute FaceGen Age and UI-labeled Complexion are rebuilt below; TESNPC::hairLength is omitted.
0x5C9D85: push    ebx; matrixChannel
0x5C9D86: lea     edx, [esp+98h+a1]
0x5C9D8A: push    ebx; controlIndex
0x5C9D8B: push    edx; parameters
0x5C9D8C: call    FaceGenHeadParameters_GetControlValue; Read post-randomize age from matrix channel 0 (geometry) for the visible slider; matrix channel 1 texture age is not surfaced independently.
0x5C9D91: fstp    [esp+0A0h+a3]
0x5C9D95: fld1
0x5C9D97: add     esp, 4
0x5C9D9A: fldz
0x5C9D9C: mov     ecx, esp; this
0x5C9D9E: fsub    st(1), st
0x5C9DA0: fxch    st(1)
0x5C9DA2: fst     [esp+9Ch+var_74]
0x5C9DA6: fld     [esp+9Ch+a3]
0x5C9DAA: mov     [esp+9Ch+a3], esp
0x5C9DAE: fsub    qword ptr ds:0A492F0h
0x5C9DB4: push    ebx; a3
0x5C9DB5: fdiv    qword ptr ds:0A3F3D0h
0x5C9DBB: fmulp   st(1), st
0x5C9DBD: faddp   st(1), st
0x5C9DBF: fstp    dword ptr [esi+880h]; Synchronizes the age UI slider from rebuilt absolute FaceGen controls: normalizedAge = (age - 15) / 50, mapping [15,65] to [0,1].
0x5C9DC5: mov     eax, ds:0B38F98h
0x5C9DCA: push    eax; categoryName
0x5C9DCB: mov     [ecx], ebx
0x5C9DCD: mov     [ecx+4], bx
0x5C9DD1: mov     [ecx+6], bx
0x5C9DD5: call    BSStringT_Set
0x5C9DDA: mov     eax, ds:0B38F70h
0x5C9DDF: sub     esp, 8
0x5C9DE2: mov     ecx, esp; this
0x5C9DE4: mov     dword ptr [esp+0A4h+var_7C], esp
0x5C9DE8: push    ebx; a3
0x5C9DE9: push    eax; a2
0x5C9DEA: mov     byte ptr [esp+0ACh+var_4], 1
0x5C9DF2: mov     [ecx], ebx
0x5C9DF4: mov     [ecx+4], bx
0x5C9DF8: mov     [ecx+6], bx
0x5C9DFC: call    BSStringT_Set
0x5C9E01: mov     ecx, esi; this
0x5C9E03: mov     byte ptr [esp+0A4h+var_4], bl
0x5C9E0A: call    RaceSexMenu_FindControlTile; Age control lookup may return null when custom Race/Sex XML omits or renames the localized control; native code does not test the result.
0x5C9E0F: fld     dword ptr [esi+880h]
0x5C9E15: push    ecx
0x5C9E16: fstp    [esp+98h+a3]; a3
0x5C9E1A: fld     dword ptr ds:0A6D2D8h
0x5C9E20: mov     ebp, eax
0x5C9E22: fstp    [esp+98h+a2]; value
0x5C9E25: push    0FB1h; propertyCode
0x5C9E2A: mov     ecx, ebp; this
0x5C9E2C: call    Tile_SetFloat; First Age Tile_SetFloat call (E8 -> 0x58CEB0). Missing Age Tile produces null and native setter dereferences. PF 1.19.12 guards all three Age calls as a group, independently of native confirmation JMP and category guard ownership.
0x5C9E31: fld     [esp+94h+a3]
0x5C9E35: push    ecx
0x5C9E36: fstp    [esp+98h+a2]; value
0x5C9E39: push    0FB1h; propertyCode
0x5C9E3E: mov     ecx, ebp; this
0x5C9E40: call    Tile_SetFloat; Second unconditional Age user3 write; assumes the localized control lookup succeeded.
0x5C9E45: fldz
0x5C9E47: push    ecx
0x5C9E48: fstp    [esp+98h+a2]; value
0x5C9E4B: push    0FB1h; propertyCode
0x5C9E50: mov     ecx, ebp; this
0x5C9E52: call    Tile_SetFloat; Third unconditional Age user3 write; assumes the localized control lookup succeeded.
0x5C9E57: push    ebx; matrixChannel
0x5C9E58: lea     eax, [esp+98h+a1]
0x5C9E5C: push    1; controlIndex
0x5C9E5E: push    eax; parameters
0x5C9E5F: call    FaceGenHeadParameters_GetControlValue; Read post-randomize sex morph from matrix channel 0 (geometry) for the UI-labeled Complexion slider; matrix channel 1 texture sex morph is not surfaced independently.
0x5C9E64: fstp    [esp+0A0h+var_7C]
0x5C9E68: add     esp, 0Ch
0x5C9E6B: mov     ecx, edi; this
0x5C9E6D: call    TESNPC_GetSexMorphBase; Returns the stock sex-morph base endpoint: +2.0 for female TESNPCs and -2.0 for male TESNPCs.
0x5C9E72: fsubr   [esp+94h+var_7C]
0x5C9E76: sub     esp, 8
0x5C9E79: mov     ecx, esp; this
0x5C9E7B: fstp    [esp+9Ch+a3]
0x5C9E7F: mov     dword ptr [esp+9Ch+var_7C], esp
0x5C9E83: fld     [esp+9Ch+a3]
0x5C9E87: push    ebx; a3
0x5C9E88: fsub    qword ptr ds:0A3F400h
0x5C9E8E: fmul    qword ptr ds:0A3C770h
0x5C9E94: fmul    [esp+0A0h+var_74]
0x5C9E98: fadd    qword ptr ds:0A2FC68h
0x5C9E9E: fstp    dword ptr [esi+884h]; Synchronizes the sex-morph UI slider: normalized = ((absoluteControl - actorSexBase) + 2) / 4, mapping the randomized delta [-2,2] to [0,1].
0x5C9EA4: mov     eax, ds:0B38FA0h
0x5C9EA9: push    eax; categoryName
0x5C9EAA: mov     [ecx], ebx
0x5C9EAC: mov     [ecx+4], bx
0x5C9EB0: mov     [ecx+6], bx
0x5C9EB4: call    BSStringT_Set
0x5C9EB9: mov     eax, ds:0B38F70h
0x5C9EBE: sub     esp, 8
0x5C9EC1: mov     ecx, esp; this
0x5C9EC3: mov     [esp+0A4h+a3], esp
0x5C9EC7: push    ebx; a3
0x5C9EC8: push    eax; a2
0x5C9EC9: mov     byte ptr [esp+0ACh+var_4], 2
0x5C9ED1: mov     [ecx], ebx
0x5C9ED3: mov     [ecx+4], bx
0x5C9ED7: mov     [ecx+6], bx
0x5C9EDB: call    BSStringT_Set
0x5C9EE0: mov     ecx, esi; this
0x5C9EE2: mov     byte ptr [esp+0A4h+var_4], bl
0x5C9EE9: call    RaceSexMenu_FindControlTile; Complexion control lookup may return null when custom Race/Sex XML omits or renames the localized control; native code does not test the result.
0x5C9EEE: fld     dword ptr [esi+884h]
0x5C9EF4: push    ecx
0x5C9EF5: fstp    [esp+98h+a3]
0x5C9EF9: fld     dword ptr ds:0A6D2D8h
0x5C9EFF: mov     edi, eax
0x5C9F01: fstp    [esp+98h+a2]; value
0x5C9F04: push    0FB1h; propertyCode
0x5C9F09: mov     ecx, edi; this
0x5C9F0B: call    Tile_SetFloat; First Complexion Tile_SetFloat call (E8 -> 0x58CEB0). Missing Complexion Tile produces null. PF 1.19.12 guards all three Complexion calls as a group after verifying native targets; independent of other optional hook availability.
0x5C9F10: fld     [esp+94h+a3]
0x5C9F14: push    ecx
0x5C9F15: fstp    [esp+98h+a2]; value
0x5C9F18: push    0FB1h; propertyCode
0x5C9F1D: mov     ecx, edi; this
0x5C9F1F: call    Tile_SetFloat; Second unconditional Complexion user3 write; assumes the localized control lookup succeeded.
0x5C9F24: fldz
0x5C9F26: push    ecx
0x5C9F27: fstp    [esp+98h+a2]; value
0x5C9F2A: push    0FB1h; propertyCode
0x5C9F2F: mov     ecx, edi; this
0x5C9F31: call    Tile_SetFloat; Third unconditional Complexion user3 write; assumes the localized control lookup succeeded.
0x5C9F36: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x5C9F3B: push    4; int
0x5C9F3D: push    18h; unsigned int
0x5C9F3F: lea     ecx, [esp+0A0h+a1]
0x5C9F43: push    ecx; void *
0x5C9F44: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x5C9F4F: call    $LN21
0x5C9F54: mov     ecx, [esp+94h+var_C]
0x5C9F5B: mov     large fs:0, ecx
0x5C9F62: pop     ecx
0x5C9F63: pop     edi
0x5C9F64: pop     esi
0x5C9F65: pop     ebp
0x5C9F66: pop     ebx
0x5C9F67: add     esp, 80h
0x5C9F6D: retn
0x9C1830: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9C1835: push    4; int
0x9C1837: push    18h; unsigned int
0x9C1839: lea     eax, [ebp-6Ch]
0x9C183C: push    eax; void *
0x9C183D: call    $LN21
0x9C1842: retn
0x9C1843: mov     ecx, [ebp-80h]; void *
0x9C1846: jmp     BSStringT_Clear
0x9C184B: mov     ecx, [ebp-7Ch]; void *
0x9C184E: jmp     BSStringT_Clear
0x9C1853: mov     edx, [esp+arg_4]
0x9C1857: lea     eax, [edx-84h]
0x9C185D: mov     ecx, [edx-88h]
0x9C1863: xor     ecx, eax
0x9C1865: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C186A: mov     eax, offset stru_AEA874
0x9C186F: jmp     ___CxxFrameHandler3
