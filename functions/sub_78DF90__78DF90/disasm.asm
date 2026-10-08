0x78DF90: push    ebp; SpeedTreeOBSE 2026-05-31 sidecar enablement boundary: stock LoadTree(buffer) remains old-family only; later 23000..75000 families are retained/sanitized sidecars until a family-specific consumer translates them.
0x78DF91: mov     ebp, esp
0x78DF93: push    0FFFFFFFFh
0x78DF95: push    offset SEH_78DF90
0x78DF9A: mov     eax, large fs:0
0x78DFA0: push    eax
0x78DFA1: sub     esp, 44h
0x78DFA4: push    ebx
0x78DFA5: push    esi
0x78DFA6: push    edi
0x78DFA7: mov     eax, ds:0B30AACh
0x78DFAC: xor     eax, ebp
0x78DFAE: push    eax
0x78DFAF: lea     eax, [ebp+var_C]
0x78DFB2: mov     large fs:0, eax
0x78DFB8: mov     [ebp+var_10], esp
0x78DFBB: mov     edi, ecx; scratch
0x78DFBD: mov     eax, [ebp+bufferSize]
0x78DFC0: mov     ecx, [ebp+buffer]
0x78DFC3: push    eax; bufferSize
0x78DFC4: push    ecx; buffer
0x78DFC5: lea     ecx, [ebp+result.storage+4]; this
0x78DFC8: mov     [ebp+var_11], 0
0x78DFCC: mov     [ebp+var_4], 0
0x78DFD3: call    OB_CTreeFileAccess_ctor_copy_010201A0; CTreeFileAccess-style memory reader constructor. Copies supplied SPT bytes into an owned byte vector; cursor starts at byte offset 0.
0x78DFD8: mov     ecx, [edi]; this
0x78DFDA: lea     edx, [ebp+result.storage+4]
0x78DFDD: push    edx; file
0x78DFDE: mov     byte ptr [ebp+var_4], 1
0x78DFE2: call    OB_CTreeEngine_Parse_010201A0; 2026-05-21 SpeedTreeOBSE billboard-leaf core/tail load pass: Oblivion CTreeEngine::Parse consumes core 1000..1001, optionally consumes post-core 7000 leaf clusters, and those clusters may include stock 7004 billboard-leaf records parsed by 0x7A8250. Full-file compatibility fixtures now cover known-family supplemental tails after empty 7000 clusters and after stock 7004 payloads; the compatibility layer must sanitize only after that post-core cursor point.
0x78DFE7: test    al, al
0x78DFE9: jz      loc_78E25D
0x78DFEF: mov     ecx, dword ptr [ebp+result.storage+0Ch]
0x78DFF2: test    ecx, ecx
0x78DFF4: jz      loc_78E1F2
0x78DFFA: mov     eax, [ebp+result.size]
0x78DFFD: sub     eax, ecx
0x78DFFF: cmp     dword ptr [ebp+result.storage+4], eax
0x78E002: jnb     loc_78E1F2
0x78E008: lea     ecx, [ebp+result.storage+4]; this
0x78E00B: xor     bl, bl
0x78E00D: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x78E012: cmp     eax, 3E8Dh
0x78E017: jg      loc_78E0FD
0x78E01D: jz      loc_78E0ED
0x78E023: cmp     eax, 2EE0h
0x78E028: jg      short loc_78E0A3
0x78E02A: jz      short loc_78E093
0x78E02C: cmp     eax, 2710h
0x78E031: jg      short loc_78E078
0x78E033: jz      short loc_78E068
0x78E035: cmp     eax, 1F40h
0x78E03A: jz      short loc_78E057
0x78E03C: cmp     eax, 2328h
0x78E041: jnz     loc_78E171
0x78E047: lea     eax, [ebp+result.storage+4]
0x78E04A: push    eax; file
0x78E04B: mov     ecx, edi; this
0x78E04D: call    CSpeedTreeRT__ParseLodInfo; 2026-05-24 SpeedTreeOBSE stock post-load pass: stock CSpeedTreeRT::ParseLodInfo candidate for top-level 9000. Parses 9002,9003,9004,9005,9009 until 9001; 9005 delegates to CTreeEngine LOD parser. Preserve as stock-safe payload; no 75000 supplemental LOD fields are read here.
0x78E052: jmp     loc_78E1D1
0x78E057: lea     ecx, [ebp+result.storage+4]
0x78E05A: push    ecx; file
0x78E05B: mov     ecx, [edi+0Ch]; this
0x78E05E: call    OB_CLightingEngine_Parse_010201A0; Oblivion CLightingEngine::Parse. Reads tokens 8002..8009 into the observed 0xB0 lighting-engine layout and terminates on 8001; malformed tokens throw IdvFileError. Fallout/source provide only the historical Parse name after the local token-to-field mapping was established.
0x78E063: jmp     loc_78E1D1
0x78E068: lea     edx, [ebp+result.storage+4]
0x78E06B: push    edx; file
0x78E06C: mov     ecx, edi; this
0x78E06E: call    CSpeedTreeRT__ParseTextureCoordInfo; CSpeedTreeRT::ParseTextureCoordInfo (top-level token 10000). Allocates the 0x54 embedded-texcoord object; parses branch/leaf/frond 8-float coordinate tables, composite texture filename, and horizontal/360 billboard flags through terminator 10001. Leaf V coordinates honor the global texture-flip flag.
0x78E073: jmp     loc_78E1D1
0x78E078: cmp     eax, 2AF8h
0x78E07D: jnz     loc_78E171
0x78E083: lea     eax, [ebp+result.storage+4]
0x78E086: push    eax; file
0x78E087: mov     ecx, edi; this
0x78E089: call    CSpeedTreeRT__ParseWindInfo; 2026-05-24 SpeedTreeOBSE stock post-load pass: stock CSpeedTreeRT::ParseWindInfo candidate for top-level 11000. Accepts nested 11002 only and writes CTreeEngine+0xF0; later 21000/21001 SpeedWind scalars are separate top-level float cases.
0x78E08E: jmp     loc_78E1D1
0x78E093: lea     ecx, [ebp+result.storage+4]
0x78E096: push    ecx; file
0x78E097: mov     ecx, edi; this
0x78E099: call    CSpeedTreeRT__ParseCollisionObjects; 2026-05-19 payload-retention pass: stock 12000 parser still creates compact 0x1C collision records with type, position, and dimensions only. No rotation storage exists here; plugin-side 73000 rotations must stay in sidecar payload records keyed by collision index.
0x78E09E: jmp     loc_78E1D1
0x78E0A3: cmp     eax, 32C8h
0x78E0A8: jz      short loc_78E0DC
0x78E0AA: cmp     eax, 3A98h
0x78E0AF: jz      short loc_78E0CC
0x78E0B1: cmp     eax, 3E80h
0x78E0B6: jnz     loc_78E171
0x78E0BC: mov     ecx, [edi]; this
0x78E0BE: lea     edx, [ebp+result.storage+4]
0x78E0C1: push    edx; file
0x78E0C2: call    OB_CTreeEngine_ParseFlareInfo_010201A0; 2026-05-25 fidelity note: Oblivion stock 16000 flare-info parser is bounded by the existing CTreeEngine branch-info pointer-vector count and requires 16001 after fixed 16002..16012 records per entry. Compatibility mirror must not treat unknown branch count as a free-running record stream; standalone unknown count is accepted only as zero-entry/end-token form.
0x78E0C7: jmp     loc_78E1D1
0x78E0CC: mov     ecx, [edi]; this
0x78E0CE: lea     eax, [ebp+result.storage+4]
0x78E0D1: push    eax; file
0x78E0D2: call    OB_CTreeEngine_ParseTextureControls_010201A0; 2026-05-25 fidelity note: Oblivion stock 15000 texture-controls parser is bounded by the existing CTreeEngine branch-info pointer-vector count and requires 15001 after that loop. Compatibility mirror must not treat unknown branch count as a free-running record stream; standalone unknown count is accepted only as zero-entry/end-token form.
0x78E0D7: jmp     loc_78E1D1
0x78E0DC: lea     ecx, [ebp+result.storage+4]
0x78E0DF: push    ecx; fileAccess
0x78E0E0: mov     ecx, [edi+5Ch]; this
0x78E0E3: call    OB_CFrondEngine_Parse_010201A0; Oblivion-authoritative stock CFrondEngine parser for token family 13000. Token 13005 reads one counted string through 0x7909D0 and constructs/replaces the +0x30 Bezier spline/profile object; the payload is not a nested binary block.
0x78E0E8: jmp     loc_78E1D1
0x78E0ED: mov     ecx, [edi]; this
0x78E0EF: lea     edx, [ebp+result.storage+4]
0x78E0F2: push    edx; file
0x78E0F3: call    OB_CTreeEngine_ParseFlareSeed_010201A0; Oblivion stock 16013 flare-seed parser: reads one dword from file and stores it at CTreeEngine+0x54.
0x78E0F8: jmp     loc_78E1D1
0x78E0FD: cmp     eax, 4E20h
0x78E102: jg      short loc_78E15E
0x78E104: jz      short loc_78E151
0x78E106: cmp     eax, 3E8Eh
0x78E10B: jz      short loc_78E13B
0x78E10D: cmp     eax, 4650h
0x78E112: jz      short loc_78E12B
0x78E114: cmp     eax, 4A38h
0x78E119: jnz     short loc_78E171
0x78E11B: lea     eax, [ebp+result.storage+4]
0x78E11E: push    eax; file
0x78E11F: mov     ecx, edi; this
0x78E121: call    CSpeedTreeRT__ParseUserData; 2026-05-24 SpeedTreeOBSE stock post-load pass: stock user-data parser for top-level 19000. Copies counted 19002 string into CSpeedTreeRT+0x68 until 19001. Compatibility parser should preserve this family byte-exact.
0x78E126: jmp     loc_78E1D1
0x78E12B: lea     ecx, [ebp+result.storage+4]
0x78E12E: push    ecx; file
0x78E12F: mov     ecx, edi; this
0x78E131: call    CSpeedTreeRT__ParseShadowProjectionInfo; 2026-05-24 SpeedTreeOBSE stock post-load pass: stock shadow projection parser for top-level 18000. Allocates 0x40-byte object at CSpeedTreeRT+0x50 and delegates parse to 0x7A5530. Preserve stock-safe family bytes; no later-family sidecar storage is implied.
0x78E136: jmp     loc_78E1D1
0x78E13B: lea     ecx, [ebp+result.storage+4]; this
0x78E13E: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x78E143: fstp    [ebp+bufferSize]; 2026-05-26 SpeedTreeOBSE: stock top-level 16014 reads one float into CSpeedTreeRT+0x28 old transition-factor state. This is not 75000/75005 parsing; retained 75005 remains sidecar-only and diagnostic unless a later Oblivion consumer is proven.
0x78E146: fld     [ebp+bufferSize]
0x78E149: fstp    dword ptr [edi+28h]
0x78E14C: jmp     loc_78E1D1
0x78E151: lea     edx, [ebp+result.storage+4]
0x78E154: push    edx; file
0x78E155: mov     ecx, edi; this
0x78E157: call    CSpeedTreeRT__ParseSupplementalTexCoordInfo; CSpeedTreeRT::ParseSupplementalTexCoordInfo (top-level token 20000). Only parses when embedded texcoords already exist; accepts composite filename, horizontal/360 flags, and eight billboard floats through terminator 20001. If the base object is absent, Oblivion returns without consuming payload.
0x78E15C: jmp     short loc_78E1D1
0x78E15E: sub     eax, 5208h; SpeedTreeOBSE 2026-05-25 stock scalar-tail pass: top-level 21000/21001/22000 are encoded arithmetically from base 21000. Only these scalar cases are accepted before the unknown-token stop branch.
0x78E163: jz      short loc_78E1BD
0x78E165: sub     eax, 1
0x78E168: jz      short loc_78E1A7
0x78E16A: sub     eax, 3E7h
0x78E16F: jz      short loc_78E175
0x78E171: mov     bl, 1; SpeedTreeOBSE 2026-05-31 sidecar raw-span support pass: stock unknown-token branch remains terminal stop evidence. Plugin counts terminal opaque raw spans only when token is neither stock top-level nor mapped retained 23000..75000 family; no unknown-payload grammar is inferred.
0x78E173: jmp     short loc_78E1D1
0x78E175: mov     eax, dword ptr [ebp+result.storage+4]
0x78E178: mov     ecx, dword ptr [ebp+result.storage+0Ch]
0x78E17B: mov     esi, eax; SpeedTreeOBSE 2026-05-25 stock scalar-tail pass: top-level 22000/File_PropagateFlexibility consumes exactly one raw byte and stores nonzero state in global byte_B429C8.
0x78E17D: add     eax, 1
0x78E180: test    ecx, ecx
0x78E182: mov     dword ptr [ebp+result.storage+4], eax
0x78E185: jz      short loc_78E190
0x78E187: mov     eax, [ebp+result.size]
0x78E18A: sub     eax, ecx
0x78E18C: cmp     esi, eax
0x78E18E: jb      short loc_78E195
0x78E190: call    __invalid_parameter_noinfo
0x78E195: mov     eax, dword ptr [ebp+result.storage+0Ch]
0x78E198: cmp     byte ptr [eax+esi], 0
0x78E19C: setnz   cl
0x78E19F: mov     ds:0B429C8h, cl;
0x78E1A5: jmp     short loc_78E1D1
0x78E1A7: lea     ecx, [ebp+result.storage+4]; this
0x78E1AA: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x78E1AF: fstp    [ebp+bufferSize]; SpeedTreeOBSE 2026-05-25 stock scalar-tail pass: top-level 21001/File_SpeedWindRustleScalar reads one float and writes CWindEngine+0x40.
0x78E1B2: mov     eax, [edi+10h]
0x78E1B5: fld     [ebp+bufferSize]
0x78E1B8: fstp    dword ptr [eax+40h]
0x78E1BB: jmp     short loc_78E1D1
0x78E1BD: lea     ecx, [ebp+result.storage+4]; this
0x78E1C0: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x78E1C5: fstp    [ebp+bufferSize]; SpeedTreeOBSE 2026-05-25 stock scalar-tail pass: top-level 21000/File_SpeedWindRockScalar reads one float and writes CWindEngine+0x3C.
0x78E1C8: mov     eax, [edi+10h]
0x78E1CB: fld     [ebp+bufferSize]
0x78E1CE: fstp    dword ptr [eax+3Ch]
0x78E1D1: mov     ecx, dword ptr [ebp+result.storage+0Ch]
0x78E1D4: test    ecx, ecx
0x78E1D6: jz      short loc_78E1F2
0x78E1D8: mov     eax, [ebp+result.size]
0x78E1DB: sub     eax, ecx
0x78E1DD: cmp     dword ptr [ebp+result.storage+4], eax
0x78E1E0: jnb     short loc_78E1F2
0x78E1E2: lea     ecx, [ebp+result.storage+4]; this
0x78E1E5: call    OB_CTreeFileAccess_ReadDword_010201A0; 2026-05-24 SpeedTreeOBSE known-family load pass: loop footer may prefetch while bytes remain after the stop flag, but the prefetched token is not dispatched after the unknown-token stop. Keep sanitizer behavior aligned to terminal-stop semantics unless a new Oblivion IDA path proves a length boundary.
0x78E1EA: test    bl, bl
0x78E1EC: jz      loc_78E012
0x78E1F2: mov     eax, [edi+0Ch]; 2026-05-24 SpeedTreeOBSE stock post-load pass: after supplemental loop exits, stock LoadTree(buffer) mirrors parsed branch/leaf/frond lighting methods into runtime state. This is stock finalization, not a later-family sidecar consumer.
0x78E1F5: mov     eax, [eax]
0x78E1F7: push    eax; method
0x78E1F8: mov     ecx, edi; this
0x78E1FA: call    CSpeedTreeRT__SetBranchLightingMethod; CSpeedTreeRT::SetBranchLightingMethod. Before Compute, mirrors lighting method to branch geometry manual-lighting state and CLightingEngine branch method.
0x78E1FF: mov     edx, [edi+0Ch]
0x78E202: mov     eax, [edx+38h]
0x78E205: push    eax; method
0x78E206: mov     ecx, edi; this
0x78E208: call    CSpeedTreeRT__SetLeafLightingMethod; LoadTree memory-loader tail mirrors parsed leaf lighting method through SetLeafLightingMethod before post-load normalization.
0x78E20D: mov     eax, [edi+0Ch]
0x78E210: mov     eax, [eax+78h]
0x78E213: push    eax; method
0x78E214: mov     ecx, edi; this
0x78E216: call    CSpeedTreeRT__SetFrondLightingMethod; LoadTree memory-loader tail mirrors parsed frond lighting method through SetFrondLightingMethod before post-load normalization. This configures compute state only, not TES4 frond attachment.
0x78E21B: mov     ecx, [edi]
0x78E21D: mov     eax, [ecx+0F0h]
0x78E223: mov     ecx, [edi+5Ch]; this
0x78E226: mov     [edi+48h], eax; 2026-05-24 SpeedTreeOBSE stock post-load pass: copies CTreeEngine+0xF0 to CSpeedTreeRT+0x48 and frond activation level from CFrondEngine+0x38 (via 0x780F70) to CSpeedTreeRT+0x3C. No 4.x sidecar payload is read.
0x78E229: call    Shared_GetDwordAtOffset38; Linker-folded Oblivion accessor: returns the dword at this+0x38. In TESClass auto-stat calls this is primaryAttribute1; other call contexts may represent unrelated fields.
0x78E22E: cmp     dword ptr [edi+18h], 2
0x78E232: mov     [edi+3Ch], eax
0x78E235: jnz     short loc_78E247; 2026-05-24 SpeedTreeOBSE stock post-load pass: if parsed CSpeedTreeRT+0x18 state equals 2, stock normalizes it to 1 and writes flt_A3D65C to CSpeedTreeRT+0x28. Keep semantics conservative; this is older stock LOD-state normalization, not 75000 support.
0x78E237: fld     dword ptr ds:0A3D65Ch
0x78E23D: mov     dword ptr [edi+18h], 1
0x78E244: fstp    dword ptr [edi+28h]
0x78E247: movzx   edx, word ptr ds:0B42A10h
0x78E24E: mov     ecx, [edi+10h]; this
0x78E251: push    edx; matrixSpan
0x78E252: push    0; startingMatrix
0x78E254: call    OB_CWindEngine_SetLocalMatrices_010201A0; 2026-05-24 SpeedTreeOBSE stock post-load pass: initializes CWindEngine local matrix start/span with 0 and global word_B42A10 after parsing. This does not consume later-family wind/map payloads.
0x78E259: mov     [ebp+var_11], 1
0x78E25D: mov     eax, dword ptr [ebp+result.storage+0Ch]
0x78E260: test    eax, eax
0x78E262: jz      short loc_78E26D
0x78E264: push    eax
0x78E265: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x78E26A: add     esp, 4
0x78E26D: mov     al, [ebp+var_11]
0x78E270: mov     ecx, [ebp+var_C]
0x78E273: mov     large fs:0, ecx
0x78E27A: pop     ecx
0x78E27B: pop     edi
0x78E27C: pop     esi
0x78E27D: pop     ebx
0x78E27E: mov     esp, ebp
0x78E280: pop     ebp
0x78E281: retn    8
0x78E284: mov     ecx, [ebp+var_18]
0x78E287: mov     eax, [ecx]
0x78E289: mov     edx, [eax+4]
0x78E28C: call    edx
0x78E28E: push    eax
0x78E28F: push    offset aCspeedtreer_19; "CSpeedTreeRT::LoadTree"
0x78E294: push    offset aSFailedS; "%s - failed [%s]"
0x78E299: lea     esi, [ebp+result]; result
0x78E29C: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78E2A1: add     esp, 0Ch
0x78E2A4: cmp     dword ptr [eax+18h], 10h
0x78E2A8: mov     byte ptr [ebp+var_4], 3
0x78E2AC: jb      short loc_78E2B3
0x78E2AE: mov     eax, [eax+4]
0x78E2B1: jmp     short loc_78E2B6
0x78E2B3: add     eax, 4
0x78E2B6: push    eax; error
0x78E2B7: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78E2BC: add     esp, 4
0x78E2BF: lea     ecx, [ebp+result]; this
0x78E2C2: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78E2C7: mov     eax, offset loc_78E2CD
0x78E2CC: retn
0x78E2CD: jmp     short loc_78E26D
0x78E2CF: push    offset aCspeedtreer_19; "CSpeedTreeRT::LoadTree"
0x78E2D4: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78E2D9: lea     esi, [ebp+var_50]; result
0x78E2DC: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78E2E1: add     esp, 8
0x78E2E4: cmp     dword ptr [eax+18h], 10h
0x78E2E8: mov     byte ptr [ebp+var_4], 4
0x78E2EC: jb      short loc_78E2F3
0x78E2EE: mov     eax, [eax+4]
0x78E2F1: jmp     short loc_78E2F6
0x78E2F3: add     eax, 4
0x78E2F6: push    eax; error
0x78E2F7: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78E2FC: add     esp, 4
0x78E2FF: lea     ecx, [ebp+var_50]; this
0x78E302: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78E307: mov     eax, offset loc_78E26D
0x78E30C: retn
0x788FA0: push    esi
0x788FA1: mov     esi, ecx
0x788FA3: mov     eax, [esi+8]
0x788FA6: test    eax, eax
0x788FA8: jz      short loc_788FB3
0x788FAA: push    eax
0x788FAB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x788FB0: add     esp, 4
0x788FB3: mov     dword ptr [esi+8], 0
0x788FBA: mov     dword ptr [esi+0Ch], 0
0x788FC1: mov     dword ptr [esi+10h], 0
0x788FC8: pop     esi
0x788FC9: retn
0x9CBAC0: lea     ecx, [ebp+result.storage+4]
0x9CBAC3: jmp     loc_788FA0
0x9CBAC8: lea     ecx, [ebp+result]; this
0x9CBACB: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CBAD0: lea     ecx, [ebp+var_50]; this
0x9CBAD3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CBAD8: mov     edx, [esp-4+bufferSize]
0x9CBADC: lea     eax, [edx+0Ch]
0x9CBADF: mov     ecx, [edx-54h]
0x9CBAE2: xor     ecx, eax
0x9CBAE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBAE9: mov     eax, offset stru_AF4904
0x9CBAEE: jmp     ___CxxFrameHandler3
