0x40D4D0: sub     esp, 10Ch; [Controller decode 2026-07-09] Non-player QueryControlState consumer: special control 31 SysRq/PrintScreen screenshot edge.
0x40D4D6: mov     eax, ___security_cookie
0x40D4DB: xor     eax, esp
0x40D4DD: mov     [esp+10Ch+var_4], eax
0x40D4E4: push    ebx
0x40D4E5: push    ebp
0x40D4E6: push    edi
0x40D4E7: push    3
0x40D4E9: mov     ebp, ecx
0x40D4EB: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x40D4F0: add     esp, 4
0x40D4F3: call    sub_7A99A0
0x40D4F8: mov     edi, dword ptr renderer
0x40D4FE: xor     ebx, ebx
0x40D500: cmp     ds:0B34FA4h, bl
0x40D506: jz      short loc_40D50D
0x40D508: call    Renderer_ApplyPendingGammaRamp; Verified in OblivionNew 2026-09-26: copies requested gamma B06C2C to fGamma INI value B06F64, clears B34FA4, builds 256 identical RGB WORD entries round(pow(i/255,gamma)*65535), then calls device vtable +54 (IDirect3DDevice9::SetGammaRamp slot21), swapchain0, flags1 (D3DSGR_CALIBRATE). Device is loaded from renderer +280; renderer pointer at B350D8. Constants: A3DDD8=255, A3DDD0=65535, A2FAA0=0.5. EAX return in decompiler is not an API HRESULT: SetGammaRamp is void.
0x40D50D: mov     ecx, dword ptr unk_B3A6B0
0x40D513: push    2
0x40D515: call    sub_572E30
0x40D51A: test    al, al
0x40D51C: jz      loc_40D5F8
0x40D522: mov     eax, dword ptr unk_B33418
0x40D527: add     eax, 1
0x40D52A: mov     dword ptr unk_B33418, eax
0x40D52F: sub     eax, 1
0x40D532: jz      loc_40D5DE
0x40D538: sub     eax, 9
0x40D53B: jnz     loc_40D5FE
0x40D541: mov     ecx, dword ptr unk_B3A6B0
0x40D547: push    ebx
0x40D548: push    2
0x40D54A: call    sub_572EC0
0x40D54F: mov     eax, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x40D554: and     dword ptr [eax+18h], 0FFFFDFFFh
0x40D55B: mov     eax, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x40D560: mov     ecx, [eax+18h]
0x40D563: shr     ecx, 0Fh
0x40D566: test    cl, 1
0x40D569: jz      short loc_40D57D
0x40D56B: and     dword ptr [eax+18h], 0FFFF7FFFh
0x40D572: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x40D578: call    sub_466B70
0x40D57D: mov     eax, dword ptr texture
0x40D582: cmp     eax, ebx
0x40D584: jz      short loc_40D5D6
0x40D586: mov     ecx, dword ptr OB_RendererGlobalState_010201A0.pad_0B3+4; this
0x40D58C: push    esi
0x40D58D: push    eax; texture
0x40D58E: call    BSTextureManager__ReturnRenderedTexture; General BSTextureManager rendered-texture return path, not canopy-specific: locates the texture's pool record, performs manager return bookkeeping, and removes the record from the borrowed/owned list. Used by water, HDR, menus, canopy shadows and shadow rendering.
0x40D593: mov     esi, dword ptr texture
0x40D599: cmp     esi, ebx
0x40D59B: jz      short loc_40D5BF
0x40D59D: lea     edx, [esi+4]
0x40D5A0: push    edx; lpAddend
0x40D5A1: call    ds:InterlockedDecrement
0x40D5A7: test    eax, eax
0x40D5A9: jnz     short loc_40D5B9
0x40D5AB: cmp     esi, ebx
0x40D5AD: jz      short loc_40D5B9
0x40D5AF: mov     eax, [esi]
0x40D5B1: mov     edx, [eax]
0x40D5B3: push    1
0x40D5B5: mov     ecx, esi
0x40D5B7: call    edx
0x40D5B9: mov     dword ptr texture, ebx
0x40D5BF: cmp     byte ptr unk_B42D54, bl
0x40D5C5: pop     esi
0x40D5C6: jz      short loc_40D5D0
0x40D5C8: fldz
0x40D5CA: fstp    dword ptr unk_B42D50
0x40D5D0: mov     byte ptr unk_B42D54, bl
0x40D5D6: mov     byte ptr unk_B33397, bl
0x40D5DC: jmp     short loc_40D606
0x40D5DE: mov     ecx, ds:0B333A0h
0x40D5E4: push    ebx
0x40D5E5: push    ebx
0x40D5E6: push    ebx
0x40D5E7: call    sub_440AF0
0x40D5EC: mov     ecx, (offset qword_B3BB2C+1D4h)
0x40D5F1: call    sub_674500
0x40D5F6: jmp     short loc_40D5FE
0x40D5F8: mov     dword ptr unk_B33418, ebx
0x40D5FE: cmp     byte ptr unk_B33397, bl
0x40D604: jnz     short loc_40D662
0x40D606: call    GetOpenedMenuCode
0x40D60B: cmp     eax, 414h
0x40D610: jz      short loc_40D662
0x40D612: mov     ecx, dword ptr reference
0x40D618: mov     eax, [ecx]
0x40D61A: mov     edx, [eax+154h]
0x40D620: call    edx
0x40D622: test    eax, eax
0x40D624: jz      short loc_40D662
0x40D626: mov     ecx, dword ptr unk_B3A6B0
0x40D62C: push    2
0x40D62E: call    sub_572DF0
0x40D633: test    al, al
0x40D635: jnz     short loc_40D662
0x40D637: mov     eax, ds:0B333A0h
0x40D63C: cmp     [eax+34h], ebx
0x40D63F: jnz     short loc_40D655
0x40D641: mov     ecx, [eax+8]
0x40D644: cmp     ecx, ebx
0x40D646: jz      short loc_40D655
0x40D648: cmp     g_bCanopyShadowMapPending, bl
0x40D64E: jz      short loc_40D655
0x40D650: call    ShadowCanopyPass; Outer frame path invokes ShadowCanopyPass when the native canopy shadow-map latch is pending.
0x40D655: push    ebx; a2
0x40D656: mov     ecx, ebp; this
0x40D658: call    NiRenderer_Render; MoonSugarEffect decode: normal gameplay calls NiRenderer_Render(..., 0) before later interface/menu/cursor MiscPass work.
0x40D65D: jmp     loc_40D6F1
0x40D662: cmp     dword ptr texture, ebx
0x40D668: jz      loc_40D6F1
0x40D66E: cmp     OB_RendererGlobalState_010201A0.pad_00D+98h, bl
0x40D674: jz      short loc_40D6B0
0x40D676: mov     ecx, dword ptr unk_B3A6B0
0x40D67C: push    2
0x40D67E: call    sub_572E70
0x40D683: test    al, al
0x40D685: jz      short loc_40D68B
0x40D687: push    0Ch
0x40D689: jmp     short loc_40D68D
0x40D68B: push    19h; a1
0x40D68D: call    GetShaderDefinition; DeferredRendering HDR+Bloom dependency: shader definition IDs 0x07=Blur/Bloom, 0x08=HDR, 0x0C=Copy fallback. Oblivion behavior observed here; both post-processes are forced by list composition, not Fallout naming.
0x40D692: add     esp, 4
0x40D695: cmp     eax, ebx
0x40D697: jz      short loc_40D6F1
0x40D699: mov     ecx, dword ptr texture
0x40D69F: mov     edx, [eax+4]
0x40D6A2: push    ebx; a4
0x40D6A3: push    ecx; a3
0x40D6A4: push    edi; a2
0x40D6A5: push    edx; a1
0x40D6A6: call    sub_7B4900; MoonSugarEffect decode: thin wrapper around sub_803570; applies one BSShader through global imageSpaceShaderList fullscreen quad, used by menu/water/canopy/misc paths.
0x40D6AB: add     esp, 10h
0x40D6AE: jmp     short loc_40D6F1
0x40D6B0: push    ebx; a2
0x40D6B1: push    7; a1
0x40D6B3: call    NiRenderer_BeginScene1; Oblivion BeginScene internal path: establishes SceneState1 when required and starts the supplied or default render-target group.
0x40D6B8: mov     eax, 1
0x40D6BD: add     esp, 8
0x40D6C0: cmp     [edi+200h], eax
0x40D6C6: jz      short loc_40D6D0
0x40D6C8: cmp     [edi+204h], eax
0x40D6CE: jnz     short loc_40D6E5
0x40D6D0: cmp     [edi+20Ch], al
0x40D6D6: jnz     short loc_40D6E5
0x40D6D8: mov     eax, [edi]
0x40D6DA: mov     edx, [eax+144h]
0x40D6E0: push    ebx
0x40D6E1: mov     ecx, edi
0x40D6E3: call    edx
0x40D6E5: mov     ecx, ds:0B333ECh; this
0x40D6EB: push    edi
0x40D6EC: call    sub_709C60; MoonSugarEffect decode: NiScreenElements render thunk. Callers push NiDX9Renderer on the stack, then this thunk jumps to object vtable +0x84.
0x40D6F1: call    sub_7B8400
0x40D6F6: push    ebx
0x40D6F7: call    sub_579260
0x40D6FC: mov     ecx, [ebp+20h]; this
0x40D6FF: add     esp, 4
0x40D702: push    1; a3
0x40D704: push    1Fh; a2
0x40D706: call    InputGlobals__QueryControlState; TES4 authoritative: QueryControlState(control, query) checks up to keyboard/mouse/joystick bindings for a logical control. Query modes follow the underlying input helpers: 0 held, 1 pressed this frame, 2 released this frame, 3 changed.
0x40D70B: test    eax, eax
0x40D70D: jz      loc_40D7BD
0x40D713: mov     ecx, [ebp+20h]; this
0x40D716: push    ebx; a3
0x40D717: push    9Dh; a2
0x40D71C: call    InputGlobals__QueryKeyboardState; TES4 authoritative keyboard query modes: 0=current down, 1=previous up/current down, 2=current up/previous down, 3=state changed.
0x40D721: test    eax, eax
0x40D723: mov     al, byte ptr unk_B333B9
0x40D728: jnz     short loc_40D73C
0x40D72A: cmp     al, bl
0x40D72C: jnz     short loc_40D73E
0x40D72E: push    ebx
0x40D72F: call    TakeScreenshot;
0x40D734: add     esp, 4
0x40D737: jmp     loc_40D7BD
0x40D73C: cmp     al, bl
0x40D73E: setz    al
0x40D741: cmp     al, bl
0x40D743: mov     byte ptr unk_B333B9, al
0x40D748: jz      short loc_40D7B5
0x40D74A: mov     eax, dword_B02D58
0x40D74F: add     eax, 1
0x40D752: push    eax
0x40D753: mov     dword_B02D58, eax
0x40D758: mov     eax, off_B02D50; "TestCameraPath"
0x40D75D: push    eax
0x40D75E: lea     ecx, [esp+120h+PathName]
0x40D762: push    offset aS03d; "%s%03d"
0x40D767: push    ecx
0x40D768: mov     dword ptr unk_B333C8, ebx
0x40D76E: call    __sprintf
0x40D773: add     esp, 10h
0x40D776: push    ebx; lpSecurityAttributes
0x40D777: lea     edx, [esp+11Ch+PathName]
0x40D77B: push    edx; lpPathName
0x40D77C: call    ds:CreateDirectoryA
0x40D782: mov     eax, dword_B02D48
0x40D787: cmp     eax, ebx
0x40D789: jz      short loc_40D7AB
0x40D78B: test    eax, eax
0x40D78D: mov     [esp+118h+var_10C], eax
0x40D791: fild    [esp+118h+var_10C]
0x40D795: jge     short loc_40D79D
0x40D797: fadd    ds:flt_A2FC78
0x40D79D: fdivr   ds:dbl_A2FC70
0x40D7A3: fstp    dword ptr ds:0B33E94h
0x40D7A9: jmp     short loc_40D7BD
0x40D7AB: fldz
0x40D7AD: fstp    dword ptr ds:0B33E94h
0x40D7B3: jmp     short loc_40D7BD
0x40D7B5: fldz
0x40D7B7: fstp    dword ptr ds:0B33E94h
0x40D7BD: call    sub_40FDA0
0x40D7C2: test    al, al
0x40D7C4: jnz     short loc_40D7D3
0x40D7C6: cmp     [edi+200h], ebx
0x40D7CC: jz      short loc_40D7D3
0x40D7CE: call    sub_7D7210
0x40D7D3: mov     ecx, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40D7D9: call    sub_411100
0x40D7DE: push    2
0x40D7E0: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x40D7E5: mov     ecx, [esp+11Ch+var_4]
0x40D7EC: add     esp, 4
0x40D7EF: pop     edi
0x40D7F0: pop     ebp
0x40D7F1: pop     ebx
0x40D7F2: xor     ecx, esp
0x40D7F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x40D7F9: add     esp, 10Ch
0x40D7FF: retn
