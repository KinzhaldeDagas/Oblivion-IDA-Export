0x7C2710: push    0FFFFFFFFh; Resizes Oblivion's unused frustum-shadow texture pool only while the used pool is empty. New render targets receive the shared shadow depth-stencil; removed targets are detached and returned through the general texture manager.
0x7C2712: push    offset BSTextureManager_ReserveShadowMaps_SEH
0x7C2717: mov     eax, large fs:0
0x7C271D: push    eax
0x7C271E: push    ecx
0x7C271F: push    ebx
0x7C2720: push    ebp
0x7C2721: push    esi
0x7C2722: push    edi
0x7C2723: mov     eax, ds:0B30AACh
0x7C2728: xor     eax, esp
0x7C272A: push    eax
0x7C272B: lea     eax, [esp+24h+var_C]
0x7C272F: mov     large fs:0, eax
0x7C2735: mov     ebp, ecx
0x7C2737: mov     eax, [ebp+3Ch]
0x7C273A: test    eax, eax
0x7C273C: jnz     loc_7C284A
0x7C2742: mov     eax, [ebp+2Ch]
0x7C2745: mov     ecx, [esp+24h+texture]
0x7C2749: cmp     eax, ecx
0x7C274B: jbe     short loc_7C27C0
0x7C274D: sub     eax, ecx
0x7C274F: lea     edi, [ebp+20h]
0x7C2752: mov     ebx, eax
0x7C2754: lea     eax, [esp+24h+texture]
0x7C2758: push    eax; result
0x7C2759: mov     ecx, edi; self
0x7C275B: call    NiTRefPointerList__RemoveHead; Generic refcounted NiT pointer-list RemoveHead helper. Unlinks the head, returns a strong reference to its payload, frees the node through the allocator virtual, and decrements count.
0x7C2760: mov     ecx, [esp+24h+texture]
0x7C2764: mov     [esp+24h+var_4], 0
0x7C276C: call    BSRenderedTexture__UseTextureToRender; Oblivion BSRenderedTexture helper selects the render-target group associated with its inner rendered texture.
0x7C2771: mov     edx, [eax]
0x7C2773: mov     ecx, eax
0x7C2775: mov     eax, [edx+6Ch]
0x7C2778: push    0
0x7C277A: call    eax
0x7C277C: mov     ecx, [esp+24h+texture]
0x7C2780: push    ecx; texture
0x7C2781: mov     ecx, ebp; this
0x7C2783: call    BSTextureManager__ReturnRenderedTexture; General BSTextureManager rendered-texture return path, not canopy-specific: locates the texture's pool record, performs manager return bookkeeping, and removes the record from the borrowed/owned list. Used by water, HDR, menus, canopy shadows and shadow rendering.
0x7C2788: mov     eax, [esp+24h+texture]
0x7C278C: test    eax, eax
0x7C278E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C2796: jz      short loc_7C27B6
0x7C2798: mov     esi, eax
0x7C279A: add     eax, 4
0x7C279D: push    eax; lpAddend
0x7C279E: call    dword ptr ds:0A2807Ch
0x7C27A4: test    eax, eax
0x7C27A6: jnz     short loc_7C27B6
0x7C27A8: test    esi, esi
0x7C27AA: jz      short loc_7C27B6
0x7C27AC: mov     edx, [esi]
0x7C27AE: mov     eax, [edx]
0x7C27B0: push    1
0x7C27B2: mov     ecx, esi
0x7C27B4: call    eax
0x7C27B6: sub     ebx, 1
0x7C27B9: jnz     short loc_7C2754
0x7C27BB: jmp     loc_7C284A
0x7C27C0: jnb     loc_7C284A
0x7C27C6: sub     ecx, eax
0x7C27C8: mov     [esp+24h+texture], ecx
0x7C27CC: mov     ecx, [esp+24h+a2]
0x7C27D0: push    17h; a3
0x7C27D2: push    ecx; a2
0x7C27D3: mov     ecx, ebp; this
0x7C27D5: call    BSTextureManager_GetDefaultRenderTarget; Reserve a pooled default render target of type 0x17 for a frustum shadow map.
0x7C27DA: mov     edi, eax
0x7C27DC: test    edi, edi
0x7C27DE: mov     [esp+24h+var_10], edi
0x7C27E2: jz      short loc_7C27EE
0x7C27E4: lea     edx, [edi+4]
0x7C27E7: push    edx; lpAddend
0x7C27E8: call    dword ptr ds:0A28078h
0x7C27EE: mov     ecx, edi
0x7C27F0: mov     [esp+24h+var_4], 1
0x7C27F8: call    BSRenderedTexture__UseTextureToRender; Oblivion BSRenderedTexture helper selects the render-target group associated with its inner rendered texture.
0x7C27FD: mov     ebx, eax
0x7C27FF: mov     esi, [ebx]
0x7C2801: mov     ecx, ebp; this
0x7C2803: add     esi, 6Ch ; 'l'
0x7C2806: call    BSTextureManager__GetOrCreateShadowDepthStencil; Obtain the shared shadow depth-stencil sized for ShadowSurfaceRes.
0x7C280B: push    eax
0x7C280C: mov     eax, [esi]
0x7C280E: mov     ecx, ebx
0x7C2810: call    eax; Attach the shared shadow depth-stencil to the newly reserved frustum shadow texture.
0x7C2812: lea     ecx, [esp+24h+var_10]
0x7C2816: push    ecx
0x7C2817: lea     ecx, [ebp+20h]
0x7C281A: call    NiTRefPointerList__AddTail; Generic refcounted NiT pointer-list AddTail helper. Allocates a node, assigns/increments its object pointer, links it after the old tail, and updates head/tail/count.
0x7C281F: test    edi, edi
0x7C2821: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C2829: jz      short loc_7C2843
0x7C282B: lea     edx, [edi+4]
0x7C282E: push    edx; lpAddend
0x7C282F: call    dword ptr ds:0A2807Ch
0x7C2835: test    eax, eax
0x7C2837: jnz     short loc_7C2843
0x7C2839: mov     eax, [edi]
0x7C283B: mov     edx, [eax]
0x7C283D: push    1
0x7C283F: mov     ecx, edi
0x7C2841: call    edx
0x7C2843: sub     [esp+24h+texture], 1
0x7C2848: jnz     short loc_7C27CC
0x7C284A: mov     ecx, dword ptr [esp+24h+var_C]
0x7C284E: mov     large fs:0, ecx
0x7C2855: pop     ecx
0x7C2856: pop     edi
0x7C2857: pop     esi
0x7C2858: pop     ebp
0x7C2859: pop     ebx
0x7C285A: add     esp, 10h
0x7C285D: retn    8
0x9CE2D0: lea     ecx, [ebp+8]; slot
0x9CE2D3: jmp     NiPointerSlot_Release
0x9CE2D8: lea     ecx, [ebp-10h]; slot
0x9CE2DB: jmp     NiPointerSlot_Release
0x9CE2E0: mov     edx, [esp+texture]
0x9CE2E4: lea     eax, [edx-14h]
0x9CE2E7: mov     ecx, [edx-18h]
0x9CE2EA: xor     ecx, eax
0x9CE2EC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CE2F1: mov     eax, offset stru_AF72FC
0x9CE2F6: jmp     ___CxxFrameHandler3
