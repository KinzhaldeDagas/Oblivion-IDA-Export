0x7C6AE0: push    0FFFFFFFFh; Find or create a native full-list ShadowSceneLight for a backing NiLight. The third argument is the proved trackBackingPosition boolean, not a ShadowSceneLight pointer or admission selector.
0x7C6AE2: push    offset SEH_7C6AE0
0x7C6AE7: mov     eax, large fs:0
0x7C6AED: push    eax
0x7C6AEE: push    ecx
0x7C6AEF: push    ebx
0x7C6AF0: push    ebp
0x7C6AF1: push    esi
0x7C6AF2: push    edi
0x7C6AF3: mov     eax, ds:0B30AACh
0x7C6AF8: xor     eax, esp
0x7C6AFA: push    eax
0x7C6AFB: lea     eax, [esp+24h+var_C]
0x7C6AFF: mov     large fs:0, eax
0x7C6B05: mov     ebp, ecx
0x7C6B07: mov     [esp+24h+var_10], ebp
0x7C6B0B: mov     edi, [esp+24h+backingLight]
0x7C6B0F: push    edi; backingLight
0x7C6B10: call    ShadowSceneNode_FindFullLightBySource; MEF PERF 2026-10-02: PERF-9: repeated FindOrCreate admissions rescan all prior full-list sources. Always retain final receiver reconcile7C6C0C, existing-entry +104 update, and creation/refcount side effects. An index cannot turn successful FindOrCreate calls into an early return.
0x7C6B15: mov     esi, eax
0x7C6B17: test    esi, esi
0x7C6B19: jz      short loc_7C6B2A
0x7C6B1B: mov     al, [esp+24h+trackBackingPosition]
0x7C6B1F: mov     [esi+104h], al; Update trackBackingPosition on an existing full-list entry.
0x7C6B25: jmp     loc_7C6C09
0x7C6B2A: push    220h; Size
0x7C6B2F: call    FormHeapAlloc
0x7C6B34: add     esp, 4
0x7C6B37: mov     [esp+24h+backingLight], eax
0x7C6B3B: test    eax, eax
0x7C6B3D: mov     [esp+24h+var_4], 0
0x7C6B45: jz      short loc_7C6B52
0x7C6B47: mov     ecx, eax; this
0x7C6B49: call    ??0ShadowSceneLight@@QAE@XZ; ShadowSceneLight constructor. Initializes projection/transition/status fields, object/receiver list ownership, map/camera state, and source pointers.
0x7C6B4E: mov     esi, eax; Constructor callsite for an ordinary source-light full-list entry; immediate setup writes +0x104, +0x100, list ownership, and optionally +0x114 only.
0x7C6B50: jmp     short loc_7C6B54
0x7C6B52: xor     esi, esi
0x7C6B54: mov     cl, [esp+24h+trackBackingPosition]
0x7C6B58: mov     [esi+104h], cl; Store trackBackingPosition before binding a newly constructed entry's backing light.
0x7C6B5E: or      ebx, 0FFFFFFFFh
0x7C6B61: push    edi; backingLight
0x7C6B62: mov     ecx, esi; self
0x7C6B64: mov     [esp+28h+var_4], ebx
0x7C6B68: call    ShadowSceneLight_SetBackingLight; SetBackingLight seeds cached source position immediately when trackBackingPosition is true.
0x7C6B6D: lea     edi, [esi+4]
0x7C6B70: push    edi; lpAddend
0x7C6B71: mov     dword ptr [esp+28h+trackBackingPosition], esi
0x7C6B75: call    dword ptr ds:0A28078h
0x7C6B7B: lea     edx, [esp+24h+trackBackingPosition]
0x7C6B7F: push    edx
0x7C6B80: lea     ecx, [ebp+0E4h]
0x7C6B86: mov     [esp+28h+var_4], 1
0x7C6B8E: call    NiTRefPointerList__AddTail; MEF LARGE PERF 2026-09-08: PERF-6 population route: ordinary full-light admission finds by backing source; on miss constructs ShadowSceneLight and adds to full list. This examined body has no list-count budget check. Callers include LIGH reference configuration, attached lights, light effects and scene point-light traversal; this is distinct from the20-actor candidate list.
0x7C6B93: push    edi; lpAddend
0x7C6B94: mov     [esp+28h+var_4], ebx
0x7C6B98: call    dword ptr ds:0A2807Ch
0x7C6B9E: test    eax, eax
0x7C6BA0: jnz     short loc_7C6BAC
0x7C6BA2: mov     eax, [esi]
0x7C6BA4: mov     edx, [eax]
0x7C6BA6: push    1
0x7C6BA8: mov     ecx, esi
0x7C6BAA: call    edx
0x7C6BAC: cmp     byte ptr [esi+0F4h], 0
0x7C6BB3: jz      short loc_7C6C09
0x7C6BB5: cmp     byte ptr [esi+0F5h], 0
0x7C6BBC: mov     ecx, ds:0B42F50h; this
0x7C6BC2: jz      short loc_7C6BFA
0x7C6BC4: mov     eax, ds:0B43104h
0x7C6BC9: push    16h; a3
0x7C6BCB: push    eax; a2
0x7C6BCC: call    BSTextureManager_GetDefaultRenderTarget; Oblivion default rendered-target acquisition. Resolves dimensions, D3D format, auxiliary value, and flags for the target type, then obtains a matching cached or newly created BSRenderedTexture.
0x7C6BD1: mov     ebx, eax
0x7C6BD3: mov     ecx, ebx
0x7C6BD5: call    BSRenderedTexture__UseTextureToRender; Oblivion BSRenderedTexture helper selects the render-target group associated with its inner rendered texture.
0x7C6BDA: mov     ecx, ds:0B42F50h; this
0x7C6BE0: mov     ebp, eax
0x7C6BE2: mov     edi, [ebp+0]
0x7C6BE5: add     edi, 6Ch ; 'l'
0x7C6BE8: call    BSTextureManager__GetOrCreateShadowDepthStencil; Oblivion shadow depth-stencil allocator. Ensures a square depth-stencil at least ShadowSurfaceRes, deriving compatible renderer surface data from the shadow target format before creation.
0x7C6BED: mov     edx, [edi]
0x7C6BEF: push    eax
0x7C6BF0: mov     ecx, ebp
0x7C6BF2: call    edx
0x7C6BF4: mov     ebp, [esp+24h+var_10]
0x7C6BF8: jmp     short loc_7C6C01
0x7C6BFA: call    BSTextureManager__BorrowFrustumShadowTexture; Oblivion frustum-shadow pool borrow. Removes the head BSRenderedTexture from the unused shadowMaps list and appends the same refcounted object to the used pool.
0x7C6BFF: mov     ebx, eax
0x7C6C01: push    ebx; shadowMap
0x7C6C02: mov     ecx, esi; self
0x7C6C04: call    ShadowSceneLight_SetShadowMap; Strong-own the supplied frame-local shadow map at ShadowSceneLight+0x114, releasing any previous map reference.
0x7C6C09: push    esi; light
0x7C6C0A: mov     ecx, ebp; self
0x7C6C0C: call    ShadowSceneNode_ReconcileSourceLightReceivers; Every find/create call concludes by reconciling the source light's receiver associations; this is full-light lifecycle, not direct caster admission.
0x7C6C11: mov     eax, esi
0x7C6C13: mov     ecx, dword ptr [esp+24h+var_C]
0x7C6C17: mov     large fs:0, ecx
0x7C6C1E: pop     ecx
0x7C6C1F: pop     edi
0x7C6C20: pop     esi
0x7C6C21: pop     ebp
0x7C6C22: pop     ebx
0x7C6C23: add     esp, 10h
0x7C6C26: retn    8
0x9CE700: mov     eax, [ebp+4]
0x9CE703: push    eax
0x9CE704: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CE709: pop     ecx
0x9CE70A: retn
0x9CE70B: lea     ecx, [ebp+8]; slot
0x9CE70E: jmp     NiPointerSlot_Release
0x9CE713: mov     edx, dword ptr [esp+trackBackingPosition]
0x9CE717: lea     eax, [edx-14h]
0x9CE71A: mov     ecx, [edx-18h]
0x9CE71D: xor     ecx, eax
0x9CE71F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CE724: mov     eax, offset stru_AF76A4
0x9CE729: jmp     ___CxxFrameHandler3
