0x851E70: push    0FFFFFFFFh; Verified (Oblivion): shared by ShadowLight, Skin, and Hair setup for selector 0x18D. It binds the same effect-data fields as 0x18C; the active shader's owned pixel/vertex maps are applied afterward by NiD3DShader_SetupShaderPrograms. The selector is passInfo bit 0x02-dependent.
0x851E72: push    offset SEH_851CA0
0x851E77: mov     eax, large fs:0
0x851E7D: push    eax
0x851E7E: push    ecx
0x851E7F: push    ebx
0x851E80: push    ebp
0x851E81: push    esi
0x851E82: push    edi
0x851E83: mov     eax, ds:0B30AACh
0x851E88: xor     eax, esp
0x851E8A: push    eax
0x851E8B: lea     eax, [esp+24h+var_C]
0x851E8F: mov     large fs:0, eax
0x851E95: mov     [esp+24h+var_10], ecx
0x851E99: mov     ebx, [esp+24h+value]
0x851E9D: mov     edi, [ebx+0E0h]
0x851EA3: test    edi, edi
0x851EA5: mov     esi, ds:0B45BD4h
0x851EAB: jz      loc_852014
0x851EB1: mov     eax, [esi+24h]
0x851EB4: mov     edx, [ebx]
0x851EB6: mov     ebp, [eax]
0x851EB8: mov     eax, [edx+8Ch]
0x851EBE: push    0
0x851EC0: mov     ecx, ebx
0x851EC2: call    eax
0x851EC4: test    eax, eax
0x851EC6: jz      short loc_851ED8
0x851EC8: mov     edx, [ebx]
0x851ECA: mov     eax, [edx+8Ch]
0x851ED0: push    0
0x851ED2: mov     ecx, ebx
0x851ED4: call    eax
0x851ED6: jmp     short loc_851EEB
0x851ED8: test    dword ptr [ebx+1Ch], 80h
0x851EDF: mov     eax, ds:0B430F0h
0x851EE4: ja      short loc_851EEB
0x851EE6: mov     eax, ds:0B430DCh
0x851EEB: push    eax; texture
0x851EEC: mov     ecx, ebp; this
0x851EEE: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x851EF3: test    ebp, ebp
0x851EF5: jz      short loc_851F11
0x851EF7: cmp     byte ptr ds:0B42CDDh, 0
0x851EFE: jz      short loc_851F11
0x851F00: mov     edx, [ebx]
0x851F02: mov     eax, [edx+78h]
0x851F05: mov     ecx, ebx
0x851F07: call    eax
0x851F09: push    eax; preset
0x851F0A: mov     ecx, ebp; this
0x851F0C: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x851F11: mov     ecx, [esi+24h]
0x851F14: mov     eax, [edi+8]
0x851F17: test    eax, eax
0x851F19: mov     ebp, [ecx+4]
0x851F1C: mov     ecx, ebp; this
0x851F1E: jz      short loc_851F23
0x851F20: push    eax
0x851F21: jmp     short loc_851F2A
0x851F23: mov     edx, ds:0B43120h
0x851F29: push    edx; texture
0x851F2A: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x851F2F: test    ebp, ebp
0x851F31: jz      short loc_851F4D
0x851F33: cmp     byte ptr ds:0B42CDDh, 0
0x851F3A: jz      short loc_851F4D
0x851F3C: mov     eax, [ebx]
0x851F3E: mov     edx, [eax+78h]
0x851F41: mov     ecx, ebx
0x851F43: call    edx
0x851F45: push    eax; preset
0x851F46: mov     ecx, ebp; this
0x851F48: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x851F4D: cmp     dword ptr [esi+30h], 0
0x851F51: mov     ebp, [edi+5Ch]
0x851F54: jnz     short loc_851F5E
0x851F56: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x851F5B: mov     [esi+30h], eax
0x851F5E: mov     ecx, [esi+30h]
0x851F61: push    0
0x851F63: push    ebp
0x851F64: push    13h
0x851F66: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x851F6B: cmp     dword ptr [esi+30h], 0
0x851F6F: mov     ebp, [edi+60h]
0x851F72: jnz     short loc_851F7C
0x851F74: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x851F79: mov     [esi+30h], eax
0x851F7C: mov     ecx, [esi+30h]
0x851F7F: push    0
0x851F81: push    ebp
0x851F82: push    14h
0x851F84: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x851F89: cmp     dword ptr [esi+30h], 0
0x851F8D: mov     ebp, [edi+64h]
0x851F90: jnz     short loc_851F9A
0x851F92: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x851F97: mov     [esi+30h], eax
0x851F9A: mov     ecx, [esi+30h]
0x851F9D: push    1
0x851F9F: push    ebp
0x851FA0: push    0ABh ; '«'
0x851FA5: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x851FAA: cmp     dword ptr [esi+30h], 0
0x851FAE: mov     edi, [edi+68h]
0x851FB1: jnz     short loc_851FBB
0x851FB3: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x851FB8: mov     [esi+30h], eax
0x851FBB: mov     ecx, [esi+30h]
0x851FBE: push    0
0x851FC0: push    edi
0x851FC1: push    17h
0x851FC3: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x851FC8: mov     eax, [esp+24h+geometry]
0x851FCC: mov     edi, [esp+24h+var_10]
0x851FD0: push    ebx; shaderProperty
0x851FD1: push    eax; geometry
0x851FD2: mov     ecx, edi
0x851FD4: call    BSShaderProperty_SetupTextureEffectConstants; Verified (Oblivion): shared by all four 1x/2x texture-effect pass handlers used from ShadowLight, Skin, and Hair shader setup. Reads TextureEffectData from shaderProperty+0xE0, copies current fill/edge RGBA into ShadowLight shader-map backing, copies U/V offsets and edge exponent, writes the second fVars component as 1.0, then updates separate per-geometry property-state constants.
0x851FD9: mov     ebx, 1
0x851FDE: add     [esi+60h], ebx
0x851FE1: mov     [esp+24h+value], esi
0x851FE5: mov     edx, [edi+38h]
0x851FE8: lea     ecx, [esp+24h+value]
0x851FEC: push    ecx; value
0x851FED: push    edx; index
0x851FEE: lea     ecx, [edi+40h]; this
0x851FF1: mov     [esp+2Ch+var_4], 0
0x851FF9: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x851FFE: or      eax, 0FFFFFFFFh
0x852001: add     [esi+60h], eax
0x852004: mov     [esp+24h+var_4], eax
0x852008: jnz     short loc_852011
0x85200A: mov     ecx, esi
0x85200C: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x852011: add     [edi+38h], ebx
0x852014: mov     ecx, dword ptr [esp+24h+var_C]
0x852018: mov     large fs:0, ecx
0x85201F: pop     ecx
0x852020: pop     edi
0x852021: pop     esi
0x852022: pop     ebp
0x852023: pop     ebx
0x852024: add     esp, 10h
0x852027: retn    10h
0x9D3360: lea     ecx, [ebp+10h]; void *
0x9D3363: jmp     sub_4027D0
0x9D3368: mov     edx, [esp+arg_4]
0x9D336C: lea     eax, [edx-14h]
0x9D336F: mov     ecx, [edx-18h]
0x9D3372: xor     ecx, eax
0x9D3374: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3379: mov     eax, offset stru_AFB794
0x9D337E: jmp     ___CxxFrameHandler3
