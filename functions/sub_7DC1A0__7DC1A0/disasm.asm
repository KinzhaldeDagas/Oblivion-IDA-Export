0x7DC1A0: push    0FFFFFFFFh
0x7DC1A2: push    offset SEH_7DC1A0
0x7DC1A7: mov     eax, large fs:0
0x7DC1AD: push    eax
0x7DC1AE: sub     esp, 1Ch
0x7DC1B1: push    ebx
0x7DC1B2: push    ebp
0x7DC1B3: push    esi
0x7DC1B4: push    edi
0x7DC1B5: mov     eax, ds:0B30AACh
0x7DC1BA: xor     eax, esp
0x7DC1BC: push    eax
0x7DC1BD: lea     eax, [esp+3Ch+var_C]
0x7DC1C1: mov     large fs:0, eax
0x7DC1C7: mov     edi, ecx
0x7DC1C9: xor     esi, esi
0x7DC1CB: jmp     short loc_7DC1D0
0x7DC1D0: cmp     dword ptr [edi+esi*4+7Ch], 0
0x7DC1D5: jnz     loc_7DC4EA
0x7DC1DB: lea     eax, [esp+3Ch+var_20]
0x7DC1DF: push    eax
0x7DC1E0: call    NiD3DPassPool_Acquire; Acquire a renderer-owned NiD3DPass from the global pass pool and return it with a reference.
0x7DC1E5: add     esp, 4
0x7DC1E8: mov     ebx, eax
0x7DC1EA: mov     ecx, [edi+esi*4+7Ch]
0x7DC1EE: cmp     ecx, [ebx]
0x7DC1F0: mov     [esp+3Ch+var_4], 0
0x7DC1F8: jz      short loc_7DC21D
0x7DC1FA: test    ecx, ecx
0x7DC1FC: jz      short loc_7DC209
0x7DC1FE: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7DC202: jnz     short loc_7DC209
0x7DC204: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7DC209: mov     eax, [ebx]
0x7DC20B: test    eax, eax
0x7DC20D: mov     [edi+esi*4+7Ch], eax
0x7DC211: mov     ebp, 1
0x7DC216: jz      short loc_7DC222
0x7DC218: add     [eax+60h], ebp
0x7DC21B: jmp     short loc_7DC222
0x7DC21D: mov     ebp, 1
0x7DC222: mov     eax, [esp+3Ch+var_20]
0x7DC226: test    eax, eax
0x7DC228: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x7DC230: jz      short loc_7DC245
0x7DC232: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7DC236: mov     ecx, eax
0x7DC238: add     eax, 60h ; '`'
0x7DC23B: cmp     dword ptr [eax], 0
0x7DC23E: jnz     short loc_7DC245
0x7DC240: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7DC245: lea     ecx, [esp+3Ch+a3]
0x7DC249: push    ecx
0x7DC24A: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x7DC24F: mov     edx, [esp+40h+a3]
0x7DC253: push    2
0x7DC255: push    3
0x7DC257: push    0
0x7DC259: push    edx
0x7DC25A: mov     [esp+50h+var_4], ebp
0x7DC25E: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x7DC263: mov     ecx, [esp+50h+a3]; this
0x7DC267: add     esp, 14h
0x7DC26A: push    ebp; filterPreset
0x7DC26B: call    NiD3DTextureStage_ApplyFilterPreset; Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
0x7DC270: mov     ecx, [edi+esi*4+7Ch]; this
0x7DC274: mov     eax, [esp+3Ch+a3]
0x7DC278: mov     edx, [ecx+14h]
0x7DC27B: push    eax; a3
0x7DC27C: push    edx; a2
0x7DC27D: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x7DC282: lea     eax, [esp+3Ch+var_1C]
0x7DC286: push    eax
0x7DC287: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x7DC28C: add     esp, 4
0x7DC28F: mov     ebx, eax
0x7DC291: mov     eax, [esp+3Ch+a3]
0x7DC295: cmp     eax, [ebx]
0x7DC297: mov     byte ptr [esp+3Ch+var_4], 2
0x7DC29C: jz      short loc_7DC2C6
0x7DC29E: test    eax, eax
0x7DC2A0: jz      short loc_7DC2B5
0x7DC2A2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7DC2A6: mov     ecx, eax
0x7DC2A8: add     eax, 5Ch ; '\'
0x7DC2AB: cmp     dword ptr [eax], 0
0x7DC2AE: jnz     short loc_7DC2B5
0x7DC2B0: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7DC2B5: mov     eax, [ebx]
0x7DC2B7: test    eax, eax
0x7DC2B9: mov     [esp+3Ch+a3], eax
0x7DC2BD: jz      short loc_7DC2C6
0x7DC2BF: add     [eax+5Ch], ebp
0x7DC2C2: mov     eax, [esp+3Ch+a3]
0x7DC2C6: mov     ecx, [esp+3Ch+var_1C]
0x7DC2CA: test    ecx, ecx
0x7DC2CC: mov     byte ptr [esp+3Ch+var_4], 1
0x7DC2D1: jz      short loc_7DC2E9
0x7DC2D3: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7DC2D7: cmp     dword ptr [ecx+5Ch], 0
0x7DC2DB: lea     eax, [ecx+5Ch]
0x7DC2DE: jnz     short loc_7DC2E5
0x7DC2E0: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7DC2E5: mov     eax, [esp+3Ch+a3]
0x7DC2E9: push    2
0x7DC2EB: push    ebp
0x7DC2EC: push    ebp
0x7DC2ED: push    eax
0x7DC2EE: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x7DC2F3: mov     ecx, [esp+4Ch+a3]; this
0x7DC2F7: add     esp, 10h
0x7DC2FA: push    ebp; filterPreset
0x7DC2FB: call    NiD3DTextureStage_ApplyFilterPreset; Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
0x7DC300: mov     ecx, [edi+esi*4+7Ch]; this
0x7DC304: mov     edx, [esp+3Ch+a3]
0x7DC308: mov     eax, [ecx+14h]
0x7DC30B: push    edx; a3
0x7DC30C: push    eax; a2
0x7DC30D: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x7DC312: lea     ecx, [esp+3Ch+var_18]
0x7DC316: push    ecx
0x7DC317: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x7DC31C: add     esp, 4
0x7DC31F: mov     ebx, eax
0x7DC321: mov     eax, [esp+3Ch+a3]
0x7DC325: cmp     eax, [ebx]
0x7DC327: mov     byte ptr [esp+3Ch+var_4], 3
0x7DC32C: jz      short loc_7DC356
0x7DC32E: test    eax, eax
0x7DC330: jz      short loc_7DC345
0x7DC332: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7DC336: mov     ecx, eax
0x7DC338: add     eax, 5Ch ; '\'
0x7DC33B: cmp     dword ptr [eax], 0
0x7DC33E: jnz     short loc_7DC345
0x7DC340: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7DC345: mov     eax, [ebx]
0x7DC347: test    eax, eax
0x7DC349: mov     [esp+3Ch+a3], eax
0x7DC34D: jz      short loc_7DC356
0x7DC34F: add     [eax+5Ch], ebp
0x7DC352: mov     eax, [esp+3Ch+a3]
0x7DC356: mov     ecx, [esp+3Ch+var_18]
0x7DC35A: test    ecx, ecx
0x7DC35C: mov     byte ptr [esp+3Ch+var_4], 1
0x7DC361: jz      short loc_7DC379
0x7DC363: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7DC367: cmp     dword ptr [ecx+5Ch], 0
0x7DC36B: lea     eax, [ecx+5Ch]
0x7DC36E: jnz     short loc_7DC375
0x7DC370: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7DC375: mov     eax, [esp+3Ch+a3]
0x7DC379: push    2
0x7DC37B: push    ebp
0x7DC37C: push    2
0x7DC37E: push    eax
0x7DC37F: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x7DC384: mov     ecx, [esp+4Ch+a3]; this
0x7DC388: add     esp, 10h
0x7DC38B: push    ebp; filterPreset
0x7DC38C: call    NiD3DTextureStage_ApplyFilterPreset; Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
0x7DC391: mov     ecx, [edi+esi*4+7Ch]; this
0x7DC395: mov     edx, [esp+3Ch+a3]
0x7DC399: mov     eax, [ecx+14h]
0x7DC39C: push    edx; a3
0x7DC39D: push    eax; a2
0x7DC39E: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x7DC3A3: lea     ecx, [esp+3Ch+var_14]
0x7DC3A7: push    ecx
0x7DC3A8: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x7DC3AD: add     esp, 4
0x7DC3B0: mov     ebx, eax
0x7DC3B2: mov     eax, [esp+3Ch+a3]
0x7DC3B6: cmp     eax, [ebx]
0x7DC3B8: mov     byte ptr [esp+3Ch+var_4], 4
0x7DC3BD: jz      short loc_7DC3E7
0x7DC3BF: test    eax, eax
0x7DC3C1: jz      short loc_7DC3D6
0x7DC3C3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7DC3C7: mov     ecx, eax
0x7DC3C9: add     eax, 5Ch ; '\'
0x7DC3CC: cmp     dword ptr [eax], 0
0x7DC3CF: jnz     short loc_7DC3D6
0x7DC3D1: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7DC3D6: mov     eax, [ebx]
0x7DC3D8: test    eax, eax
0x7DC3DA: mov     [esp+3Ch+a3], eax
0x7DC3DE: jz      short loc_7DC3E7
0x7DC3E0: add     [eax+5Ch], ebp
0x7DC3E3: mov     eax, [esp+3Ch+a3]
0x7DC3E7: mov     ecx, [esp+3Ch+var_14]
0x7DC3EB: test    ecx, ecx
0x7DC3ED: mov     byte ptr [esp+3Ch+var_4], 1
0x7DC3F2: jz      short loc_7DC40A
0x7DC3F4: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7DC3F8: cmp     dword ptr [ecx+5Ch], 0
0x7DC3FC: lea     eax, [ecx+5Ch]
0x7DC3FF: jnz     short loc_7DC406
0x7DC401: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7DC406: mov     eax, [esp+3Ch+a3]
0x7DC40A: push    2
0x7DC40C: push    3
0x7DC40E: push    3
0x7DC410: push    eax
0x7DC411: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x7DC416: mov     ecx, [esp+4Ch+a3]; this
0x7DC41A: add     esp, 10h
0x7DC41D: push    ebp; filterPreset
0x7DC41E: call    NiD3DTextureStage_ApplyFilterPreset; Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
0x7DC423: mov     ecx, [edi+esi*4+7Ch]; this
0x7DC427: mov     edx, [esp+3Ch+a3]
0x7DC42B: mov     eax, [ecx+14h]
0x7DC42E: push    edx; a3
0x7DC42F: push    eax; a2
0x7DC430: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x7DC435: lea     ecx, [esp+3Ch+var_10]
0x7DC439: push    ecx
0x7DC43A: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x7DC43F: add     esp, 4
0x7DC442: mov     ebx, eax
0x7DC444: mov     eax, [esp+3Ch+a3]
0x7DC448: cmp     eax, [ebx]
0x7DC44A: mov     byte ptr [esp+3Ch+var_4], 5
0x7DC44F: jz      short loc_7DC479
0x7DC451: test    eax, eax
0x7DC453: jz      short loc_7DC468
0x7DC455: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7DC459: mov     ecx, eax
0x7DC45B: add     eax, 5Ch ; '\'
0x7DC45E: cmp     dword ptr [eax], 0
0x7DC461: jnz     short loc_7DC468
0x7DC463: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7DC468: mov     eax, [ebx]
0x7DC46A: test    eax, eax
0x7DC46C: mov     [esp+3Ch+a3], eax
0x7DC470: jz      short loc_7DC479
0x7DC472: add     [eax+5Ch], ebp
0x7DC475: mov     eax, [esp+3Ch+a3]
0x7DC479: mov     ecx, [esp+3Ch+var_10]
0x7DC47D: test    ecx, ecx
0x7DC47F: mov     byte ptr [esp+3Ch+var_4], 1
0x7DC484: jz      short loc_7DC49C
0x7DC486: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7DC48A: cmp     dword ptr [ecx+5Ch], 0
0x7DC48E: lea     eax, [ecx+5Ch]
0x7DC491: jnz     short loc_7DC498
0x7DC493: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7DC498: mov     eax, [esp+3Ch+a3]
0x7DC49C: push    2
0x7DC49E: push    3
0x7DC4A0: push    4
0x7DC4A2: push    eax
0x7DC4A3: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x7DC4A8: mov     ecx, [esp+4Ch+a3]; this
0x7DC4AC: add     esp, 10h
0x7DC4AF: push    ebp; filterPreset
0x7DC4B0: call    NiD3DTextureStage_ApplyFilterPreset; Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
0x7DC4B5: mov     ecx, [edi+esi*4+7Ch]; this
0x7DC4B9: mov     edx, [esp+3Ch+a3]
0x7DC4BD: mov     eax, [ecx+14h]
0x7DC4C0: push    edx; a3
0x7DC4C1: push    eax; a2
0x7DC4C2: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x7DC4C7: mov     eax, [esp+3Ch+a3]
0x7DC4CB: test    eax, eax
0x7DC4CD: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x7DC4D5: jz      short loc_7DC4EA
0x7DC4D7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7DC4DB: mov     ecx, eax
0x7DC4DD: add     eax, 5Ch ; '\'
0x7DC4E0: cmp     dword ptr [eax], 0
0x7DC4E3: jnz     short loc_7DC4EA
0x7DC4E5: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7DC4EA: cmp     esi, 7
0x7DC4ED: jz      short loc_7DC510
0x7DC4EF: cmp     esi, 9
0x7DC4F2: jz      short loc_7DC510
0x7DC4F4: cmp     esi, 8
0x7DC4F7: jz      short loc_7DC510
0x7DC4F9: cmp     esi, 0Ah
0x7DC4FC: jz      short loc_7DC510
0x7DC4FE: mov     ecx, [edi+0BCh]
0x7DC504: push    ecx; a2
0x7DC505: mov     ecx, [edi+esi*4+7Ch]; this
0x7DC509: call    NiD3DPass_SetVertexShader; Reference-counted NiD3DPass vertex-shader setter. Replaces pass+0x58 and AddRefs the new NiD3DVertexShader.
0x7DC50E: jmp     short loc_7DC55D
0x7DC510: mov     ebp, [edi+esi*4+7Ch]
0x7DC514: mov     eax, [edi+0C0h]
0x7DC51A: mov     ebx, [ebp+58h]
0x7DC51D: add     ebp, 58h ; 'X'
0x7DC520: cmp     ebx, eax
0x7DC522: mov     [esp+3Ch+var_24], eax
0x7DC526: jz      short loc_7DC55D
0x7DC528: test    ebx, ebx
0x7DC52A: jz      short loc_7DC548
0x7DC52C: lea     edx, [ebx+4]
0x7DC52F: push    edx; lpAddend
0x7DC530: call    dword ptr ds:0A2807Ch
0x7DC536: test    eax, eax
0x7DC538: jnz     short loc_7DC548
0x7DC53A: test    ebx, ebx
0x7DC53C: jz      short loc_7DC548
0x7DC53E: mov     eax, [ebx]
0x7DC540: mov     edx, [eax]
0x7DC542: push    1
0x7DC544: mov     ecx, ebx
0x7DC546: call    edx
0x7DC548: mov     eax, [esp+3Ch+var_24]
0x7DC54C: test    eax, eax
0x7DC54E: mov     [ebp+0], eax
0x7DC551: jz      short loc_7DC55D
0x7DC553: add     eax, 4
0x7DC556: push    eax; lpAddend
0x7DC557: call    dword ptr ds:0A28078h
0x7DC55D: mov     ebp, [edi+esi*4+7Ch]
0x7DC561: mov     eax, [edi+esi*4+0C4h]
0x7DC568: mov     ebx, [ebp+44h]
0x7DC56B: add     ebp, 44h ; 'D'
0x7DC56E: cmp     ebx, eax
0x7DC570: mov     [esp+3Ch+var_24], eax
0x7DC574: jz      short loc_7DC5AD
0x7DC576: test    ebx, ebx
0x7DC578: jz      short loc_7DC596
0x7DC57A: lea     ecx, [ebx+4]
0x7DC57D: push    ecx; lpAddend
0x7DC57E: call    dword ptr ds:0A2807Ch
0x7DC584: test    eax, eax
0x7DC586: jnz     short loc_7DC596
0x7DC588: test    ebx, ebx
0x7DC58A: jz      short loc_7DC596
0x7DC58C: mov     edx, [ebx]
0x7DC58E: mov     eax, [edx]
0x7DC590: push    1
0x7DC592: mov     ecx, ebx
0x7DC594: call    eax
0x7DC596: mov     eax, [esp+3Ch+var_24]
0x7DC59A: test    eax, eax
0x7DC59C: mov     [ebp+0], eax
0x7DC59F: jz      short loc_7DC5AD
0x7DC5A1: mov     ecx, eax
0x7DC5A3: add     ecx, 4
0x7DC5A6: push    ecx; lpAddend
0x7DC5A7: call    dword ptr ds:0A28078h
0x7DC5AD: mov     ebx, [edi+esi*4+7Ch]
0x7DC5B1: cmp     dword ptr [ebx+30h], 0
0x7DC5B5: jnz     short loc_7DC5BF
0x7DC5B7: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC5BC: mov     [ebx+30h], eax
0x7DC5BF: mov     ecx, [ebx+30h]
0x7DC5C2: push    0
0x7DC5C4: push    1
0x7DC5C6: push    7
0x7DC5C8: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC5CD: mov     ebp, [edi+esi*4+7Ch]
0x7DC5D1: cmp     dword ptr [ebp+30h], 0
0x7DC5D5: jnz     short loc_7DC5DF
0x7DC5D7: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC5DC: mov     [ebp+30h], eax
0x7DC5DF: mov     ecx, [ebp+30h]
0x7DC5E2: push    0
0x7DC5E4: push    4
0x7DC5E6: push    17h
0x7DC5E8: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC5ED: mov     ebx, [edi+esi*4+7Ch]
0x7DC5F1: cmp     dword ptr [ebx+30h], 0
0x7DC5F5: jnz     short loc_7DC5FF
0x7DC5F7: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC5FC: mov     [ebx+30h], eax
0x7DC5FF: mov     ecx, [ebx+30h]
0x7DC602: push    0
0x7DC604: push    0
0x7DC606: push    34h ; '4'
0x7DC608: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC60D: mov     ebx, [edi+esi*4+7Ch]
0x7DC611: cmp     dword ptr [ebx+30h], 0
0x7DC615: jnz     short loc_7DC61F
0x7DC617: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC61C: mov     [ebx+30h], eax
0x7DC61F: mov     ecx, [ebx+30h]
0x7DC622: push    0
0x7DC624: push    1
0x7DC626: push    0Fh
0x7DC628: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC62D: mov     ebx, [edi+esi*4+7Ch]
0x7DC631: cmp     dword ptr [ebx+30h], 0
0x7DC635: jnz     short loc_7DC63F
0x7DC637: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC63C: mov     [ebx+30h], eax
0x7DC63F: mov     ecx, [ebx+30h]
0x7DC642: push    0
0x7DC644: push    0
0x7DC646: push    18h
0x7DC648: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC64D: mov     ebx, [edi+esi*4+7Ch]
0x7DC651: cmp     dword ptr [ebx+30h], 0
0x7DC655: jnz     short loc_7DC65F
0x7DC657: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC65C: mov     [ebx+30h], eax
0x7DC65F: mov     ecx, [ebx+30h]
0x7DC662: push    0
0x7DC664: push    5
0x7DC666: push    19h
0x7DC668: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC66D: mov     ebx, [edi+esi*4+7Ch]
0x7DC671: cmp     dword ptr [ebx+30h], 0
0x7DC675: jnz     short loc_7DC67F
0x7DC677: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC67C: mov     [ebx+30h], eax
0x7DC67F: mov     ecx, [ebx+30h]
0x7DC682: push    0
0x7DC684: push    7
0x7DC686: push    0A8h ; '¨'
0x7DC68B: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC690: cmp     esi, 0Ch
0x7DC693: jnz     short loc_7DC6D6
0x7DC695: mov     ebx, [edi+0ACh]
0x7DC69B: cmp     dword ptr [ebx+30h], 0
0x7DC69F: jnz     short loc_7DC6A9
0x7DC6A1: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC6A6: mov     [ebx+30h], eax
0x7DC6A9: mov     ecx, [ebx+30h]
0x7DC6AC: push    0
0x7DC6AE: push    0
0x7DC6B0: push    1Bh
0x7DC6B2: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC6B7: mov     ebx, [edi+0ACh]
0x7DC6BD: cmp     dword ptr [ebx+30h], 0
0x7DC6C1: jnz     short loc_7DC6CB
0x7DC6C3: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC6C8: mov     [ebx+30h], eax
0x7DC6CB: push    0
0x7DC6CD: push    1
0x7DC6CF: push    0Eh
0x7DC6D1: jmp     loc_7DC887
0x7DC6D6: mov     ebx, [edi+esi*4+7Ch]
0x7DC6DA: cmp     dword ptr [ebx+30h], 0
0x7DC6DE: jnz     short loc_7DC6E8
0x7DC6E0: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC6E5: mov     [ebx+30h], eax
0x7DC6E8: mov     ecx, [ebx+30h]
0x7DC6EB: push    0
0x7DC6ED: push    1
0x7DC6EF: push    1Bh
0x7DC6F1: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC6F6: mov     ebp, [edi+esi*4+7Ch]
0x7DC6FA: cmp     dword ptr [ebp+30h], 0
0x7DC6FE: jnz     short loc_7DC708
0x7DC700: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC705: mov     [ebp+30h], eax
0x7DC708: mov     ecx, [ebp+30h]
0x7DC70B: push    0
0x7DC70D: push    5
0x7DC70F: push    13h
0x7DC711: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC716: mov     ebp, [edi+esi*4+7Ch]
0x7DC71A: cmp     dword ptr [ebp+30h], 0
0x7DC71E: jnz     short loc_7DC728
0x7DC720: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC725: mov     [ebp+30h], eax
0x7DC728: mov     ecx, [ebp+30h]
0x7DC72B: push    0
0x7DC72D: push    6
0x7DC72F: push    14h
0x7DC731: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC736: mov     ebx, [edi+esi*4+7Ch]
0x7DC73A: cmp     dword ptr [ebx+30h], 0
0x7DC73E: jnz     short loc_7DC748
0x7DC740: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC745: mov     [ebx+30h], eax
0x7DC748: mov     ecx, [ebx+30h]
0x7DC74B: push    0
0x7DC74D: push    1
0x7DC74F: push    0Eh
0x7DC751: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC756: cmp     esi, 7
0x7DC759: jz      short loc_7DC76E
0x7DC75B: cmp     esi, 8
0x7DC75E: jz      short loc_7DC76E
0x7DC760: cmp     esi, 9
0x7DC763: jz      short loc_7DC76E
0x7DC765: cmp     esi, 0Ah
0x7DC768: jnz     loc_7DC7EE
0x7DC76E: mov     ebx, [edi+esi*4+7Ch]
0x7DC772: cmp     dword ptr [ebx+30h], 0
0x7DC776: jnz     short loc_7DC780
0x7DC778: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC77D: mov     [ebx+30h], eax
0x7DC780: mov     ecx, [ebx+30h]
0x7DC783: push    0
0x7DC785: push    1
0x7DC787: push    34h ; '4'
0x7DC789: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC78E: mov     ebx, [edi+esi*4+7Ch]
0x7DC792: cmp     dword ptr [ebx+30h], 0
0x7DC796: jnz     short loc_7DC7A0
0x7DC798: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC79D: mov     [ebx+30h], eax
0x7DC7A0: mov     ecx, [ebx+30h]
0x7DC7A3: push    0
0x7DC7A5: push    0
0x7DC7A7: push    39h ; '9'
0x7DC7A9: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC7AE: mov     ebx, [edi+esi*4+7Ch]
0x7DC7B2: cmp     dword ptr [ebx+30h], 0
0x7DC7B6: jnz     short loc_7DC7C0
0x7DC7B8: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC7BD: mov     [ebx+30h], eax
0x7DC7C0: mov     ecx, [ebx+30h]
0x7DC7C3: push    0
0x7DC7C5: push    7
0x7DC7C7: push    37h ; '7'
0x7DC7C9: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC7CE: mov     ebx, [edi+esi*4+7Ch]
0x7DC7D2: cmp     dword ptr [ebx+30h], 0
0x7DC7D6: jnz     short loc_7DC7E0
0x7DC7D8: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC7DD: mov     [ebx+30h], eax
0x7DC7E0: mov     ecx, [ebx+30h]
0x7DC7E3: push    0
0x7DC7E5: push    8
0x7DC7E7: push    38h ; '8'
0x7DC7E9: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC7EE: test    esi, esi
0x7DC7F0: jz      short loc_7DC80F
0x7DC7F2: cmp     esi, 2
0x7DC7F5: jz      short loc_7DC80F
0x7DC7F7: cmp     esi, 1
0x7DC7FA: jz      short loc_7DC80F
0x7DC7FC: cmp     esi, 3
0x7DC7FF: jz      short loc_7DC80F
0x7DC801: cmp     esi, 4
0x7DC804: jz      short loc_7DC80F
0x7DC806: cmp     esi, 5
0x7DC809: jnz     loc_7DC88F
0x7DC80F: mov     ebx, [edi+esi*4+7Ch]
0x7DC813: cmp     dword ptr [ebx+30h], 0
0x7DC817: jnz     short loc_7DC821
0x7DC819: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC81E: mov     [ebx+30h], eax
0x7DC821: mov     ecx, [ebx+30h]
0x7DC824: push    0
0x7DC826: push    1
0x7DC828: push    34h ; '4'
0x7DC82A: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC82F: mov     ebp, [edi+esi*4+7Ch]
0x7DC833: cmp     dword ptr [ebp+30h], 0
0x7DC837: jnz     short loc_7DC841
0x7DC839: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC83E: mov     [ebp+30h], eax
0x7DC841: mov     ecx, [ebp+30h]
0x7DC844: push    0
0x7DC846: push    3
0x7DC848: push    38h ; '8'
0x7DC84A: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC84F: mov     ebx, [edi+esi*4+7Ch]
0x7DC853: cmp     dword ptr [ebx+30h], 0
0x7DC857: jnz     short loc_7DC861
0x7DC859: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC85E: mov     [ebx+30h], eax
0x7DC861: mov     ecx, [ebx+30h]
0x7DC864: push    0
0x7DC866: push    0
0x7DC868: push    39h ; '9'
0x7DC86A: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC86F: mov     ebx, [edi+esi*4+7Ch]
0x7DC873: cmp     dword ptr [ebx+30h], 0
0x7DC877: jnz     short loc_7DC881
0x7DC879: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7DC87E: mov     [ebx+30h], eax
0x7DC881: push    0
0x7DC883: push    1
0x7DC885: push    37h ; '7'
0x7DC887: mov     ecx, [ebx+30h]
0x7DC88A: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7DC88F: add     esi, 1
0x7DC892: cmp     esi, 10h
0x7DC895: jl      loc_7DC1D0
0x7DC89B: mov     al, 1
0x7DC89D: mov     ecx, dword ptr [esp+3Ch+var_C]
0x7DC8A1: mov     large fs:0, ecx
0x7DC8A8: pop     ecx
0x7DC8A9: pop     edi
0x7DC8AA: pop     esi
0x7DC8AB: pop     ebp
0x7DC8AC: pop     ebx
0x7DC8AD: add     esp, 28h
0x7DC8B0: retn
0x75FA70: mov     ecx, [ecx]
0x75FA72: test    ecx, ecx
0x75FA74: jz      short locret_75FA81
0x75FA76: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FA7A: jnz     short locret_75FA81
0x75FA7C: jmp     sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x75FA81: retn
0x9CF0C0: lea     ecx, [ebp-20h]; void *
0x9CF0C3: jmp     sub_4027D0
0x9CF0C8: lea     ecx, [ebp-28h]
0x9CF0CB: jmp     loc_75FA70
0x9CF0D0: lea     ecx, [ebp-1Ch]
0x9CF0D3: jmp     loc_75FA70
0x9CF0D8: lea     ecx, [ebp-18h]
0x9CF0DB: jmp     loc_75FA70
0x9CF0E0: lea     ecx, [ebp-14h]
0x9CF0E3: jmp     loc_75FA70
0x9CF0E8: lea     ecx, [ebp-10h]
0x9CF0EB: jmp     loc_75FA70
0x9CF0F0: mov     edx, [esp+arg_4]
0x9CF0F4: lea     eax, [edx-2Ch]
0x9CF0F7: mov     ecx, [edx-30h]
0x9CF0FA: xor     ecx, eax
0x9CF0FC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CF101: mov     eax, offset stru_AF7E08
0x9CF106: jmp     ___CxxFrameHandler3
