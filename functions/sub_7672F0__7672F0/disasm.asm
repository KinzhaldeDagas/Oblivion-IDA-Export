0x7672F0: push    ecx; Oblivion rigid/non-hardware-skinned geometry pass loop: shader preflight, pass construction, pass state/stage application, constants, geometry buffers, programs/maps, then DrawIndexedPrimitive or DrawPrimitive and pass advance.
0x7672F1: push    ebx
0x7672F2: push    ebp
0x7672F3: mov     ebp, [esp+0Ch+arg_0]
0x7672F7: test    ebp, ebp
0x7672F9: push    esi
0x7672FA: push    edi
0x7672FB: mov     edi, ecx
0x7672FD: jz      short loc_767319
0x7672FF: mov     eax, [ebp+0BCh]
0x767305: push    eax
0x767306: push    0B42858h
0x76730B: call    NiRTTI_Cast
0x767310: mov     ebx, eax
0x767312: add     esp, 8
0x767315: test    ebx, ebx
0x767317: jnz     short loc_76731F
0x767319: mov     ebx, [edi+0A94h]
0x76731F: mov     ecx, [esp+14h+arg_10]
0x767323: mov     edx, [esp+14h+arg_C]
0x767327: mov     esi, [esp+14h+arg_14]
0x76732B: mov     eax, [ebx]
0x76732D: push    ecx
0x76732E: mov     ecx, [edi+10h]
0x767331: push    edx
0x767332: mov     edx, [edi+0Ch]
0x767335: push    ecx
0x767336: mov     ecx, [esp+20h+arg_8]
0x76733A: push    edx
0x76733B: mov     edx, [eax+28h]
0x76733E: push    esi
0x76733F: push    ecx
0x767340: push    ebp
0x767341: mov     ecx, ebx
0x767343: call    edx; NiD3DShader vtable +0x28: render preflight.
0x767345: test    eax, eax; Non-skinned geometry render path forwards renderer->propertyState to the selected shader. For the failing cloned Arrow:0 this pointer is null.
0x767347: jnz     loc_76750E
0x76734D: mov     ecx, [esp+14h+arg_10]
0x767351: mov     edx, [esp+14h+arg_C]
0x767355: mov     eax, [ebx]
0x767357: push    ecx
0x767358: mov     ecx, [edi+10h]
0x76735B: push    edx
0x76735C: mov     edx, [edi+0Ch]
0x76735F: push    ecx
0x767360: mov     ecx, [esp+20h+arg_8]
0x767364: push    edx
0x767365: mov     edx, [eax+2Ch]
0x767368: push    esi
0x767369: push    ecx
0x76736A: push    ebp
0x76736B: mov     ecx, ebx
0x76736D: call    edx; Rigid geometry invokes the selected concrete NiD3DShader vtable +0x2C. For Hair, HairShader_SetupRenderPass resets the queue and returns 0 for inherited high selectors; for Lighting30 its high selectors likewise queue no pass.
0x76736F: mov     eax, [ebx]
0x767371: mov     edx, [eax+48h]
0x767374: mov     ecx, ebx
0x767376: call    edx; Rigid BeginPassLoop guard: PassCount zero skips pass state, constants, programs/buffers, and DrawIndexedPrimitive/DrawPrimitive. This proves no draw for both Lighting30 high records and conditionally reachable Hair high records.
0x767378: test    eax, eax
0x76737A: jz      loc_7674D8
0x767380: mov     ecx, [esp+14h+arg_10]
0x767384: mov     edx, [esp+14h+arg_C]
0x767388: mov     eax, [ebx]
0x76738A: push    ecx
0x76738B: mov     ecx, [edi+10h]
0x76738E: push    edx
0x76738F: mov     edx, [edi+0Ch]
0x767392: push    ecx
0x767393: mov     ecx, [esp+20h+arg_8]
0x767397: push    edx
0x767398: mov     edx, [eax+30h]
0x76739B: push    esi
0x76739C: push    ecx
0x76739D: push    ebp
0x76739E: mov     ecx, ebx
0x7673A0: call    edx; NiD3DShader vtable +0x30: apply current pass render state and texture stages.
0x7673A2: mov     ecx, [esp+14h+arg_10]
0x7673A6: mov     edx, [esp+14h+arg_C]
0x7673AA: mov     eax, [ebx]
0x7673AC: push    ecx
0x7673AD: mov     ecx, [edi+10h]
0x7673B0: push    edx
0x7673B1: mov     edx, [edi+0Ch]
0x7673B4: push    ecx
0x7673B5: mov     ecx, [esp+20h+arg_8]
0x7673B9: push    edx
0x7673BA: mov     edx, [eax+34h]
0x7673BD: push    esi
0x7673BE: push    0
0x7673C0: push    ecx
0x7673C1: push    ebp
0x7673C2: mov     ecx, ebx
0x7673C4: call    edx; NiD3DShader vtable +0x34: write per-object/per-light render constants.
0x7673C6: mov     ecx, [edi+0Ch]
0x7673C9: mov     eax, [ebx]
0x7673CB: mov     edx, [eax+3Ch]
0x7673CE: push    ecx
0x7673CF: push    esi
0x7673D0: push    0
0x7673D2: push    ebp
0x7673D3: mov     ecx, ebx
0x7673D5: call    edx
0x7673D7: mov     ecx, [esp+14h+arg_10]
0x7673DB: mov     edx, [esp+14h+arg_C]
0x7673DF: push    ecx
0x7673E0: mov     ecx, [edi+10h]
0x7673E3: push    edx
0x7673E4: mov     edx, [edi+0Ch]
0x7673E7: push    ecx
0x7673E8: mov     ecx, [esp+20h+arg_8]
0x7673EC: push    edx
0x7673ED: mov     esi, eax; NiD3DShader vtable +0x3C: bind vertex streams and index buffer.
0x7673EF: mov     eax, [ebx]
0x7673F1: mov     edx, [eax+38h]
0x7673F4: push    esi
0x7673F5: push    0
0x7673F7: push    ecx
0x7673F8: push    ebp
0x7673F9: mov     ecx, ebx
0x7673FB: call    edx; NiD3DShader vtable +0x38: bind current shaders and apply pass/shader constant maps.
0x7673FD: mov     eax, [edi+8ACh]
0x767403: mov     ecx, [eax+0FF0h]
0x767409: mov     edx, [ecx]
0x76740B: mov     eax, [edx+4]
0x76740E: call    eax; NiDX9ShaderConstantManager vtable +4 is a no-op in Oblivion DX9; constant maps were uploaded by SetupShaderPrograms.
0x767410: xor     eax, eax; MoonSugarEffect build 37: post-native D3D vertex shader override now supports primary SM3Lighting, EnvMap, TexEffect, and Decal clones without taking ownership of native pixel shaders/textures.
0x767412: cmp     [esi+30h], eax
0x767415: jz      short loc_767486
0x767417: cmp     [esi+44h], eax; Verified current array-count semantics (2026-10-01): NumArrays +0x44 <= 0 skips indexed device draws to 0x7674A3 but does not skip shader finish +0x40 or pass advance +0x4C. State/constant/program/buffer setup has already executed. Empty geometry still has native state effects. GPU replacement must retain application/restoration and bookkeeping even when emitting zero draws.
0x76741A: mov     [esp+14h+arg_14], eax
0x76741E: mov     [esp+14h+var_4], eax
0x767422: jbe     loc_7674A3
0x767428: mov     eax, [esi+48h]; Rigid indexed arrays: between calls at 0x767462 the loop only reads lengths/counts, advances start by primitiveCount+2, and iterates. No shader state, constants or vertex/index binding changes occur between arrays; setup is outside this loop and finish is at 0x7674A3. A changed current NumArrays can be represented by rebuilding current ranges from interchangeable qualified material/input templates rather than requiring old observed draw cardinality. This concerns rigid loop semantics, not hardware skin partitions or permission to suppress unproved native calls.
0x76742B: test    eax, eax
0x76742D: jz      short loc_76743C
0x76742F: mov     ecx, [esp+14h+var_4]
0x767433: movzx   ebp, word ptr [eax+ecx*2]
0x767437: sub     ebp, 2
0x76743A: jmp     short loc_76743F
0x76743C: mov     ebp, [esi+3Ch]
0x76743F: mov     ecx, [esp+14h+arg_14]
0x767443: mov     eax, [edi+280h]
0x767449: mov     edx, [eax]
0x76744B: mov     edx, [edx+148h]; DeferredRendering full-TBN capture uses this post-SetupShaderPrograms draw window. Basis pass runs under native pass state before the material G-buffer pass, then stateblock restore replays the native state for the main capture.
0x767451: push    ebp
0x767452: push    ecx
0x767453: mov     ecx, [esi+14h]
0x767456: push    ecx
0x767457: mov     ecx, [esi+34h]
0x76745A: push    0
0x76745C: push    ecx
0x76745D: mov     ecx, [esi+38h]
0x767460: push    ecx
0x767461: push    eax
0x767462: call    edx; Final rigid indexed caster draw. Accepted fragments update the shared hardware depth surface and the bound R32F color target.
0x767464: mov     eax, [esp+14h+arg_14]
0x767468: lea     ecx, [eax+ebp+2]
0x76746C: mov     eax, [esp+14h+var_4]
0x767470: add     eax, 1
0x767473: cmp     eax, [esi+44h]
0x767476: mov     [esp+14h+arg_14], ecx
0x76747A: mov     [esp+14h+var_4], eax
0x76747E: jb      short loc_767428
0x767480: mov     ebp, [esp+14h+arg_0]
0x767484: jmp     short loc_7674A3
0x767486: mov     ecx, [esi+3Ch]
0x767489: mov     eax, [edi+280h]
0x76748F: mov     edx, [eax]
0x767491: mov     edx, [edx+144h]; DeferredRendering optional DrawPrimitive wrapper point. Same target-restore and safe replacement rules as 0x0076744B.
0x767497: push    ecx
0x767498: mov     ecx, [esi+34h]
0x76749B: push    ecx
0x76749C: mov     ecx, [esi+38h]
0x76749F: push    ecx
0x7674A0: push    eax
0x7674A1: call    edx; Final rigid non-indexed caster draw fallback with the same bound state, hardware Z, and R32F color output.
0x7674A3: mov     ecx, [esp+14h+arg_10]
0x7674A7: mov     edx, [esp+14h+arg_C]
0x7674AB: mov     eax, [ebx]
0x7674AD: push    ecx
0x7674AE: mov     ecx, [edi+10h]
0x7674B1: push    edx
0x7674B2: mov     edx, [edi+0Ch]
0x7674B5: push    ecx
0x7674B6: mov     ecx, [esp+20h+arg_8]
0x7674BA: push    edx
0x7674BB: mov     edx, [eax+40h]
0x7674BE: push    esi
0x7674BF: push    0
0x7674C1: push    ecx
0x7674C2: push    ebp
0x7674C3: mov     ecx, ebx
0x7674C5: call    edx; NiD3DShader vtable +0x40: end current pass.
0x7674C7: mov     eax, [ebx]
0x7674C9: mov     edx, [eax+4Ch]
0x7674CC: mov     ecx, ebx
0x7674CE: call    edx; NiD3DShader vtable +0x4C: advance/refcount next pass.
0x7674D0: test    eax, eax
0x7674D2: jnz     loc_767380
0x7674D8: mov     ecx, [esp+14h+arg_10]
0x7674DC: mov     edx, [esp+14h+arg_C]
0x7674E0: mov     eax, [ebx]
0x7674E2: push    ecx
0x7674E3: mov     ecx, [edi+10h]
0x7674E6: push    edx
0x7674E7: mov     edx, [edi+0Ch]
0x7674EA: push    ecx
0x7674EB: mov     ecx, [esp+20h+arg_8]
0x7674EF: push    edx
0x7674F0: mov     edx, [eax+44h]
0x7674F3: push    esi
0x7674F4: push    ecx
0x7674F5: push    ebp
0x7674F6: mov     ecx, ebx
0x7674F8: call    edx; Rigid path always calls shader vtable +0x44 finish after setup, including the zero-pass invalid-selector path.
0x7674FA: mov     edi, [edi+8ACh]
0x767500: mov     eax, [edi]
0x767502: mov     edx, [eax+0FCh]
0x767508: push    0
0x76750A: mov     ecx, edi
0x76750C: call    edx; After shader geometry finish, clear InternalNormalizeNormals via77B330. Does not immediately change render state143; next transform normalization consumes cleared flag.
0x76750E: pop     edi
0x76750F: pop     esi
0x767510: pop     ebp
0x767511: pop     ebx
0x767512: pop     ecx
0x767513: retn    18h
