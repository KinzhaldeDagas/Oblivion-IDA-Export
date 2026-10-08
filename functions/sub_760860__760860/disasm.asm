0x760860: sub     esp, 2Ch; DX10OBSE resource decode: copies one source mip/slice into a locked D3D9 texture surface, preserving pitch and DXT block row layout.
0x760863: push    esi
0x760864: mov     esi, [esp+30h+arg_8]
0x760868: mov     eax, [esi]
0x76086A: mov     edx, [eax+30h]
0x76086D: lea     ecx, [esp+30h+var_20]
0x760871: push    ecx
0x760872: push    esi
0x760873: call    edx
0x760875: test    eax, eax
0x760877: jge     short loc_760892
0x760879: push    eax; hresult
0x76087A: call    D3D9_HResultToString; Maps common COM/D3D9 HRESULT values to diagnostic names, including DEVICELOST, DEVICENOTRESET, INVALIDCALL, OUTOFVIDEOMEMORY, and format/state failures.
0x76087F: push    eax
0x760880: push    offset aNidx9sourcet_0; "NiDX9SourceTextureData::CopyDataToSurfa"...
0x760885: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x76088A: add     esp, 0Ch
0x76088D: pop     esi
0x76088E: add     esp, 2Ch
0x760891: retn
0x760892: mov     eax, [esi]
0x760894: mov     edx, [eax+34h]
0x760897: push    0
0x760899: push    0
0x76089B: lea     ecx, [esp+38h+var_28]
0x76089F: push    ecx
0x7608A0: push    esi
0x7608A1: call    edx; DX11 ownership audit (OblivionNew, 2026-09-19): source mip upload calls IDirect3DSurface9::LockRect at vtable+34h with RECT=null and flags=0, after GetDesc at +30h. CPU writes therefore arrive through a surface alias, not only IDirect3DTexture9::LockRect; parent/subresource alias ownership must be migrated together.
0x7608A3: test    eax, eax
0x7608A5: jge     short loc_7608C0
0x7608A7: push    eax; hresult
0x7608A8: call    D3D9_HResultToString; Maps common COM/D3D9 HRESULT values to diagnostic names, including DEVICELOST, DEVICENOTRESET, INVALIDCALL, OUTOFVIDEOMEMORY, and format/state failures.
0x7608AD: push    eax
0x7608AE: push    offset aNidx9sourcet_1; "NiDX9SourceTextureData::CopyDataToSurfa"...
0x7608B3: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x7608B8: add     esp, 0Ch
0x7608BB: pop     esi
0x7608BC: add     esp, 2Ch
0x7608BF: retn
0x7608C0: mov     eax, [esp+30h+arg_0]
0x7608C4: mov     ecx, [eax+54h]
0x7608C7: mov     esi, [esp+30h+var_28]
0x7608CB: push    ebx
0x7608CC: mov     ebx, [esp+34h+arg_4]
0x7608D0: mov     edx, [ecx+ebx*4]; Per-level copy reads the source width/height arrays for the selected mip and preserves locked-surface pitch; DXT formats use block-row sizing.
0x7608D3: mov     ecx, [eax+58h]
0x7608D6: mov     ecx, [ecx+ebx*4]
0x7608D9: push    ebp
0x7608DA: mov     ebp, [esp+38h+var_4]
0x7608DE: push    edi
0x7608DF: mov     edi, [eax+64h]
0x7608E2: imul    edi, edx
0x7608E5: cmp     ecx, ebp
0x7608E7: jbe     short loc_7608EB
0x7608E9: mov     ecx, ebp
0x7608EB: mov     ebp, [eax+0Ch]
0x7608EE: cmp     ebp, 4
0x7608F1: jl      short loc_760921
0x7608F3: cmp     ebp, 6
0x7608F6: jg      short loc_760921
0x7608F8: shr     esi, 2
0x7608FB: cmp     [esp+3Ch+var_20], 31545844h
0x760903: lea     edi, [edx+3]
0x760906: jnz     short loc_760912
0x760908: shr     edi, 1
0x76090A: and     edi, 7FFFFFEh
0x760910: jmp     short loc_760918
0x760912: and     edi, 0FFFFFFCh
0x760918: add     ecx, 3
0x76091B: and     ecx, 0FFFFFFCh
0x760921: cmp     edi, esi; Verified native compressed-copy arithmetic: for NiPixelData format values 4..6, compare (locked Pitch >> 2) against source pseudo-row bytes: DXT1 ((width+3)>>1)&07FFFFFEh, other DXT (width+3)&~3; pseudo-row count=(min(sourceHeight,surfaceHeight)+3)&~3. Equality takes contiguous memcpy of pseudo-row bytes*count, equal to packed BC storage. Unequal branch copies min(pseudo-row bytes, Pitch>>2) per iteration but advances destination by ORIGINAL Pitch and source by pseudo-row bytes. Do not assume arbitrary padded BC pitch has ordinary block-row behavior here; owned frontend pitch policy must account for this exact observed caller.
0x760923: jz      short loc_76097E
0x760925: mov     [esp+3Ch+Size], esi
0x760929: ja      short loc_76092F
0x76092B: mov     [esp+3Ch+Size], edi
0x76092F: mov     edx, [eax+5Ch]
0x760932: mov     esi, [eax+60h]
0x760935: mov     esi, [edx+esi*4]
0x760938: imul    esi, [esp+3Ch+arg_C]
0x76093D: add     esi, [edx+ebx*4]
0x760940: mov     ebx, [esp+3Ch+Dst]
0x760944: add     esi, [eax+50h]
0x760947: test    ecx, ecx
0x760949: jbe     short loc_7609A4
0x76094B: mov     ebp, ecx
0x76094D: lea     ecx, [ecx+0]
0x760950: mov     edx, [esp+3Ch+Size]
0x760954: push    edx; byteCount
0x760955: push    esi; source
0x760956: push    ebx; destination
0x760957: call    _memcpy;
0x76095C: add     ebx, [esp+48h+var_28]
0x760960: add     esp, 0Ch
0x760963: add     esi, edi
0x760965: sub     ebp, 1
0x760968: jnz     short loc_760950
0x76096A: mov     eax, [esp+3Ch+arg_8]
0x76096E: mov     ecx, [eax]
0x760970: mov     edx, [ecx+38h]
0x760973: push    eax
0x760974: call    edx
0x760976: pop     edi
0x760977: pop     ebp
0x760978: pop     ebx
0x760979: pop     esi
0x76097A: add     esp, 2Ch
0x76097D: retn
0x76097E: mov     edx, [eax+5Ch]
0x760981: imul    ecx, edi
0x760984: push    ecx; byteCount
0x760985: mov     ecx, [eax+60h]
0x760988: mov     ecx, [edx+ecx*4]
0x76098B: imul    ecx, [esp+40h+arg_C]
0x760990: add     ecx, [edx+ebx*4]
0x760993: mov     edx, [esp+40h+Dst]
0x760997: add     ecx, [eax+50h]
0x76099A: push    ecx; source
0x76099B: push    edx; destination
0x76099C: call    _memcpy;
0x7609A1: add     esp, 0Ch
0x7609A4: mov     eax, [esp+3Ch+arg_8]
0x7609A8: mov     ecx, [eax]
0x7609AA: mov     edx, [ecx+38h]
0x7609AD: push    eax
0x7609AE: call    edx; DX11 ownership audit: after native CPU mip copy, calls IDirect3DSurface9::UnlockRect at vtable+38h. Return HRESULT is not tested by this caller. Renderer migration still must stage bytes before Original Unlock and publish only with its actual completion result; caller behavior does not prove successful upload.
0x7609B0: pop     edi
0x7609B1: pop     ebp
0x7609B2: pop     ebx
0x7609B3: pop     esi
0x7609B4: add     esp, 2Ch
0x7609B7: retn
