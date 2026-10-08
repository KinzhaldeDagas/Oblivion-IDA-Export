0x848950: push    0FFFFFFFFh; Verified (Oblivion): shared by ShadowLight, Skin, and Hair setup for selector 0x18E. It binds the effect texture and render-state fields; NiD3DShader_SetupShaderPrograms applies the active shader's owned fill/rim/fVars/U/V maps afterward.
0x848952: push    offset SEH_880560
0x848957: mov     eax, large fs:0
0x84895D: push    eax
0x84895E: push    ebx
0x84895F: push    ebp
0x848960: push    esi
0x848961: push    edi
0x848962: mov     eax, ds:0B30AACh
0x848967: xor     eax, esp
0x848969: push    eax
0x84896A: lea     eax, [esp+20h+var_C]
0x84896E: mov     large fs:0, eax
0x848974: mov     edi, ecx
0x848976: mov     eax, [esp+20h+value]
0x84897A: mov     ebx, [eax+0E0h]
0x848980: test    ebx, ebx
0x848982: mov     esi, ds:0B45BD8h
0x848988: jz      loc_848AAD
0x84898E: mov     ecx, [esi+24h]
0x848991: mov     ebp, [ecx]
0x848993: push    0
0x848995: push    eax
0x848996: mov     ecx, edi
0x848998: call    sub_848FD0
0x84899D: push    eax; texture
0x84899E: mov     ecx, ebp; this
0x8489A0: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x8489A5: mov     edx, [esp+20h+value]
0x8489A9: push    edx
0x8489AA: push    ebp
0x8489AB: mov     ecx, edi
0x8489AD: call    sub_848FA0
0x8489B2: mov     eax, [esi+24h]
0x8489B5: mov     ebp, [eax+4]
0x8489B8: mov     eax, [ebx+8]
0x8489BB: test    eax, eax
0x8489BD: jz      short loc_8489C2
0x8489BF: push    eax
0x8489C0: jmp     short loc_8489C9
0x8489C2: mov     ecx, ds:0B43120h
0x8489C8: push    ecx; texture
0x8489C9: mov     ecx, ebp; this
0x8489CB: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x8489D0: push    3; preset
0x8489D2: mov     ecx, ebp; this
0x8489D4: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x8489D9: mov     edx, [esp+20h+value]
0x8489DD: push    edx
0x8489DE: push    ebp
0x8489DF: mov     ecx, edi
0x8489E1: call    sub_848FA0
0x8489E6: cmp     dword ptr [esi+30h], 0
0x8489EA: mov     ebp, [ebx+5Ch]
0x8489ED: jnz     short loc_8489F7
0x8489EF: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x8489F4: mov     [esi+30h], eax
0x8489F7: mov     ecx, [esi+30h]
0x8489FA: push    0
0x8489FC: push    ebp
0x8489FD: push    13h
0x8489FF: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x848A04: cmp     dword ptr [esi+30h], 0
0x848A08: mov     ebp, [ebx+60h]
0x848A0B: jnz     short loc_848A15
0x848A0D: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x848A12: mov     [esi+30h], eax
0x848A15: mov     ecx, [esi+30h]
0x848A18: push    0
0x848A1A: push    ebp
0x848A1B: push    14h
0x848A1D: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x848A22: cmp     dword ptr [esi+30h], 0
0x848A26: mov     ebp, [ebx+64h]
0x848A29: jnz     short loc_848A33
0x848A2B: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x848A30: mov     [esi+30h], eax
0x848A33: mov     ecx, [esi+30h]
0x848A36: push    1
0x848A38: push    ebp
0x848A39: push    0ABh ; '«'
0x848A3E: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x848A43: cmp     dword ptr [esi+30h], 0
0x848A47: mov     ebx, [ebx+68h]
0x848A4A: jnz     short loc_848A54
0x848A4C: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x848A51: mov     [esi+30h], eax
0x848A54: mov     ecx, [esi+30h]
0x848A57: push    0
0x848A59: push    ebx
0x848A5A: push    17h
0x848A5C: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x848A61: mov     eax, [esp+20h+value]
0x848A65: mov     ecx, [esp+20h+geometry]
0x848A69: push    eax; shaderProperty
0x848A6A: push    ecx; geometry
0x848A6B: mov     ecx, edi
0x848A6D: call    BSShaderProperty_SetupTextureEffectConstants; Verified (Oblivion): shared by all four 1x/2x texture-effect pass handlers used from ShadowLight, Skin, and Hair shader setup. Reads TextureEffectData from shaderProperty+0xE0, copies current fill/edge RGBA into ShadowLight shader-map backing, copies U/V offsets and edge exponent, writes the second fVars component as 1.0, then updates separate per-geometry property-state constants.
0x848A72: mov     ebx, 1
0x848A77: add     [esi+60h], ebx
0x848A7A: mov     [esp+20h+value], esi
0x848A7E: mov     eax, [edi+38h]
0x848A81: lea     edx, [esp+20h+value]
0x848A85: push    edx; value
0x848A86: push    eax; index
0x848A87: lea     ecx, [edi+40h]; this
0x848A8A: mov     [esp+28h+var_4], 0
0x848A92: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x848A97: or      eax, 0FFFFFFFFh
0x848A9A: add     [esi+60h], eax
0x848A9D: mov     [esp+20h+var_4], eax
0x848AA1: jnz     short loc_848AAA
0x848AA3: mov     ecx, esi
0x848AA5: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x848AAA: add     [edi+38h], ebx
0x848AAD: mov     ecx, [esp+20h+var_C]
0x848AB1: mov     large fs:0, ecx
0x848AB8: pop     ecx
0x848AB9: pop     edi
0x848ABA: pop     esi
0x848ABB: pop     ebp
0x848ABC: pop     ebx
0x848ABD: add     esp, 0Ch
0x848AC0: retn    10h
0x9D3390: lea     ecx, [ebp+10h]; void *
0x9D3393: jmp     sub_4027D0
0x9D3398: mov     edx, [esp+arg_4]
0x9D339C: lea     eax, [edx-10h]
0x9D339F: mov     ecx, [edx-14h]
0x9D33A2: xor     ecx, eax
0x9D33A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D33A9: mov     eax, offset stru_AFB7C0
0x9D33AE: jmp     ___CxxFrameHandler3
