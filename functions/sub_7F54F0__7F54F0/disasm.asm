0x7F54F0: push    0FFFFFFFFh
0x7F54F2: push    offset SEH_7F54F0
0x7F54F7: mov     eax, large fs:0
0x7F54FD: push    eax
0x7F54FE: sub     esp, 8
0x7F5501: push    ebp
0x7F5502: push    esi
0x7F5503: push    edi
0x7F5504: mov     eax, ds:0B30AACh
0x7F5509: xor     eax, esp
0x7F550B: push    eax
0x7F550C: lea     eax, [esp+24h+var_C]
0x7F5510: mov     large fs:0, eax
0x7F5516: mov     esi, ecx
0x7F5518: xor     ebp, ebp
0x7F551A: mov     [esp+24h+var_10], ebp
0x7F551E: lea     eax, [esp+24h+var_14]
0x7F5522: push    eax
0x7F5523: mov     [esp+28h+var_4], ebp
0x7F5527: call    NiD3DPassPool_Acquire; Acquire a renderer-owned NiD3DPass from the global pass pool and return it with a reference.
0x7F552C: add     esp, 4
0x7F552F: mov     edi, eax
0x7F5531: mov     ecx, [esi+9Ch]
0x7F5537: cmp     ecx, [edi]
0x7F5539: mov     byte ptr [esp+24h+var_4], 1
0x7F553E: jz      short loc_7F555F
0x7F5540: test    ecx, ecx
0x7F5542: jz      short loc_7F554F
0x7F5544: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7F5548: jnz     short loc_7F554F
0x7F554A: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7F554F: mov     eax, [edi]
0x7F5551: test    eax, eax
0x7F5553: mov     [esi+9Ch], eax
0x7F5559: jz      short loc_7F555F
0x7F555B: add     dword ptr [eax+60h], 1
0x7F555F: mov     eax, [esp+24h+var_14]
0x7F5563: test    eax, eax
0x7F5565: mov     byte ptr [esp+24h+var_4], 0
0x7F556A: jz      short loc_7F557F
0x7F556C: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7F5570: mov     ecx, eax
0x7F5572: add     eax, 60h ; '`'
0x7F5575: cmp     dword ptr [eax], 0
0x7F5578: jnz     short loc_7F557F
0x7F557A: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7F557F: lea     ecx, [esp+24h+var_14]
0x7F5583: push    ecx
0x7F5584: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x7F5589: add     esp, 4
0x7F558C: mov     eax, [eax]
0x7F558E: test    eax, eax
0x7F5590: jz      short loc_7F559C
0x7F5592: mov     ebp, eax
0x7F5594: add     dword ptr [ebp+5Ch], 1
0x7F5598: mov     [esp+24h+var_10], ebp
0x7F559C: mov     eax, [esp+24h+var_14]
0x7F55A0: test    eax, eax
0x7F55A2: mov     byte ptr [esp+24h+var_4], 0
0x7F55A7: jz      short loc_7F55BC
0x7F55A9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7F55AD: mov     ecx, eax
0x7F55AF: add     eax, 5Ch ; '\'
0x7F55B2: cmp     dword ptr [eax], 0
0x7F55B5: jnz     short loc_7F55BC
0x7F55B7: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7F55BC: push    2
0x7F55BE: push    3
0x7F55C0: push    0
0x7F55C2: push    ebp
0x7F55C3: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x7F55C8: add     esp, 10h
0x7F55CB: push    0; filterPreset
0x7F55CD: mov     ecx, ebp; this
0x7F55CF: call    NiD3DTextureStage_ApplyFilterPreset; Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
0x7F55D4: mov     ecx, [esi+9Ch]; this
0x7F55DA: mov     edx, [ecx+14h]
0x7F55DD: push    ebp; a3
0x7F55DE: push    edx; a2
0x7F55DF: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x7F55E4: mov     edi, [esi+9Ch]
0x7F55EA: test    edi, edi
0x7F55EC: jz      loc_7F5699
0x7F55F2: cmp     dword ptr [edi+30h], 0
0x7F55F6: jnz     short loc_7F5600
0x7F55F8: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7F55FD: mov     [edi+30h], eax
0x7F5600: mov     ecx, [edi+30h]
0x7F5603: push    0
0x7F5605: push    0
0x7F5607: push    7
0x7F5609: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7F560E: mov     edi, [esi+9Ch]
0x7F5614: cmp     dword ptr [edi+30h], 0
0x7F5618: jnz     short loc_7F5622
0x7F561A: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7F561F: mov     [edi+30h], eax
0x7F5622: mov     ecx, [edi+30h]
0x7F5625: push    0
0x7F5627: push    0
0x7F5629: push    0Eh
0x7F562B: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7F5630: mov     edi, [esi+9Ch]
0x7F5636: cmp     dword ptr [edi+30h], 0
0x7F563A: jnz     short loc_7F5644
0x7F563C: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7F5641: mov     [edi+30h], eax
0x7F5644: mov     ecx, [edi+30h]
0x7F5647: push    0
0x7F5649: push    0
0x7F564B: push    1Bh
0x7F564D: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7F5652: mov     edi, [esi+9Ch]
0x7F5658: cmp     dword ptr [edi+30h], 0
0x7F565C: jnz     short loc_7F5666
0x7F565E: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7F5663: mov     [edi+30h], eax
0x7F5666: mov     ecx, [edi+30h]
0x7F5669: push    0
0x7F566B: push    0
0x7F566D: push    0Fh
0x7F566F: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7F5674: mov     edi, [esi+9Ch]
0x7F567A: cmp     dword ptr [edi+30h], 0
0x7F567E: jnz     short loc_7F5688
0x7F5680: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7F5685: mov     [edi+30h], eax
0x7F5688: mov     ecx, [edi+30h]
0x7F568B: push    0
0x7F568D: push    0Fh
0x7F568F: push    0A8h ; '¨'
0x7F5694: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7F5699: mov     eax, [esi]
0x7F569B: mov     edx, [eax+0B8h]
0x7F56A1: mov     ecx, esi
0x7F56A3: call    edx
0x7F56A5: or      eax, 0FFFFFFFFh
0x7F56A8: test    ebp, ebp
0x7F56AA: mov     [esp+24h+var_4], eax
0x7F56AE: jz      short loc_7F56BC
0x7F56B0: add     [ebp+5Ch], eax
0x7F56B3: jnz     short loc_7F56BC
0x7F56B5: mov     ecx, ebp
0x7F56B7: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7F56BC: mov     al, 1
0x7F56BE: mov     ecx, [esp+24h+var_C]
0x7F56C2: mov     large fs:0, ecx
0x7F56C9: pop     ecx
0x7F56CA: pop     edi
0x7F56CB: pop     esi
0x7F56CC: pop     ebp
0x7F56CD: add     esp, 14h
0x7F56D0: retn
0x75FA70: mov     ecx, [ecx]
0x75FA72: test    ecx, ecx
0x75FA74: jz      short locret_75FA81
0x75FA76: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FA7A: jnz     short locret_75FA81
0x75FA7C: jmp     sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x75FA81: retn
0x9D00F0: lea     ecx, [ebp-10h]
0x9D00F3: jmp     loc_75FA70
0x9D00F8: lea     ecx, [ebp-14h]; void *
0x9D00FB: jmp     sub_4027D0
0x9D0100: lea     ecx, [ebp-14h]
0x9D0103: jmp     loc_75FA70
0x9D0108: mov     edx, [esp+arg_4]
0x9D010C: lea     eax, [edx-14h]
0x9D010F: mov     ecx, [edx-18h]
0x9D0112: xor     ecx, eax
0x9D0114: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0119: mov     eax, offset stru_AF8B7C
0x9D011E: jmp     ___CxxFrameHandler3
