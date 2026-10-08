0x803A30: push    0FFFFFFFFh; MoonSugarEffect decode: ImageSpaceShaderList creation order: NightEye, HDR/Blur, optional Refraction, Hit, and Copy fallback at +0x18.
0x803A32: push    offset SEH_803A30
0x803A37: mov     eax, large fs:0
0x803A3D: push    eax
0x803A3E: push    ecx
0x803A3F: push    ebx
0x803A40: push    ebp
0x803A41: push    esi
0x803A42: push    edi
0x803A43: mov     eax, ds:0B30AACh
0x803A48: xor     eax, esp
0x803A4A: push    eax
0x803A4B: lea     eax, [esp+24h+var_C]
0x803A4F: mov     large fs:0, eax
0x803A55: mov     esi, ecx
0x803A57: mov     [esp+24h+var_10], esi
0x803A5B: xor     ebx, ebx
0x803A5D: mov     [esi+0Ch], ebx
0x803A60: mov     [esi+4], ebx
0x803A63: mov     [esi+8], ebx
0x803A66: mov     dword ptr [esi], offset ??_7?$NiTPointerList@PAVBSImageSpaceShader@@@@6B@; const NiTPointerList<BSImageSpaceShader *>::`vftable'
0x803A6C: mov     [esp+24h+var_4], ebx
0x803A70: mov     [esi+10h], ebx
0x803A73: mov     [esi+14h], ebx
0x803A76: mov     byte ptr [esp+24h+var_4], 2
0x803A7B: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x803A80: mov     edi, [esi+14h]
0x803A83: cmp     edi, ebx
0x803A85: mov     ebp, ds:0A2807Ch
0x803A8B: jz      short loc_803AA8
0x803A8D: lea     eax, [edi+4]
0x803A90: push    eax; lpAddend
0x803A91: call    ebp ; InterlockedDecrement
0x803A93: test    eax, eax
0x803A95: jnz     short loc_803AA5
0x803A97: cmp     edi, ebx
0x803A99: jz      short loc_803AA5
0x803A9B: mov     edx, [edi]
0x803A9D: mov     eax, [edx]
0x803A9F: push    1
0x803AA1: mov     ecx, edi
0x803AA3: call    eax
0x803AA5: mov     [esi+14h], ebx
0x803AA8: mov     [esi+18h], ebx
0x803AAB: mov     edi, [esi+10h]
0x803AAE: cmp     edi, ebx
0x803AB0: jz      short loc_803ACD
0x803AB2: lea     ecx, [edi+4]
0x803AB5: push    ecx; lpAddend
0x803AB6: call    ebp ; InterlockedDecrement
0x803AB8: test    eax, eax
0x803ABA: jnz     short loc_803ACA
0x803ABC: cmp     edi, ebx
0x803ABE: jz      short loc_803ACA
0x803AC0: mov     edx, [edi]
0x803AC2: mov     eax, [edx]
0x803AC4: push    1
0x803AC6: mov     ecx, edi
0x803AC8: call    eax
0x803ACA: mov     [esi+10h], ebx
0x803ACD: push    12h; a1
0x803ACF: call    GetShaderDefinition; DeferredRendering HDR+Bloom dependency: shader definition IDs 0x07=Blur/Bloom, 0x08=HDR, 0x0C=Copy fallback. Oblivion behavior observed here; both post-processes are forced by list composition, not Fallout naming.
0x803AD4: add     esp, 4
0x803AD7: cmp     eax, ebx
0x803AD9: jz      short loc_803AEA
0x803ADB: mov     eax, [eax+4]
0x803ADE: cmp     eax, ebx
0x803AE0: jz      short loc_803AEA
0x803AE2: push    eax
0x803AE3: mov     ecx, esi
0x803AE5: call    AddImageSpaceShader; ImprovedShaders hook target: AddImageSpaceShader(this=list, arg0=BSImageSpaceShader*). Hook calls native trampoline, then appends paired HDR(0x08)/Blur-Bloom(0x07) shader if absent.
0x803AEA: cmp     ds:0B43070h, bl; DeferredRendering HDR+Bloom force target: native image-space list chooses either HDR shader ID 0x08 or Blur/Bloom shader ID 0x07 from UseHDR. Plugin now forces UseHDR/ImageSpaceEffects and hooks AddImageSpaceShader to keep both in the list.
0x803AF0: jnz     short loc_803AF6
0x803AF2: push    7
0x803AF4: jmp     short loc_803AF8
0x803AF6: push    8; a1
0x803AF8: call    GetShaderDefinition; DeferredRendering HDR+Bloom dependency: shader definition IDs 0x07=Blur/Bloom, 0x08=HDR, 0x0C=Copy fallback. Oblivion behavior observed here; both post-processes are forced by list composition, not Fallout naming.
0x803AFD: add     esp, 4
0x803B00: cmp     eax, ebx
0x803B02: jz      short loc_803B13
0x803B04: mov     eax, [eax+4]
0x803B07: cmp     eax, ebx
0x803B09: jz      short loc_803B13
0x803B0B: push    eax
0x803B0C: mov     ecx, esi
0x803B0E: call    AddImageSpaceShader; DeferredRendering hook context: when native adds HDR to the image-space list, plugin appends Blur/Bloom via the native AddImageSpaceShader trampoline so both post effects run in one image-space chain.
0x803B13: cmp     ds:0B42E84h, bl
0x803B19: jz      short loc_803B38
0x803B1B: push    15h; a1
0x803B1D: call    GetShaderDefinition; DeferredRendering HDR+Bloom dependency: shader definition IDs 0x07=Blur/Bloom, 0x08=HDR, 0x0C=Copy fallback. Oblivion behavior observed here; both post-processes are forced by list composition, not Fallout naming.
0x803B22: add     esp, 4
0x803B25: cmp     eax, ebx
0x803B27: jz      short loc_803B38
0x803B29: mov     eax, [eax+4]
0x803B2C: cmp     eax, ebx
0x803B2E: jz      short loc_803B38
0x803B30: push    eax
0x803B31: mov     ecx, esi
0x803B33: call    AddImageSpaceShader; ImprovedShaders hook target: AddImageSpaceShader(this=list, arg0=BSImageSpaceShader*). Hook calls native trampoline, then appends paired HDR(0x08)/Blur-Bloom(0x07) shader if absent.
0x803B38: push    0Bh; a1
0x803B3A: call    GetShaderDefinition; DeferredRendering HDR+Bloom dependency: shader definition IDs 0x07=Blur/Bloom, 0x08=HDR, 0x0C=Copy fallback. Oblivion behavior observed here; both post-processes are forced by list composition, not Fallout naming.
0x803B3F: add     esp, 4
0x803B42: cmp     eax, ebx
0x803B44: jz      short loc_803B55
0x803B46: mov     eax, [eax+4]
0x803B49: cmp     eax, ebx
0x803B4B: jz      short loc_803B55
0x803B4D: push    eax
0x803B4E: mov     ecx, esi
0x803B50: call    AddImageSpaceShader; ImprovedShaders hook target: AddImageSpaceShader(this=list, arg0=BSImageSpaceShader*). Hook calls native trampoline, then appends paired HDR(0x08)/Blur-Bloom(0x07) shader if absent.
0x803B55: push    0Ch; a1
0x803B57: call    GetShaderDefinition; DeferredRendering HDR+Bloom dependency: shader definition IDs 0x07=Blur/Bloom, 0x08=HDR, 0x0C=Copy fallback. Oblivion behavior observed here; both post-processes are forced by list composition, not Fallout naming.
0x803B5C: add     esp, 4
0x803B5F: cmp     eax, ebx
0x803B61: jz      short loc_803B69
0x803B63: mov     ecx, [eax+4]
0x803B66: mov     [esi+18h], ecx
0x803B69: mov     eax, esi
0x803B6B: mov     ecx, dword ptr [esp+24h+var_C]
0x803B6F: mov     large fs:0, ecx
0x803B76: pop     ecx
0x803B77: pop     edi
0x803B78: pop     esi
0x803B79: pop     ebp
0x803B7A: pop     ebx
0x803B7B: add     esp, 10h
0x803B7E: retn
0x9D0930: mov     ecx, [ebp-10h]
0x9D0933: jmp     j_??1?$NiTPointerList@PAVBSImageSpaceShader@@@@UAE@XZ; NiTPointerList<BSImageSpaceShader *>::~NiTPointerList<BSImageSpaceShader *>(void)
0x9D0938: mov     ecx, [ebp-10h]
0x9D093B: add     ecx, 10h; slot
0x9D093E: jmp     NiPointerSlot_Release
0x9D0943: mov     ecx, [ebp-10h]
0x9D0946: add     ecx, 14h; slot
0x9D0949: jmp     NiPointerSlot_Release
0x9D094E: mov     edx, [esp+arg_4]
0x9D0952: lea     eax, [edx-14h]
0x9D0955: mov     ecx, [edx-18h]
0x9D0958: xor     ecx, eax
0x9D095A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D095F: mov     eax, offset stru_AF9230
0x9D0964: jmp     ___CxxFrameHandler3
