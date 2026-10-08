0x40C830: push    0FFFFFFFFh
0x40C832: push    offset NiRenderer_Render_SEH
0x40C837: mov     eax, large fs:0
0x40C83D: push    eax
0x40C83E: sub     esp, 34h
0x40C841: push    ebx
0x40C842: push    ebp
0x40C843: push    esi
0x40C844: push    edi
0x40C845: mov     eax, ___security_cookie
0x40C84A: xor     eax, esp
0x40C84C: push    eax
0x40C84D: lea     eax, [esp+54h+var_C]
0x40C851: mov     large fs:0, eax
0x40C857: mov     edi, ecx
0x40C859: mov     [esp+54h+var_20], edi
0x40C85D: mov     ecx, ds:0B333A0h
0x40C863: mov     eax, [ecx+34h]
0x40C866: test    eax, eax
0x40C868: mov     byte ptr unk_B33395, 1
0x40C86F: jz      short loc_40C891
0x40C871: movzx   eax, byte ptr [eax+24h]
0x40C875: shr     eax, 1
0x40C877: test    al, 1
0x40C879: jz      short loc_40C8F7
0x40C87B: mov     edx, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40C881: mov     eax, [edx+0DCh]
0x40C887: mov     ecx, [ecx+58h]
0x40C88A: push    0
0x40C88C: push    0
0x40C88E: push    eax
0x40C88F: jmp     short loc_40C8B8
0x40C891: mov     eax, uGridsToLoad
0x40C896: mov     ecx, [ecx+8]
0x40C899: shr     eax, 1
0x40C89B: push    eax
0x40C89C: push    eax
0x40C89D: call    GetGridEntry
0x40C8A2: mov     edx, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40C8A8: mov     ecx, [edx+0DCh]
0x40C8AE: mov     eax, [eax+4]
0x40C8B1: push    0; a4
0x40C8B3: push    0; a3
0x40C8B5: push    ecx; a2
0x40C8B6: mov     ecx, eax; this
0x40C8B8: call    sub_49A100
0x40C8BD: push    0
0x40C8BF: call    GetShadowSceneNode
0x40C8C4: mov     esi, eax
0x40C8C6: mov     bl, [esi+12Ch]
0x40C8CC: mov     byte ptr [esi+12Ch], 1
0x40C8D3: mov     eax, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40C8D8: mov     eax, [eax+0DCh]
0x40C8DE: mov     ecx, ds:0B333A0h
0x40C8E4: mov     ecx, [ecx+54h]; this
0x40C8E7: add     esp, 4
0x40C8EA: push    esi; secondaryRoot
0x40C8EB: push    eax; primaryRoot
0x40C8EC: call    WaterManager_RenderCombinedReflectionPasses; NiRenderer main render calls WaterManager_RenderCombinedReflectionPasses with the world reflection root and ShadowSceneNode; this is the authoritative caller establishing WaterManager ownership.
0x40C8F1: mov     [esi+12Ch], bl
0x40C8F7: mov     eax, dword ptr g_NiParallelUpdateTaskManager; Verified pointer, not a universal threading-enable boolean: 404D60 waits on manager+198 and adjusts counter+190; 404DD0 reads pending flag+1B0. NiRenderer_Render checks it at 40C8F7/40D059; main update checks it at 40DB4E/40DEC6. Null excludes this parallel update manager, but does not prove all IO, resource-reference, pool or external writer exclusion for a DX11 bucket transaction.
0x40C8FC: test    eax, eax
0x40C8FE: jz      short loc_40C919
0x40C900: mov     dl, [eax+1B0h]
0x40C906: test    dl, dl
0x40C908: jz      short loc_40C90F
0x40C90A: call    NiParallelUpdateTaskManager_SubmitSignalTask; 3DTheft decode 2026-05-16: if manager exists, calls manager vfunc +0x60 with args (1, manager+0x19C, 0, 0), then clears byte +0x1B0. manager+0x19C is the observed embedded signal-task argument.
0x40C90F: push    3; dwMilliseconds
0x40C911: call    NiParallelUpdateTaskManager_WaitForSignal; [Verified] On semaphore timeout or pending-count boundary, sets bNiParallelWaitFallback_0B3F944 and waits indefinitely on g_NiParallelUpdateTaskManager's semaphore. BSTECreateTask_Run observes the byte and skips the wrapped Initialize call while fallback wait is active.
0x40C916: add     esp, 4
0x40C919: mov     ecx, edi; renderer
0x40C91B: call    ShadowPass; NiRenderer_Render invokes retail ShadowPass here. Normal world traversal follows later at 0x0040CCD3.
0x40C920: mov     eax, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40C925: mov     ebp, dword ptr renderer
0x40C92B: mov     ecx, dword ptr reference; this
0x40C931: mov     [esp+54h+sceneRoot], eax; MoonSugarEffect decode: NiRenderer_Render stores g_worldScenegraph in var_34 and g_worldScenegraph->cullingProcess (+0xE4) in var_30 for the world render path.
0x40C935: mov     eax, [eax+0E4h]
0x40C93B: push    1; firstPerson
0x40C93D: mov     [esp+58h+cullingProcess], eax
0x40C941: mov     [esp+58h+a1], ebp
0x40C945: call    PlayerCharacter_GetNodeByPerspective; Explicit perspective node selector. false tail-calls TESObjectREFR_GetNiNode; true returns PlayerCharacter.firstPersonNiNode at +0x5D0. Native flag type is bool.
0x40C94A: mov     cl, [eax+18h]
0x40C94D: and     cl, 1
0x40C950: mov     [esp+54h+var_2C], eax
0x40C954: mov     [esp+54h+var_3E], cl
0x40C958: jnz     short loc_40C95F
0x40C95A: or      word ptr [eax+18h], 1
0x40C95F: mov     eax, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40C964: cmp     word ptr [eax+0B6h], 0
0x40C96C: ja      short loc_40C972
0x40C96E: xor     eax, eax
0x40C970: jmp     short loc_40C97A
0x40C972: mov     ecx, [eax+0B0h]
0x40C978: mov     eax, [ecx]
0x40C97A: mov     ecx, dword ptr root
0x40C980: fldz
0x40C982: mov     edx, [eax+54h]
0x40C985: add     eax, 54h ; 'T'
0x40C988: add     ecx, 54h ; 'T'
0x40C98B: mov     [ecx], edx
0x40C98D: mov     edx, [eax+4]
0x40C990: mov     [ecx+4], edx
0x40C993: mov     eax, [eax+8]
0x40C996: push    0; a3
0x40C998: push    ecx
0x40C999: mov     [ecx+8], eax
0x40C99C: fstp    [esp+5Ch+var_5C]; a2
0x40C99F: mov     ecx, dword ptr root; this
0x40C9A5: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x40C9AA: mov     eax, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40C9AF: cmp     word ptr [eax+0B6h], 0
0x40C9B7: ja      short loc_40C9BD
0x40C9B9: xor     eax, eax
0x40C9BB: jmp     short loc_40C9C5
0x40C9BD: mov     ecx, [eax+0B0h]
0x40C9C3: mov     eax, [ecx]
0x40C9C5: mov     ecx, dword ptr unk_B333DC
0x40C9CB: fldz
0x40C9CD: mov     edx, [eax+54h]
0x40C9D0: add     eax, 54h ; 'T'
0x40C9D3: add     ecx, 54h ; 'T'
0x40C9D6: mov     [ecx], edx
0x40C9D8: mov     edx, [eax+4]
0x40C9DB: mov     [ecx+4], edx
0x40C9DE: mov     eax, [eax+8]
0x40C9E1: push    0; a3
0x40C9E3: push    ecx
0x40C9E4: mov     [ecx+8], eax
0x40C9E7: fstp    [esp+5Ch+var_5C]; a2
0x40C9EA: mov     ecx, dword ptr unk_B333DC; this
0x40C9F0: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x40C9F5: mov     ecx, [esp+54h+a2]; this
0x40C9F9: mov     esi, 2
0x40C9FE: cmp     ds:0B34FC0h, esi
0x40CA04: setnl   bl
0x40CA07: xor     edi, edi
0x40CA09: cmp     OB_RendererGlobalState_010201A0.pad_00D+98h, 0
0x40CA10: mov     [esp+54h+var_3F], bl
0x40CA14: mov     [esp+54h+texture], edi
0x40CA18: jz      loc_40CC35
0x40CA1E: mov     ecx, dword ptr OB_RendererGlobalState_010201A0.pad_0B3+4; this
0x40CA24: push    4; MoonSugarEffect decode: image-space source path requests default render target type 4 from BSTextureManager.
0x40CA26: push    ebp; a2
0x40CA27: call    BSTextureManager_GetDefaultRenderTarget; Oblivion default rendered-target acquisition. Resolves dimensions, D3D format, auxiliary value, and flags for the target type, then obtains a matching cached or newly created BSRenderedTexture.
0x40CA2C: test    bl, bl
0x40CA2E: mov     edi, eax
0x40CA30: mov     [esp+54h+texture], edi; MoonSugarEffect decode: var_38 now holds the full-scene BSRenderedTexture used as image-space source.
0x40CA34: jz      short loc_40CA4D
0x40CA36: mov     edx, [ebp+0]
0x40CA39: mov     eax, [edx+7Ch]
0x40CA3C: mov     ecx, ebp
0x40CA3E: call    eax
0x40CA40: push    eax; a2
0x40CA41: push    7; a1
0x40CA43: call    NiRenderer_BeginScene; Oblivion BeginScene wrapper used by per-source shadow rendering: establish SceneState2 only when no scene state is active, then push/begin the supplied target group with requested clear flags.
0x40CA48: jmp     loc_40CC59
0x40CA4D: mov     ecx, [edi+20h]
0x40CA50: test    ecx, ecx
0x40CA52: jz      short loc_40CA5F
0x40CA54: mov     edx, [ecx]
0x40CA56: mov     eax, [edx+4Ch]
0x40CA59: call    eax
0x40CA5B: mov     esi, eax
0x40CA5D: jmp     short loc_40CA61
0x40CA5F: xor     esi, esi
0x40CA61: mov     ecx, ebp
0x40CA63: call    sub_701640
0x40CA68: cmp     eax, esi
0x40CA6A: jnz     short loc_40CA8F
0x40CA6C: mov     ecx, [edi+20h]
0x40CA6F: test    ecx, ecx
0x40CA71: jz      short loc_40CA7E
0x40CA73: mov     edx, [ecx]
0x40CA75: mov     eax, [edx+50h]
0x40CA78: call    eax
0x40CA7A: mov     esi, eax
0x40CA7C: jmp     short loc_40CA80
0x40CA7E: xor     esi, esi
0x40CA80: mov     ecx, ebp
0x40CA82: call    sub_701670
0x40CA87: cmp     eax, esi
0x40CA89: jz      loc_40CC1F
0x40CA8F: mov     ecx, [edi+20h]
0x40CA92: test    ecx, ecx
0x40CA94: jz      short loc_40CAA1
0x40CA96: mov     edx, [ecx]
0x40CA98: mov     eax, [edx+4Ch]
0x40CA9B: call    eax
0x40CA9D: mov     esi, eax
0x40CA9F: jmp     short loc_40CAA3
0x40CAA1: xor     esi, esi
0x40CAA3: mov     ecx, ebp
0x40CAA5: call    sub_701640
0x40CAAA: test    eax, eax
0x40CAAC: mov     [esp+54h+var_24], eax
0x40CAB0: fild    [esp+54h+var_24]
0x40CAB4: jge     short loc_40CABC
0x40CAB6: fadd    ds:flt_A2FC78
0x40CABC: test    esi, esi
0x40CABE: fmul    ds:dbl_A30E68
0x40CAC4: mov     [esp+54h+var_24], esi
0x40CAC8: fild    [esp+54h+var_24]
0x40CACC: jge     short loc_40CAD4
0x40CACE: fadd    ds:dbl_A30E60
0x40CAD4: fdivp   st(1), st
0x40CAD6: fld1
0x40CAD8: fcom    st(1)
0x40CADA: fnstsw  ax
0x40CADC: fstp    st(1)
0x40CADE: test    ah, 41h
0x40CAE1: jnz     short loc_40CB2C
0x40CAE3: mov     ecx, [edi+20h]
0x40CAE6: fstp    st
0x40CAE8: test    ecx, ecx
0x40CAEA: jz      short loc_40CAF7
0x40CAEC: mov     edx, [ecx]
0x40CAEE: mov     eax, [edx+4Ch]
0x40CAF1: call    eax
0x40CAF3: mov     esi, eax
0x40CAF5: jmp     short loc_40CAF9
0x40CAF7: xor     esi, esi
0x40CAF9: mov     ecx, ebp
0x40CAFB: call    sub_701640
0x40CB00: test    eax, eax
0x40CB02: mov     [esp+54h+var_24], eax
0x40CB06: fild    [esp+54h+var_24]
0x40CB0A: jge     short loc_40CB12
0x40CB0C: fadd    ds:flt_A2FC78
0x40CB12: test    esi, esi
0x40CB14: fmul    ds:dbl_A30E68
0x40CB1A: mov     [esp+54h+var_24], esi
0x40CB1E: fild    [esp+54h+var_24]
0x40CB22: jge     short loc_40CB2A
0x40CB24: fadd    ds:dbl_A30E60
0x40CB2A: fdivp   st(1), st
0x40CB2C: mov     ecx, [edi+20h]
0x40CB2F: fstp    [esp+54h+var_28]
0x40CB33: test    ecx, ecx
0x40CB35: jz      short loc_40CB42
0x40CB37: mov     edx, [ecx]
0x40CB39: mov     eax, [edx+50h]
0x40CB3C: call    eax
0x40CB3E: mov     esi, eax
0x40CB40: jmp     short loc_40CB44
0x40CB42: xor     esi, esi
0x40CB44: mov     ecx, ebp
0x40CB46: call    sub_701670
0x40CB4B: test    eax, eax
0x40CB4D: mov     [esp+54h+var_24], eax
0x40CB51: fild    [esp+54h+var_24]
0x40CB55: jge     short loc_40CB5D
0x40CB57: fadd    ds:flt_A2FC78
0x40CB5D: test    esi, esi
0x40CB5F: fmul    ds:dbl_A30E68
0x40CB65: mov     [esp+54h+var_24], esi
0x40CB69: fild    [esp+54h+var_24]
0x40CB6D: jge     short loc_40CB75
0x40CB6F: fadd    ds:dbl_A30E60
0x40CB75: fdivp   st(1), st
0x40CB77: fld1
0x40CB79: fcom    st(1)
0x40CB7B: fnstsw  ax
0x40CB7D: fstp    st(1)
0x40CB7F: test    ah, 41h
0x40CB82: jnz     short loc_40CBCD
0x40CB84: mov     ecx, [edi+20h]
0x40CB87: fstp    st
0x40CB89: test    ecx, ecx
0x40CB8B: jz      short loc_40CB98
0x40CB8D: mov     edx, [ecx]
0x40CB8F: mov     eax, [edx+50h]
0x40CB92: call    eax
0x40CB94: mov     esi, eax
0x40CB96: jmp     short loc_40CB9A
0x40CB98: xor     esi, esi
0x40CB9A: mov     ecx, ebp
0x40CB9C: call    sub_701670
0x40CBA1: test    eax, eax
0x40CBA3: mov     [esp+54h+var_24], eax
0x40CBA7: fild    [esp+54h+var_24]
0x40CBAB: jge     short loc_40CBB3
0x40CBAD: fadd    ds:flt_A2FC78
0x40CBB3: test    esi, esi
0x40CBB5: fmul    ds:dbl_A30E68
0x40CBBB: mov     [esp+54h+var_24], esi
0x40CBBF: fild    [esp+54h+var_24]
0x40CBC3: jge     short loc_40CBCB
0x40CBC5: fadd    ds:dbl_A30E60
0x40CBCB: fdivp   st(1), st
0x40CBCD: mov     ecx, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40CBD3: fstp    [esp+54h+var_24]
0x40CBD7: fldz
0x40CBD9: mov     eax, [ecx+0DCh]
0x40CBDF: fst     [esp+54h+var_1C]
0x40CBE3: fld     [esp+54h+var_28]
0x40CBE7: mov     edx, [esp+54h+var_1C]
0x40CBEB: fstp    [esp+54h+var_18]
0x40CBEF: mov     [eax+110h], edx
0x40CBF5: fld     [esp+54h+var_24]
0x40CBF9: mov     ecx, [esp+54h+var_18]
0x40CBFD: fstp    [esp+54h+var_14]
0x40CC01: mov     [eax+114h], ecx
0x40CC07: mov     edx, [esp+54h+var_14]
0x40CC0B: mov     [eax+118h], edx
0x40CC11: fstp    [esp+54h+var_10]
0x40CC15: mov     ecx, [esp+54h+var_10]
0x40CC19: mov     [eax+11Ch], ecx
0x40CC1F: mov     ecx, edi; this
0x40CC21: call    BSRenderedTexture__UseTextureToRender; Oblivion BSRenderedTexture helper selects the render-target group associated with its inner rendered texture.
0x40CC26: push    eax; a2
0x40CC27: push    7; a1
0x40CC29: call    NiRenderer_BeginScene; Oblivion BeginScene wrapper used by per-source shadow rendering: establish SceneState2 only when no scene state is active, then push/begin the supplied target group with requested clear flags.
0x40CC2E: mov     esi, 2
0x40CC33: jmp     short loc_40CC59
0x40CC35: test    ecx, ecx
0x40CC37: jz      short loc_40CC50
0x40CC39: test    bl, bl
0x40CC3B: jnz     loc_40CA36
0x40CC41: call    BSRenderedTexture__UseTextureToRender; Oblivion BSRenderedTexture helper selects the render-target group associated with its inner rendered texture.
0x40CC46: push    eax; a2
0x40CC47: push    7; a1
0x40CC49: call    NiRenderer_BeginScene; Oblivion BeginScene wrapper used by per-source shadow rendering: establish SceneState2 only when no scene state is active, then push/begin the supplied target group with requested clear flags.
0x40CC4E: jmp     short loc_40CC59
0x40CC50: push    0; a2
0x40CC52: push    7; a1
0x40CC54: call    NiRenderer_BeginScene1; Oblivion BeginScene internal path: establishes SceneState1 when required and starts the supplied or default render-target group.
0x40CC59: add     esp, 8
0x40CC5C: cmp     byte ptr unk_B42CD8, 0
0x40CC63: jz      short loc_40CC73
0x40CC65: mov     byte ptr unk_B42CD8, 0
0x40CC6C: mov     byte ptr unk_B42CD9, 1
0x40CC73: mov     cl, byte_B02D38
0x40CC79: mov     dl, byte_B02D30
0x40CC7F: mov     eax, ds:0B333A0h
0x40CC84: mov     byte ptr unk_B42CDE, cl
0x40CC8A: mov     byte ptr unk_B42CDF, 1
0x40CC91: mov     byte ptr unk_B42CE0, dl
0x40CC97: mov     eax, [eax+5Ch]
0x40CC9A: xor     ebx, ebx
0x40CC9C: test    eax, eax
0x40CC9E: jz      short loc_40CCC0
0x40CCA0: cmp     [eax+28h], ebx
0x40CCA3: jz      short loc_40CCC0
0x40CCA5: cmp     dword ptr [eax+0DCh], 3
0x40CCAC: jz      short loc_40CCB6
0x40CCAE: cmp     [eax+0DCh], esi
0x40CCB4: jnz     short loc_40CCC0
0x40CCB6: mov     ebx, [eax+28h]
0x40CCB9: mov     ecx, ebx
0x40CCBB: call    sub_544AD0
0x40CCC0: mov     edx, [esp+54h+cullingProcess]
0x40CCC4: mov     ecx, [esp+54h+sceneRoot]
0x40CCC8: mov     eax, [ecx+0DCh]
0x40CCCE: push    0; visibleArray
0x40CCD0: push    edx; cullingProcess
0x40CCD1: push    ecx; sceneRoot
0x40CCD2: push    eax; camera
0x40CCD3: call    NiRenderer_CullAndRenderScene; Normal world traversal occurs after the earlier native ShadowPass call at 0x0040C91B.
0x40CCD8: add     esp, 10h
0x40CCDB: test    ebx, ebx
0x40CCDD: jz      short loc_40CCE8
0x40CCDF: push    1
0x40CCE1: mov     ecx, ebx
0x40CCE3: call    sub_546120
0x40CCE8: cmp     OB_RendererGlobalState_010201A0.pad_00D+98h, 0
0x40CCEF: mov     byte ptr unk_B42CDE, 0
0x40CCF6: mov     byte ptr unk_B42CDF, 0
0x40CCFD: jz      short loc_40CD73
0x40CCFF: cmp     OB_ShaderPassControl_010201A0.refractionPassEnabled, 0; [Verified] NiRenderer_Render gates its additional refraction render-target pass on OB_ShaderPassControl.refractionPassEnabled, after the renderer mode and capability checks.
0x40CD06: jz      short loc_40CD73
0x40CD08: cmp     dword ptr OB_RendererGlobalState_010201A0.shaderPackageVersion_le, esi
0x40CD0E: jl      short loc_40CD73
0x40CD10: mov     eax, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40CD15: mov     esi, [eax+0DCh]
0x40CD1B: mov     ecx, edi; this
0x40CD1D: mov     [esp+54h+var_3D], 1
0x40CD22: call    BSRenderedTexture__UseTextureToRender; Oblivion BSRenderedTexture helper selects the render-target group associated with its inner rendered texture.
0x40CD27: push    eax; a3
0x40CD28: push    esi; a2
0x40CD29: call    BSShaderAccumulator_GetOrCreateGlobal
0x40CD2E: mov     ecx, eax; this
0x40CD30: call    EndTargetGroup; MoonSugarEffect build 24: EndTargetGroup xref to Lighting30 selector. Calls 0x007FD260 for 0x159+ and 0x156+ special routes after setting up render targets; used only to label selector routes, not as plugin-owned rendering.
0x40CD35: test    al, al
0x40CD37: jz      short loc_40CD78
0x40CD39: cmp     [esp+54h+var_3E], 0
0x40CD3E: jnz     loc_40CECC
0x40CD44: call    BSShaderAccumulator_GetOrCreateGlobal
0x40CD49: cmp     byte ptr unk_B42CDB, 0
0x40CD50: jnz     short loc_40CD83
0x40CD52: cmp     [esp+54h+var_3F], 0
0x40CD57: jz      loc_40CFC3
0x40CD5D: mov     ecx, ebp
0x40CD5F: mov     edx, [ecx]
0x40CD61: mov     eax, [edx+7Ch]
0x40CD64: call    eax
0x40CD66: push    eax; a2
0x40CD67: push    0; a1
0x40CD69: call    NiRenderer_BeginScene; Oblivion BeginScene wrapper used by per-source shadow rendering: establish SceneState2 only when no scene state is active, then push/begin the supplied target group with requested clear flags.
0x40CD6E: add     esp, 8
0x40CD71: jmp     short loc_40CD83
0x40CD73: mov     [esp+54h+var_3D], 0
0x40CD78: cmp     [esp+54h+var_3E], 0
0x40CD7D: jnz     loc_40CECC
0x40CD83: call    BSShaderAccumulator_GetOrCreateGlobal
0x40CD88: cmp     byte ptr unk_B42CDB, 0
0x40CD8F: jnz     loc_40CECC
0x40CD95: mov     ecx, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40CD9B: mov     ebp, [ecx+0DCh]
0x40CDA1: mov     esi, [esp+54h+var_2C]
0x40CDA5: and     word ptr [esi+18h], 0FFFEh
0x40CDAB: push    0
0x40CDAD: call    GetShadowSceneNode
0x40CDB2: push    0
0x40CDB4: push    esi
0x40CDB5: call    sub_7C7050
0x40CDBA: add     esp, 0Ch
0x40CDBD: call    BSShaderAccumulator_GetOrCreateGlobal
0x40CDC2: mov     edx, [esp+54h+a1]
0x40CDC6: mov     edi, [edx+8]
0x40CDC9: test    edi, edi
0x40CDCB: mov     esi, eax
0x40CDCD: mov     [esp+54h+var_24], edi
0x40CDD1: jz      short loc_40CDDD
0x40CDD3: lea     eax, [edi+4]
0x40CDD6: push    eax; lpAddend
0x40CDD7: call    ds:InterlockedIncrement
0x40CDDD: mov     eax, [esp+54h+a1]
0x40CDE1: mov     ecx, 1
0x40CDE6: cmp     [eax+200h], ecx
0x40CDEC: mov     [esp+54h+var_4], 0
0x40CDF4: jz      short loc_40CDFE
0x40CDF6: cmp     [eax+204h], ecx
0x40CDFC: jnz     short loc_40CE16
0x40CDFE: cmp     [eax+20Ch], cl
0x40CE04: jnz     short loc_40CE16
0x40CE06: mov     ecx, eax
0x40CE08: mov     edx, [ecx]
0x40CE0A: mov     eax, [edx+13Ch]
0x40CE10: push    4
0x40CE12: push    0
0x40CE14: call    eax
0x40CE16: mov     ecx, [esp+54h+a1]; this
0x40CE1A: push    esi; a2
0x40CE1B: call    NiDX9Renderer__SetShaderAccumulator;
0x40CE20: mov     edx, [esi]
0x40CE22: mov     eax, [edx+4Ch]
0x40CE25: push    ebp
0x40CE26: mov     ecx, esi
0x40CE28: call    eax
0x40CE2A: mov     ecx, [esp+54h+sceneRoot]
0x40CE2E: mov     edx, [esp+54h+cullingProcess]
0x40CE32: push    0; visibleArray
0x40CE34: mov     byte ptr [esi+21E2h], 1
0x40CE3B: mov     eax, [ecx+0DCh]
0x40CE41: mov     ecx, [esp+58h+var_2C]
0x40CE45: push    edx; cullingProcess
0x40CE46: push    ecx; sceneRoot
0x40CE47: push    eax; camera
0x40CE48: call    NiRenderer_CullAndRenderScene; MoonSugarEffect build 15: patched by plugin to RenderWorldCameraSwayHook for second main-world accumulator pass. Same cdecl stack as native sub_70C0B0; caller still executes add esp,10h.
0x40CE4D: add     esp, 10h
0x40CE50: test    ebx, ebx
0x40CE52: jz      short loc_40CE5D
0x40CE54: push    2
0x40CE56: mov     ecx, ebx
0x40CE58: call    sub_546120
0x40CE5D: mov     edx, [esi]
0x40CE5F: mov     eax, [edx+50h]
0x40CE62: mov     ecx, esi
0x40CE64: mov     byte ptr [esi+21E1h], 1
0x40CE6B: call    eax
0x40CE6D: mov     ecx, [esp+54h+a1]; this
0x40CE71: push    edi; a2
0x40CE72: mov     byte ptr [esi+21E2h], 0
0x40CE79: call    NiDX9Renderer__SetShaderAccumulator;
0x40CE7E: cmp     [esp+54h+var_3D], 0
0x40CE83: jz      short loc_40CEA8
0x40CE85: mov     ecx, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40CE8B: mov     esi, [ecx+0DCh]
0x40CE91: mov     ecx, [esp+54h+texture]; this
0x40CE95: call    BSRenderedTexture__UseTextureToRender; Oblivion BSRenderedTexture helper selects the render-target group associated with its inner rendered texture.
0x40CE9A: push    eax; a3
0x40CE9B: push    esi; a2
0x40CE9C: call    BSShaderAccumulator_GetOrCreateGlobal
0x40CEA1: mov     ecx, eax; this
0x40CEA3: call    EndTargetGroup; MoonSugarEffect build 24: EndTargetGroup xref to Lighting30 selector. Calls 0x007FD260 for 0x159+ and 0x156+ special routes after setting up render targets; used only to label selector routes, not as plugin-owned rendering.
0x40CEA8: test    edi, edi
0x40CEAA: mov     [esp+54h+var_4], 0FFFFFFFFh
0x40CEB2: jz      short loc_40CECC
0x40CEB4: lea     edx, [edi+4]
0x40CEB7: push    edx; lpAddend
0x40CEB8: call    ds:InterlockedDecrement
0x40CEBE: test    eax, eax
0x40CEC0: jnz     short loc_40CECC
0x40CEC2: mov     eax, [edi]
0x40CEC4: mov     edx, [eax]
0x40CEC6: push    1
0x40CEC8: mov     ecx, edi
0x40CECA: call    edx
0x40CECC: test    ebx, ebx
0x40CECE: jz      short loc_40CED7
0x40CED0: mov     ecx, ebx
0x40CED2: call    sub_544AF0
0x40CED7: cmp     OB_RendererGlobalState_010201A0.pad_00D+98h, 0
0x40CEDE: jz      loc_40CFDC; DeferredRendering image-space gate: ProcessImageSpaceShader only runs when ImageSpaceEffectEnabled is true. Plugin forces this global with UseHDR so Bloom+HDR list composition can execute.
0x40CEE4: mov     ecx, dword ptr renderer
0x40CEEA: cmp     dword ptr [ecx+200h], 0
0x40CEF1: jnz     short loc_40CEFC
0x40CEF3: cmp     dword ptr [ecx+204h], 0
0x40CEFA: jz      short loc_40CF07
0x40CEFC: call    NiRenderer_EndScene; Oblivion EndScene wrapper: drain the complete render-target stack, end the active group, and end the D3D scene only when this wrapper owned SceneState2.
0x40CF01: mov     ecx, dword ptr renderer
0x40CF07: cmp     [esp+54h+var_3F], 0
0x40CF0C: jz      short loc_40CF5F
0x40CF0E: mov     eax, [ecx]
0x40CF10: mov     edx, [eax+7Ch]
0x40CF13: call    edx
0x40CF15: mov     edx, [eax]
0x40CF17: mov     ecx, eax
0x40CF19: mov     eax, [edx+80h]
0x40CF1F: push    0
0x40CF21: call    eax
0x40CF23: mov     ecx, [esp+54h+texture]; this
0x40CF27: mov     esi, eax
0x40CF29: call    BSRenderedTexture__GetInnerTexture
0x40CF2E: mov     edx, [eax]
0x40CF30: mov     ecx, eax
0x40CF32: mov     eax, [edx+54h]
0x40CF35: call    eax
0x40CF37: mov     ecx, [eax+10h]
0x40CF3A: mov     ecx, [ecx+0Ch]
0x40CF3D: mov     edx, dword ptr renderer
0x40CF43: mov     eax, [edx+280h]
0x40CF49: mov     esi, [esi+0Ch]
0x40CF4C: mov     edx, [eax]
0x40CF4E: push    0
0x40CF50: push    0
0x40CF52: push    ecx
0x40CF53: push    0
0x40CF55: push    esi
0x40CF56: push    eax
0x40CF57: mov     eax, [edx+88h]
0x40CF5D: call    eax
0x40CF5F: mov     ecx, [esp+54h+a2]
0x40CF63: mov     edx, [esp+54h+texture]
0x40CF67: mov     eax, [esp+54h+a1]
0x40CF6B: push    ecx; a3
0x40CF6C: push    edx; a2
0x40CF6D: push    eax; a1
0x40CF6E: call    ProcessImageSpaceShader; MoonSugarEffect hook site: ProcessImageSpaceShader(renderer, var_38 source, a2 destination). This is a full-frame color post-process input, not per-object data.
0x40CF73: fldz
0x40CF75: mov     ecx, g_WorldSceneReceiverRoot; MoonSugarEffect decode: after image-space processing, camera viewport fields at +0x110..+0x11C are reset to full viewport values.
0x40CF7B: fst     [esp+60h+var_1C]
0x40CF7F: fld1
0x40CF81: mov     eax, [ecx+0DCh]
0x40CF87: mov     edx, [esp+60h+var_1C]
0x40CF8B: fst     [esp+60h+var_18]
0x40CF8F: fstp    [esp+60h+var_14]
0x40CF93: mov     [eax+110h], edx
0x40CF99: mov     ecx, [esp+60h+var_18]
0x40CF9D: mov     edx, [esp+60h+var_14]
0x40CFA1: mov     [eax+114h], ecx
0x40CFA7: fstp    [esp+60h+var_10]
0x40CFAB: mov     ecx, [esp+60h+var_10]
0x40CFAF: mov     [eax+118h], edx
0x40CFB5: add     esp, 0Ch
0x40CFB8: mov     [eax+11Ch], ecx
0x40CFBE: jmp     loc_40D045
0x40CFC3: mov     ecx, [esp+54h+texture]; this
0x40CFC7: call    BSRenderedTexture__UseTextureToRender; Oblivion BSRenderedTexture helper selects the render-target group associated with its inner rendered texture.
0x40CFCC: push    eax; a2
0x40CFCD: push    0; a1
0x40CFCF: call    NiRenderer_BeginScene; Oblivion BeginScene wrapper used by per-source shadow rendering: establish SceneState2 only when no scene state is active, then push/begin the supplied target group with requested clear flags.
0x40CFD4: add     esp, 8
0x40CFD7: jmp     loc_40CD83
0x40CFDC: mov     edi, [esp+54h+a2]
0x40CFE0: test    edi, edi
0x40CFE2: jz      short loc_40D045
0x40CFE4: call    NiRenderer_EndScene; Oblivion EndScene wrapper: drain the complete render-target stack, end the active group, and end the D3D scene only when this wrapper owned SceneState2.
0x40CFE9: cmp     [esp+54h+var_3F], 0
0x40CFEE: jz      short loc_40D045
0x40CFF0: mov     ecx, dword ptr renderer
0x40CFF6: mov     edx, [ecx]
0x40CFF8: mov     eax, [edx+7Ch]
0x40CFFB: call    eax
0x40CFFD: mov     edx, [eax]
0x40CFFF: mov     ecx, eax
0x40D001: mov     eax, [edx+80h]
0x40D007: push    0
0x40D009: call    eax
0x40D00B: mov     ecx, edi; this
0x40D00D: mov     esi, eax
0x40D00F: call    BSRenderedTexture__GetInnerTexture
0x40D014: mov     edx, [eax]
0x40D016: mov     ecx, eax
0x40D018: mov     eax, [edx+54h]
0x40D01B: call    eax
0x40D01D: mov     ecx, [eax+10h]
0x40D020: mov     ecx, [ecx+0Ch]
0x40D023: mov     edx, dword ptr renderer
0x40D029: mov     eax, [edx+280h]
0x40D02F: mov     esi, [esi+0Ch]
0x40D032: mov     edx, [eax]
0x40D034: push    0
0x40D036: push    0
0x40D038: push    ecx
0x40D039: push    0
0x40D03B: push    esi
0x40D03C: push    eax
0x40D03D: mov     eax, [edx+88h]
0x40D043: call    eax
0x40D045: mov     eax, [esp+54h+texture]
0x40D049: test    eax, eax
0x40D04B: jz      short loc_40D059
0x40D04D: mov     ecx, dword ptr OB_RendererGlobalState_010201A0.pad_0B3+4; this
0x40D053: push    eax; texture
0x40D054: call    BSTextureManager__ReturnRenderedTexture; General BSTextureManager rendered-texture return path, not canopy-specific: locates the texture's pool record, performs manager return bookkeeping, and removes the record from the borrowed/owned list. Used by water, HDR, menus, canopy shadows and shadow rendering.
0x40D059: mov     esi, dword ptr g_NiParallelUpdateTaskManager; Verified pointer, not a universal threading-enable boolean: 404D60 waits on manager+198 and adjusts counter+190; 404DD0 reads pending flag+1B0. NiRenderer_Render checks it at 40C8F7/40D059; main update checks it at 40DB4E/40DEC6. Null excludes this parallel update manager, but does not prove all IO, resource-reference, pool or external writer exclusion for a DX11 bucket transaction.
0x40D05F: test    esi, esi
0x40D061: jz      short loc_40D080
0x40D063: add     esi, 190h
0x40D069: push    esi; lpAddend
0x40D06A: call    ds:InterlockedIncrement
0x40D070: mov     ecx, [esi+8]
0x40D073: push    0; lpPreviousCount
0x40D075: push    1; lReleaseCount
0x40D077: push    ecx; hSemaphore
0x40D078: call    ds:ReleaseSemaphore
0x40D07E: mov     edx, [esi]
0x40D080: cmp     dword ptr ds:0B42CF4h, 0
0x40D087: jz      loc_40D136
0x40D08D: mov     ecx, dword ptr unk_B3339C
0x40D093: test    ecx, ecx
0x40D095: jz      short loc_40D0A7
0x40D097: mov     esi, ecx
0x40D099: call    sub_494F30
0x40D09E: push    esi
0x40D09F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x40D0A4: add     esp, 4
0x40D0A7: push    20h ; ' '; Size
0x40D0A9: call    FormHeapAlloc
0x40D0AE: add     esp, 4
0x40D0B1: mov     [esp+54h+a2], eax
0x40D0B5: test    eax, eax
0x40D0B7: mov     [esp+54h+var_4], 1
0x40D0BF: jz      short loc_40D0F6
0x40D0C1: mov     ecx, [esp+54h+var_20]
0x40D0C5: mov     edx, [ecx+8]
0x40D0C8: mov     esi, [ecx+0Ch]
0x40D0CB: mov     ecx, ds:0B42CF4h
0x40D0D1: push    258h; nHeight
0x40D0D6: push    320h; nWidth
0x40D0DB: push    80000000h; Y
0x40D0E0: push    80000000h; X
0x40D0E5: push    offset aRenderPasses; "Render Passes"
0x40D0EA: push    ecx; int
0x40D0EB: push    edx; int
0x40D0EC: push    esi; int
0x40D0ED: mov     ecx, eax
0x40D0EF: call    ShowDetectorWindow
0x40D0F4: jmp     short loc_40D0F8
0x40D0F6: xor     eax, eax
0x40D0F8: mov     dword ptr unk_B3339C, eax
0x40D0FD: mov     eax, ds:0B42CF4h
0x40D102: test    eax, eax
0x40D104: mov     [esp+54h+var_4], 0FFFFFFFFh
0x40D10C: jz      short loc_40D136
0x40D10E: mov     esi, eax
0x40D110: add     eax, 4
0x40D113: push    eax; lpAddend
0x40D114: call    ds:InterlockedDecrement
0x40D11A: test    eax, eax
0x40D11C: jnz     short loc_40D12C
0x40D11E: test    esi, esi
0x40D120: jz      short loc_40D12C
0x40D122: mov     edx, [esi]
0x40D124: mov     eax, [edx]
0x40D126: push    1
0x40D128: mov     ecx, esi
0x40D12A: call    eax
0x40D12C: mov     dword ptr ds:0B42CF4h, 0
0x40D136: mov     byte ptr unk_B33395, 0
0x40D13D: mov     ecx, [esp+54h+var_C]
0x40D141: mov     large fs:0, ecx
0x40D148: pop     ecx
0x40D149: pop     edi
0x40D14A: pop     esi
0x40D14B: pop     ebp
0x40D14C: pop     ebx
0x40D14D: add     esp, 40h
0x40D150: retn    4
0x9AA150: lea     ecx, [ebp-24h]; slot
0x9AA153: jmp     NiPointerSlot_Release
0x9AA158: mov     eax, [ebp+4]
0x9AA15B: push    eax
0x9AA15C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AA161: pop     ecx
0x9AA162: retn
0x9AA163: mov     edx, [esp+arg_4]
0x9AA167: lea     eax, [edx-44h]
0x9AA16A: mov     ecx, [edx-48h]
0x9AA16D: xor     ecx, eax
0x9AA16F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA174: mov     eax, offset stru_AD7178
0x9AA179: jmp     ___CxxFrameHandler3
