0x804510: push    0FFFFFFFFh; MoonSugarEffect decode: CopyShader D3D pass setup; configures a single texture stage and disables blend/z/write states similarly to other TES4 image-space passes.
0x804512: push    offset SEH_804510
0x804517: mov     eax, large fs:0
0x80451D: push    eax
0x80451E: sub     esp, 8
0x804521: push    esi
0x804522: push    edi
0x804523: mov     eax, ds:0B30AACh
0x804528: xor     eax, esp
0x80452A: push    eax
0x80452B: lea     eax, [esp+20h+var_C]
0x80452F: mov     large fs:0, eax
0x804535: mov     esi, ecx
0x804537: lea     eax, [esp+20h+var_10]
0x80453B: push    eax
0x80453C: call    NiD3DPassPool_Acquire; Acquire a renderer-owned NiD3DPass from the global pass pool and return it with a reference.
0x804541: add     esp, 4
0x804544: mov     edi, eax
0x804546: mov     ecx, [esi+70h]
0x804549: cmp     ecx, [edi]
0x80454B: mov     [esp+20h+var_4], 0
0x804553: jz      short loc_804571
0x804555: test    ecx, ecx
0x804557: jz      short loc_804564
0x804559: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x80455D: jnz     short loc_804564
0x80455F: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x804564: mov     eax, [edi]
0x804566: test    eax, eax
0x804568: mov     [esi+70h], eax
0x80456B: jz      short loc_804571
0x80456D: add     dword ptr [eax+60h], 1
0x804571: mov     eax, [esp+20h+var_10]
0x804575: test    eax, eax
0x804577: mov     [esp+20h+var_4], 0FFFFFFFFh
0x80457F: jz      short loc_804594
0x804581: add     dword ptr [eax+60h], 0FFFFFFFFh
0x804585: mov     ecx, eax
0x804587: add     eax, 60h ; '`'
0x80458A: cmp     dword ptr [eax], 0
0x80458D: jnz     short loc_804594
0x80458F: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x804594: lea     ecx, [esp+20h+a3]
0x804598: push    ecx
0x804599: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x80459E: mov     edx, [esp+24h+a3]
0x8045A2: push    2
0x8045A4: push    3
0x8045A6: push    0
0x8045A8: push    edx
0x8045A9: mov     [esp+34h+var_4], 1
0x8045B1: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x8045B6: mov     ecx, [esp+34h+a3]; this
0x8045BA: add     esp, 14h
0x8045BD: push    0; filterPreset
0x8045BF: call    NiD3DTextureStage_ApplyFilterPreset; Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
0x8045C4: mov     ecx, [esi+70h]; this
0x8045C7: mov     eax, [esp+20h+a3]
0x8045CB: mov     edx, [ecx+14h]
0x8045CE: push    eax; a3
0x8045CF: push    edx; a2
0x8045D0: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x8045D5: mov     edi, [esi+70h]
0x8045D8: cmp     dword ptr [edi+30h], 0
0x8045DC: jnz     short loc_8045E6
0x8045DE: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x8045E3: mov     [edi+30h], eax
0x8045E6: mov     ecx, [edi+30h]
0x8045E9: push    0
0x8045EB: push    0
0x8045ED: push    7
0x8045EF: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x8045F4: mov     edi, [esi+70h]
0x8045F7: cmp     dword ptr [edi+30h], 0
0x8045FB: jnz     short loc_804605
0x8045FD: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x804602: mov     [edi+30h], eax
0x804605: mov     ecx, [edi+30h]
0x804608: push    0
0x80460A: push    0
0x80460C: push    0Eh
0x80460E: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x804613: mov     edi, [esi+70h]
0x804616: cmp     dword ptr [edi+30h], 0
0x80461A: jnz     short loc_804624
0x80461C: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x804621: mov     [edi+30h], eax
0x804624: mov     ecx, [edi+30h]
0x804627: push    0
0x804629: push    0
0x80462B: push    1Bh
0x80462D: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x804632: mov     edi, [esi+70h]
0x804635: cmp     dword ptr [edi+30h], 0
0x804639: jnz     short loc_804643
0x80463B: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x804640: mov     [edi+30h], eax
0x804643: mov     ecx, [edi+30h]
0x804646: push    0
0x804648: push    0
0x80464A: push    0Fh
0x80464C: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x804651: mov     edi, [esi+70h]
0x804654: cmp     dword ptr [edi+30h], 0
0x804658: jnz     short loc_804662
0x80465A: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x80465F: mov     [edi+30h], eax
0x804662: mov     ecx, [edi+30h]
0x804665: push    0
0x804667: push    0Fh
0x804669: push    0A8h ; '¨'
0x80466E: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x804673: mov     eax, [esi]
0x804675: mov     edx, [eax+0B8h]
0x80467B: mov     ecx, esi
0x80467D: call    edx
0x80467F: mov     eax, [esp+20h+a3]
0x804683: test    eax, eax
0x804685: mov     [esp+20h+var_4], 0FFFFFFFFh
0x80468D: jz      short loc_8046A2
0x80468F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x804693: mov     ecx, eax
0x804695: add     eax, 5Ch ; '\'
0x804698: cmp     dword ptr [eax], 0
0x80469B: jnz     short loc_8046A2
0x80469D: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x8046A2: mov     al, 1
0x8046A4: mov     ecx, [esp+20h+var_C]
0x8046A8: mov     large fs:0, ecx
0x8046AF: pop     ecx
0x8046B0: pop     edi
0x8046B1: pop     esi
0x8046B2: add     esp, 14h
0x8046B5: retn
0x75FA70: mov     ecx, [ecx]
0x75FA72: test    ecx, ecx
0x75FA74: jz      short locret_75FA81
0x75FA76: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FA7A: jnz     short locret_75FA81
0x75FA7C: jmp     sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x75FA81: retn
0x9D0A00: lea     ecx, [ebp-10h]; void *
0x9D0A03: jmp     sub_4027D0
0x9D0A08: lea     ecx, [ebp-14h]
0x9D0A0B: jmp     loc_75FA70
0x9D0A10: mov     edx, [esp+arg_4]
0x9D0A14: lea     eax, [edx-10h]
0x9D0A17: mov     ecx, [edx-14h]
0x9D0A1A: xor     ecx, eax
0x9D0A1C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0A21: mov     eax, offset stru_AF92CC
0x9D0A26: jmp     ___CxxFrameHandler3
