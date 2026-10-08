0x560600: push    0FFFFFFFFh; OBLIVION AUTHORITY 2026-08-27: BSTreeModel initialization order after LoadTree: force dynamic leaf-lighting method at 0x560818, exactly one virtual ApplyBaseObject dispatch at 0x560879, Compute immediately after return at 0x560888, then render-resource/postbuild dispatch at 0x5608C3 only after Compute success.
0x560602: push    offset SEH_560600
0x560607: mov     eax, large fs:0
0x56060D: push    eax
0x56060E: sub     esp, 134h
0x560614: mov     eax, ds:0B30AACh
0x560619: xor     eax, esp
0x56061B: mov     [esp+140h+var_10], eax
0x560622: push    ebx
0x560623: push    ebp
0x560624: push    esi
0x560625: push    edi
0x560626: mov     eax, ds:0B30AACh
0x56062B: xor     eax, esp
0x56062D: push    eax
0x56062E: lea     eax, [esp+154h+var_C]
0x560635: mov     large fs:0, eax
0x56063B: mov     ebx, [esp+154h+treeObject]
0x560642: test    ebx, ebx
0x560644: mov     ebp, ecx
0x560646: mov     [esp+154h+var_138], ebx
0x56064A: jz      loc_5608DA
0x560650: mov     eax, [ebx+24h]
0x560653: mov     edx, [eax+14h]
0x560656: add     ebx, 24h ; '$'
0x560659: mov     ecx, ebx
0x56065B: call    edx
0x56065D: test    eax, eax
0x56065F: jz      loc_5608DA
0x560665: mov     eax, [ebx]
0x560667: mov     edx, [eax+14h]
0x56066A: mov     ecx, ebx
0x56066C: call    edx
0x56066E: cmp     byte ptr [eax], 0
0x560671: jz      loc_5608DA
0x560677: cmp     dword ptr [ebp+8], 0
0x56067B: jnz     loc_5608DA
0x560681: mov     eax, ds:0A366C4h
0x560686: mov     cx, ds:0A366C8h
0x56068D: mov     edx, [ebx]
0x56068F: mov     dword ptr [esp+154h+path], eax
0x560693: mov     eax, [edx+14h]
0x560696: mov     [esp+154h+var_110], cx
0x56069B: mov     ecx, ebx
0x56069D: call    eax
0x56069F: mov     edx, eax
0x5606A1: mov     cl, [eax]
0x5606A3: add     eax, 1
0x5606A6: test    cl, cl
0x5606A8: jnz     short loc_5606A1
0x5606AA: lea     edi, [esp+154h+path]
0x5606AE: sub     eax, edx
0x5606B0: add     edi, 0FFFFFFFFh
0x5606B3: mov     cl, [edi+1]
0x5606B6: add     edi, 1
0x5606B9: test    cl, cl
0x5606BB: jnz     short loc_5606B3
0x5606BD: mov     ecx, eax
0x5606BF: shr     ecx, 2
0x5606C2: mov     esi, edx
0x5606C4: rep movsd
0x5606C6: mov     ecx, eax
0x5606C8: and     ecx, 3
0x5606CB: push    0A0h ; ' '; Size
0x5606D0: rep movsb
0x5606D2: call    FormHeapAlloc
0x5606D7: add     esp, 4
0x5606DA: mov     [esp+154h+size], eax
0x5606DE: test    eax, eax
0x5606E0: mov     [esp+154h+var_4], 0
0x5606EB: jz      short loc_5606F8
0x5606ED: mov     ecx, eax; this
0x5606EF: call    CSpeedTreeRT__ctor; CSpeedTreeRT default constructor/init. Allocates owned engine/geometry/lighting/wind/simple-billboard/frond objects, tree sizes, shared refcount/list, registers in global tree list, and initializes base extents/horizontal coords.
0x5606F4: mov     esi, eax
0x5606F6: jmp     short loc_5606FA
0x5606F8: xor     esi, esi
0x5606FA: lea     ecx, [esp+154h+path]
0x5606FE: push    ecx; filename
0x5606FF: mov     ecx, esi; this
0x560701: mov     [esp+158h+var_4], 0FFFFFFFFh
0x56070C: call    CSpeedTreeRT__LoadTreeFromFile; SpeedTreeOBSE 2026-05-23 update: Bethesda BSTreeModel::MakeBase path-call context remains valid and signature-gated, but current modded runtime logs showed live tree loads can bypass this callsite and enter CSpeedTreeRT::LoadTree(path) directly. Do not rely on this callsite as the only path source; 0x78E39F recovers path from the wrapper frame.
0x560711: test    al, al
0x560713: jz      loc_560906
0x560719: lea     ecx, [esp+154h+texturesOut]; this
0x56071D: call    CSpeedTreeRT__STextures_ctor; SpeedTreeOBSE 2026-05-30 frond restoration: initializes the 7-dword compact texture summary before optional generated-frond texture recovery calls 0x78A890.
0x560722: lea     edx, [esp+154h+texturesOut]
0x560726: mov     edi, 1; a2
0x56072B: push    edx; texturesOut
0x56072C: mov     ecx, esi; this
0x56072E: mov     [esp+158h+var_4], edi
0x560735: call    CSpeedTreeRT__GetTextures; SpeedTreeOBSE 2026-05-31 leaf/frond level pass: compact texture summary exporter returns frond count at summary[3] and frond filename pointer array at summary[4]; reference layer caches these paths by array index/selector before sidecar map-bank candidates.
0x56073A: cmp     [esp+154h+texturesOut.leafTextureCount], 3
0x56073F: mov     ecx, esi; this
0x560741: ja      short loc_56074C; Stock compatibility rule: use two rocking groups for <=3 compact leaf maps, otherwise one.
0x560743: push    2; groupCount
0x560745: call    CSpeedTreeRT__SetNumLeafRockingGroups; CSpeedTreeRT::SetNumLeafRockingGroups. Before Compute, stores at CTreeEngine+0xBC and coerces zero to one; after Compute reports the stock no-effect error.
0x56074A: jmp     short loc_560770
0x56074C: push    edi; groupCount
0x56074D: call    CSpeedTreeRT__SetNumLeafRockingGroups; CSpeedTreeRT::SetNumLeafRockingGroups. Before Compute, stores at CTreeEngine+0xBC and coerces zero to one; after Compute reports the stock no-effect error.
0x560752: cmp     [esp+154h+texturesOut.leafTextureCount], 6
0x560757: jbe     short loc_560770; Stock engine explicitly warns when compact leaf-map count exceeds six: leaves may not display properly.
0x560759: mov     eax, [ebx]
0x56075B: mov     edx, [eax+14h]
0x56075E: mov     ecx, ebx
0x560760: call    edx
0x560762: push    eax; ArgList
0x560763: push    offset aTreeSHasTooMan; "Tree %s has too many leaf maps (greater"...
0x560768: call    PrintError
0x56076D: add     esp, 8
0x560770: push    edi; enabled
0x560771: mov     ecx, esi; this
0x560773: call    CSpeedTreeRT__SetLeafRockingState; CSpeedTreeRT::SetLeafRockingState thin wrapper: writes the bool to CWindEngine+0x14.
0x560778: lea     eax, [esp+154h+variance]
0x56077C: push    eax; variance
0x56077D: lea     ecx, [esp+158h+size]
0x560781: push    ecx; size
0x560782: mov     ecx, esi; this
0x560784: call    CSpeedTreeRT__GetTreeSize; CSpeedTreeRT::GetTreeSize thin wrapper. Forwards to CTreeEngine::GetSize at 0x7A2400, reading CTreeEngine+0x4C/+0x50.
0x560789: fld     dword ptr ds:0B39E18h
0x56078F: fld     st
0x560791: sub     esp, 8
0x560794: fmul    [esp+15Ch+variance]
0x560798: mov     ecx, esi; this
0x56079A: fstp    [esp+15Ch+var_140]; Verified fTreeSizeConversion.value scales the second CSpeedTreeRT tree-size dimension.
0x56079E: fld     [esp+15Ch+var_140]
0x5607A2: fstp    [esp+15Ch+frequencyTimeOffset]; variance
0x5607A6: fmul    [esp+15Ch+size]
0x5607AA: fstp    [esp+15Ch+var_140]; Verified fTreeSizeConversion.value scales the first CSpeedTreeRT tree-size dimension.
0x5607AE: fld     [esp+15Ch+var_140]
0x5607B2: fstp    [esp+15Ch+oldStrength]; size
0x5607B5: call    CSpeedTreeRT__SetTreeSize; CSpeedTreeRT::SetTreeSize. Requires intact CTreeEngine transient data and positive size, then writes CTreeEngine+0x4C/+0x50 through 0x7A2420.
0x5607BA: fld     dword ptr ds:0A30634h
0x5607C0: sub     esp, 0Ch
0x5607C3: fst     [esp+160h+frequencyTimeOffset]; frequencyTimeOffset
0x5607C7: mov     ecx, esi; this
0x5607C9: fstp    [esp+160h+oldStrength]; oldStrength
0x5607CD: fldz
0x5607CF: fstp    [esp+160h+newStrength]; newStrength
0x5607D2: call    CSpeedTreeRT__SetWindStrength; CSpeedTreeRT::SetWindStrength. Accepts nonnegative strength, defaults old strength/time offset from CWindEngine on -1.0 sentinels, updates wind engine, and invalidates CPU-wind branch/frond/leaf caches.
0x5607D7: fstp    st
0x5607D9: push    4; matrixSpan
0x5607DB: push    0; startingMatrix
0x5607DD: mov     ecx, esi; this
0x5607DF: call    CSpeedTreeRT__SetLocalMatrices; Verified SetLocalMatrices(this, startingMatrix=0, matrixSpan=4) before Compute. AddVertexWind modulo therefore produces indices 0..3 for this stock initialization path; frond shader row offsets are index*4.
0x5607E4: push    0; method
0x5607E6: mov     ecx, esi; this
0x5607E8: mov     [esi+18h], edi
0x5607EB: call    CSpeedTreeRT__SetBranchWindMethod; CSpeedTreeRT::SetBranchWindMethod. Before Compute, mirrors the wind method to CWindEngine and branch geometry; disables vertex weighting for WIND_NONE and invalidates prior CPU-wind geometry when switching off.
0x5607F0: push    0; method
0x5607F2: mov     ecx, esi; this
0x5607F4: call    CSpeedTreeRT__SetFrondWindMethod; BSTreeModel::MakeBase forces frond wind method to 0 before Compute. This configures SpeedTreeRT frond computation but no decoded stock frond geometry consumer follows.
0x5607F9: push    0; method
0x5607FB: mov     ecx, esi; this
0x5607FD: call    CSpeedTreeRT__SetLeafWindMethod; CSpeedTreeRT::SetLeafWindMethod. Before Compute, mirrors the wind method to CWindEngine and leaf geometry vertex-weighting state.
0x560802: push    0; method
0x560804: mov     ecx, esi; this
0x560806: call    CSpeedTreeRT__SetBranchLightingMethod; CSpeedTreeRT::SetBranchLightingMethod. Before Compute, mirrors lighting method to branch geometry manual-lighting state and CLightingEngine branch method.
0x56080B: push    0; method
0x56080D: mov     ecx, esi; this
0x56080F: call    CSpeedTreeRT__SetFrondLightingMethod; BSTreeModel::MakeBase forces frond lighting method to 0 before Compute. Frond geometry is later deleted after branch/leaf/simple-billboard resources are built.
0x560814: push    0; method
0x560816: mov     ecx, esi; this
0x560818: call    CSpeedTreeRT__SetLeafLightingMethod; OBLIVION AUTHORITY 2026-08-27: Normal BSTreeModel load unconditionally calls SetLeafLightingMethod(0) before ApplyBaseObject and Compute. Therefore parsed SPT method 1 is overridden to dynamic on this stock path; staticLightingStyle remains data but static post-generation leaf-color processing is not entered unless another caller later restores method 1. Corpus corroboration: 15/149 installed SPTs parse method 1, but all reach this stock override ordering when loaded through BSTreeModel.
0x56081D: fld     dword ptr ds:0B0760Ch
0x560823: fld     st
0x560825: sub     esp, 8
0x560828: fmul    dword ptr ds:0B39E10h
0x56082E: mov     ecx, esi; this
0x560830: fstp    [esp+15Ch+var_140]; Verified fTreeFarDistanceBase.value sets the far tree LOD limit after multiplication by the game tree multiplier.
0x560834: fld     [esp+15Ch+var_140]
0x560838: fstp    [esp+15Ch+frequencyTimeOffset]; farDistance
0x56083C: fmul    dword ptr ds:0B39E08h
0x560842: fstp    [esp+15Ch+var_140]; Verified fTreeNearDistanceBase.value sets the near tree LOD limit after multiplication by the game tree multiplier.
0x560846: fld     [esp+15Ch+var_140]
0x56084A: fstp    [esp+15Ch+oldStrength]; nearDistance
0x56084D: call    CSpeedTreeRT__SetLodLimits; CSpeedTreeRT::SetLodLimits thin wrapper. Forwards near/far limits to CTreeEngine::SetLodLimits at 0x7A24D0.
0x560852: lea     ecx, [esp+154h+texturesOut]; this
0x560856: mov     [esp+154h+var_4], 0FFFFFFFFh
0x560861: call    CSpeedTreeRT__STextures_dtor; SpeedTreeOBSE 2026-05-30 frond restoration: frees only the temporary leaf/frond filename arrays allocated by compact GetTextures; optional texture recovery calls this after copying candidates.
0x560866: mov     edx, [ebp+0]; Stock virtual dispatch loads BSTreeModel vtable slot +0x0C. Stock A654E0 contains 0x560AC0.
0x560869: mov     ebx, [esp+154h+var_138]
0x56086D: mov     eax, [edx+0Ch]
0x560870: push    ebx; Exact slot +0x0C ABI: push one treeObject argument, place BSTreeModel this in ECX, then call. The void result is ignored.
0x560871: mov     ecx, ebp
0x560873: mov     [ebp+8], edi
0x560876: mov     [ebp+0Ch], esi
0x560879: call    eax; After LoadTree succeeds, this stock control-flow path performs exactly one virtual ApplyBaseObject dispatch before Compute; there is no bypass from the prepared state to 0x560888. If a hook wrapper catches a stock exception and returns, caller control continues to Compute.
0x56087B: mov     ecx, [esp+154h+seed]
0x560882: push    edi; compositeStrips
0x560883: push    ecx; seed
0x560884: push    0; transform4x4
0x560886: mov     ecx, esi; this
0x560888: call    CSpeedTreeRT__Compute; Compute executes immediately after the material virtual call returns. A successful Compute is required before vtable+0x14 render-resource/postbuild dispatch at 0x5608C3.
0x56088D: test    al, al
0x56088F: jz      loc_56091A
0x560895: mov     ecx, esi; this
0x560897: call    CSpeedTreeRT__FreeProjectedShadowData; CSpeedTreeRT::FreeProjectedShadowData. Oblivion destroys CSpeedTreeRT+0x50 projected-shadow storage and clears branch/frond scratch vectors. This is a distinct post-Compute cleanup, not DeleteTransientData.
0x56089C: mov     ecx, esi; this
0x56089E: call    CSpeedTreeRT__GetSeed; CSpeedTreeRT::GetSeed. While transient data is intact, returns CTreeEngine+0x48; otherwise reports the same misleading SetTreeSize/DeleteTransientData error present in local 4.1 source.
0x5608A3: mov     ecx, esi; this
0x5608A5: mov     [ebp+48h], eax; Verified BSTreeModel.seed at +0x48 is written from CSpeedTreeRT_GetSeed after successful Compute. Meaningful layout divergence: Fallout::BSTreeModel::InitFromBase stores the corresponding seed at model+0x40.
0x5608A8: call    CSpeedTreeRT__GetTrunkLength; CSpeedTreeRT::GetTrunkLength. Returns branchGeometry+0x1C when treeEngine and branchGeometry exist, otherwise 0.0; Bethesda extension absent from the supplied 4.1 public header.
0x5608AD: fstp    dword ptr [ebp+50h]; Verified BSTreeModel.trunkLength at +0x50 is written from CSpeedTreeRT_GetTrunkLength after successful Compute. Fallout's named BSTreeModel homolog stores trunkLength at +0x48, so the Oblivion layout is shifted by 8 bytes at this tail.
0x5608B0: mov     ecx, esi; this
0x5608B2: call    CSpeedTreeRT__GetTrunkWidth; CSpeedTreeRT::GetTrunkWidth. Returns branchGeometry+0x18 when treeEngine and branchGeometry exist, otherwise 0.0; Bethesda extension absent from the supplied 4.1 public header.
0x5608B7: fstp    dword ptr [ebp+54h]; Verified BSTreeModel.trunkWidth at +0x54 is written from CSpeedTreeRT_GetTrunkWidth. Fallout's named homolog stores trunkWidth at +0x4C; preserve the 8-byte layout divergence.
0x5608BA: mov     edx, [ebp+0]
0x5608BD: mov     eax, [edx+14h]
0x5608C0: push    ebx
0x5608C1: mov     ecx, ebp
0x5608C3: call    eax; Called only after CSpeedTreeRT::Compute returned success. Thus every observed successful postbuild on this stock path follows one earlier material dispatch, although it does not prove the stock material target itself returned normally when a wrapper can catch.
0x5608C5: mov     ecx, esi; this
0x5608C7: call    CSpeedTreeRT__DeleteTransientData
0x5608CC: mov     ecx, esi; this
0x5608CE: call    CSpeedTreeRT__DeleteBranchGeometry; CSpeedTreeRT::DeleteBranchGeometry. After Compute, deletes branch geometry only for non-instance trees when the shared instance refcount is exactly one.
0x5608D3: mov     ecx, esi; this
0x5608D5: call    CSpeedTreeRT__DeleteFrondGeometry; SpeedTreeOBSE 2026-05-30: optional C:\src\Fronds reference layer bypasses this DeleteFrondGeometry call only when [Fronds] bEnableReferenceRestoration=1 so computed frond geometry can be exported/cached.
0x5608DA: mov     al, 1
0x5608DC: mov     ecx, [esp+154h+var_C]
0x5608E3: mov     large fs:0, ecx
0x5608EA: pop     ecx
0x5608EB: pop     edi
0x5608EC: pop     esi
0x5608ED: pop     ebp
0x5608EE: pop     ebx
0x5608EF: mov     ecx, [esp+140h+var_10]
0x5608F6: xor     ecx, esp
0x5608F8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5608FD: add     esp, 140h
0x560903: retn    8
0x560906: test    esi, esi
0x560908: jz      short loc_56091A
0x56090A: mov     ecx, esi; this
0x56090C: call    CSpeedTreeRT__dtor; One of exactly two Oblivion code xrefs to CSpeedTreeRT dtor/refcount cleanup. This is the MakeBase LoadTree failure release; the next instruction frees the 0xA0 CSpeedTreeRT wrapper, so wrapper addresses may be reused after cleanup.
0x560911: push    esi
0x560912: call    FormHeapFree; Frees the failed base CSpeedTreeRT 0xA0 wrapper immediately after stock shared-refcount cleanup. Pointer-address identity alone is ABA-prone across later FormHeapAlloc reuse.
0x560917: add     esp, 4
0x56091A: xor     al, al
0x56091C: jmp     short loc_5608DC
0x9BCFB0: mov     eax, [ebp-13Ch]
0x9BCFB6: push    eax
0x9BCFB7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BCFBC: pop     ecx
0x9BCFBD: retn
0x9BCFBE: lea     ecx, [ebp-130h]; this
0x9BCFC4: jmp     CSpeedTreeRT__STextures_dtor; SpeedTreeOBSE 2026-05-30 frond restoration: frees only the temporary leaf/frond filename arrays allocated by compact GetTextures; optional texture recovery calls this after copying candidates.
0x9BCFC9: mov     edx, [esp+seed]
0x9BCFCD: lea     eax, [edx-144h]
0x9BCFD3: mov     ecx, [edx-148h]
0x9BCFD9: xor     ecx, eax
0x9BCFDB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCFE0: add     eax, 10h
0x9BCFE3: mov     ecx, [edx-4]
0x9BCFE6: xor     ecx, eax
0x9BCFE8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCFED: mov     eax, offset stru_AE6AA8
0x9BCFF2: jmp     ___CxxFrameHandler3
