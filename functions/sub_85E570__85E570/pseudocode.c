// Ensure a Lighting30 NiD3DPass has seven pooled texture stages 0..6. Each new stage starts with its matching texcoord index, WRAP/WRAP addressing, and filter preset 2 (MIN/MAG/MIP LINEAR); selector setup later overrides SimpleShadow stage 2 to preset 1 plus address preset 0.
void __cdecl Lighting30Pass_InitializeSevenTextureStages(NiD3DPass *pass)
{
  NiD3DTextureStage *v1; // esi
  unsigned int v2; // edi
  NiD3DPass *v3; // ebx
  NiD3DTextureStage **v4; // ebp
  bool v5; // zf
  NiD3DTextureStage *v6; // eax

  v1 = 0; /*0x85e595*/
  v2 = 0; /*0x85e597*/
  v3 = pass; /*0x85e59d*/
  if ( pass->StageCount < 7 ) /*0x85e5ab*/
  {
    do /*0x85e629*/
    {
      v4 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&pass); /*0x85e5bd*/
      if ( v1 != *v4 ) /*0x85e5c7*/
      {
        if ( v1 ) /*0x85e5cb*/
        {
          v5 = v1[7].Unk08-- == 1; /*0x85e5cd*/
          if ( v5 ) /*0x85e5d1*/
            sub_772560(v1); /*0x85e5d5*/
        }
        v1 = *v4; /*0x85e5da*/
        if ( *v4 ) /*0x85e5df*/
          ++v1[7].Unk08; /*0x85e5e5*/
      }
      v6 = (NiD3DTextureStage *)pass; /*0x85e5e9*/
      if ( pass ) /*0x85e5f4*/
      {
        --*(_DWORD *)&pass->SoftwareVP; /*0x85e5f6*/
        if ( !v6[7].Unk08 ) /*0x85e5ff*/
          sub_772560(v6); /*0x85e604*/
      }
      BSShader_ConfigureTextureStageSampler(v1, v2, 1, 2); /*0x85e60f*/
      NiD3DPass_SetTextureStage(v3, v3->CurrentStage, &v1->Stage); /*0x85e61e*/
      ++v2; /*0x85e623*/
    }
    while ( v2 < 7 ); /*0x85e629*/
  }
  if ( v1 ) /*0x85e634*/
  {
    v5 = v1[7].Unk08-- == 1; /*0x85e636*/
    if ( v5 ) /*0x85e639*/
      sub_772560(v1); /*0x85e63d*/
  }
}
