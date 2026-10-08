0x7EA890: push    0FFFFFFFFh
0x7EA892: push    offset SEH_7DDD90
0x7EA897: mov     eax, large fs:0
0x7EA89D: push    eax
0x7EA89E: sub     esp, 0Ch
0x7EA8A1: push    ebx
0x7EA8A2: push    ebp
0x7EA8A3: push    esi
0x7EA8A4: push    edi
0x7EA8A5: mov     eax, ds:0B30AACh
0x7EA8AA: xor     eax, esp
0x7EA8AC: push    eax
0x7EA8AD: lea     eax, [esp+2Ch+var_C]
0x7EA8B1: mov     large fs:0, eax
0x7EA8B7: mov     esi, ecx
0x7EA8B9: lea     eax, [esp+2Ch+var_14]
0x7EA8BD: push    eax
0x7EA8BE: call    NiD3DPassPool_Acquire; Acquire a renderer-owned NiD3DPass from the global pass pool and return it with a reference.
0x7EA8C3: add     esp, 4
0x7EA8C6: mov     edi, eax
0x7EA8C8: mov     ecx, [esi+70h]
0x7EA8CB: cmp     ecx, [edi]
0x7EA8CD: mov     [esp+2Ch+var_4], 0
0x7EA8D5: jz      short loc_7EA8F3
0x7EA8D7: test    ecx, ecx
0x7EA8D9: jz      short loc_7EA8E6
0x7EA8DB: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7EA8DF: jnz     short loc_7EA8E6
0x7EA8E1: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7EA8E6: mov     eax, [edi]
0x7EA8E8: test    eax, eax
0x7EA8EA: mov     [esi+70h], eax
0x7EA8ED: jz      short loc_7EA8F3
0x7EA8EF: add     dword ptr [eax+60h], 1
0x7EA8F3: mov     eax, [esp+2Ch+var_14]
0x7EA8F7: test    eax, eax
0x7EA8F9: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7EA901: jz      short loc_7EA916
0x7EA903: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7EA907: mov     ecx, eax
0x7EA909: add     eax, 60h ; '`'
0x7EA90C: cmp     dword ptr [eax], 0
0x7EA90F: jnz     short loc_7EA916
0x7EA911: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7EA916: lea     ecx, [esp+2Ch+a3]
0x7EA91A: push    ecx
0x7EA91B: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x7EA920: mov     edx, [esp+30h+a3]
0x7EA924: push    2
0x7EA926: push    3
0x7EA928: push    0
0x7EA92A: mov     ebx, 1
0x7EA92F: push    edx
0x7EA930: mov     [esp+40h+var_4], ebx
0x7EA934: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x7EA939: mov     ecx, [esp+40h+a3]; this
0x7EA93D: add     esp, 14h
0x7EA940: push    ebx; filterPreset
0x7EA941: call    NiD3DTextureStage_ApplyFilterPreset; Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
0x7EA946: mov     ecx, [esi+70h]; this
0x7EA949: mov     eax, [esp+2Ch+a3]
0x7EA94D: mov     edx, [ecx+14h]
0x7EA950: push    eax; a3
0x7EA951: push    edx; a2
0x7EA952: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x7EA957: lea     eax, [esp+2Ch+var_10]
0x7EA95B: push    eax
0x7EA95C: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x7EA961: add     esp, 4
0x7EA964: mov     edi, eax
0x7EA966: mov     ecx, [esp+2Ch+a3]
0x7EA96A: cmp     ecx, [edi]
0x7EA96C: mov     byte ptr [esp+2Ch+var_4], 2
0x7EA971: jz      short loc_7EA99A
0x7EA973: test    ecx, ecx
0x7EA975: jz      short loc_7EA989
0x7EA977: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7EA97B: cmp     dword ptr [ecx+5Ch], 0
0x7EA97F: lea     eax, [ecx+5Ch]
0x7EA982: jnz     short loc_7EA989
0x7EA984: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7EA989: mov     ecx, [edi]
0x7EA98B: test    ecx, ecx
0x7EA98D: mov     [esp+2Ch+a3], ecx
0x7EA991: jz      short loc_7EA99A
0x7EA993: add     [ecx+5Ch], ebx
0x7EA996: mov     ecx, [esp+2Ch+a3]
0x7EA99A: mov     eax, [esp+2Ch+var_10]
0x7EA99E: test    eax, eax
0x7EA9A0: mov     byte ptr [esp+2Ch+var_4], 1
0x7EA9A5: jz      short loc_7EA9BE
0x7EA9A7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7EA9AB: mov     ecx, eax
0x7EA9AD: add     eax, 5Ch ; '\'
0x7EA9B0: cmp     dword ptr [eax], 0
0x7EA9B3: jnz     short loc_7EA9BA
0x7EA9B5: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7EA9BA: mov     ecx, [esp+2Ch+a3]; this
0x7EA9BE: push    0; filterPreset
0x7EA9C0: call    NiD3DTextureStage_ApplyFilterPreset; Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
0x7EA9C5: mov     ecx, [esp+2Ch+a3]
0x7EA9C9: push    2
0x7EA9CB: push    3
0x7EA9CD: push    ebx
0x7EA9CE: push    ecx
0x7EA9CF: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x7EA9D4: mov     ecx, [esi+70h]; this
0x7EA9D7: mov     edx, [esp+3Ch+a3]
0x7EA9DB: mov     eax, [ecx+14h]
0x7EA9DE: add     esp, 10h
0x7EA9E1: push    edx; a3
0x7EA9E2: push    eax; a2
0x7EA9E3: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x7EA9E8: mov     ecx, [esi+90h]
0x7EA9EE: mov     ebx, [esi+70h]
0x7EA9F1: mov     ebp, [esi+ecx*4+94h]
0x7EA9F8: mov     edi, [ebx+58h]
0x7EA9FB: cmp     edi, ebp
0x7EA9FD: jz      short loc_7EAA30
0x7EA9FF: test    edi, edi
0x7EAA01: jz      short loc_7EAA1F
0x7EAA03: lea     edx, [edi+4]
0x7EAA06: push    edx; lpAddend
0x7EAA07: call    dword ptr ds:0A2807Ch
0x7EAA0D: test    eax, eax
0x7EAA0F: jnz     short loc_7EAA1F
0x7EAA11: test    edi, edi
0x7EAA13: jz      short loc_7EAA1F
0x7EAA15: mov     eax, [edi]
0x7EAA17: mov     edx, [eax]
0x7EAA19: push    1
0x7EAA1B: mov     ecx, edi
0x7EAA1D: call    edx
0x7EAA1F: test    ebp, ebp
0x7EAA21: mov     [ebx+58h], ebp
0x7EAA24: jz      short loc_7EAA30
0x7EAA26: add     ebp, 4
0x7EAA29: push    ebp; lpAddend
0x7EAA2A: call    dword ptr ds:0A28078h
0x7EAA30: mov     eax, [esi+90h]
0x7EAA36: mov     ebp, [esi+70h]
0x7EAA39: mov     ebx, [esi+eax*4+0A8h]
0x7EAA40: mov     edi, [ebp+44h]
0x7EAA43: cmp     edi, ebx
0x7EAA45: jz      short loc_7EAA78
0x7EAA47: test    edi, edi
0x7EAA49: jz      short loc_7EAA67
0x7EAA4B: lea     ecx, [edi+4]
0x7EAA4E: push    ecx; lpAddend
0x7EAA4F: call    dword ptr ds:0A2807Ch
0x7EAA55: test    eax, eax
0x7EAA57: jnz     short loc_7EAA67
0x7EAA59: test    edi, edi
0x7EAA5B: jz      short loc_7EAA67
0x7EAA5D: mov     edx, [edi]
0x7EAA5F: mov     eax, [edx]
0x7EAA61: push    1
0x7EAA63: mov     ecx, edi
0x7EAA65: call    eax
0x7EAA67: test    ebx, ebx
0x7EAA69: mov     [ebp+44h], ebx
0x7EAA6C: jz      short loc_7EAA78
0x7EAA6E: add     ebx, 4
0x7EAA71: push    ebx; lpAddend
0x7EAA72: call    dword ptr ds:0A28078h
0x7EAA78: mov     edi, [esi+70h]
0x7EAA7B: cmp     dword ptr [edi+30h], 0
0x7EAA7F: jnz     short loc_7EAA89
0x7EAA81: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7EAA86: mov     [edi+30h], eax
0x7EAA89: mov     ecx, [edi+30h]
0x7EAA8C: push    0
0x7EAA8E: push    0
0x7EAA90: push    7
0x7EAA92: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7EAA97: mov     edi, [esi+70h]
0x7EAA9A: cmp     dword ptr [edi+30h], 0
0x7EAA9E: jnz     short loc_7EAAA8
0x7EAAA0: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7EAAA5: mov     [edi+30h], eax
0x7EAAA8: mov     ecx, [edi+30h]
0x7EAAAB: push    0
0x7EAAAD: push    0
0x7EAAAF: push    0Eh
0x7EAAB1: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7EAAB6: mov     edi, [esi+70h]
0x7EAAB9: cmp     dword ptr [edi+30h], 0
0x7EAABD: jnz     short loc_7EAAC7
0x7EAABF: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7EAAC4: mov     [edi+30h], eax
0x7EAAC7: mov     ecx, [edi+30h]
0x7EAACA: push    0
0x7EAACC: push    0
0x7EAACE: push    1Bh
0x7EAAD0: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7EAAD5: mov     edi, [esi+70h]
0x7EAAD8: cmp     dword ptr [edi+30h], 0
0x7EAADC: jnz     short loc_7EAAE6
0x7EAADE: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7EAAE3: mov     [edi+30h], eax
0x7EAAE6: mov     ecx, [edi+30h]
0x7EAAE9: push    0
0x7EAAEB: push    0
0x7EAAED: push    0Fh
0x7EAAEF: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7EAAF4: mov     esi, [esi+70h]
0x7EAAF7: cmp     dword ptr [esi+30h], 0
0x7EAAFB: jnz     short loc_7EAB05
0x7EAAFD: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7EAB02: mov     [esi+30h], eax
0x7EAB05: mov     ecx, [esi+30h]
0x7EAB08: push    0
0x7EAB0A: push    7
0x7EAB0C: push    0A8h ; '¨'
0x7EAB11: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7EAB16: mov     eax, [esp+2Ch+a3]
0x7EAB1A: test    eax, eax
0x7EAB1C: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7EAB24: jz      short loc_7EAB39
0x7EAB26: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7EAB2A: mov     ecx, eax
0x7EAB2C: add     eax, 5Ch ; '\'
0x7EAB2F: cmp     dword ptr [eax], 0
0x7EAB32: jnz     short loc_7EAB39
0x7EAB34: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7EAB39: mov     al, 1
0x7EAB3B: mov     ecx, [esp+2Ch+var_C]
0x7EAB3F: mov     large fs:0, ecx
0x7EAB46: pop     ecx
0x7EAB47: pop     edi
0x7EAB48: pop     esi
0x7EAB49: pop     ebp
0x7EAB4A: pop     ebx
0x7EAB4B: add     esp, 18h
0x7EAB4E: retn
0x9CF2B0: lea     ecx, [ebp-14h]; void *
0x9CF2B3: jmp     sub_4027D0
0x9CF2B8: lea     ecx, [ebp-18h]
0x9CF2BB: jmp     loc_75FA70
0x9CF2C0: lea     ecx, [ebp-10h]
0x9CF2C3: jmp     loc_75FA70
0x9CF2C8: mov     edx, [esp+arg_4]
0x9CF2CC: lea     eax, [edx-1Ch]
0x9CF2CF: mov     ecx, [edx-20h]
0x9CF2D2: xor     ecx, eax
0x9CF2D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CF2D9: mov     eax, offset stru_AF7F80
0x9CF2DE: jmp     ___CxxFrameHandler3
