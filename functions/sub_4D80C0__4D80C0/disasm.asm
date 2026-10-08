0x4D80C0: push    edi; Register ExtraLight or ExtraSpellEffectLight backing NiLight in the native full-light list with trackBackingPosition=false. All five retail direct callers pass useSpellEffectExtraLight=false; no code/data xref selects this helper's true branch.
0x4D80C1: mov     edi, ecx
0x4D80C3: mov     eax, [edi+8]
0x4D80C6: mov     ecx, eax
0x4D80C8: shr     ecx, 5
0x4D80CB: test    cl, 1
0x4D80CE: jnz     short loc_4D8149
0x4D80D0: shr     eax, 0Bh
0x4D80D3: test    al, 1
0x4D80D5: jnz     short loc_4D8149
0x4D80D7: cmp     [esp+4+useSpellEffectExtraLight], 0
0x4D80DC: lea     ecx, [edi+44h]
0x4D80DF: jz      short loc_4D80E8
0x4D80E1: call    ExtraDataList_GetSpellEffectLight; Returns the secondary/spell-effect REFR_LIGHT payload from extra type 0x49; TESObjectREF_UpdateLights processes it separately from normal ExtraLight.
0x4D80E6: jmp     short loc_4D80ED
0x4D80E8: call    ExtraDataList_GetLight; Returns the REFR_LIGHT payload from ExtraLight type 0x30; heavily used by TESObjectREF lighting and equipped-light paths.
0x4D80ED: test    eax, eax
0x4D80EF: jz      short loc_4D8149
0x4D80F1: mov     eax, [eax]
0x4D80F3: test    eax, eax
0x4D80F5: jz      short loc_4D8149
0x4D80F7: push    esi
0x4D80F8: push    0; trackBackingPosition
0x4D80FA: push    eax; backingLight
0x4D80FB: push    0
0x4D80FD: call    GetShadowSceneNode
0x4D8102: add     esp, 4
0x4D8105: mov     ecx, eax; self
0x4D8107: call    ShadowSceneNode_FindOrCreateFullLightForSource; Find or create a native full-list ShadowSceneLight for a backing NiLight. The third argument is the proved trackBackingPosition boolean, not a ShadowSceneLight pointer or admission selector.
0x4D810C: mov     edx, [edi]
0x4D810E: mov     esi, eax; Find/create the attached reference light with trackBackingPosition=false.
0x4D8110: mov     eax, [edx+170h]
0x4D8116: mov     ecx, edi
0x4D8118: call    eax
0x4D811A: mov     edi, eax; Retail TESObjectREFR vtable slot +0x170 resolves to TESObjectREFR_GetBaseForm at 0x004D9B40; the following +0x80/+0x84 reads are from the reference's Oblivion base form.
0x4D811C: test    edi, edi
0x4D811E: jz      short loc_4D8148
0x4D8120: push    0
0x4D8122: mov     ecx, esi
0x4D8124: call    ShadowSceneLight_SetPerSourceProjectorMode; Retail reference-light registration explicitly calls ShadowSceneLight_SetPerSourceProjectorMode(..., false). No TESObjectLIGH flag test precedes this constant.
0x4D8129: mov     byte ptr [esi+120h], 0; Retail reference-light registration clears ShadowSceneLight::renderGateOverride_120; TESObjectLIGH editor bits 0x200/0x400 are not consulted in this decoded path.
0x4D8130: fld     dword ptr [edi+80h]
0x4D8136: fstp    dword ptr [esi+128h]; Copy the Oblivion TESObjectLIGH DATA falloff exponent at base-form +0x80 into ShadowSceneLight falloffExponent_128. The game executable proves the copy/default path; the Oblivion Construction Set Light dialog labels the corresponding DATA field 'Falloff Exponent'.
0x4D813C: fld     dword ptr [edi+84h]
0x4D8142: fstp    dword ptr [esi+124h]; Copy Oblivion base-light DATA field at object +0x84 into ShadowSceneLight projectorFovDegrees +0x124. LIGH load defaults this source field to 90.0.
0x4D8148: pop     esi
0x4D8149: pop     edi
0x4D814A: retn    4
