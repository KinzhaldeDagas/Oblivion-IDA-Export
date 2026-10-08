0x5610C0: push    0FFFFFFFFh; Verified: CreateArt consumes branch/leaf geometry and shader-property arrays by LOD. It also reads leafCachedPropertiesByLOD (+0x30) and attaches a non-null entry; the stock leaf builder allocates this array but does not populate its slots, so that optional population remains Candidate/Unknown.
0x5610C2: push    offset SEH_5610C0
0x5610C7: mov     eax, large fs:0
0x5610CD: push    eax
0x5610CE: sub     esp, 14h
0x5610D1: push    ebx
0x5610D2: push    ebp
0x5610D3: push    esi
0x5610D4: push    edi
0x5610D5: mov     eax, ds:0B30AACh
0x5610DA: xor     eax, esp
0x5610DC: push    eax
0x5610DD: lea     eax, [esp+34h+var_C]
0x5610E1: mov     large fs:0, eax
0x5610E7: mov     edi, ecx
0x5610E9: xor     esi, esi
0x5610EB: mov     [esp+34h+var_14], esi
0x5610EF: cmp     [edi+0Ch], esi
0x5610F2: mov     [esp+34h+var_4], esi
0x5610F6: jnz     short loc_5610FF
0x5610F8: xor     eax, eax
0x5610FA: jmp     loc_561507
0x5610FF: fld     dword ptr ds:0A56670h
0x561105: fcomp   dword ptr [edi+50h]
0x561108: fnstsw  ax
0x56110A: fld     [esp+34h+arg_0];
0x56110E: test    ah, 5
0x561111: jp      short loc_56116B
0x561113: fld1
0x561115: fucomp  st(1)
0x561117: fnstsw  ax
0x561119: test    ah, 44h
0x56111C: jp      short loc_56112F
0x56111E: mov     eax, [edi+40h]
0x561121: fstp    st
0x561123: push    eax; a2
0x561124: lea     ecx, [esp+38h+var_14]; this
0x561128: call    NiSmartPointer_Set??
0x56112D: jmp     short loc_56116D
0x56112F: fld     dword ptr [edi+54h]
0x561132: sub     esp, 8
0x561135: fmul    st, st(1)
0x561137: fmul    qword ptr ds:0A2FAA0h
0x56113D: fstp    [esp+3Ch+var_18]
0x561141: fld     [esp+3Ch+var_18]
0x561145: fstp    [esp+3Ch+scale]; radius
0x561149: fmul    dword ptr [edi+50h]
0x56114C: fstp    [esp+3Ch+var_18]
0x561150: fld     [esp+3Ch+var_18]
0x561154: fstp    [esp+3Ch+trunkLength]; trunkLength
0x561157: call    BSTreeModel_CreateTrunkCapsuleShape; Verified CreateArt calls BSTreeModel_CreateTrunkCapsuleShape with physical reference-scaled trunkLength and half-width when constructing a scaled BSTreeNode collision object.
0x56115C: add     esp, 8
0x56115F: push    eax; a2
0x561160: lea     ecx, [esp+38h+var_14]; this
0x561164: call    NiSmartPointer_Set??
0x561169: jmp     short loc_56116D
0x56116B: fstp    st
0x56116D: push    0F0h ; 'ð'; Size
0x561172: call    FormHeapAlloc
0x561177: add     esp, 4
0x56117A: mov     [esp+34h+var_18], eax
0x56117E: cmp     eax, esi
0x561180: mov     byte ptr [esp+34h+var_4], 1
0x561185: jz      short loc_56119C
0x561187: mov     ecx, [esp+34h+var_14]
0x56118B: push    ecx; collisionShape
0x56118C: push    edi; model
0x56118D: mov     ecx, eax; this
0x56118F: call    BSTreeNode_ctor; Verified 0xF0-byte BSTreeNode layout: NiNode base +0x00..+0xDB; model +0xDC; branch/leaf LOD arrays +0xE0/+0xE4; billboardGeometry +0xE8; +0xEC float Unknown. Constructor creates child slot 2 as a separate NiBillboardNode named Billboard; the +0xE8 field stores the NiTriBasedGeom added under that parent.
0x561194: mov     ebp, eax
0x561196: mov     [esp+34h+var_1C], ebp
0x56119A: jmp     short loc_5611A2
0x56119C: mov     [esp+34h+var_1C], esi
0x5611A0: mov     ebp, esi
0x5611A2: cmp     [edi+14h], esi
0x5611A5: mov     byte ptr [esp+34h+var_4], 0
0x5611AA: jz      loc_561362
0x5611B0: cmp     [edi+24h], esi
0x5611B3: jz      loc_561362
0x5611B9: cmp     [edi+2Ch], esi
0x5611BC: jz      loc_561362
0x5611C2: mov     ecx, [edi+0Ch]; this
0x5611C5: cmp     ecx, esi
0x5611C7: jz      short loc_5611D7
0x5611C9: call    CSpeedTreeRT__GetNumBranchLodLevels; CSpeedTreeRT::GetNumBranchLodLevels. Returns the 16-bit branch LOD count at CTreeEngine+0x70.
0x5611CE: movzx   edx, ax
0x5611D1: mov     [esp+34h+var_20], edx
0x5611D5: jmp     short loc_5611DB
0x5611D7: mov     [esp+34h+var_20], esi
0x5611DB: push    4; a1
0x5611DD: call    GetShaderDefinition; Direct stock branch shader definition request: GetShaderDefinition(4). This is the branch attachment path in BSTreeModel scene-node creation.
0x5611E2: mov     [esp+38h+var_18], eax
0x5611E6: mov     eax, [ebp+0]
0x5611E9: mov     edx, [eax+0A0h]
0x5611EF: add     esp, 4
0x5611F2: mov     ecx, ebp
0x5611F4: call    edx
0x5611F6: cmp     eax, esi
0x5611F8: jz      short loc_561209
0x5611FA: mov     ecx, [edi+34h]
0x5611FD: cmp     ecx, esi
0x5611FF: jz      short loc_561209
0x561201: push    ecx; a2
0x561202: mov     ecx, eax; this
0x561204: call    sub_405680; 2026-05-30 SpeedTreeOBSE: branch scene attach applies BSTreeModel+0x34 stock NiTexturingProperty to the branch root before per-LOD branch shapes. This is the legacy branch diffuse path from 0x560AC0, not retained 60000 map-bank binding.
0x561209: xor     ebx, ebx
0x56120B: cmp     word ptr [esp+34h+var_20], si
0x561210: jbe     loc_5612E0
0x561216: jmp     short loc_561220
0x561220: mov     eax, [edi+14h]
0x561223: cmp     dword ptr [esi+eax], 0
0x561227: jz      loc_5612CF
0x56122D: push    0C0h ; 'À'; Size
0x561232: call    FormHeapAlloc
0x561237: add     esp, 4
0x56123A: mov     [esp+34h+var_10], eax
0x56123E: test    eax, eax
0x561240: mov     byte ptr [esp+34h+var_4], 2
0x561245: jz      short loc_561259
0x561247: mov     ecx, [edi+14h]
0x56124A: mov     ecx, [esi+ecx]
0x56124D: push    ecx
0x56124E: mov     ecx, eax
0x561250: call    sub_719A20
0x561255: mov     ebp, eax
0x561257: jmp     short loc_56125B
0x561259: xor     ebp, ebp
0x56125B: mov     byte ptr [esp+34h+var_4], 0
0x561260: call    BSTreeModel_CreateAlphaProperty; Leaf geometry installs alpha-test property flags 0x12EC, function GREATER, ref=84. Therefore sampled alpha <=84 is discarded/invisible, not rendered RGB-black.
0x561265: test    eax, eax
0x561267: jz      short loc_561277
0x561269: and     word ptr [eax+18h], 0FDFFh
0x56126F: push    eax; a2
0x561270: mov     ecx, ebp; this
0x561272: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x561277: mov     edx, [edi+24h]
0x56127A: mov     ecx, [esi+edx]
0x56127D: test    ecx, ecx
0x56127F: jz      short loc_561294
0x561281: call    BSShaderProperty_ClearRenderPassLists; Owner-side cleanup for all four BSShaderProperty RenderPass lists at +0x28/+0x38/+0x48/+0x58. For every node it unlinks the node, releases the node through the list allocator, destroys the payload's owned light array, and frees the 0x10-byte RenderPass. This is the ordinary payload owner; accumulator selector buckets do not perform this destruction.
0x561286: mov     eax, [edi+24h]
0x561289: mov     eax, [esi+eax]
0x56128C: push    eax; a2
0x56128D: mov     ecx, ebp; this
0x56128F: call    sub_405680; 2026-05-30 SpeedTreeOBSE: branch LOD child receives the per-LOD SpeedTreeBranchShaderProperty from BSTreeModel+0x24. Texture refs are not written here; property-state/render setup must supply any PPLighting map arrays.
0x561294: cmp     dword ptr [edi+8], 2
0x561298: jnz     short loc_5612BB
0x56129A: mov     ecx, [edi+2Ch]
0x56129D: mov     eax, [esi+ecx]
0x5612A0: test    eax, eax
0x5612A2: jz      short loc_5612AC
0x5612A4: push    eax; a2
0x5612A5: mov     ecx, ebp; this
0x5612A7: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x5612AC: mov     edx, [esp+34h+var_18]
0x5612B0: mov     eax, [edx+4]
0x5612B3: push    eax; shader
0x5612B4: mov     ecx, ebp; this
0x5612B6: call    NiGeometry_SetShader; NiGeometry shader smart-pointer setter: releases the old BSShader, stores the new shader, and AddRefs it when the pointer changes.
0x5612BB: mov     ecx, [esp+34h+var_1C]
0x5612BF: mov     eax, [ecx]
0x5612C1: mov     edx, [eax+0B8h]
0x5612C7: push    ebp
0x5612C8: push    ebx
0x5612C9: call    edx
0x5612CB: mov     ebp, [esp+34h+var_1C]
0x5612CF: add     ebx, 1
0x5612D2: add     esi, 4
0x5612D5: cmp     bx, word ptr [esp+34h+var_20]
0x5612DA: jb      loc_561220
0x5612E0: cmp     dword ptr [edi+8], 2
0x5612E4: jz      loc_561362
0x5612EA: mov     eax, [ebp+0]
0x5612ED: mov     edx, [eax+0A0h]
0x5612F3: push    1; arg3
0x5612F5: push    1; normalMapBypass
0x5612F7: push    4; shaderId
0x5612F9: mov     ecx, ebp
0x5612FB: call    edx
0x5612FD: push    eax; root
0x5612FE: call    BSShaderManager_AssignShadersRecursive; Generic shader assignment in BSTreeModel node attach: applies shader id 4 to the branch group, not frond id 5.
0x561303: xor     ebp, ebp
0x561305: add     esp, 10h
0x561308: cmp     word ptr [esp+34h+var_20], bp
0x56130D: jbe     short loc_56135E
0x56130F: xor     ebx, ebx
0x561311: mov     ecx, [esp+34h+var_1C]
0x561315: mov     eax, [ecx]
0x561317: mov     edx, [eax+0ACh]
0x56131D: push    ebp
0x56131E: call    edx
0x561320: mov     esi, eax
0x561322: test    esi, esi
0x561324: jz      short loc_561351
0x561326: push    3
0x561328: mov     ecx, esi
0x56132A: call    NiNode_GetNiPropertyByID;
0x56132F: mov     ecx, [edi+2Ch]
0x561332: push    eax; a2
0x561333: add     ecx, ebx; this
0x561335: call    NiSmartPointer_Set??; 2026-05-30 SpeedTreeOBSE: after branch shader assignment/precache, NiProperty id 3 from each branch child is cached into BSTreeModel+0x2C for reuse. This is renderer/property-state output, not a map-bank consumer.
0x56133A: mov     ecx, ds:0B3F928h
0x561340: mov     eax, [ecx]
0x561342: mov     edx, [eax+0B0h]
0x561348: push    0
0x56134A: push    0
0x56134C: push    0
0x56134E: push    esi
0x56134F: call    edx
0x561351: add     ebp, 1
0x561354: add     ebx, 4
0x561357: cmp     bp, word ptr [esp+34h+var_20]
0x56135C: jb      short loc_561311
0x56135E: mov     ebp, [esp+34h+var_1C]
0x561362: xor     ebx, ebx
0x561364: cmp     [edi+18h], ebx
0x561367: jz      loc_56148D
0x56136D: cmp     [edi+28h], ebx
0x561370: jz      loc_56148D
0x561376: cmp     [edi+30h], ebx
0x561379: jz      loc_56148D
0x56137F: mov     ecx, [edi+0Ch]; this
0x561382: cmp     ecx, ebx
0x561384: jz      short loc_561394
0x561386: call    CSpeedTreeRT__GetNumLeafLodLevels; CSpeedTreeRT::GetNumLeafLodLevels. Returns the 16-bit leaf LOD count at CTreeEngine+0xC0.
0x56138B: movzx   eax, ax
0x56138E: mov     [esp+34h+var_20], eax
0x561392: jmp     short loc_561398
0x561394: mov     [esp+34h+var_20], ebx
0x561398: push    6; a1
0x56139A: call    GetShaderDefinition; Direct stock leaf shader definition request: GetShaderDefinition(6). No adjacent frond GetShaderDefinition(5) request exists in this attach path.
0x56139F: add     esp, 4
0x5613A2: cmp     word ptr [esp+34h+var_20], bx
0x5613A7: mov     [esp+34h+var_18], eax
0x5613AB: jbe     loc_56148D
0x5613B1: xor     ebp, ebp
0x5613B3: mov     ecx, [edi+18h]
0x5613B6: cmp     dword ptr [ecx+ebp], 0
0x5613BA: jz      loc_561478
0x5613C0: push    0C0h ; 'À'; Size
0x5613C5: call    FormHeapAlloc
0x5613CA: add     esp, 4
0x5613CD: mov     [esp+34h+var_10], eax
0x5613D1: test    eax, eax
0x5613D3: mov     byte ptr [esp+34h+var_4], 3
0x5613D8: jz      short loc_5613EC
0x5613DA: mov     edx, [edi+18h]
0x5613DD: mov     ecx, [edx+ebp]
0x5613E0: push    ecx; data
0x5613E1: mov     ecx, eax; this
0x5613E3: call    OB_NiTriShape_ctorWithData_010201A0
0x5613E8: mov     esi, eax
0x5613EA: jmp     short loc_5613EE
0x5613EC: xor     esi, esi
0x5613EE: mov     byte ptr [esp+34h+var_4], 0
0x5613F3: call    BSTreeModel_CreateAlphaProperty; Creates and attaches a fresh 0x12EC/0x54 NiAlphaProperty to each fixed-card leaf LOD scene shape before attaching the SpeedTree leaf shader property.
0x5613F8: test    eax, eax
0x5613FA: jz      short loc_561404
0x5613FC: push    eax; a2
0x5613FD: mov     ecx, esi; this
0x5613FF: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x561404: mov     eax, [edi+28h]
0x561407: mov     ecx, [eax+ebp]
0x56140A: test    ecx, ecx
0x56140C: jz      short loc_561421
0x56140E: call    BSShaderProperty_ClearRenderPassLists; Owner-side cleanup for all four BSShaderProperty RenderPass lists at +0x28/+0x38/+0x48/+0x58. For every node it unlinks the node, releases the node through the list allocator, destroys the payload's owned light array, and frees the 0x10-byte RenderPass. This is the ordinary payload owner; accumulator selector buckets do not perform this destruction.
0x561413: mov     ecx, [edi+28h]
0x561416: mov     eax, [ecx+ebp]
0x561419: push    eax; a2
0x56141A: mov     ecx, esi; this
0x56141C: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x561421: mov     edx, [edi+30h]
0x561424: mov     eax, [edx+ebp]
0x561427: test    eax, eax
0x561429: jz      short loc_561433
0x56142B: push    eax; a2
0x56142C: mov     ecx, esi; this
0x56142E: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x561433: mov     ecx, [esp+34h+var_1C]
0x561437: mov     eax, [ecx]
0x561439: mov     edx, [eax+0BCh]
0x56143F: push    esi
0x561440: push    ebx
0x561441: call    edx
0x561443: mov     eax, [esp+34h+var_18]
0x561447: mov     eax, [eax+4]
0x56144A: push    eax; shader
0x56144B: mov     ecx, esi; this
0x56144D: call    NiGeometry_SetShader; NiGeometry shader smart-pointer setter: releases the old BSShader, stores the new shader, and AddRefs it when the pointer changes.
0x561452: mov     ecx, [esp+34h+var_18]
0x561456: mov     ecx, [ecx+4]
0x561459: mov     edx, [ecx]
0x56145B: mov     eax, [edx+18h]
0x56145E: push    esi
0x56145F: call    eax
0x561461: mov     ecx, ds:0B3F928h
0x561467: mov     edx, [ecx]
0x561469: mov     eax, [edx+0B0h]
0x56146F: push    0
0x561471: push    0
0x561473: push    0
0x561475: push    esi
0x561476: call    eax
0x561478: add     ebx, 1
0x56147B: add     ebp, 4
0x56147E: cmp     bx, word ptr [esp+34h+var_20]
0x561483: jb      loc_5613B3
0x561489: mov     ebp, [esp+34h+var_1C]
0x56148D: mov     edx, [ebp+0]
0x561490: mov     eax, [edx+0A8h]
0x561496: mov     ecx, ebp
0x561498: call    eax
0x56149A: mov     eax, [edi+1Ch]
0x56149D: test    eax, eax
0x56149F: jz      short loc_5614AF
0x5614A1: mov     edx, [ebp+0]
0x5614A4: push    eax
0x5614A5: mov     eax, [edx+0C0h]
0x5614AB: mov     ecx, ebp
0x5614AD: call    eax; Verified: CreateArt passes model.billboardShape_STBB (+0x1C) to BSTreeNode vtable slot +0xC0, which resolves locally to BSTreeNode_SetBillboard and attaches the STBB shape under the Billboard child.
0x5614AF: mov     ecx, ebp; this
0x5614B1: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x5614B6: mov     ecx, ebp
0x5614B8: call    NiNode_UpdateDynamicEffectState
0x5614BD: fldz
0x5614BF: push    ecx
0x5614C0: fstp    [esp+38h+scale]; float
0x5614C3: mov     ecx, ebp
0x5614C5: call    sub_7073A0
0x5614CA: fld     [esp+34h+arg_0]
0x5614CE: push    ecx
0x5614CF: mov     ecx, [edi+0Ch]
0x5614D2: fstp    [esp+38h+scale]; scale
0x5614D5: push    ecx; speedTree
0x5614D6: mov     ecx, ebp; this
0x5614D8: call    BSTreeNode__MakeHavokLeaves; 2026-05-22 OBSE implementation pass: single decoded scene-node attach callsite for MakeTreetopCollisions. Safe plugin step is callsite-level log-only probe; stock 0x565510 remains the final callee and no Havok cinfo/endpoints are mutated.
0x5614DD: mov     esi, [esp+34h+var_14]
0x5614E1: test    esi, esi
0x5614E3: mov     [esp+34h+var_4], 0FFFFFFFFh
0x5614EB: jz      short loc_561505
0x5614ED: lea     edx, [esi+4]
0x5614F0: push    edx; lpAddend
0x5614F1: call    dword ptr ds:0A2807Ch
0x5614F7: test    eax, eax
0x5614F9: jnz     short loc_561505
0x5614FB: mov     eax, [esi]
0x5614FD: mov     edx, [eax]
0x5614FF: push    1
0x561501: mov     ecx, esi
0x561503: call    edx
0x561505: mov     eax, ebp
0x561507: mov     ecx, dword ptr [esp+34h+var_C]
0x56150B: mov     large fs:0, ecx
0x561512: pop     ecx
0x561513: pop     edi
0x561514: pop     esi
0x561515: pop     ebp
0x561516: pop     ebx
0x561517: add     esp, 20h
0x56151A: retn    4
0x9BD100: lea     ecx, [ebp-14h]; slot
0x9BD103: jmp     NiPointerSlot_Release
0x9BD108: mov     eax, [ebp-18h]
0x9BD10B: push    eax
0x9BD10C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD111: pop     ecx
0x9BD112: retn
0x9BD113: mov     eax, [ebp-10h]
0x9BD116: push    eax
0x9BD117: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD11C: pop     ecx
0x9BD11D: retn
0x9BD11E: mov     eax, [ebp-10h]
0x9BD121: push    eax
0x9BD122: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD127: pop     ecx
0x9BD128: retn
0x9BD129: mov     edx, [esp+arg_4]
0x9BD12D: lea     eax, [edx-24h]
0x9BD130: mov     ecx, [edx-28h]
0x9BD133: xor     ecx, eax
0x9BD135: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD13A: mov     eax, offset stru_AE6BB4
0x9BD13F: jmp     ___CxxFrameHandler3
