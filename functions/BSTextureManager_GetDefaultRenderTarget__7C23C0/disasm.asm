0x7C23C0: sub     esp, 0Ch; MoonSugarEffect decode: BSTextureManager_GetDefaultRenderTarget delegates target-type sizing/format to GetRenderedSurfaceParameters, then retrieves/reuses a matching BSRenderedTexture.
0x7C23C3: push    esi
0x7C23C4: push    edi
0x7C23C5: mov     edi, [esp+14h+a2]
0x7C23C9: mov     esi, ecx; a1
0x7C23CB: lea     eax, [esp+14h+a8]
0x7C23CF: push    eax; a8
0x7C23D0: lea     ecx, [esp+18h+a3]
0x7C23D4: push    ecx; a7
0x7C23D5: lea     edx, [esp+1Ch+a2]
0x7C23D9: push    edx; a6
0x7C23DA: mov     edx, [esp+20h+a3]
0x7C23DE: lea     eax, [esp+20h+a5]
0x7C23E2: push    eax; a5
0x7C23E3: lea     ecx, [esp+24h+a4]
0x7C23E7: push    ecx; a4
0x7C23E8: push    edx; a3
0x7C23E9: push    edi; a2
0x7C23EA: mov     ecx, esi
0x7C23EC: call    BSTextureManager_GetDefaultRenderTargetParameters; Oblivion default rendered-target parameter map. Type 0x17 is the frustum shadow map: square unsigned-short ShadowSurfaceRes dimensions, target flags 6, D3DFORMAT ShadowMapRenderTargetD3DFormat (0x72/D3DFMT_R32F), and auxiliary output zero.
0x7C23F1: mov     eax, [esp+14h+a3]
0x7C23F5: mov     ecx, [esp+14h+a2]
0x7C23F9: mov     edx, [esp+14h+a8]
0x7C23FD: push    eax; aux
0x7C23FE: mov     eax, [esp+18h+a5]
0x7C2402: push    ecx; d3dFormat
0x7C2403: mov     ecx, [esp+1Ch+a4]
0x7C2407: push    edx; targetFlags
0x7C2408: push    eax; height
0x7C2409: push    ecx; width
0x7C240A: push    edi; renderer
0x7C240B: mov     ecx, esi; this
0x7C240D: call    BSTextureManager_GetOrCreateRenderedTexture; Oblivion BSTextureManager cache lookup/allocation. Reuses a matching BSRenderedTexture by size, format, auxiliary value, and flags or creates one, then moves the resource to the in-use list.
0x7C2412: pop     edi
0x7C2413: pop     esi
0x7C2414: add     esp, 0Ch
0x7C2417: retn    8
