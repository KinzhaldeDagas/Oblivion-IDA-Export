0x813510: push    0FFFFFFFFh; Mode-0 BSCubeMapCamera renderer. Iterates all six faces, selects the per-face surface, skips faces masked by ShadowSceneLight+0x118, and in render mode 5 draws the current light's category/object list.
0x813512: push    offset SEH_813510
0x813517: mov     eax, large fs:0
0x81351D: push    eax
0x81351E: sub     esp, 0CCh
0x813524: push    ebx
0x813525: push    ebp
0x813526: push    esi
0x813527: push    edi
0x813528: mov     eax, ds:0B30AACh
0x81352D: xor     eax, esp
0x81352F: push    eax
0x813530: lea     eax, [esp+0ECh+var_C]
0x813537: mov     large fs:0, eax
0x81353D: mov     ebp, ecx
0x81353F: mov     eax, ds:0B25AD0h
0x813544: mov     ecx, ds:0B25AD4h
0x81354A: mov     edx, ds:0B25AD8h
0x813550: mov     [esp+0ECh+var_C4], eax
0x813554: mov     eax, ds:0B25ADCh
0x813559: mov     [esp+0ECh+var_C0], ecx
0x81355D: mov     ecx, ds:0B43104h
0x813563: mov     [esp+0ECh+var_BC], edx
0x813567: mov     [esp+0ECh+var_B8], eax
0x81356B: mov     edx, [ecx]
0x81356D: mov     edx, [edx+68h]
0x813570: lea     eax, [esp+0ECh+var_C4]
0x813574: xor     edi, edi
0x813576: push    eax
0x813577: mov     [esp+0F0h+var_D8], edi
0x81357B: mov     [esp+0F0h+var_CC], edi
0x81357F: call    edx
0x813581: cmp     word ptr ds:0B42EACh, 5
0x813589: jnz     short loc_8135C6; In render mode 5, read the current ShadowSceneLight face/status mask at camera+0x144->+0x118 and use the native shadow clear color.
0x81358B: mov     eax, [ebp+144h]
0x813591: fld     dword ptr ds:0A3765Ch
0x813597: movzx   ecx, word ptr [eax+118h]
0x81359E: fst     [esp+0ECh+var_B4]
0x8135A2: fst     [esp+0ECh+var_B0]
0x8135A6: mov     [esp+0ECh+var_CC], ecx
0x8135AA: mov     ecx, ds:0B43104h
0x8135B0: fstp    [esp+0ECh+var_AC]
0x8135B4: fld1
0x8135B6: lea     eax, [esp+0ECh+var_B4]
0x8135BA: fstp    [esp+0ECh+var_A8]
0x8135BE: mov     edx, [ecx]
0x8135C0: mov     edx, [edx+60h]
0x8135C3: push    eax
0x8135C4: call    edx
0x8135C6: mov     [esp+0ECh+var_D0], edi
0x8135CA: push    edi; faceIndex
0x8135CB: mov     ecx, ebp; self
0x8135CD: call    BSCubeMapCamera_OrientFace; Orient the cube camera for the current face index.
0x8135D2: mov     eax, [ebp+140h]
0x8135D8: test    eax, eax
0x8135DA: jz      short loc_8135E5
0x8135DC: mov     esi, [esp+0ECh+var_C8]
0x8135E0: add     eax, 20h ; ' '
0x8135E3: jmp     short loc_8135F4
0x8135E5: xor     esi, esi
0x8135E7: or      [esp+0ECh+var_D8], 1
0x8135EC: mov     [esp+0ECh+var_C8], esi
0x8135F0: lea     eax, [esp+0ECh+var_C8]
0x8135F4: test    byte ptr [esp+0ECh+var_D8], 1
0x8135F9: mov     ebx, [eax]
0x8135FB: jz      short loc_81361E
0x8135FD: and     [esp+0ECh+var_D8], 0FFFFFFFEh
0x813602: test    esi, esi
0x813604: jz      short loc_81361E
0x813606: lea     eax, [esi+4]
0x813609: push    eax; lpAddend
0x81360A: call    dword ptr ds:0A2807Ch
0x813610: test    eax, eax
0x813612: jnz     short loc_81361E
0x813614: mov     edx, [esi]
0x813616: mov     eax, [edx]
0x813618: push    1
0x81361A: mov     ecx, esi
0x81361C: call    eax
0x81361E: mov     [ebx+40h], edi; Select the current face index in the active cube render surface.
0x813621: mov     esi, [ebx+30h]
0x813624: cmp     esi, [ebx+edi*4+44h]
0x813628: jz      short loc_813663
0x81362A: test    esi, esi
0x81362C: jz      short loc_81364A
0x81362E: lea     ecx, [esi+4]
0x813631: push    ecx; lpAddend
0x813632: call    dword ptr ds:0A2807Ch
0x813638: test    eax, eax
0x81363A: jnz     short loc_81364A
0x81363C: test    esi, esi
0x81363E: jz      short loc_81364A
0x813640: mov     edx, [esi]
0x813642: mov     eax, [edx]
0x813644: push    1
0x813646: mov     ecx, esi
0x813648: call    eax
0x81364A: mov     eax, [ebx+edi*4+44h]
0x81364E: test    eax, eax
0x813650: mov     [ebx+30h], eax
0x813653: jz      short loc_813663
0x813655: mov     ebx, ds:0A28078h
0x81365B: add     eax, 4
0x81365E: push    eax; lpAddend
0x81365F: call    ebx ; InterlockedIncrement
0x813661: jmp     short loc_813669
0x813663: mov     ebx, ds:0A28078h
0x813669: mov     ecx, [ebp+140h]
0x81366F: call    BSRenderedTexture__UseTextureToRender; Resolve BSCubeMapCamera+0x140 to the active render-target group for this face.
0x813674: push    eax; a2
0x813675: push    7; a1
0x813677: call    NiRenderer_BeginScene; Begin one render scene for the current cube face with kClear_ALL.
0x81367C: add     esp, 8
0x81367F: xor     eax, eax
0x813681: cmp     edi, 5; switch 6 cases
0x813684: ja      short def_813686; jumptable 00813686 default case
0x813686: jmp     ds:jpt_813686[edi*4]; switch jump
0x81368D: mov     eax, 2; jumptable 00813686 case 1
0x813692: jmp     short def_813686; jumptable 00813686 default case
0x813694: mov     eax, 1; jumptable 00813686 case 0
0x813699: jmp     short def_813686; jumptable 00813686 default case
0x81369B: mov     eax, 8; jumptable 00813686 case 3
0x8136A0: jmp     short def_813686; jumptable 00813686 default case
0x8136A2: mov     eax, 4; jumptable 00813686 case 2
0x8136A7: jmp     short def_813686; jumptable 00813686 default case
0x8136A9: mov     eax, 20h ; ' '; jumptable 00813686 case 5
0x8136AE: jmp     short def_813686; jumptable 00813686 default case
0x8136B0: mov     eax, 10h; jumptable 00813686 case 4
0x8136B5: and     eax, [esp+0ECh+var_CC]; jumptable 00813686 default case
0x8136B9: test    ax, ax
0x8136BC: jnz     loc_813880; Skip drawing this face when its bit is set in the ShadowSceneLight+0x118 failure/status mask.
0x8136C2: fldz
0x8136C4: push    1; a3
0x8136C6: push    ecx
0x8136C7: fstp    [esp+0F4h+a2]; a2
0x8136CA: mov     ecx, ebp; this
0x8136CC: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x8136D1: cmp     word ptr ds:0B42EACh, 5
0x8136D9: jz      loc_8138C1
0x8136DF: cmp     dword ptr [ebp+148h], 0
0x8136E6: jz      loc_813880
0x8136EC: call    BSShaderAccumulator_GetOrCreateGlobal
0x8136F1: mov     esi, eax
0x8136F3: test    esi, esi
0x8136F5: mov     [esp+0ECh+var_A4], esi
0x8136F9: jz      short loc_813701
0x8136FB: lea     ecx, [esi+4]
0x8136FE: push    ecx; lpAddend
0x8136FF: call    ebx ; InterlockedIncrement
0x813701: cmp     dword ptr [esi+4], 1
0x813705: lea     eax, [esi+4]
0x813708: mov     [esp+0ECh+var_4], 0
0x813713: jnz     short loc_813718
0x813715: push    eax; lpAddend
0x813716: call    ebx ; InterlockedIncrement
0x813718: mov     edx, ds:0B3F928h
0x81371E: mov     ebx, [edx+8]
0x813721: test    ebx, ebx
0x813723: mov     [esp+0ECh+var_A0], ebx
0x813727: jz      short loc_813733
0x813729: lea     eax, [ebx+4]
0x81372C: push    eax; lpAddend
0x81372D: call    dword ptr ds:0A28078h
0x813733: mov     eax, ds:0B3F928h
0x813738: mov     edi, [eax+8]
0x81373B: add     eax, 8
0x81373E: cmp     edi, esi
0x813740: mov     byte ptr [esp+0ECh+var_4], 1
0x813748: mov     [esp+0ECh+var_D4], eax
0x81374C: jz      short loc_81377E
0x81374E: test    edi, edi
0x813750: jz      short loc_81376E
0x813752: lea     ecx, [edi+4]
0x813755: push    ecx; lpAddend
0x813756: call    dword ptr ds:0A2807Ch
0x81375C: test    eax, eax
0x81375E: jnz     short loc_81376E
0x813760: test    edi, edi
0x813762: jz      short loc_81376E
0x813764: mov     edx, [edi]
0x813766: mov     eax, [edx]
0x813768: push    1
0x81376A: mov     ecx, edi
0x81376C: call    eax
0x81376E: mov     ecx, [esp+0ECh+var_D4]
0x813772: lea     eax, [esi+4]
0x813775: push    eax; lpAddend
0x813776: mov     [ecx], esi
0x813778: call    dword ptr ds:0A28078h
0x81377E: mov     edx, [esi]
0x813780: mov     eax, [edx+4Ch]
0x813783: push    ebp
0x813784: mov     ecx, esi
0x813786: call    eax
0x813788: push    0; visibleArray
0x81378A: lea     ecx, [esp+0F0h+cullingProcess]; self
0x81378E: mov     byte ptr [esi+21E0h], 1
0x813795: call    NiCullingProcess_NiCullingProcess; Oblivion NiCullingProcess constructor: initializes append mode, visible-geometry storage, camera state, and culling-plane state.
0x81379A: lea     ecx, [ebp+0ECh]
0x8137A0: push    ecx; a2
0x8137A1: lea     ecx, [esp+0F0h+cullingProcess]; this
0x8137A5: mov     byte ptr [esp+0F0h+var_4], 2
0x8137AD: mov     [esp+0F0h+cullingProcess.Camera], ebp
0x8137B1: call    NiCullingProcess__SetFrustum; Oblivion NiCullingProcess::SetFrustum copies the camera frustum, rebuilds six culling planes, and sets the active-plane mask to 0x3F.
0x8137B6: mov     eax, [ebp+148h]
0x8137BC: push    0; visibleArray
0x8137BE: lea     edx, [esp+0F0h+cullingProcess]
0x8137C2: push    edx; cullingProcess
0x8137C3: push    eax; sceneRoot
0x8137C4: push    ebp; camera
0x8137C5: call    NiRenderer_CullAndRenderScene; Renderer camera-cull-submit boundary. Installs camera matrices, culls the scene root into the visible array, then submits that visible array through the current renderer accumulator.
0x8137CA: mov     byte ptr [esi+21E1h], 1
0x8137D1: mov     eax, [esi]
0x8137D3: mov     edx, [eax+50h]
0x8137D6: add     esp, 10h
0x8137D9: mov     ecx, esi
0x8137DB: call    edx
0x8137DD: mov     eax, ds:0B3F928h
0x8137E2: mov     edi, [eax+8]
0x8137E5: add     eax, 8
0x8137E8: cmp     edi, ebx
0x8137EA: mov     [esp+0ECh+var_D4], eax
0x8137EE: jz      short loc_813824
0x8137F0: test    edi, edi
0x8137F2: jz      short loc_813810
0x8137F4: lea     eax, [edi+4]
0x8137F7: push    eax; lpAddend
0x8137F8: call    dword ptr ds:0A2807Ch
0x8137FE: test    eax, eax
0x813800: jnz     short loc_813810
0x813802: test    edi, edi
0x813804: jz      short loc_813810
0x813806: mov     edx, [edi]
0x813808: mov     eax, [edx]
0x81380A: push    1
0x81380C: mov     ecx, edi
0x81380E: call    eax
0x813810: test    ebx, ebx
0x813812: mov     ecx, [esp+0ECh+var_D4]
0x813816: mov     [ecx], ebx
0x813818: jz      short loc_813824
0x81381A: lea     edx, [ebx+4]
0x81381D: push    edx; lpAddend
0x81381E: call    dword ptr ds:0A28078h
0x813824: lea     ecx, [esp+0ECh+cullingProcess]; this
0x813828: mov     byte ptr [esp+0ECh+var_4], 1
0x813830: call    ??1BSCullingProcess@@UAE@XZ; Oblivion BSCullingProcess destructor restores its base culling-process state; no separate visible-array allocation is released here.
0x813835: test    ebx, ebx
0x813837: mov     byte ptr [esp+0ECh+var_4], 0
0x81383F: jz      short loc_813859
0x813841: lea     eax, [ebx+4]
0x813844: push    eax; lpAddend
0x813845: call    dword ptr ds:0A2807Ch
0x81384B: test    eax, eax
0x81384D: jnz     short loc_813859
0x81384F: mov     edx, [ebx]
0x813851: mov     eax, [edx]
0x813853: push    1
0x813855: mov     ecx, ebx
0x813857: call    eax
0x813859: lea     eax, [esi+4]
0x81385C: push    eax; lpAddend
0x81385D: mov     [esp+0F0h+var_4], 0FFFFFFFFh
0x813868: call    dword ptr ds:0A2807Ch
0x81386E: test    eax, eax
0x813870: jnz     short loc_81387C
0x813872: mov     edx, [esi]
0x813874: mov     eax, [edx]
0x813876: push    1
0x813878: mov     ecx, esi
0x81387A: call    eax
0x81387C: mov     edi, [esp+0ECh+var_D0]
0x813880: call    NiRenderer_EndScene; End the current cube-face render scene.
0x813885: add     edi, 1
0x813888: cmp     edi, 6
0x81388B: mov     [esp+0ECh+var_D0], edi
0x81388F: jl      loc_8135CA; Loop until all six cube faces have been processed, then restore the saved clear color.
0x813895: mov     ecx, ds:0B43104h
0x81389B: mov     edx, [ecx]
0x81389D: mov     edx, [edx+60h]
0x8138A0: lea     eax, [esp+0ECh+var_C4]
0x8138A4: push    eax
0x8138A5: call    edx
0x8138A7: mov     ecx, dword ptr [esp+0ECh+var_C]
0x8138AE: mov     large fs:0, ecx
0x8138B5: pop     ecx
0x8138B6: pop     edi
0x8138B7: pop     esi
0x8138B8: pop     ebp
0x8138B9: pop     ebx
0x8138BA: add     esp, 0D8h
0x8138C0: retn
0x8138C1: mov     eax, [ebp+144h]; Mode-5 face rendering requires BSCubeMapCamera+0x144 currentShadowLight.
0x8138C7: test    eax, eax
0x8138C9: jz      short loc_813880
0x8138CB: fld1
0x8138CD: push    ecx
0x8138CE: fstp    [esp+0F0h+propertyDimmer]; propertyDimmer
0x8138D1: push    eax; shadowSceneLight
0x8138D2: push    0; lightSlot
0x8138D4: call    OB_BSShader_DispatchLightConstantUpdate_010201A0; Upload the current ShadowSceneLight to the native shader-light constant path before category/object-list drawing.
0x8138D9: mov     ecx, [ebp+144h]
0x8138DF: mov     ebx, [ecx+114h]; Synchronize BSCubeMapCamera+0x140 to currentShadowLight+0x114 before object-list rendering.
0x8138E5: mov     esi, [ebp+140h]
0x8138EB: add     esp, 0Ch
0x8138EE: cmp     esi, ebx
0x8138F0: jz      short loc_813926
0x8138F2: test    esi, esi
0x8138F4: jz      short loc_813912
0x8138F6: lea     edx, [esi+4]
0x8138F9: push    edx; lpAddend
0x8138FA: call    dword ptr ds:0A2807Ch
0x813900: test    eax, eax
0x813902: jnz     short loc_813912
0x813904: test    esi, esi
0x813906: jz      short loc_813912
0x813908: mov     eax, [esi]
0x81390A: mov     edx, [eax]
0x81390C: push    1
0x81390E: mov     ecx, esi
0x813910: call    edx
0x813912: test    ebx, ebx
0x813914: mov     [ebp+140h], ebx
0x81391A: jz      short loc_813926
0x81391C: add     ebx, 4
0x81391F: push    ebx; lpAddend
0x813920: call    dword ptr ds:0A28078h
0x813926: mov     eax, [ebp+144h]
0x81392C: push    eax; a2
0x81392D: mov     ecx, ebp; this
0x81392F: call    RenderShadowCategoryObjectListOffscreen; Render the current ShadowSceneLight's engine-owned +0xE8 category/object list through the offscreen culling/accumulator helper.
0x813934: jmp     loc_813880
0x9D1280: lea     ecx, [ebp-0A4h]; slot
0x9D1286: jmp     NiPointerSlot_Release
0x9D128B: lea     ecx, [ebp-0A0h]; slot
0x9D1291: jmp     NiPointerSlot_Release
0x9D1296: lea     ecx, [ebp-9Ch]; this
0x9D129C: jmp     ??1BSCullingProcess@@UAE@XZ; Oblivion BSCullingProcess destructor restores its base culling-process state; no separate visible-array allocation is released here.
0x9D12A1: mov     edx, [esp+arg_4]
0x9D12A5: lea     eax, [edx-0DCh]
0x9D12AB: mov     ecx, [edx-0E0h]
0x9D12B1: xor     ecx, eax
0x9D12B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D12B8: mov     eax, offset stru_AF9964
0x9D12BD: jmp     ___CxxFrameHandler3
