0x40D160: sub     esp, 18h
0x40D163: push    ebx
0x40D164: mov     ebx, ecx
0x40D166: mov     ecx, dword ptr reference; this
0x40D16C: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x40D171: test    eax, eax
0x40D173: jz      loc_40D4C7
0x40D179: mov     ecx, dword ptr reference
0x40D17F: mov     eax, [ecx]
0x40D181: mov     edx, [eax+154h]
0x40D187: call    edx
0x40D189: test    eax, eax
0x40D18B: jz      loc_40D4C7
0x40D191: push    3
0x40D193: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x40D198: mov     eax, dword ptr texture
0x40D19D: add     esp, 4
0x40D1A0: test    eax, eax
0x40D1A2: jz      short loc_40D1B0
0x40D1A4: mov     ecx, dword ptr OB_RendererGlobalState_010201A0.pad_0B3+4; this
0x40D1AA: push    eax; texture
0x40D1AB: call    BSTextureManager__ReturnRenderedTexture; General BSTextureManager rendered-texture return path, not canopy-specific: locates the texture's pool record, performs manager return bookkeeping, and removes the record from the borrowed/owned list. Used by water, HDR, menus, canopy shadows and shadow rendering.
0x40D1B0: mov     eax, dword ptr renderer
0x40D1B5: mov     ecx, dword ptr OB_RendererGlobalState_010201A0.pad_0B3+4; this
0x40D1BB: push    esi
0x40D1BC: push    edi
0x40D1BD: push    5; Requests default render-target type 5 for the captured world/menu background. This is not the XML UI render surface.
0x40D1BF: push    eax; a2
0x40D1C0: call    BSTextureManager_GetDefaultRenderTarget; Menu rendered texture path: creates menuRenderedTexture through BSTextureManager_GetDefaultRenderTarget(..., 5), then NiRenderer_Render uses that texture.
0x40D1C5: push    eax; a2
0x40D1C6: mov     ecx, offset texture; this
0x40D1CB: call    NiSmartPointer_Set??
0x40D1D0: mov     ecx, dword ptr renderer
0x40D1D6: mov     edx, [ecx]
0x40D1D8: mov     eax, [edx+7Ch]
0x40D1DB: call    eax
0x40D1DD: mov     ecx, dword ptr texture
0x40D1E3: mov     ecx, [ecx+20h]
0x40D1E6: test    ecx, ecx
0x40D1E8: mov     esi, eax
0x40D1EA: jz      short loc_40D1F7
0x40D1EC: mov     edx, [ecx]
0x40D1EE: mov     eax, [edx+4Ch]
0x40D1F1: call    eax
0x40D1F3: mov     edi, eax
0x40D1F5: jmp     short loc_40D1F9
0x40D1F7: xor     edi, edi
0x40D1F9: mov     edx, [esi]
0x40D1FB: mov     eax, [edx+4Ch]
0x40D1FE: push    0
0x40D200: mov     ecx, esi
0x40D202: call    eax
0x40D204: cmp     eax, edi
0x40D206: jnz     short loc_40D244
0x40D208: mov     ecx, dword ptr renderer
0x40D20E: mov     edx, [ecx]
0x40D210: mov     eax, [edx+7Ch]
0x40D213: call    eax
0x40D215: mov     ecx, dword ptr texture
0x40D21B: mov     ecx, [ecx+20h]
0x40D21E: test    ecx, ecx
0x40D220: mov     esi, eax
0x40D222: jz      short loc_40D22F
0x40D224: mov     edx, [ecx]
0x40D226: mov     eax, [edx+50h]
0x40D229: call    eax
0x40D22B: mov     edi, eax
0x40D22D: jmp     short loc_40D231
0x40D22F: xor     edi, edi
0x40D231: mov     edx, [esi]
0x40D233: mov     eax, [edx+50h]
0x40D236: push    0
0x40D238: mov     ecx, esi
0x40D23A: call    eax
0x40D23C: cmp     eax, edi
0x40D23E: jz      loc_40D412
0x40D244: mov     ecx, dword ptr renderer
0x40D24A: mov     edx, [ecx]
0x40D24C: mov     eax, [edx+7Ch]
0x40D24F: call    eax
0x40D251: mov     ecx, dword ptr texture
0x40D257: mov     ecx, [ecx+20h]
0x40D25A: test    ecx, ecx
0x40D25C: mov     esi, eax
0x40D25E: jz      short loc_40D26B
0x40D260: mov     edx, [ecx]
0x40D262: mov     eax, [edx+4Ch]
0x40D265: call    eax
0x40D267: mov     edi, eax
0x40D269: jmp     short loc_40D26D
0x40D26B: xor     edi, edi
0x40D26D: mov     edx, [esi]
0x40D26F: mov     eax, [edx+4Ch]
0x40D272: push    0
0x40D274: mov     ecx, esi
0x40D276: call    eax
0x40D278: test    eax, eax
0x40D27A: mov     [esp+20h+var_14], eax
0x40D27E: fild    [esp+20h+var_14]
0x40D282: jge     short loc_40D28A
0x40D284: fadd    ds:flt_A2FC78
0x40D28A: test    edi, edi
0x40D28C: mov     [esp+20h+var_14], edi
0x40D290: fild    [esp+20h+var_14]
0x40D294: jge     short loc_40D29C
0x40D296: fadd    ds:flt_A2FC78
0x40D29C: fdivp   st(1), st
0x40D29E: fld1
0x40D2A0: fcom    st(1)
0x40D2A2: fnstsw  ax
0x40D2A4: fstp    st(1)
0x40D2A6: test    ah, 41h
0x40D2A9: jnz     short loc_40D307
0x40D2AB: mov     ecx, dword ptr renderer
0x40D2B1: fstp    st
0x40D2B3: mov     edx, [ecx]
0x40D2B5: mov     eax, [edx+7Ch]
0x40D2B8: call    eax
0x40D2BA: mov     ecx, dword ptr texture
0x40D2C0: mov     ecx, [ecx+20h]
0x40D2C3: test    ecx, ecx
0x40D2C5: mov     esi, eax
0x40D2C7: jz      short loc_40D2D4
0x40D2C9: mov     edx, [ecx]
0x40D2CB: mov     eax, [edx+4Ch]
0x40D2CE: call    eax
0x40D2D0: mov     edi, eax
0x40D2D2: jmp     short loc_40D2D6
0x40D2D4: xor     edi, edi
0x40D2D6: mov     edx, [esi]
0x40D2D8: mov     eax, [edx+4Ch]
0x40D2DB: push    0
0x40D2DD: mov     ecx, esi
0x40D2DF: call    eax
0x40D2E1: test    eax, eax
0x40D2E3: mov     [esp+20h+var_14], eax
0x40D2E7: fild    [esp+20h+var_14]
0x40D2EB: jge     short loc_40D2F3
0x40D2ED: fadd    ds:flt_A2FC78
0x40D2F3: test    edi, edi
0x40D2F5: mov     [esp+20h+var_14], edi
0x40D2F9: fild    [esp+20h+var_14]
0x40D2FD: jge     short loc_40D305
0x40D2FF: fadd    ds:flt_A2FC78
0x40D305: fdivp   st(1), st
0x40D307: mov     ecx, dword ptr renderer
0x40D30D: fstp    [esp+20h+var_14]
0x40D311: mov     edx, [ecx]
0x40D313: mov     eax, [edx+7Ch]
0x40D316: call    eax
0x40D318: mov     ecx, dword ptr texture
0x40D31E: mov     ecx, [ecx+20h]
0x40D321: test    ecx, ecx
0x40D323: mov     esi, eax
0x40D325: jz      short loc_40D332
0x40D327: mov     edx, [ecx]
0x40D329: mov     eax, [edx+50h]
0x40D32C: call    eax
0x40D32E: mov     edi, eax
0x40D330: jmp     short loc_40D334
0x40D332: xor     edi, edi
0x40D334: mov     edx, [esi]
0x40D336: mov     eax, [edx+50h]
0x40D339: push    0
0x40D33B: mov     ecx, esi
0x40D33D: call    eax
0x40D33F: test    eax, eax
0x40D341: mov     [esp+24h+var_14], eax
0x40D345: fild    [esp+24h+var_14]
0x40D349: jge     short loc_40D351
0x40D34B: fadd    ds:flt_A2FC78
0x40D351: test    edi, edi
0x40D353: mov     [esp+24h+var_14], edi
0x40D357: fild    [esp+24h+var_14]
0x40D35B: jge     short loc_40D363
0x40D35D: fadd    ds:flt_A2FC78
0x40D363: fdivp   st(1), st
0x40D365: fld1
0x40D367: fcom    st(1)
0x40D369: fnstsw  ax
0x40D36B: fstp    st(1)
0x40D36D: test    ah, 41h
0x40D370: jnz     short loc_40D3CE
0x40D372: mov     ecx, dword ptr renderer
0x40D378: fstp    st
0x40D37A: mov     edx, [ecx]
0x40D37C: mov     eax, [edx+7Ch]
0x40D37F: call    eax
0x40D381: mov     ecx, dword ptr texture
0x40D387: mov     ecx, [ecx+20h]
0x40D38A: test    ecx, ecx
0x40D38C: mov     esi, eax
0x40D38E: jz      short loc_40D39B
0x40D390: mov     edx, [ecx]
0x40D392: mov     eax, [edx+50h]
0x40D395: call    eax
0x40D397: mov     edi, eax
0x40D399: jmp     short loc_40D39D
0x40D39B: xor     edi, edi
0x40D39D: mov     edx, [esi]
0x40D39F: mov     eax, [edx+50h]
0x40D3A2: push    0
0x40D3A4: mov     ecx, esi
0x40D3A6: call    eax
0x40D3A8: test    eax, eax
0x40D3AA: mov     [esp+24h+var_14], eax
0x40D3AE: fild    [esp+24h+var_14]
0x40D3B2: jge     short loc_40D3BA
0x40D3B4: fadd    ds:flt_A2FC78
0x40D3BA: test    edi, edi
0x40D3BC: mov     [esp+24h+var_14], edi
0x40D3C0: fild    [esp+24h+var_14]
0x40D3C4: jge     short loc_40D3CC
0x40D3C6: fadd    ds:flt_A2FC78
0x40D3CC: fdivp   st(1), st
0x40D3CE: fldz
0x40D3D0: mov     ecx, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40D3D6: mov     eax, [ecx+0DCh]
0x40D3DC: fst     [esp+24h+var_10]
0x40D3E0: fld     [esp+24h+output]
0x40D3E4: mov     edx, [esp+24h+var_10]
0x40D3E8: fstp    [esp+24h+var_C]
0x40D3EC: add     eax, 110h
0x40D3F1: mov     ecx, [esp+24h+var_C]
0x40D3F5: fxch    st(1)
0x40D3F7: fstp    [esp+24h+var_8]
0x40D3FB: mov     [eax], edx
0x40D3FD: mov     edx, [esp+24h+var_8]
0x40D401: mov     [eax+4], ecx
0x40D404: fstp    [esp+24h+var_4]
0x40D408: mov     ecx, [esp+24h+var_4]
0x40D40C: mov     [eax+8], edx
0x40D40F: mov     [eax+0Ch], ecx
0x40D412: mov     edx, dword ptr texture
0x40D418: push    edx; a2
0x40D419: mov     ecx, ebx; this
0x40D41B: call    NiRenderer_Render;
0x40D420: cmp     OB_RendererGlobalState_010201A0.pad_00D+98h, 0
0x40D427: mov     byte ptr unk_B33397, 1
0x40D42E: jnz     short loc_40D47C
0x40D430: mov     ecx, ds:0B333ECh; this
0x40D436: lea     eax, [esp+24h+output]
0x40D43A: push    eax; output
0x40D43B: call    NiGeometry_GetPropertyState; Returns a strong reference to NiGeometry+0xAC NiPropertyState through the output pointer. The active BSShaderProperty is propertyState+0x18; AccumulateGeometry uses that property as the owner and producer of the RenderPass list.
0x40D440: mov     esi, [esp+24h+output]
0x40D444: test    esi, esi
0x40D446: mov     ecx, [eax]
0x40D448: mov     edi, [ecx+20h]
0x40D44B: jz      short loc_40D469
0x40D44D: lea     edx, [esi+4]
0x40D450: push    edx; lpAddend
0x40D451: call    ds:InterlockedDecrement
0x40D457: test    eax, eax
0x40D459: jnz     short loc_40D469
0x40D45B: test    esi, esi
0x40D45D: jz      short loc_40D469
0x40D45F: mov     eax, [esi]
0x40D461: mov     edx, [eax]
0x40D463: push    1
0x40D465: mov     ecx, esi
0x40D467: call    edx
0x40D469: mov     ecx, dword ptr texture; this
0x40D46F: call    BSRenderedTexture__GetInnerTexture; Gets the captured background texture's inner NiRenderedTexture before binding it to menu-background geometry.
0x40D474: push    eax; texture
0x40D475: mov     ecx, edi; this
0x40D477: call    OB_NiTexturingProperty_SetBaseTexture_010201A0
0x40D47C: fldz
0x40D47E: mov     eax, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40D483: mov     eax, [eax+0DCh]
0x40D489: fst     [esp+24h+var_10]
0x40D48D: fld1
0x40D48F: mov     ecx, [esp+24h+var_10]
0x40D493: add     eax, 110h
0x40D498: fst     [esp+24h+var_C]
0x40D49C: mov     [eax], ecx
0x40D49E: fstp    [esp+24h+var_8]
0x40D4A2: mov     edx, [esp+24h+var_C]
0x40D4A6: mov     ecx, [esp+24h+var_8]
0x40D4AA: mov     [eax+4], edx
0x40D4AD: fstp    [esp+24h+var_4]
0x40D4B1: mov     edx, [esp+24h+var_4]
0x40D4B5: mov     [eax+8], ecx
0x40D4B8: push    2
0x40D4BA: mov     [eax+0Ch], edx
0x40D4BD: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x40D4C2: add     esp, 4
0x40D4C5: pop     edi
0x40D4C6: pop     esi
0x40D4C7: pop     ebx
0x40D4C8: add     esp, 18h
0x40D4CB: retn
