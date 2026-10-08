0x4F2C10: push    ebp; Verified: WorldSpace post-fixups resolve Climate, WaterForm and parent WorldSpace links and rebuild/repair exterior cell-map relationships. No confirmed write to the auxiliary spatial candidate map at +0x60 was established in this routine.
0x4F2C11: mov     ebp, esp
0x4F2C13: and     esp, 0FFFFFFF8h
0x4F2C16: push    0FFFFFFFFh
0x4F2C18: push    offset SEH_4F2C10
0x4F2C1D: mov     eax, large fs:0
0x4F2C23: push    eax
0x4F2C24: sub     esp, 24h
0x4F2C27: push    ebx
0x4F2C28: push    ebp
0x4F2C29: push    esi
0x4F2C2A: push    edi
0x4F2C2B: mov     eax, ds:0B30AACh
0x4F2C30: xor     eax, esp
0x4F2C32: push    eax
0x4F2C33: lea     eax, [esp+44h+var_C]
0x4F2C37: mov     large fs:0, eax
0x4F2C3D: mov     esi, ecx
0x4F2C3F: mov     eax, [esi+8]
0x4F2C42: shr     eax, 3
0x4F2C45: test    al, 1
0x4F2C47: jnz     loc_4F2DF9
0x4F2C4D: mov     eax, [esi+58h]
0x4F2C50: test    eax, eax
0x4F2C52: mov     [esp+44h+a1], eax
0x4F2C56: jz      short loc_4F2CD4
0x4F2C58: push    0FFFFFFFFh
0x4F2C5A: call    TESForm_GetOverrideFile; Verified post-fixup path: resolves stored Climate FormID through winning override file, looks up and RTTI-casts TESClimate, reports missing Climate, then replaces raw field with pointer.
0x4F2C5F: push    eax
0x4F2C60: lea     ecx, [esp+48h+a1]
0x4F2C64: push    ecx
0x4F2C65: call    TESForm_ResolveFormID; Resolves a plugin-record FormID to current load order. During save loading it uses modRefIDTable; otherwise the serialized high byte selects a master, falling back to the current file, while preserving the low 24-bit object ID.
0x4F2C6A: mov     edx, [esp+4Ch+a1]
0x4F2C6E: add     esp, 8
0x4F2C71: push    0; int
0x4F2C73: push    offset ??_R0?AVTESClimate@@@8; struct TypeDescriptor *
0x4F2C78: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F2C7D: push    0; int
0x4F2C7F: push    edx; a1
0x4F2C80: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4F2C85: add     esp, 4
0x4F2C88: push    eax; void *
0x4F2C89: call    OblivionDynamicCast
0x4F2C8E: mov     edi, eax
0x4F2C90: add     esp, 14h
0x4F2C93: test    edi, edi
0x4F2C95: jnz     short loc_4F2CD1
0x4F2C97: mov     ecx, esi
0x4F2C99: call    TESForm__GetEditorNameLen
0x4F2C9E: test    eax, eax
0x4F2CA0: jz      short loc_4F2CBB
0x4F2CA2: mov     eax, [esi]
0x4F2CA4: mov     edx, [eax+0D4h]
0x4F2CAA: mov     ecx, esi
0x4F2CAC: call    edx
0x4F2CAE: push    eax
0x4F2CAF: mov     eax, [esp+48h+a1]
0x4F2CB3: push    eax
0x4F2CB4: push    offset aUnableToFindCl; "Unable to find climate (%08X) on owner "...
0x4F2CB9: jmp     short loc_4F2CC9
0x4F2CBB: mov     eax, [esi+0Ch]
0x4F2CBE: mov     ecx, [esp+44h+a1]
0x4F2CC2: push    eax
0x4F2CC3: push    ecx
0x4F2CC4: push    offset aUnableToFind_5; "Unable to find climate (%08X) on owner "...
0x4F2CC9: call    PrintError
0x4F2CCE: add     esp, 0Ch
0x4F2CD1: mov     [esi+58h], edi
0x4F2CD4: mov     eax, [esi+80h]
0x4F2CDA: test    eax, eax
0x4F2CDC: mov     [esp+44h+a1], eax
0x4F2CE0: jz      loc_4F2D67
0x4F2CE6: push    0FFFFFFFFh
0x4F2CE8: mov     ecx, esi
0x4F2CEA: call    TESForm_GetOverrideFile; Verified post-fixup path: resolves stored WaterForm FormID and RTTI-casts TESWaterForm before replacing raw field.
0x4F2CEF: push    eax
0x4F2CF0: lea     edx, [esp+48h+a1]
0x4F2CF4: push    edx
0x4F2CF5: call    TESForm_ResolveFormID; Resolves a plugin-record FormID to current load order. During save loading it uses modRefIDTable; otherwise the serialized high byte selects a master, falling back to the current file, while preserving the low 24-bit object ID.
0x4F2CFA: mov     eax, [esp+4Ch+a1]
0x4F2CFE: add     esp, 8
0x4F2D01: push    0; int
0x4F2D03: push    offset ??_R0?AVTESWaterForm@@@8; struct TypeDescriptor *
0x4F2D08: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F2D0D: push    0; int
0x4F2D0F: push    eax; a1
0x4F2D10: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4F2D15: add     esp, 4
0x4F2D18: push    eax; void *
0x4F2D19: call    OblivionDynamicCast
0x4F2D1E: mov     edi, eax
0x4F2D20: add     esp, 14h
0x4F2D23: test    edi, edi
0x4F2D25: jnz     short loc_4F2D61
0x4F2D27: mov     ecx, esi
0x4F2D29: call    TESForm__GetEditorNameLen
0x4F2D2E: test    eax, eax
0x4F2D30: jz      short loc_4F2D4B
0x4F2D32: mov     edx, [esi]
0x4F2D34: mov     eax, [edx+0D4h]
0x4F2D3A: mov     ecx, esi
0x4F2D3C: call    eax
0x4F2D3E: mov     ecx, [esp+44h+a1]
0x4F2D42: push    eax
0x4F2D43: push    ecx
0x4F2D44: push    offset aUnableToFindWa; "Unable to find water type (%08X) on own"...
0x4F2D49: jmp     short loc_4F2D59
0x4F2D4B: mov     eax, [esi+0Ch]
0x4F2D4E: mov     edx, [esp+44h+a1]
0x4F2D52: push    eax
0x4F2D53: push    edx
0x4F2D54: push    offset aUnableToFind_6; "Unable to find water type (%08X) on own"...
0x4F2D59: call    PrintError
0x4F2D5E: add     esp, 0Ch
0x4F2D61: mov     [esi+80h], edi
0x4F2D67: mov     eax, [esi+7Ch]
0x4F2D6A: test    eax, eax
0x4F2D6C: mov     [esp+44h+a1], eax
0x4F2D70: jz      short loc_4F2DF0
0x4F2D72: push    0FFFFFFFFh
0x4F2D74: mov     ecx, esi
0x4F2D76: call    TESForm_GetOverrideFile; Verified post-fixup path: resolves parentWorldspace FormID and RTTI-casts to TESWorldSpace after Climate and WaterForm fixups.
0x4F2D7B: push    eax
0x4F2D7C: lea     eax, [esp+48h+a1]
0x4F2D80: push    eax
0x4F2D81: call    TESForm_ResolveFormID; Resolves a plugin-record FormID to current load order. During save loading it uses modRefIDTable; otherwise the serialized high byte selects a master, falling back to the current file, while preserving the low 24-bit object ID.
0x4F2D86: mov     ecx, [esp+4Ch+a1]
0x4F2D8A: add     esp, 8
0x4F2D8D: push    0; int
0x4F2D8F: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x4F2D94: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F2D99: push    0; int
0x4F2D9B: push    ecx; a1
0x4F2D9C: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4F2DA1: add     esp, 4
0x4F2DA4: push    eax; void *
0x4F2DA5: call    OblivionDynamicCast
0x4F2DAA: mov     edi, eax
0x4F2DAC: add     esp, 14h
0x4F2DAF: test    edi, edi
0x4F2DB1: jnz     short loc_4F2DED
0x4F2DB3: mov     ecx, esi
0x4F2DB5: call    TESForm__GetEditorNameLen
0x4F2DBA: test    eax, eax
0x4F2DBC: jz      short loc_4F2DD7
0x4F2DBE: mov     edx, [esi]
0x4F2DC0: mov     eax, [edx+0D4h]
0x4F2DC6: mov     ecx, esi
0x4F2DC8: call    eax
0x4F2DCA: mov     ecx, [esp+44h+a1]
0x4F2DCE: push    eax
0x4F2DCF: push    ecx
0x4F2DD0: push    offset aUnableToFindLa; "Unable to find landscape world (%08X) o"...
0x4F2DD5: jmp     short loc_4F2DE5
0x4F2DD7: mov     eax, [esi+0Ch]
0x4F2DDA: mov     edx, [esp+44h+a1]
0x4F2DDE: push    eax
0x4F2DDF: push    edx
0x4F2DE0: push    offset aUnableToFind_7; "Unable to find landscape world (%08X) o"...
0x4F2DE5: call    PrintError
0x4F2DEA: add     esp, 0Ch
0x4F2DED: mov     [esi+7Ch], edi
0x4F2DF0: push    1; a2
0x4F2DF2: mov     ecx, esi; this
0x4F2DF4: call    TESForm_SetIsLinked
0x4F2DF9: mov     edx, [esi+30h]
0x4F2DFC: mov     ecx, [edx+4]
0x4F2DFF: xor     ebp, ebp
0x4F2E01: xor     eax, eax
0x4F2E03: cmp     ecx, ebp
0x4F2E05: jbe     short loc_4F2E22
0x4F2E07: mov     edi, [edx+8]
0x4F2E0A: mov     edx, edi
0x4F2E0C: lea     esp, [esp+0]
0x4F2E10: cmp     [edx], ebp
0x4F2E12: jnz     loc_4F2FB8
0x4F2E18: add     eax, 1
0x4F2E1B: add     edx, 4
0x4F2E1E: cmp     eax, ecx
0x4F2E20: jb      short loc_4F2E10
0x4F2E22: xor     eax, eax
0x4F2E24: cmp     eax, ebp
0x4F2E26: mov     [esp+44h+position], eax
0x4F2E2A: jz      short loc_4F2E60
0x4F2E2C: lea     esp, [esp+0]
0x4F2E30: lea     eax, [esp+44h+a1]
0x4F2E34: push    eax; valueOut
0x4F2E35: lea     ecx, [esp+48h+keyOut]
0x4F2E39: push    ecx; keyOut
0x4F2E3A: mov     ecx, [esi+30h]; self
0x4F2E3D: lea     edx, [esp+4Ch+position]
0x4F2E41: push    edx; position
0x4F2E42: mov     [esp+50h+a1], ebp
0x4F2E46: call    NiTMap_U32Pointer_GetNextEntry
0x4F2E4B: mov     ecx, [esp+44h+a1]
0x4F2E4F: cmp     ecx, ebp
0x4F2E51: jz      short loc_4F2E5A
0x4F2E53: mov     eax, [ecx]
0x4F2E55: mov     edx, [eax+6Ch]
0x4F2E58: call    edx
0x4F2E5A: cmp     [esp+44h+position], ebp
0x4F2E5E: jnz     short loc_4F2E30
0x4F2E60: mov     ecx, [esi+34h]
0x4F2E63: cmp     ecx, ebp
0x4F2E65: jz      short loc_4F2E6E
0x4F2E67: mov     eax, [ecx]
0x4F2E69: mov     edx, [eax+6Ch]
0x4F2E6C: call    edx
0x4F2E6E: cmp     [esi+0A8h], ebp
0x4F2E74: jnz     loc_4F30B8
0x4F2E7A: push    ebp; a2
0x4F2E7B: mov     ecx, esi; this
0x4F2E7D: call    TESForm_GetOverrideFile; TESForm override-file selector. With a2=-1 it walks the entire mod-reference list and returns the last non-null TESFile; TESTopicInfo lazy responses therefore read only the winning override file.
0x4F2E82: cmp     eax, ebp
0x4F2E84: jz      loc_4F3268
0x4F2E8A: mov     ecx, eax
0x4F2E8C: call    TESFile_GetThreadSafeFile; Returns the root TESFile on the main thread; on worker threads returns the per-thread clone selected by GetCurrentThreadId via TESFile_GetThreadSafeFileForThread.
0x4F2E91: mov     edi, eax
0x4F2E93: cmp     edi, ebp
0x4F2E95: jz      loc_4F3268
0x4F2E9B: mov     ecx, edi
0x4F2E9D: call    TESFile_GetIsMaster
0x4F2EA2: test    al, al
0x4F2EA4: jz      loc_4F3268
0x4F2EAA: push    esi
0x4F2EAB: mov     ecx, edi
0x4F2EAD: call    TESFile__FindForm
0x4F2EB2: test    al, al
0x4F2EB4: jz      loc_4F3268
0x4F2EBA: fld     dword ptr [esi+0A0h]
0x4F2EC0: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x4F2EC5: fld     dword ptr [esi+98h]
0x4F2ECB: mov     ebx, eax
0x4F2ECD: sar     ebx, 0Ch
0x4F2ED0: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x4F2ED5: fld     dword ptr [esi+0A4h]
0x4F2EDB: sar     eax, 0Ch
0x4F2EDE: sub     ebx, eax
0x4F2EE0: add     ebx, 1
0x4F2EE3: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x4F2EE8: fld     dword ptr [esi+9Ch]
0x4F2EEE: mov     ebp, eax
0x4F2EF0: sar     ebp, 0Ch
0x4F2EF3: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x4F2EF8: sar     eax, 0Ch
0x4F2EFB: sub     ebp, eax
0x4F2EFD: add     ebp, 1
0x4F2F00: cmp     ebx, 3E8h
0x4F2F06: jnb     loc_4F3268
0x4F2F0C: cmp     ebp, 3E8h
0x4F2F12: jnb     loc_4F3268
0x4F2F18: mov     eax, [esi+0Ch]
0x4F2F1B: push    eax
0x4F2F1C: mov     eax, [esi]
0x4F2F1E: mov     edx, [eax+0D4h]
0x4F2F24: mov     ecx, esi
0x4F2F26: call    edx
0x4F2F28: push    eax; ArgList
0x4F2F29: push    offset aOffsetCollecti; "Offset collection for worldspace '%s' ("...
0x4F2F2E: call    PrintError
0x4F2F33: imul    ebp, ebx
0x4F2F36: xor     ecx, ecx
0x4F2F38: mov     eax, ebp
0x4F2F3A: mov     edx, 4
0x4F2F3F: mul     edx
0x4F2F41: seto    cl
0x4F2F44: neg     ecx
0x4F2F46: or      ecx, eax
0x4F2F48: push    ecx; Size
0x4F2F49: call    FormHeapAlloc
0x4F2F4E: mov     ebx, eax; EngineFix implementation 2026-05-07: narrow DoPostFixups allocation guard. If rebuilt offset-table allocation fails, clean the outstanding cdecl arguments and skip to 0x4F3268 instead of calling memset on NULL. Wider offset-write tracking remains disabled.
0x4F2F50: lea     eax, ds:0[ebp*4]
0x4F2F57: push    eax
0x4F2F58: push    0
0x4F2F5A: push    ebx
0x4F2F5B: mov     [esp+60h+position], ebx
0x4F2F5F: call    __memset
0x4F2F64: add     esp, 1Ch; EnginePatch v5 CTD hotfix: DoPostFixups rebuilt-offset-table tracker hook is disabled by default pending runtime validation.
0x4F2F67: push    1
0x4F2F69: mov     ecx, edi
0x4F2F6B: call    TESFile_NextRecordEx; NextForm?
0x4F2F70: lea     ebp, [edi+23Ch]
0x4F2F76: test    ebp, ebp
0x4F2F78: mov     [esp+44h+var_29], 0
0x4F2F7D: jz      loc_4F30AD
0x4F2F83: cmp     [esp+44h+var_29], 0; jumptable 004F2FB1 default case, cases 2,3,7
0x4F2F88: jnz     loc_4F30A9
0x4F2F8E: mov     eax, [ebp+0]
0x4F2F91: cmp     eax, ds:0B05E20h
0x4F2F97: jnz     short loc_4F2FD8
0x4F2F99: mov     eax, [ebp+0Ch]
0x4F2F9C: add     eax, 0FFFFFFFFh; switch 10 cases
0x4F2F9F: cmp     eax, 9
0x4F2FA2: mov     cl, 1
0x4F2FA4: mov     [esp+44h+var_29], cl
0x4F2FA8: ja      short def_4F2FB1; jumptable 004F2FB1 default case, cases 2,3,7
0x4F2FAA: movzx   edx, ds:byte_4F3290[eax]
0x4F2FB1: jmp     ds:jpt_4F2FB1[edx*4]; switch jump
0x4F2FB8: mov     eax, [edi+eax*4]
0x4F2FBB: jmp     loc_4F2E24
0x4F2FC0: xor     cl, cl; jumptable 004F2FB1 cases 1,4,5
0x4F2FC2: test    cl, cl; jumptable 004F2FB1 cases 6,8-10
0x4F2FC4: mov     [esp+44h+var_29], 0
0x4F2FC9: jz      loc_4F3091
0x4F2FCF: mov     ecx, edi
0x4F2FD1: call    TESFile__NextGroup; MEF v20 fix: TESFile::NextGroup short-GRUP guard. Reject lengths below 0x14 before subtracting the group header and tail-calling TESFile_NextRecord.
0x4F2FD6: jmp     short def_4F2FB1; jumptable 004F2FB1 default case, cases 2,3,7
0x4F2FD8: cmp     eax, ds:0B06048h
0x4F2FDE: jnz     loc_4F3073
0x4F2FE4: xor     eax, eax
0x4F2FE6: test    dword ptr [ebp+8], 400h
0x4F2FED: mov     [esp+44h+a2], eax
0x4F2FF1: mov     [esp+44h+a3], eax
0x4F2FF5: jnz     short loc_4F3065
0x4F2FF7: mov     ecx, edi
0x4F2FF9: xor     bl, bl
0x4F2FFB: call    TESFile_GetChunkType
0x4F3000: test    eax, eax
0x4F3002: jz      short loc_4F303C
0x4F3004: test    bl, bl
0x4F3006: jnz     short loc_4F303C
0x4F3008: cmp     eax, 434C4358h
0x4F300D: jnz     short loc_4F3026
0x4F300F: push    8; a4
0x4F3011: lea     eax, [esp+48h+a2]
0x4F3015: push    eax; Dst
0x4F3016: mov     ecx, edi; a1
0x4F3018: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x4F301D: mov     ecx, edi
0x4F301F: mov     bl, 1
0x4F3021: call    TESFile_JumpToBeginningOfRecord; TESFile::TESRewindChunk
0x4F3026: mov     ecx, edi
0x4F3028: call    TESFile_GetNextChunk
0x4F302D: test    al, al
0x4F302F: jz      short loc_4F303C
0x4F3031: mov     ecx, edi
0x4F3033: call    TESFile_GetChunkType
0x4F3038: test    eax, eax
0x4F303A: jnz     short loc_4F3004
0x4F303C: mov     ecx, [esp+44h+a3]
0x4F3040: mov     edx, [esp+44h+a2]
0x4F3044: push    ecx; a3
0x4F3045: push    edx; a2
0x4F3046: mov     ecx, esi; this
0x4F3048: call    TESWorldSpace__GetIndexForCellCoord; EngineFix trace 2026-05-11: GetIndexForCellCoord validates coordinates against worldspace [0xAC..0xB8] bounds. DoPostFixups offset-table allocation is based on [0x98..0xA4], so callers that write into rebuilt tables must separately check index against the allocation rectangle.
0x4F304D: cmp     eax, 0FFFFFFFFh
0x4F3050: jz      short loc_4F3065
0x4F3052: mov     ecx, [edi+25Ch]
0x4F3058: sub     ecx, [esi+0BCh]
0x4F305E: mov     edx, [esp+44h+position]; MEF v21 verification correction: guard DoPostFixups rebuilt WRLD offset-table write; only write table[index] when index is within the allocation rectangle derived from [0x98..0xA4].
0x4F3062: mov     [edx+eax*4], ecx; EngineIssues review: DoPostFixups offset-table rebuild writes cell offset at computed index without checking index against allocation count; allocation bounds and GetIndex bounds appear different.
0x4F3065: push    1
0x4F3067: mov     ecx, edi
0x4F3069: call    TESFile_NextRecordEx; NextForm?
0x4F306E: jmp     def_4F2FB1; jumptable 004F2FB1 default case, cases 2,3,7
0x4F3073: cmp     eax, ds:0B0609Ch
0x4F3079: jnz     short loc_4F3089
0x4F307B: push    1
0x4F307D: mov     ecx, edi
0x4F307F: call    TESFile_NextRecordEx; NextForm?
0x4F3084: jmp     def_4F2FB1; jumptable 004F2FB1 default case, cases 2,3,7
0x4F3089: cmp     eax, ds:0B060A8h
0x4F308F: jnz     short loc_4F309F
0x4F3091: push    1
0x4F3093: mov     ecx, edi
0x4F3095: call    TESFile_NextRecordEx; NextForm?
0x4F309A: jmp     def_4F2FB1; jumptable 004F2FB1 default case, cases 2,3,7
0x4F309F: mov     [esp+44h+var_29], 1
0x4F30A4: jmp     def_4F2FB1; jumptable 004F2FB1 default case, cases 2,3,7
0x4F30A9: mov     ebx, [esp+44h+position]; MEF v21 verification correction: track vanilla rebuilt WRLD offset table and count when committing it to TESWorldSpace+0xA8, so fast lookup remains bounded without discarding valid rebuilt tables.
0x4F30AD: mov     [esi+0A8h], ebx
0x4F30B3: jmp     loc_4F3268
0x4F30B8: cmp     byte ptr ds:0B09DB8h, 0; EngineIssues review: bCheckOffsetOnLoad validation can iterate a full worldspace cell rectangle and load temporary cells without the rebuild path's 0x3E8 dimension cap.
0x4F30BF: jz      loc_4F3268
0x4F30C5: fld     dword ptr [esi+98h]
0x4F30CB: fstp    [esp+44h+keyOut]
0x4F30CF: fld     [esp+44h+keyOut]
0x4F30D3: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x4F30D8: fld     dword ptr [esi+9Ch]
0x4F30DE: fstp    [esp+44h+keyOut]
0x4F30E2: mov     edi, eax
0x4F30E4: fld     [esp+44h+keyOut]
0x4F30E8: sar     edi, 0Ch
0x4F30EB: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x4F30F0: fld     dword ptr [esi+0A0h]
0x4F30F6: mov     ebx, eax
0x4F30F8: fstp    [esp+44h+keyOut]
0x4F30FC: fld     [esp+44h+keyOut]
0x4F3100: sar     ebx, 0Ch
0x4F3103: mov     [esp+44h+position], ebx
0x4F3107: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x4F310C: fld     dword ptr [esi+0A4h]
0x4F3112: fstp    [esp+44h+var_20]
0x4F3116: sar     eax, 0Ch
0x4F3119: fld     [esp+44h+var_20]
0x4F311D: mov     [esp+44h+keyOut], eax
0x4F3121: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x4F3126: sar     eax, 0Ch
0x4F3129: push    ebp; a2
0x4F312A: mov     ecx, esi; this
0x4F312C: mov     [esp+48h+var_20], eax
0x4F3130: call    TESForm_GetOverrideFile; TESForm override-file selector. With a2=-1 it walks the entire mod-reference list and returns the last non-null TESFile; TESTopicInfo lazy responses therefore read only the winning override file.
0x4F3135: cmp     eax, ebp
0x4F3137: jz      loc_4F3268
0x4F313D: mov     ecx, eax
0x4F313F: call    TESFile_GetThreadSafeFile; Returns the root TESFile on the main thread; on worker threads returns the per-thread clone selected by GetCurrentThreadId via TESFile_GetThreadSafeFileForThread.
0x4F3144: cmp     eax, ebp
0x4F3146: mov     [esp+44h+a1], eax
0x4F314A: jz      loc_4F3268
0x4F3150: mov     ecx, eax
0x4F3152: call    TESFile_GetIsMaster
0x4F3157: test    al, al
0x4F3159: jz      loc_4F3268
0x4F315F: cmp     edi, [esp+44h+keyOut]; EnginePatch v5 CTD hotfix: bCheckOffsetOnLoad rectangle guard hook is disabled by default with the other DoPostFixups replacements pending runtime validation.
0x4F3163: mov     ebp, edi
0x4F3165: jg      loc_4F3268
0x4F316B: jmp     short loc_4F3174
0x4F3170: mov     ebx, [esp+44h+position]
0x4F3174: mov     eax, [esp+44h+var_20]
0x4F3178: cmp     [esp+44h+position], eax
0x4F317C: jg      loc_4F325B
0x4F3182: push    ebx; a3
0x4F3183: push    ebp; a2
0x4F3184: mov     ecx, esi; this
0x4F3186: call    TESWorldSpace__GetIndexForCellCoord; EngineFix trace 2026-05-11: GetIndexForCellCoord validates coordinates against worldspace [0xAC..0xB8] bounds. DoPostFixups offset-table allocation is based on [0x98..0xA4], so callers that write into rebuilt tables must separately check index against the allocation rectangle.
0x4F318B: xor     edi, edi
0x4F318D: cmp     eax, edi
0x4F318F: jl      loc_4F324E
0x4F3195: mov     ecx, [esi+0A8h]; MEF v21 implementation target: bCheckOffsetOnLoad validation read is guarded by tracked OFST/rebuilt-table count; unknown/out-of-range tables skip this validation cell.
0x4F319B: mov     ecx, [ecx+eax*4]
0x4F319E: cmp     ecx, edi
0x4F31A0: jz      loc_4F324E
0x4F31A6: mov     eax, [esi+0BCh]
0x4F31AC: add     eax, ecx
0x4F31AE: mov     ecx, [esp+44h+a1]
0x4F31B2: push    eax; Buffer
0x4F31B3: call    TESFIle_JumpToRecord
0x4F31B8: push    58h ; 'X'; Size
0x4F31BA: call    FormHeapAlloc
0x4F31BF: add     esp, 4
0x4F31C2: mov     [esp+44h+a2], eax
0x4F31C6: cmp     eax, edi; EngineFix implementation 2026-05-07: narrow validation-cell allocation guard. If temporary TESObjectCELL allocation fails, restore SEH state and continue the validation loop at 0x4F324E instead of calling TESObjectCELL methods on NULL.
0x4F31C8: mov     [esp+44h+var_4], edi
0x4F31CC: jz      short loc_4F31D7
0x4F31CE: mov     ecx, eax
0x4F31D0: call    TESObjectCELL_constr
0x4F31D5: mov     edi, eax
0x4F31D7: push    0
0x4F31D9: mov     ecx, edi
0x4F31DB: mov     [esp+48h+var_4], 0FFFFFFFFh
0x4F31E3: call    TESObjectCELL__SetIsInterior
0x4F31E8: mov     ecx, edi
0x4F31EA: call    sub_4CA710
0x4F31EF: mov     edx, [esp+44h+a1]
0x4F31F3: push    edx
0x4F31F4: push    edi
0x4F31F5: call    TESDataHandler_LoadForm; TESDataHandler_LoadForm supports override reuse: invokes virtual TESForm::LoadForm on the supplied existing object and updates master/active-file flags.
0x4F31FA: add     esp, 8
0x4F31FD: test    al, al
0x4F31FF: jz      short loc_4F3217
0x4F3201: mov     ecx, edi; this
0x4F3203: call    TESObjectCELL_GetXCoordinate
0x4F3208: cmp     eax, ebp
0x4F320A: jnz     short loc_4F3217
0x4F320C: mov     ecx, edi; this
0x4F320E: call    TESObjectCELL_GetYCoordinate
0x4F3213: cmp     eax, ebx
0x4F3215: jz      short loc_4F3237
0x4F3217: mov     eax, [esi+0Ch]
0x4F321A: push    eax
0x4F321B: mov     eax, [esi]
0x4F321D: mov     edx, [eax+0D4h]
0x4F3223: mov     ecx, esi
0x4F3225: call    edx
0x4F3227: push    eax
0x4F3228: push    ebx
0x4F3229: push    ebp; ArgList
0x4F322A: push    offset aFailedToFindCe; "Failed to find cell (%i, %i) in world '"...
0x4F322F: call    PrintError
0x4F3234: add     esp, 14h
0x4F3237: push    edi
0x4F3238: mov     ecx, esi
0x4F323A: call    TESWorldSpace_RemoveCellFromCellMap
0x4F323F: test    edi, edi
0x4F3241: jz      short loc_4F324E
0x4F3243: mov     eax, [edi]
0x4F3245: mov     edx, [eax+10h]
0x4F3248: push    1
0x4F324A: mov     ecx, edi
0x4F324C: call    edx
0x4F324E: add     ebx, 1
0x4F3251: cmp     ebx, [esp+44h+var_20]
0x4F3255: jle     loc_4F3182
0x4F325B: add     ebp, 1
0x4F325E: cmp     ebp, [esp+44h+keyOut]
0x4F3262: jle     loc_4F3170
0x4F3268: mov     ecx, esi; Verified DoPostFixups invokes TESWorldSpace::LoadLODObjects after climate/water/parent and exterior-cell map repair, populating +0xC8 CellsWithLODObjects and the +0xD8/+0xDC LOD metadata fields.
0x4F326A: call    TESWorldSpace__LoadLODObjects; Verified Oblivion .cmp mask bits: 0x1 trees, 0x2 buildings/object LOD, 0x4 LandLOD, established by direct mode-test consumers. Fallout divergence: Fallout WorldSpace instead exposes NoLODWater and NoLODNoise flag bits and a DistantLODShaderProperty cache; the Fallout database has no matching Oblivion .cmp cell-map path.
0x4F326F: mov     ecx, dword ptr [esp+44h+var_C]
0x4F3273: mov     large fs:0, ecx
0x4F327A: pop     ecx
0x4F327B: pop     edi
0x4F327C: pop     esi
0x4F327D: pop     ebp
0x4F327E: pop     ebx
0x4F327F: mov     esp, ebp
0x4F3281: pop     ebp
0x4F3282: retn
0x9B6A00: mov     eax, [ebp-18h]
0x9B6A03: push    eax
0x9B6A04: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B6A09: pop     ecx
0x9B6A0A: retn
0x9B6A0B: mov     edx, [esp-4+arg_4]
0x9B6A0F: lea     eax, [edx-34h]
0x9B6A12: mov     ecx, [edx-38h]
0x9B6A15: xor     ecx, eax
0x9B6A17: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6A1C: mov     eax, offset stru_AE17C8
0x9B6A21: jmp     ___CxxFrameHandler3
