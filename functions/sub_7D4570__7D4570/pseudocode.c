// Special ShadowSceneLight renderer selected only when +0xF5 is nonzero. Uses a BSCubeMapCamera and the light-local category/object list; it is separate from the normal exact-caster-root map renderer.
void __thiscall ShadowSceneLight_RenderSpecialCubeObjectList(
        ShadowSceneLight_DecodedLayout *self,
        BSCubeMapCamera_ShadowLayout *cubeCamera,
        int unused)
{
  BSCubeMapCamera_ShadowLayout *v3; // ebx
  BSRenderedTexture *DefaultRenderTarget; // edi
  BSCubeMapCamera_ShadowLayout *v6; // eax
  int v7; // esi
  BSTextureManager *v8; // ecx
  void *ShadowDepthStencil; // eax
  _DWORD *LightRef; // eax
  LONG (__stdcall *v11)(volatile LONG *); // edi
  BSCubeMapCamera_ShadowLayout *v12; // esi
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // edx
  BSCubeMapCamera_ShadowLayout *v16; // eax
  bool v17; // zf
  BSCubeMapCamera_ShadowLayout *v18; // esi
  void (__thiscall *v19)(BSCubeMapCamera_ShadowLayout *, unsigned int); // edx
  int a2[7]; // [esp+8h] [ebp-1Ch] BYREF

  v3 = cubeCamera; /*0x7d4574*/
  if ( cubeCamera ) /*0x7d457d*/
  {                                             // Special render requires a non-null cube camera and positive committed visibility/fade at ShadowSceneLight+0xD8.
    if ( self->visibilityFade_D8 > 0.0 ) /*0x7d4590*/
    {
      if ( !self->shadowMap_114 ) /*0x7d4596*/
      {
        DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget( /*0x7d45b4*/
                                *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                unk_B43104,
                                0x16);          // Lazily obtain default render target type 0x16 for the special cube/object-list path.
        v6 = (BSCubeMapCamera_ShadowLayout *)BSRenderedTexture::UseTextureToRender(DefaultRenderTarget); /*0x7d45b8*/
        v7 = *(_DWORD *)v6->base_000; /*0x7d45bd*/
        v8 = *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4]; /*0x7d45bf*/
        cubeCamera = v6; /*0x7d45c5*/
        ShadowDepthStencil = BSTextureManager__GetOrCreateShadowDepthStencil(v8); /*0x7d45cc*/
        (*(void (__thiscall **)(BSCubeMapCamera_ShadowLayout *, void *))(v7 + 0x6C))(cubeCamera, ShadowDepthStencil); /*0x7d45d8*/
        ShadowSceneLight_SetShadowMap(self, DefaultRenderTarget);// Strong-own the special path render target at ShadowSceneLight+0x114. /*0x7d45dd*/
      }
      sub_7C5A60(v3, (int)self->shadowMap_114); // Attach/configure ShadowSceneLight+0x114 on the supplied BSCubeMapCamera. /*0x7d45eb*/
      qmemcpy(a2, &v3->base_000[0xEC], sizeof(a2)); /*0x7d45ff*/
      LightRef = ShadowSceneLight_GetLightRef(self, &cubeCamera); /*0x7d4608*/
      v11 = InterlockedDecrement; /*0x7d461b*/
      a2[5] = *(int *)(*LightRef + 0xF8);       // Copy backing NiPointLight range +0xF8 into the cube camera frustum Far value. /*0x7d4621*/
      if ( cubeCamera ) /*0x7d4625*/
      {
        v12 = cubeCamera; /*0x7d4627*/
        if ( !v11((volatile LONG *)&cubeCamera->base_000[4]) ) /*0x7d462d*/
          (**(void (__thiscall ***)(BSCubeMapCamera_ShadowLayout *, int))v12->base_000)(v12, 1); /*0x7d463f*/
      }
      Camera_SetFrustum((NiCamera *)v3, (int)a2);// Commit the cube camera frustum after replacing Far with the backing light range. /*0x7d4648*/
      v13 = (_DWORD *)*ShadowSceneLight_GetLightRef(self, &cubeCamera);// Read backing light world position +0x88..+0x90 and place the cube camera there. /*0x7d4659*/
      v14 = v13[0x22]; /*0x7d465b*/
      v13 += 0x22; /*0x7d4661*/
      *(_DWORD *)&v3->base_000[0x54] = v14; /*0x7d4666*/
      *(_DWORD *)&v3->base_000[0x58] = v13[1]; /*0x7d466c*/
      v15 = v13[2]; /*0x7d466f*/
      v16 = cubeCamera; /*0x7d4672*/
      v17 = cubeCamera == 0; /*0x7d4676*/
      *(_DWORD *)&v3->base_000[0x5C] = v15; /*0x7d4678*/
      if ( !v17 ) /*0x7d467b*/
      {
        v18 = v16; /*0x7d467d*/
        if ( !v11((volatile LONG *)&v16->base_000[4]) ) /*0x7d4683*/
        {
          if ( v18 ) /*0x7d468b*/
            (**(void (__thiscall ***)(BSCubeMapCamera_ShadowLayout *, int))v18->base_000)(v18, 1); /*0x7d4695*/
        }
      }
      v19 = *(void (__thiscall **)(BSCubeMapCamera_ShadowLayout *, unsigned int))(*(_DWORD *)v3->base_000 + 0x84); /*0x7d4699*/
      v3->currentShadowLight_144 = self;        // Set BSCubeMapCamera+0x144 to the current ShadowSceneLight before virtual render dispatch. /*0x7d46a3*/
      v19(v3, 0xFFFFFFFF);                      // Invoke BSCubeMapCamera virtual slot +0x84 with -1; the concrete dispatcher is 0x00814340. /*0x7d46a9*/
    }
  }
}
