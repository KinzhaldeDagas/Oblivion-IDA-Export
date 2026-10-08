0x7FED20: push    ecx
0x7FED21: push    ebx
0x7FED22: mov     ebx, [esp+8+arg_0]
0x7FED26: push    edi
0x7FED27: mov     edi, [ebx+0E0h]
0x7FED2D: test    edi, edi
0x7FED2F: mov     [esp+0Ch+var_4], ecx
0x7FED33: jz      loc_7FEE3A
0x7FED39: mov     edx, [ebx]
0x7FED3B: push    ebp
0x7FED3C: push    esi
0x7FED3D: mov     esi, [esp+14h+arg_4]
0x7FED41: mov     eax, [esi+24h]
0x7FED44: mov     ebp, [eax]
0x7FED46: mov     eax, [edx+8Ch]
0x7FED4C: push    0
0x7FED4E: mov     ecx, ebx
0x7FED50: call    eax
0x7FED52: test    eax, eax
0x7FED54: jz      short loc_7FED66
0x7FED56: mov     edx, [ebx]
0x7FED58: mov     eax, [edx+8Ch]
0x7FED5E: push    0
0x7FED60: mov     ecx, ebx
0x7FED62: call    eax
0x7FED64: jmp     short loc_7FED79
0x7FED66: test    dword ptr [ebx+1Ch], 80h
0x7FED6D: mov     eax, ds:0B430F0h
0x7FED72: ja      short loc_7FED79
0x7FED74: mov     eax, ds:0B430DCh
0x7FED79: push    eax; texture
0x7FED7A: mov     ecx, ebp; this
0x7FED7C: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7FED81: push    3; preset
0x7FED83: mov     ecx, ebp; this
0x7FED85: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x7FED8A: mov     ecx, [esi+24h]
0x7FED8D: mov     eax, [edi+8]
0x7FED90: test    eax, eax
0x7FED92: mov     ebx, [ecx+4]
0x7FED95: mov     ecx, ebx; this
0x7FED97: jz      short loc_7FED9C
0x7FED99: push    eax
0x7FED9A: jmp     short loc_7FEDA3
0x7FED9C: mov     edx, ds:0B43120h
0x7FEDA2: push    edx; texture
0x7FEDA3: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7FEDA8: push    3; preset
0x7FEDAA: mov     ecx, ebx; this
0x7FEDAC: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x7FEDB1: mov     ecx, [esp+14h+var_4]
0x7FEDB5: push    2
0x7FEDB7: push    esi
0x7FEDB8: call    sub_862600
0x7FEDBD: cmp     dword ptr [esi+30h], 0
0x7FEDC1: mov     ebx, [edi+5Ch]
0x7FEDC4: jnz     short loc_7FEDCE
0x7FEDC6: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7FEDCB: mov     [esi+30h], eax
0x7FEDCE: mov     ecx, [esi+30h]
0x7FEDD1: push    0
0x7FEDD3: push    ebx
0x7FEDD4: push    13h
0x7FEDD6: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7FEDDB: cmp     dword ptr [esi+30h], 0
0x7FEDDF: mov     ebx, [edi+60h]
0x7FEDE2: jnz     short loc_7FEDEC
0x7FEDE4: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7FEDE9: mov     [esi+30h], eax
0x7FEDEC: mov     ecx, [esi+30h]
0x7FEDEF: push    0
0x7FEDF1: push    ebx
0x7FEDF2: push    14h
0x7FEDF4: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7FEDF9: cmp     dword ptr [esi+30h], 0
0x7FEDFD: mov     ebx, [edi+64h]
0x7FEE00: jnz     short loc_7FEE0A
0x7FEE02: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7FEE07: mov     [esi+30h], eax
0x7FEE0A: mov     ecx, [esi+30h]
0x7FEE0D: push    1
0x7FEE0F: push    ebx
0x7FEE10: push    0ABh ; '«'
0x7FEE15: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7FEE1A: cmp     dword ptr [esi+30h], 0
0x7FEE1E: mov     edi, [edi+68h]
0x7FEE21: jnz     short loc_7FEE2B
0x7FEE23: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7FEE28: mov     [esi+30h], eax
0x7FEE2B: mov     ecx, [esi+30h]
0x7FEE2E: push    0
0x7FEE30: push    edi
0x7FEE31: push    17h
0x7FEE33: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7FEE38: pop     esi
0x7FEE39: pop     ebp
0x7FEE3A: pop     edi
0x7FEE3B: pop     ebx
0x7FEE3C: pop     ecx
0x7FEE3D: retn    8
