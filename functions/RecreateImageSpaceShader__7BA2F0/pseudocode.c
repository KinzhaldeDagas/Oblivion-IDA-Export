// MoonSugarEffect decode: renderer/image-space recreate path. Cleans shader pass texture refs, clears shader maps, destroys imageSpaceShaderList, deletes texture manager, rebuilds texture manager and image-space list.
void __usercall RecreateImageSpaceShader(int a1@<ebp>)
{
  int v1; // esi
  NiTPointerList__BSImageSpaceShader *v2; // esi
  unsigned int v3; // esi
  Ni2DBuffer **v4; // eax
  Ni2DBuffer **v5; // eax
  NiTPointerList__BSImageSpaceShader *v6; // eax
  NiTPointerList__BSImageSpaceShader *v7; // eax
  NiDX9Renderer *v8; // [esp-4h] [ebp-20h]

  if ( OB_RendererGlobalState_010201A0.pad_00D[0x8B] ) /*0x7ba315*/
  {
    sub_7B84E0();                               // MoonSugarEffect decode: RecreateImageSpaceShader begins initialized cleanup by calling sub_7B84E0. This is cached shader pass texture-stage cleanup, not generic NiD3DVertexShader handle restore. /*0x7ba334*/
    v1 = *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x16]; /*0x7ba341*/
    NiTMap_Clear(*(_DWORD **)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x16] + 0xC)); /*0x7ba343*/
    NiTMap_Clear(*(_DWORD **)(v1 + 8)); /*0x7ba34b*/
    sub_7E30F0(); /*0x7ba350*/
    sub_7F3BA0(); /*0x7ba355*/
    if ( MEMORY[0xB42D7C] ) /*0x7ba35a*/
    {
      v2 = MEMORY[0xB42D7C]; /*0x7ba364*/
      ImageSpaceShaderList::Destroy(MEMORY[0xB42D7C]); /*0x7ba366*/
      FormHeapFree((unsigned int)v2); /*0x7ba36c*/
      MEMORY[0xB42D7C] = 0; /*0x7ba374*/
    }
    if ( *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_0B3[4] ) /*0x7ba37a*/
    {
      v3 = *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_0B3[4]; /*0x7ba384*/
      BSTextureManager_Delete(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4]);// MoonSugarEffect decode: RecreateImageSpaceShader deletes g_textureManager after cached shader pass texture-stage refs have been scrubbed and imageSpaceShaderList destroyed. /*0x7ba386*/
      FormHeapFree(v3); /*0x7ba38c*/
      *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_0B3[4] = 0; /*0x7ba394*/
    }
    sub_7AB1D0(0); /*0x7ba39b*/
    *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] = 0; /*0x7ba3a2*/
    v4 = (Ni2DBuffer **)FormHeapAlloc(0x48u); /*0x7ba3a8*/
    if ( v4 ) /*0x7ba3ba*/
      v5 = BSTextureManager_Create(v4); /*0x7ba3be*/
    else
      v5 = 0; /*0x7ba3c5*/
    v8 = unk_B43104; /*0x7ba3cd*/
    *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_0B3[4] = v5; /*0x7ba3d8*/
    sub_7C2450((BSTextureManager *)v5, a1, (int)v8);// MoonSugarEffect decode: after rebuilding BSTextureManager, prewarms/returns common render targets through sub_7C2450 before recreating screen quads and imageSpaceShaderList. /*0x7ba3dd*/
    sub_7AB1D0(1); /*0x7ba3e4*/
    if ( unk_B43104 ) /*0x7ba3ec*/
    {
      if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] ) /*0x7ba3f4*/
      {
        v6 = (NiTPointerList__BSImageSpaceShader *)FormHeapAlloc(0x1Cu); /*0x7ba3fe*/
        if ( v6 ) /*0x7ba414*/
          v7 = ImageSpaceshaderList::Create(v6);// MoonSugarEffect decode: image-space list is recreated only after texture manager and screen-element quads are rebuilt. Plugin-owned list insertions/wrappers must be rebuilt/reinserted after this boundary. /*0x7ba418*/
        else
          v7 = 0; /*0x7ba41f*/
        MEMORY[0xB42D7C] = v7; /*0x7ba421*/
      }
    }
  }
  else
  {
    sub_7BA0F0(); /*0x7ba31d*/
  }
}
