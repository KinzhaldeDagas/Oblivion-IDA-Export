0x49CB40: sub     esp, 20h
0x49CB43: push    esi
0x49CB44: push    3
0x49CB46: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x49CB4B: fldz
0x49CB4D: mov     eax, ds:0B43104h
0x49CB52: fst     [esp+28h+var_20]
0x49CB56: mov     ecx, ds:0B42F50h; this
0x49CB5C: fst     [esp+28h+var_1C]
0x49CB60: add     esp, 4
0x49CB63: fst     [esp+24h+var_18]
0x49CB67: push    7; a3
0x49CB69: fstp    [esp+28h+var_14]
0x49CB6D: push    eax; a2
0x49CB6E: call    BSTextureManager_GetDefaultRenderTarget; Oblivion default rendered-target acquisition. Resolves dimensions, D3D format, auxiliary value, and flags for the target type, then obtains a matching cached or newly created BSRenderedTexture.
0x49CB73: mov     ecx, ds:0B43104h
0x49CB79: mov     edx, [ecx]
0x49CB7B: mov     edx, [edx+68h]
0x49CB7E: mov     esi, eax
0x49CB80: lea     eax, [esp+24h+var_20]
0x49CB84: push    eax
0x49CB85: call    edx
0x49CB87: fld     dword ptr ds:0A3D65Ch
0x49CB8D: mov     ecx, ds:0B43104h
0x49CB93: fst     [esp+24h+var_10]
0x49CB97: fst     [esp+24h+var_C]
0x49CB9B: lea     edx, [esp+24h+var_10]
0x49CB9F: fstp    [esp+24h+var_8]
0x49CBA3: push    edx
0x49CBA4: fld1
0x49CBA6: fstp    [esp+28h+var_4]
0x49CBAA: mov     eax, [ecx]
0x49CBAC: mov     eax, [eax+60h]
0x49CBAF: call    eax
0x49CBB1: mov     ecx, esi
0x49CBB3: call    BSRenderedTexture__UseTextureToRender; Oblivion BSRenderedTexture helper selects the render-target group associated with its inner rendered texture.
0x49CBB8: push    eax; a2
0x49CBB9: push    7; a1
0x49CBBB: call    NiRenderer_BeginScene; Oblivion BeginScene wrapper used by per-source shadow rendering: establish SceneState2 only when no scene state is active, then push/begin the supplied target group with requested clear flags.
0x49CBC0: add     esp, 8
0x49CBC3: call    NiRenderer_EndScene; Oblivion EndScene wrapper: drain the complete render-target stack, end the active group, and end the D3D scene only when this wrapper owned SceneState2.
0x49CBC8: mov     ecx, ds:0B43104h
0x49CBCE: mov     edx, [ecx]
0x49CBD0: mov     edx, [edx+60h]
0x49CBD3: lea     eax, [esp+24h+var_20]
0x49CBD7: push    eax
0x49CBD8: call    edx
0x49CBDA: push    2
0x49CBDC: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x49CBE1: add     esp, 4
0x49CBE4: mov     eax, esi
0x49CBE6: pop     esi
0x49CBE7: add     esp, 20h
0x49CBEA: retn
