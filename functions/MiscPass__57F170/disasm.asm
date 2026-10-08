0x57F170: push    0FFFFFFFFh; MoonSugarEffect decode: MiscPass constructs a temporary BSCullingProcess with the source scenegraph cullingProcess->VisibleGeo. This confirms visible arrays are opt-in/inherited state, not guaranteed for the normal world path.
0x57F172: push    offset SEH_57F170
0x57F177: mov     eax, large fs:0
0x57F17D: push    eax
0x57F17E: sub     esp, 0A4h
0x57F184: push    ebx
0x57F185: push    ebp
0x57F186: push    esi
0x57F187: push    edi
0x57F188: mov     eax, ds:0B30AACh
0x57F18D: xor     eax, esp
0x57F18F: push    eax
0x57F190: lea     eax, [esp+0C4h+anonymous_0.unk94]
0x57F197: mov     large fs:0, eax
0x57F19D: mov     [esp+0C4h+var_A4], ecx
0x57F1A1: mov     ebp, [ecx+4]
0x57F1A4: mov     esi, [ebp+0E4h]
0x57F1AA: mov     eax, [esi+8]
0x57F1AD: mov     edi, ds:0B3F928h
0x57F1B3: push    eax; visibleArray
0x57F1B4: lea     ecx, [esp+0C8h+anonymous_0]; self
0x57F1B8: call    NiCullingProcess_NiCullingProcess; MEF PERF 2026-10-07: Verified culling lifetime refinement: constructor argument is loaded from existing process+8 at57F1AA. Temporary BSCullingProcess does not imply a newly allocated visible geometry array; it shares that pointer. No per-frame array allocation inferred.
0x57F1BD: xor     ebx, ebx
0x57F1BF: mov     [esp+0C4h+anonymous_0.super.vtbl], offset ??_7BSCullingProcess@@6B@; const BSCullingProcess::`vftable' ...
0x57F1C7: mov     [esp+0C4h+anonymous_0.useFrustumCull], bl; CULLING audit 2026-09-27: zeroes BYTE +0x90 on the temporary BSCullingProcess, disabling its native frustum branch.
0x57F1CE: mov     eax, [edi+8]
0x57F1D1: cmp     eax, ebx
0x57F1D3: mov     [esp+0C4h+anonymous_0.unk9C], ebx
0x57F1DA: mov     [esp+0C4h+var_AD], bl
0x57F1DE: mov     [esp+0C4h+var_A8], eax
0x57F1E2: jz      short loc_57F1EE
0x57F1E4: add     eax, 4
0x57F1E7: push    eax; lpAddend
0x57F1E8: call    dword ptr ds:0A28078h
0x57F1EE: mov     byte ptr [esp+0C4h+anonymous_0.unk9C], 1
0x57F1F6: call    BSShaderAccumulator_GetOrCreateGlobal
0x57F1FB: mov     ecx, ds:0B3F928h
0x57F201: mov     byte ptr ds:0B42CE3h, 1
0x57F208: mov     eax, [ecx+200h]
0x57F20E: cmp     eax, ebx
0x57F210: jnz     short loc_57F24E
0x57F212: cmp     [ecx+204h], ebx
0x57F218: jnz     short loc_57F24E
0x57F21A: mov     ecx, [esp+0C4h+arg_0]; this
0x57F221: cmp     ecx, ebx
0x57F223: jz      short loc_57F23C
0x57F225: call    BSRenderedTexture__UseTextureToRender; Oblivion BSRenderedTexture helper selects the render-target group associated with its inner rendered texture.
0x57F22A: push    eax; a2
0x57F22B: push    6; a1
0x57F22D: call    NiRenderer_BeginScene; Oblivion BeginScene wrapper used by per-source shadow rendering: establish SceneState2 only when no scene state is active, then push/begin the supplied target group with requested clear flags.
0x57F232: add     esp, 8
0x57F235: mov     [esp+0C4h+var_AD], 1
0x57F23A: jmp     short loc_57F27A
0x57F23C: push    ebx; a2
0x57F23D: push    6; a1
0x57F23F: call    NiRenderer_BeginScene1; Oblivion BeginScene internal path: establishes SceneState1 when required and starts the supplied or default render-target group.
0x57F244: add     esp, 8
0x57F247: mov     [esp+0C4h+var_AD], 1
0x57F24C: jmp     short loc_57F27A
0x57F24E: mov     eax, 1
0x57F253: cmp     [edi+200h], eax
0x57F259: jz      short loc_57F263
0x57F25B: cmp     [edi+204h], eax
0x57F261: jnz     short loc_57F27A
0x57F263: cmp     [edi+20Ch], al
0x57F269: jnz     short loc_57F27A
0x57F26B: mov     eax, [edi]
0x57F26D: mov     edx, [eax+13Ch]
0x57F273: push    6
0x57F275: push    ebx
0x57F276: mov     ecx, edi
0x57F278: call    edx
0x57F27A: fld     dword ptr [ebp+2Ch]
0x57F27D: fstp    [esp+0C4h+var_AC]
0x57F281: fldz
0x57F283: fcomp   [esp+0C4h+var_AC]
0x57F287: fnstsw  ax
0x57F289: test    ah, 44h
0x57F28C: jnp     loc_57F320
0x57F292: mov     eax, ds:0B3F940h
0x57F297: cmp     eax, ebx
0x57F299: mov     [esp+0C4h+var_AE], 1
0x57F29E: jz      short loc_57F2B9
0x57F2A0: mov     al, [eax+1B0h]; 3DTheft decode 2026-05-16: MiscPass services pending manager byte +0x1B0 via SubmitSignalTask before culling, then waits on the manager fence.
0x57F2A6: test    al, al
0x57F2A8: jz      short loc_57F2AF
0x57F2AA: call    NiParallelUpdateTaskManager_SubmitSignalTask; 3DTheft decode 2026-05-16: if manager exists, calls manager vfunc +0x60 with args (1, manager+0x19C, 0, 0), then clears byte +0x1B0. manager+0x19C is the observed embedded signal-task argument.
0x57F2AF: push    0FFFFFFFFh; dwMilliseconds
0x57F2B1: call    NiParallelUpdateTaskManager_WaitForSignal; [Verified] On semaphore timeout or pending-count boundary, sets bNiParallelWaitFallback_0B3F944 and waits indefinitely on g_NiParallelUpdateTaskManager's semaphore. BSTECreateTask_Run observes the byte and skips the wrapped Initialize call while fallback wait is active.
0x57F2B6: add     esp, 4
0x57F2B9: mov     eax, [ebp+0DCh]
0x57F2BF: push    ebx; visibleArray
0x57F2C0: push    esi; cullingProcess
0x57F2C1: push    ebp; sceneRoot
0x57F2C2: push    eax; camera
0x57F2C3: call    NiRenderer_CullAndRenderScene; Renderer camera-cull-submit boundary. Installs camera matrices, culls the scene root into the visible array, then submits that visible array through the current renderer accumulator.
0x57F2C8: mov     eax, ds:0B3F940h
0x57F2CD: add     esp, 10h
0x57F2D0: cmp     eax, ebx
0x57F2D2: jz      short loc_57F2F0
0x57F2D4: lea     esi, [eax+190h]; 3DTheft decode 2026-05-16: after culling, increments manager +0x190 and releases semaphore at +0x198.
0x57F2DA: push    esi; lpAddend
0x57F2DB: call    dword ptr ds:0A28078h
0x57F2E1: mov     ecx, [esi+8]
0x57F2E4: push    ebx; lpPreviousCount
0x57F2E5: push    1; lReleaseCount
0x57F2E7: push    ecx; hSemaphore
0x57F2E8: call    dword ptr ds:0A280C8h
0x57F2EE: mov     edx, [esi]
0x57F2F0: mov     esi, [esp+0C4h+arg_0]
0x57F2F7: cmp     esi, ebx
0x57F2F9: jz      short loc_57F326
0x57F2FB: call    NiRenderer_EndScene; Oblivion EndScene wrapper: drain the complete render-target stack, end the active group, and end the D3D scene only when this wrapper owned SceneState2.
0x57F300: push    ebx; a2
0x57F301: push    7; a1
0x57F303: call    NiRenderer_BeginScene1; Oblivion BeginScene internal path: establishes SceneState1 when required and starts the supplied or default render-target group.
0x57F308: push    0Ch; a1
0x57F30A: call    GetShaderDefinition; DeferredRendering HDR+Bloom dependency: shader definition IDs 0x07=Blur/Bloom, 0x08=HDR, 0x0C=Copy fallback. Oblivion behavior observed here; both post-processes are forced by list composition, not Fallout naming.
0x57F30F: mov     eax, [eax+4]
0x57F312: push    ebx; a4
0x57F313: push    esi; a3
0x57F314: push    edi; a2
0x57F315: push    eax; a1
0x57F316: call    sub_7B4900; MoonSugarEffect decode: thin wrapper around sub_803570; applies one BSShader through global imageSpaceShaderList fullscreen quad, used by menu/water/canopy/misc paths.
0x57F31B: add     esp, 1Ch
0x57F31E: jmp     short loc_57F358
0x57F320: mov     [esp+0C4h+var_AE], bl
0x57F324: jmp     short loc_57F2F0
0x57F326: cmp     [esp+0C4h+var_AE], bl
0x57F32A: jz      short loc_57F358
0x57F32C: mov     eax, 1
0x57F331: cmp     [edi+200h], eax
0x57F337: jz      short loc_57F341
0x57F339: cmp     [edi+204h], eax
0x57F33F: jnz     short loc_57F358
0x57F341: cmp     [edi+20Ch], al
0x57F347: jnz     short loc_57F358
0x57F349: mov     eax, [edi]
0x57F34B: mov     edx, [eax+13Ch]
0x57F351: push    6
0x57F353: push    ebx
0x57F354: mov     ecx, edi
0x57F356: call    edx
0x57F358: cmp     word ptr ds:0B1397Ah, 6
0x57F360: jbe     short loc_57F376
0x57F362: mov     eax, ds:0B13974h
0x57F367: mov     ecx, [eax+18h]
0x57F36A: cmp     ecx, ebx
0x57F36C: jz      short loc_57F376
0x57F36E: push    ebx; float
0x57F36F: call    sub_58FBA0
0x57F374: jmp     short loc_57F37B
0x57F376: call    sub_5903E0
0x57F37B: mov     esi, [esp+0C4h+var_A4]
0x57F37F: cmp     [esi+7Ch], bl
0x57F382: jz      short loc_57F392
0x57F384: fldz
0x57F386: push    ebx; a3
0x57F387: push    ecx
0x57F388: fstp    [esp+0CCh+a2]; a2
0x57F38B: mov     ecx, ebp; this
0x57F38D: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x57F392: mov     [esi+7Ch], bl
0x57F395: mov     esi, [esi]
0x57F397: mov     eax, [esi+0DCh]
0x57F39D: push    eax
0x57F39E: mov     ecx, edi
0x57F3A0: call    SetCameraViewProj; MoonSugarEffect build 16: after temporary camera sway is restored, plugin calls SetCameraViewProj(g_Renderer, restoredCamera) to reset renderer camera globals/view/projection/viewport to the original camera state.
0x57F3A5: mov     eax, ds:0B33428h
0x57F3AA: cmp     eax, ebx
0x57F3AC: jz      short loc_57F3C4
0x57F3AE: cmp     dword ptr [eax+20h], 2
0x57F3B2: setz    al
0x57F3B5: cmp     al, bl
0x57F3B7: jz      short loc_57F3C4
0x57F3B9: push    1
0x57F3BB: push    ebx
0x57F3BC: call    sub_410810
0x57F3C1: add     esp, 8
0x57F3C4: mov     eax, ds:0B3F940h
0x57F3C9: cmp     eax, ebx
0x57F3CB: jz      short loc_57F3E6
0x57F3CD: mov     cl, [eax+1B0h]; 3DTheft decode 2026-05-16: second MiscPass culling boundary repeats pending-signal service and short wait before NiCullingProcess::Process.
0x57F3D3: test    cl, cl
0x57F3D5: jz      short loc_57F3DC
0x57F3D7: call    NiParallelUpdateTaskManager_SubmitSignalTask; 3DTheft decode 2026-05-16: if manager exists, calls manager vfunc +0x60 with args (1, manager+0x19C, 0, 0), then clears byte +0x1B0. manager+0x19C is the observed embedded signal-task argument.
0x57F3DC: push    3; dwMilliseconds
0x57F3DE: call    NiParallelUpdateTaskManager_WaitForSignal; [Verified] On semaphore timeout or pending-count boundary, sets bNiParallelWaitFallback_0B3F944 and waits indefinitely on g_NiParallelUpdateTaskManager's semaphore. BSTECreateTask_Run observes the byte and skips the wrapped Initialize call while fallback wait is active.
0x57F3E3: add     esp, 4
0x57F3E6: mov     eax, [esi+0DCh]
0x57F3EC: push    ebx; visibleArray
0x57F3ED: push    esi; root
0x57F3EE: push    eax; camera
0x57F3EF: lea     ecx, [esp+0D0h+anonymous_0]; self
0x57F3F3: call    NiCullingProcess__Process; CULLING audit 2026-09-27: direct base Process call on temporary BSCullingProcess. Does not dispatch through Process vtable; exact-world-owner plugin scope does not cover this temporary process. Preserve separate-view semantics.
0x57F3F8: mov     eax, ds:0B3F940h
0x57F3FD: cmp     eax, ebx
0x57F3FF: mov     ds:0B42CE3h, bl
0x57F405: jz      short loc_57F423
0x57F407: lea     esi, [eax+190h]; 3DTheft decode 2026-05-16: second MiscPass culling boundary releases manager semaphore by incrementing +0x190 and ReleaseSemaphore(+0x198).
0x57F40D: push    esi; lpAddend
0x57F40E: call    dword ptr ds:0A28078h
0x57F414: mov     edx, [esi+8]
0x57F417: push    ebx; lpPreviousCount
0x57F418: push    1; lReleaseCount
0x57F41A: push    edx; hSemaphore
0x57F41B: call    dword ptr ds:0A280C8h
0x57F421: mov     eax, [esi]
0x57F423: cmp     [esp+0C4h+var_AD], bl
0x57F427: jz      short loc_57F42E
0x57F429: call    sub_7D7210
0x57F42E: mov     esi, [esp+0C4h+var_A8]
0x57F432: cmp     esi, ebx
0x57F434: mov     byte ptr [esp+0C4h+anonymous_0.unk9C], bl
0x57F43B: jz      short loc_57F455
0x57F43D: lea     ecx, [esi+4]
0x57F440: push    ecx; lpAddend
0x57F441: call    dword ptr ds:0A2807Ch
0x57F447: test    eax, eax
0x57F449: jnz     short loc_57F455
0x57F44B: mov     edx, [esi]
0x57F44D: mov     eax, [edx]
0x57F44F: push    1
0x57F451: mov     ecx, esi
0x57F453: call    eax
0x57F455: lea     ecx, [esp+0C4h+anonymous_0]; this
0x57F459: mov     [esp+0C4h+anonymous_0.unk9C], 0FFFFFFFFh
0x57F464: call    ??1BSCullingProcess@@UAE@XZ; Oblivion BSCullingProcess destructor restores its base culling-process state; no separate visible-array allocation is released here.
0x57F469: mov     ecx, [esp+0C4h+anonymous_0.unk94]
0x57F470: mov     large fs:0, ecx
0x57F477: pop     ecx
0x57F478: pop     edi
0x57F479: pop     esi
0x57F47A: pop     ebp
0x57F47B: pop     ebx
0x57F47C: add     esp, 0B0h
0x57F482: retn    4
