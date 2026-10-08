0x772400: push    esi; NiD3DPass stage gate: apply tracked state group, then bind texture and commit transform.
0x772401: mov     esi, ecx
0x772403: mov     eax, [esi]
0x772405: mov     ecx, [esi+0Ch]; this
0x772408: push    eax; stage
0x772409: call    OB_NiD3DTextureStageStateGroup_ApplyAllStates_010201A0; Apply the authored texture-stage and five sampler states immediately before binding the stage texture.
0x77240E: test    eax, eax
0x772410: jz      short loc_772416
0x772412: xor     al, al
0x772414: pop     esi
0x772415: retn
0x772416: mov     ecx, esi; this
0x772418: call    OB_NiD3DTextureStage_BindTextureAndTransform_010201A0; Oblivion texture-stage binding: resolve the D3D texture, call NiDX9RenderState::SetTexture(stage,texture), handle single-mip and NPOT fallback state, then commit the texture transform. This is the path by which Lighting30 stage 2 reaches D3D sampler s2.
0x77241D: mov     al, 1
0x77241F: pop     esi
0x772420: retn
