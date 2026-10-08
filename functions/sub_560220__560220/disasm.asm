0x560220: push    0FFFFFFFFh; Verified BSTreeModel_Update operates on a typed BSTreeNode_OblivionLayout_0F0; local visibility and per-reference scale flow through its NiNode base and treeModel member.
0x560222: push    offset SEH_560220
0x560227: mov     eax, large fs:0
0x56022D: push    eax
0x56022E: sub     esp, 150h
0x560234: push    ebx
0x560235: push    ebp
0x560236: push    esi
0x560237: push    edi
0x560238: mov     eax, ds:0B30AACh
0x56023D: xor     eax, esp
0x56023F: push    eax
0x560240: lea     eax, [esp+170h+var_C]
0x560247: mov     large fs:0, eax
0x56024D: mov     ebx, ecx
0x56024F: mov     [esp+170h+var_150], ebx
0x560253: lea     ecx, [esp+170h+geometry]; this
0x560257: call    OB_SpeedTreeGeometryOutput_init_010201A0; 2026-05-26 SpeedTreeOBSE: identified temporary SGeometry/output initializer used by the optional 360 diagnostic candidate export probe before stock GetGeometry(0x08). Must not be treated as live render-resource allocation.
0x56025C: mov     esi, [esp+170h+treeNode]
0x560263: xor     edi, edi
0x560265: cmp     esi, edi
0x560267: mov     [esp+170h+var_4], edi
0x56026E: mov     [esp+170h+entryCount], edi
0x560272: jz      loc_5605C1
0x560278: mov     eax, [esi]
0x56027A: mov     edx, [eax+9Ch]
0x560280: mov     ecx, esi
0x560282: call    edx
0x560284: test    eax, eax
0x560286: jz      loc_5605C1
0x56028C: cmp     [ebx+0Ch], edi
0x56028F: jz      loc_5605C1
0x560295: cmp     byte ptr ds:0B125E8h, 0
0x56029C: jz      loc_5605C1
0x5602A2: push    1; createIfMissing
0x5602A4: call    BSTreeManager_GetInstance; Returns SpeedTree singleton dword_B39E04, creating it on demand when caller passes true.
0x5602A9: add     esp, 4
0x5602AC: cmp     byte ptr [eax+20h], 0
0x5602B0: jz      loc_5605C1
0x5602B6: mov     edx, [esi+90h]
0x5602BC: mov     ecx, [esi+8Ch]
0x5602C2: mov     eax, [esi+88h]
0x5602C8: sub     esp, 0Ch
0x5602CB: mov     [esp+17Ch+var_13C], edx
0x5602CF: fld     [esp+17Ch+var_13C]
0x5602D3: fstp    [esp+17Ch+z]; z
0x5602D7: mov     [esp+17Ch+var_140], ecx
0x5602DB: fld     [esp+17Ch+var_140]
0x5602DF: mov     ecx, [ebx+0Ch]; this
0x5602E2: fstp    [esp+17Ch+y]; y
0x5602E6: mov     [esp+17Ch+var_144], eax
0x5602EA: fld     [esp+17Ch+var_144]
0x5602EE: fstp    [esp+17Ch+x]; x
0x5602F1: call    CSpeedTreeRT__SetTreePosition; CSpeedTreeRT::SetTreePosition. Oblivion writes STreeInstanceData position for instances, otherwise CTreeEngine::cameraPosition/current tree position storage; exact method name corroborated only after observing this split.
0x5602F6: push    1; createIfMissing
0x5602F8: call    BSTreeManager_GetInstance; Returns SpeedTree singleton dword_B39E04, creating it on demand when caller passes true.
0x5602FD: add     esp, 4
0x560300: cmp     byte ptr [eax+23h], 0; Verified force-full-LOD consumer: reads BSTreeManager.forceFullLOD at +0x23. True selects CSpeedTreeRT_SetLodLevel(1.0); false calls ComputeLodLevel/GetLodLevel.
0x560304: jz      short loc_560318
0x560306: fld1
0x560308: push    ecx
0x560309: mov     ecx, [ebx+0Ch]; this
0x56030C: fstp    [esp+174h+z]; lodLevel
0x56030F: call    CSpeedTreeRT__SetLodLevel
0x560314: fld1
0x560316: jmp     short loc_560328
0x560318: mov     ecx, [ebx+0Ch]; this
0x56031B: call    CSpeedTreeRT__ComputeLodLevel; CSpeedTreeRT::ComputeLodLevel. For instances, temporarily applies instance position to the shared tree engine, computes/stores instance LOD, then restores parent position and LOD; base trees compute directly.
0x560320: mov     ecx, [ebx+0Ch]; this
0x560323: call    CSpeedTreeRT__GetLodLevel; CSpeedTreeRT::GetLodLevel. Returns instanceData+0x10 for instances or treeEngine+0x14 for base trees.
0x560328: fstp    [esp+170h+var_148]
0x56032C: push    ecx
0x56032D: fld     [esp+174h+var_148]
0x560331: mov     ecx, [ebx+0Ch]; this
0x560334: lea     eax, [esp+174h+geometry]
0x560338: fstp    [esp+174h+z]; lodLevel
0x56033B: push    eax; geometry
0x56033C: call    CSpeedTreeRT__GetBSGeometryLODData; 2026-05-26 SpeedTreeOBSE update: supplemental LOD hook calls stock 0x787DC0 first. It logs retained 75000 values, candidate75002 transition-radius resolver output, and retained 75005 transition-factor resolver output. Optional INI gates may rewrite only SGeometry+0x38 from 75002, 75005, or combined candidate output; no stock fields, leaf output, billboard output, frond output, or renderer resources are changed.
0x560341: cmp     [esp+170h+geometry.primaryBillboard.active], 0
0x560349: mov     byte ptr [esp+170h+var_154], 0
0x56034E: jz      short loc_56038C
0x560350: fld     [esp+170h+geometry.primaryBillboard.alphaTestValue]
0x560357: mov     edx, [esi]
0x560359: mov     edx, [edx+0D8h]
0x56035F: fnstcw  [esp+170h+var_15A]
0x560363: movzx   eax, [esp+170h+var_15A]
0x560368: or      eax, 0C00h
0x56036D: mov     [esp+170h+var_158], eax
0x560371: mov     ecx, esi
0x560373: mov     byte ptr [esp+170h+var_154], 1
0x560378: fldcw   word ptr [esp+170h+var_158]
0x56037C: fistp   [esp+170h+var_158]
0x560380: movzx   eax, byte ptr [esp+170h+var_158]
0x560385: push    eax
0x560386: fldcw   [esp+174h+var_15A]
0x56038A: call    edx
0x56038C: mov     ecx, [esp+170h+var_154]
0x560390: mov     eax, [esi]
0x560392: mov     edx, [eax+0CCh]
0x560398: push    ecx
0x560399: mov     ecx, esi
0x56039B: call    edx
0x56039D: fldz
0x56039F: fcomp   [esp+170h+var_148]
0x5603A3: fnstsw  ax
0x5603A5: test    ah, 1
0x5603A8: jnz     short loc_5603BD
0x5603AA: mov     eax, [esi]
0x5603AC: mov     edx, [eax+0C4h]
0x5603B2: push    edi
0x5603B3: mov     ecx, esi
0x5603B5: call    edx
0x5603B7: push    edi
0x5603B8: jmp     loc_5605B5
0x5603BD: mov     ecx, ebx; this
0x5603BF: mov     byte ptr [esp+170h+var_154], 0
0x5603C4: call    BSTreeModel_GetNumBranchLODLevels
0x5603C9: movzx   ebp, ax
0x5603CC: cmp     bp, di
0x5603CF: jle     short loc_56044A
0x5603D1: mov     ecx, [ebx+0Ch]; this
0x5603D4: call    CSpeedTreeRT__GetLodLevel; CSpeedTreeRT::GetLodLevel. Returns instanceData+0x10 for instances or treeEngine+0x14 for base trees.
0x5603D9: push    ecx
0x5603DA: mov     ecx, [ebx+0Ch]; this
0x5603DD: fstp    [esp+174h+z]; lod
0x5603E0: call    CSpeedTreeRT__GetDiscreteBranchLodLevel; Maps normalized/current tree LOD to an Oblivion discrete branch LOD; -1.0 selects instance or base-tree current LOD.
0x5603E5: test    bp, bp
0x5603E8: movzx   ebx, ax
0x5603EB: jle     short loc_560446
0x5603ED: lea     ecx, [ecx+0]
0x5603F0: cmp     bx, di
0x5603F3: mov     ecx, esi
0x5603F5: jnz     short loc_56042E
0x5603F7: fld     [esp+170h+geometry.branches.alphaTestValue]
0x5603FB: mov     edx, [esi]
0x5603FD: mov     edx, [edx+0D0h]
0x560403: fnstcw  [esp+170h+var_15A]
0x560407: movzx   eax, [esp+170h+var_15A]
0x56040C: or      eax, 0C00h
0x560411: mov     [esp+170h+var_158], eax
0x560415: mov     byte ptr [esp+170h+var_154], 1
0x56041A: fldcw   word ptr [esp+170h+var_158]
0x56041E: fistp   [esp+170h+var_158]
0x560422: movzx   eax, byte ptr [esp+170h+var_158]
0x560427: push    eax
0x560428: fldcw   [esp+174h+var_15A]
0x56042C: jmp     short loc_56043B; 2026-05-25 75000 branch-fade opt-in consumer note: this branch visibility path consumes SGeometry+0x38 as the branch alpha-test byte source. Optional SpeedTreeOBSE mutation is limited to that output float after stock 0x787DC0 returns.
0x56042E: mov     eax, [esi]
0x560430: mov     edx, [eax+0D0h]
0x560436: push    0FFh
0x56043B: push    edi
0x56043C: call    edx
0x56043E: add     edi, 1
0x560441: cmp     di, bp
0x560444: jl      short loc_5603F0
0x560446: mov     ebx, [esp+170h+var_150]
0x56044A: mov     ecx, [esp+170h+var_154]
0x56044E: mov     eax, [esi]
0x560450: mov     edx, [eax+0C4h]
0x560456: push    ecx
0x560457: mov     ecx, esi
0x560459: call    edx
0x56045B: call    sub_506FD0; SpeedTree leaves-enabled query: byte_B125E8 && singleton +0x20 && singleton +0x21.
0x560460: test    al, al
0x560462: jnz     short loc_56046B
0x560464: push    0
0x560466: jmp     loc_5605B5
0x56046B: mov     ecx, [ebx+0Ch]; this
0x56046E: test    ecx, ecx
0x560470: mov     byte ptr [esp+170h+var_154], 0
0x560475: jz      loc_5605B0
0x56047B: call    CSpeedTreeRT__GetNumLeafLodLevels; CSpeedTreeRT::GetNumLeafLodLevels. Returns the 16-bit leaf LOD count at CTreeEngine+0xC0.
0x560480: movzx   eax, ax
0x560483: test    ax, ax
0x560486: mov     [esp+170h+var_150], eax
0x56048A: jle     loc_5605B0
0x560490: cmp     [esp+170h+geometry.primaryLeaves.active], 0
0x560498: jnz     short loc_5604A8
0x56049A: cmp     [esp+170h+geometry.secondaryLeaves.active], 0
0x5604A2: jz      loc_560572
0x5604A8: xor     edi, edi
0x5604AA: test    ax, ax
0x5604AD: jle     loc_560572
0x5604B3: xor     ebp, ebp
0x5604B5: cmp     [esp+170h+geometry.primaryLeaves.active], 0
0x5604BD: jz      short loc_560502
0x5604BF: cmp     [esp+170h+geometry.primaryLeaves.discreteLodLevel], ebp
0x5604C6: jnz     short loc_560502
0x5604C8: fld     [esp+170h+geometry.primaryLeaves.lodFadeOrRockScalar]
0x5604CF: mov     edx, [esi]
0x5604D1: mov     edx, [edx+0D4h]
0x5604D7: fnstcw  [esp+170h+var_15A]
0x5604DB: movzx   eax, [esp+170h+var_15A]
0x5604E0: or      eax, 0C00h
0x5604E5: mov     [esp+170h+var_158], eax
0x5604E9: mov     byte ptr [esp+170h+var_154], 1
0x5604EE: fldcw   word ptr [esp+170h+var_158]
0x5604F2: fistp   [esp+170h+var_158]
0x5604F6: movzx   eax, byte ptr [esp+170h+var_158]
0x5604FB: push    eax
0x5604FC: fldcw   [esp+174h+var_15A]
0x560500: jmp     short loc_56055C
0x560502: cmp     [esp+170h+geometry.secondaryLeaves.active], 0
0x56050A: jz      short loc_56054F
0x56050C: cmp     [esp+170h+geometry.secondaryLeaves.discreteLodLevel], ebp
0x560513: jnz     short loc_56054F
0x560515: fld     [esp+170h+geometry.secondaryLeaves.lodFadeOrRockScalar]
0x56051C: mov     edx, [esi]
0x56051E: mov     edx, [edx+0D4h]
0x560524: fnstcw  [esp+170h+var_15A]
0x560528: movzx   eax, [esp+170h+var_15A]
0x56052D: or      eax, 0C00h
0x560532: mov     [esp+170h+var_158], eax
0x560536: mov     byte ptr [esp+170h+var_154], 1
0x56053B: fldcw   word ptr [esp+170h+var_158]
0x56053F: fistp   [esp+170h+var_158]
0x560543: movzx   eax, byte ptr [esp+170h+var_158]
0x560548: push    eax
0x560549: fldcw   [esp+174h+var_15A]
0x56054D: jmp     short loc_56055C
0x56054F: mov     eax, [esi]
0x560551: mov     edx, [eax+0D4h]
0x560557: push    0FFh
0x56055C: push    edi
0x56055D: mov     ecx, esi
0x56055F: call    edx
0x560561: add     edi, 1
0x560564: add     ebp, 1
0x560567: cmp     di, word ptr [esp+170h+var_150]
0x56056C: jl      loc_5604B5
0x560572: cmp     dword ptr [ebx+20h], 0
0x560576: jz      short loc_5605B0
0x560578: mov     ecx, [ebx+0Ch]; this
0x56057B: call    CSpeedTreeRT__InstanceOf; CSpeedTreeRT::InstanceOf. Oblivion returns instanceData->parent for instances and NULL for base trees; this matches the later Fallout symbol and 4.1 API contract.
0x560580: test    eax, eax
0x560582: jz      short loc_560595
0x560584: mov     ecx, [ebx+0Ch]; this
0x560587: lea     eax, [esp+170h+entryCount]
0x56058B: push    eax
0x56058C: call    CSpeedTreeRT__InstanceOf; CSpeedTreeRT::InstanceOf. Oblivion returns instanceData->parent for instances and NULL for base trees; this matches the later Fallout symbol and 4.1 API contract.
0x560591: mov     ecx, eax
0x560593: jmp     short loc_56059D
0x560595: lea     ecx, [esp+170h+entryCount]
0x560599: push    ecx; entryCount
0x56059A: mov     ecx, [ebx+0Ch]; this
0x56059D: call    CSpeedTreeRT__GetLeafBillboardTable; 2026-05-21 360 gap pass: runtime node sync calls GetLeafBillboardTable wrapper only to refresh shared STLSPData leaf shader constants via 0x7F18A0. This is the leaf/card shader-data path, not GetGeometry(0x08) or the CSpeedTreeRT+0x54 directional-count initializer.
0x5605A2: mov     edx, [esp+170h+entryCount]
0x5605A6: mov     ecx, [ebx+20h]; this
0x5605A9: push    edx; floatCount
0x5605AA: push    eax; leafMaps
0x5605AB: call    OB_STLSPData_CopyLeafConstants_010201A0; 2026-05-21 360 gap pass: copies the leaf billboard table returned by 0x78C280 into shared STLSPData. This feeds SpeedTreeLeafShader constants, not true 360 billboard output.
0x5605B0: mov     ecx, [esp+170h+var_154]
0x5605B4: push    ecx
0x5605B5: mov     eax, [esi]
0x5605B7: mov     edx, [eax+0C8h]
0x5605BD: mov     ecx, esi
0x5605BF: call    edx
0x5605C1: lea     ecx, [esp+170h+geometry]; this
0x5605C5: mov     [esp+170h+var_4], 0FFFFFFFFh
0x5605D0: call    OB_SpeedTreeGeometryOutput_Dtor_010201A0; Oblivion aggregate SpeedTree geometry-output destructor/reset: clears all externally owned branch, frond, leaf, and billboard view pointers without freeing them. Called on stack SGeometry output after Bethesda geometry builders finish.
0x5605D5: mov     ecx, dword ptr [esp+170h+var_C]
0x5605DC: mov     large fs:0, ecx
0x5605E3: pop     ecx
0x5605E4: pop     edi
0x5605E5: pop     esi
0x5605E6: pop     ebp
0x5605E7: pop     ebx
0x5605E8: add     esp, 15Ch
0x5605EE: retn    4
0x9BCF80: lea     ecx, [ebp-138h]; this
0x9BCF86: jmp     OB_SpeedTreeGeometryOutput_Dtor_010201A0; Oblivion aggregate SpeedTree geometry-output destructor/reset: clears all externally owned branch, frond, leaf, and billboard view pointers without freeing them. Called on stack SGeometry output after Bethesda geometry builders finish.
0x9BCF8B: mov     edx, [esp+arg_4]
0x9BCF8F: lea     eax, [edx-160h]
0x9BCF95: mov     ecx, [edx-164h]
0x9BCF9B: xor     ecx, eax
0x9BCF9D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCFA2: mov     eax, offset stru_AE6A74
0x9BCFA7: jmp     ___CxxFrameHandler3
