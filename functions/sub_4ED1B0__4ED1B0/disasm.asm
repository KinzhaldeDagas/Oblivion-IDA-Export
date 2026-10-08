0x4ED1B0: push    0FFFFFFFFh; Verified task post-load initialization: attaches terrain lighting shader/property and the generated color/normal textures to the loaded NIF, updates property state/world transform, then publishes the node to the quad and sets LoadedDetached.
0x4ED1B2: push    offset SEH_4ED1B0
0x4ED1B7: mov     eax, large fs:0
0x4ED1BD: push    eax
0x4ED1BE: sub     esp, 0Ch
0x4ED1C1: push    ebx
0x4ED1C2: push    ebp
0x4ED1C3: push    esi
0x4ED1C4: push    edi
0x4ED1C5: mov     eax, ds:0B30AACh
0x4ED1CA: xor     eax, esp
0x4ED1CC: push    eax
0x4ED1CD: lea     eax, [esp+2Ch+var_C]
0x4ED1D1: mov     large fs:0, eax
0x4ED1D7: mov     edi, ecx
0x4ED1D9: mov     eax, [edi+3Ch]
0x4ED1DC: xor     ebp, ebp
0x4ED1DE: cmp     eax, ebp
0x4ED1E0: jz      loc_4ED2EB
0x4ED1E6: xor     esi, esi
0x4ED1E8: mov     [esp+2Ch+var_18], ebp
0x4ED1EC: mov     [esp+2Ch+var_4], ebp
0x4ED1F0: mov     [esp+2Ch+var_14], ebp
0x4ED1F4: push    1; a1
0x4ED1F6: mov     byte ptr [esp+30h+var_4], 1
0x4ED1FB: call    GetShaderDefinition; DeferredRendering HDR+Bloom dependency: shader definition IDs 0x07=Blur/Bloom, 0x08=HDR, 0x0C=Copy fallback. Oblivion behavior observed here; both post-processes are forced by list composition, not Fallout naming.
0x4ED200: mov     ebx, eax
0x4ED202: add     esp, 4
0x4ED205: cmp     ebx, ebp
0x4ED207: jz      loc_4ED2E3
0x4ED20D: cmp     [ebx+4], ebp
0x4ED210: jz      loc_4ED2E3
0x4ED216: push    0F0h ; 'ð'; Size
0x4ED21B: call    FormHeapAlloc
0x4ED220: add     esp, 4
0x4ED223: mov     [esp+2Ch+var_10], eax
0x4ED227: cmp     eax, ebp
0x4ED229: mov     byte ptr [esp+2Ch+var_4], 2
0x4ED22E: jz      short loc_4ED23B
0x4ED230: mov     ecx, eax; this
0x4ED232: call    ??0BSShaderPPLightingProperty@@QAE@XZ; Verified (Oblivion): BSShaderPPLightingProperty constructor initializes the reference-counted TextureEffectData slot at this+0xE0 (DWORD index 0x38) to null. TextureEffectProperty_SetData replaces that same offset; BSShaderPPLightingProperty destructor releases and clears it before chaining to BSShaderLightingProperty. Fallout's typed property layout calls the member spTexEffectData at the same +0xE0 offset.
0x4ED237: mov     esi, eax
0x4ED239: jmp     short loc_4ED23D
0x4ED23B: xor     esi, esi
0x4ED23D: or      dword ptr [esi+1Ch], 3000h
0x4ED244: mov     [esi+24h], ebp
0x4ED247: mov     ecx, [edi+3Ch]; this
0x4ED24A: push    esi; a2
0x4ED24B: mov     byte ptr [esp+30h+var_4], 1
0x4ED250: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x4ED255: mov     ebp, [edi+3Ch]
0x4ED258: mov     eax, [esi]
0x4ED25A: mov     edx, [eax+68h]
0x4ED25D: push    ebp
0x4ED25E: mov     ecx, esi
0x4ED260: call    edx
0x4ED262: mov     ebp, [ebp+0B4h]
0x4ED268: push    eax
0x4ED269: mov     ecx, ebp
0x4ED26B: call    sub_6C61E0
0x4ED270: xor     ebp, ebp
0x4ED272: cmp     [ebx+4], ebp
0x4ED275: jz      short loc_4ED2E3
0x4ED277: cmp     esi, ebp
0x4ED279: jz      short loc_4ED2BB
0x4ED27B: mov     eax, [edi+40h]
0x4ED27E: mov     edx, [esi]
0x4ED280: push    eax
0x4ED281: mov     eax, [edx+80h]
0x4ED287: push    ebp
0x4ED288: mov     ecx, esi
0x4ED28A: call    eax
0x4ED28C: mov     edx, [esi]
0x4ED28E: mov     eax, [edx+80h]
0x4ED294: push    ebp
0x4ED295: push    1
0x4ED297: mov     ecx, esi
0x4ED299: call    eax
0x4ED29B: mov     eax, [edi+44h]
0x4ED29E: mov     edx, [esi]
0x4ED2A0: push    eax
0x4ED2A1: mov     eax, [edx+84h]
0x4ED2A7: push    ebp
0x4ED2A8: mov     ecx, esi
0x4ED2AA: call    eax
0x4ED2AC: mov     edx, [esi]
0x4ED2AE: mov     eax, [edx+84h]
0x4ED2B4: push    ebp
0x4ED2B5: push    1
0x4ED2B7: mov     ecx, esi
0x4ED2B9: call    eax
0x4ED2BB: mov     eax, [ebx+4]
0x4ED2BE: mov     ecx, [edi+3Ch]; this
0x4ED2C1: push    eax; shader
0x4ED2C2: call    NiGeometry_SetShader; NiGeometry shader smart-pointer setter: releases the old BSShader, stores the new shader, and AddRefs it when the pointer changes.
0x4ED2C7: mov     ecx, [ebx+4]
0x4ED2CA: mov     eax, [edi+3Ch]
0x4ED2CD: mov     edx, [ecx]
0x4ED2CF: push    eax
0x4ED2D0: mov     eax, [edx+18h]
0x4ED2D3: call    eax
0x4ED2D5: cmp     esi, ebp
0x4ED2D7: jz      short loc_4ED2E3
0x4ED2D9: mov     edx, [esi]
0x4ED2DB: mov     eax, [edx+7Ch]
0x4ED2DE: push    ebp
0x4ED2DF: mov     ecx, esi
0x4ED2E1: call    eax
0x4ED2E3: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4ED2EB: mov     ecx, [edi+3Ch]; this
0x4ED2EE: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x4ED2F3: fldz
0x4ED2F5: push    1; a3
0x4ED2F7: push    ecx
0x4ED2F8: mov     ecx, [edi+3Ch]; this
0x4ED2FB: fstp    [esp+34h+a2]; a2
0x4ED2FE: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x4ED303: mov     ecx, [edi+38h]; this
0x4ED306: call    TerrainLODQuadLoadTask_ApplyLoadedMesh; Verified async completion: obtains the loaded NIF node from the TerrainLODQuadLoadTask, stores it in quad.terrainLODNode (+0x2C), sets state LoadedDetached (2), and releases quadData's task reference.
0x4ED30B: mov     ecx, dword ptr [esp+2Ch+var_C]
0x4ED30F: mov     large fs:0, ecx
0x4ED316: pop     ecx
0x4ED317: pop     edi
0x4ED318: pop     esi
0x4ED319: pop     ebp
0x4ED31A: pop     ebx
0x4ED31B: add     esp, 18h
0x4ED31E: retn
0x9B65D0: lea     ecx, [ebp-18h]; slot
0x9B65D3: jmp     NiPointerSlot_Release
0x9B65D8: lea     ecx, [ebp-14h]; slot
0x9B65DB: jmp     NiPointerSlot_Release
0x9B65E0: mov     eax, [ebp-10h]
0x9B65E3: push    eax
0x9B65E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B65E9: pop     ecx
0x9B65EA: retn
0x9B65EB: mov     edx, [esp+arg_4]
0x9B65EF: lea     eax, [edx-1Ch]
0x9B65F2: mov     ecx, [edx-20h]
0x9B65F5: xor     ecx, eax
0x9B65F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B65FC: mov     eax, offset stru_AE1484
0x9B6601: jmp     ___CxxFrameHandler3
